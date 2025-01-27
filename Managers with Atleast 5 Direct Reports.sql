# Write your MySQL query statement below
select e.name from Employee e
inner join
Employee m
on e.id=m.managerId
group by m.managerId
having count(m.managerId)>=5;

# Another method
# Write your MySQL query statement below
select name from employee
where id in (select managerId from employee group by managerId
having count(managerId)>=5)