# Write your MySQL query statement below
select 'Low Salary' as category, count(if(income<20000,1,null)) as accounts_count
from accounts
union all
select 'Average Salary' as category, count(if(income>=20000 and income<=50000,1,null)) as accounts_count
from accounts
union all
select 'High Salary' as category, count(if(income>50000,1,null)) as accounts_count
from accounts;

# Another answer i thought of
select 'Low Salary' as category,count(income) as accounts_count from accounts where income < 20000
union
select 'Average Salary' ,count(income) from accounts where income >= 20000  and income <= 50000
union
select 'High Salary' ,count(income) from accounts where income > 50000