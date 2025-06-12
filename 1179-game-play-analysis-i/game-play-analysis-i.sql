/* Write your T-SQL query statement below */
select distinct player_id,
STUFF((
    select CONCAT('20', MIN(a2.event_date))
    from Activity a2
    where a.player_id = a2.player_id
FOR XML PATH('')), 1, 2, '') AS first_login
from Activity a