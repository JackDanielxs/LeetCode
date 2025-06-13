/* Write your T-SQL query statement below */
with numeros as(
    select 
        id,
        num, 
        LAG(num) OVER (ORDER BY id) AS PrevNumber,
        LAG(num, 2) OVER (ORDER BY id) AS PrevPrevNumber
        from Logs
)
select distinct num as ConsecutiveNums
from numeros
where num = PrevNumber and num = PrevPrevNumber