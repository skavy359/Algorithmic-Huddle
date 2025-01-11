# Write your MySQL query statement below
select distinct p.email as Email from Person p
inner join
Person d
on p.email=d.email
where p.id <> d.id;

#Another Solution
select email from Person 
group by email
having count(email)>=2;
