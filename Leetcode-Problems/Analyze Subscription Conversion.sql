select
    user_id,
    round(
        avg(
            case
                when activity_type = 'free_trial' then activity_duration
            end
        ),
        2
    ) as trial_avg_duration,
    round(
        avg(
            case
                when activity_type = 'paid' then activity_duration
            end
        ),
        2
    ) as paid_avg_duration
from
    UserActivity
where
    activity_type = 'free_trial'
    or activity_type = 'paid'
group by
    user_id
having
    count(distinct activity_type) = 2