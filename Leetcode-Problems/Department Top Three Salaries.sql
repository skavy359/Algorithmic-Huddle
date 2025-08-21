with
    cte as (
        select
            d.id,
            d.name as Department,
            e.name as Employee,
            e.salary as Salary,
            dense_rank() over (
                partition by
                    d.id
                order by
                    salary desc
            ) as temp
        from
            Employee e
            join Department d on e.departmentId = d.id
    )
select
    Department,
    Employee,
    Salary
from
    cte
where
    temp <= 3