/* Write your T-SQL query statement below */
select w.Id from Weather w
where w.temperature > 
(select w2.temperature from Weather w2 where Dateadd(day, 1, w2.recordDate) = w.recordDate)