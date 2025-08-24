select
    customer_id
from
    customer_transactions
group by
    customer_id
having
    count(if (transaction_type = 'purchase', 1, null)) >= 3
    and datediff (max(transaction_date), min(transaction_date)) >= 30
    and (
        count(if (transaction_type = 'refund', 1, null)) / count(1)
    ) < 0.2
order by
    customer_id;