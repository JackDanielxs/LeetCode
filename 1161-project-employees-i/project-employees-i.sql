/* Write your T-SQL query statement below */
select p.project_id, ROUND(avg(e.experience_years * 1.0), 2) as average_years 
from Project p
left join Employee e on e.employee_id = p.employee_id
group by p.project_id
order by p.project_id
