# Write your MySQL query statement below
select employee_id from Employees 
where employee_id not in (select employee_id from Salaries)
union
select employee_id from Salaries
where employee_id not in (select employee_id from Employees)
order by employee_id;

// Another way by Joins

select e.employee_id from Employees e
left join
Salaries s
on e.employee_id=s.employee_id
where salary is null

union

select s.employee_id from Employees e
right join
Salaries s
on e.employee_id=s.employee_id
where name is null
order by employee_id;