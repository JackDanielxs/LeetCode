/* Write your T-SQL query statement below */

select d.name as Department, e.name as Employee, e.Salary
from Employee e
LEFT JOIN Department d ON d.id = e.departmentId
where e.salary = (select top 1 salary from Employee where departmentId = e.departmentId order by salary desc)