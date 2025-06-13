/* Write your T-SQL query statement below */
select distinct a.actor_id, a.director_id from ActorDirector a
where a.actor_id in 
(
    select actor_id from ActorDirector group by actor_id having count(actor_id) >= 3
)
and a.director_id in 
(
    select director_id from ActorDirector where actor_id = a.actor_id group by director_id having count(director_id) >= 3
)