/* Write your T-SQL query statement below */
select id,
CASE 
    WHEN p_id is null THEN 'Root'
    WHEN id in 
    (
        select t.p_id from Tree t
    ) and p_id is not null THEN 'Inner'
    ELSE 'Leaf'
    END AS type
from Tree