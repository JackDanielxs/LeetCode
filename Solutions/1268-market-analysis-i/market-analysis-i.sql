/* Write your T-SQL query statement below */
select u.user_id as buyer_id, u.join_date, 
(select count(*) from Orders where order_date between '2019-01-01' and '2019-12-31' and buyer_id = u.user_id) as orders_in_2019 
from Users u
left join Orders o on o.buyer_id = u.user_id
group by u.user_id, u.join_date