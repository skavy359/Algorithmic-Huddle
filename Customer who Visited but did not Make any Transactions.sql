# Write your MySQL query statement below
# USING JOINS
select v.customer_id, count(v.visit_id) as count_no_trans
from Visits v
left join
Transactions t
on v.visit_id = t.visit_id
where t.transaction_id is NULL
group by v.customer_id;

# USING SUBQUERY
SELECT customer_id, COUNT(*) as count_no_trans
FROM Visits
WHERE visit_id NOT IN (SELECT DISTINCT visit_id FROM Transactions)
GROUP BY customer_id;
