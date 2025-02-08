# Write your MySQL query statement below
select * from Users where email REGEXP '^[A-Za-z0-9.-_]+@[A-za-z]+\\.com$'
order by user_id;