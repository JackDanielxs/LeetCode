/* Write your T-SQL query statement below */
select MAX(salary) as SecondHighestSalary
from Employee
where salary not in (select top 1 salary from Employee order by salary desc)