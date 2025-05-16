# Write your MySQL query statement below
with cte as (
    select num from (
        select num,lag(num,1) over (order by id) as prev,
        lag(num,2) over (order by id) as prev_prev
        from Logs
    ) consecutive
    where num=prev and num=prev_prev
) 
select distinct num as ConsecutiveNums from cte;
