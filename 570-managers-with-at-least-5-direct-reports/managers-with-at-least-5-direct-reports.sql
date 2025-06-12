/* Write your T-SQL query statement below */
select name from Employee
where id in 
(select e.managerId from Employee e group by e.managerId having count(e.managerId) >= 5)