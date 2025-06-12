# Write your MySQL query statement below
WITH FriendCounts AS (
    SELECT requester_id AS person, COUNT(DISTINCT accepter_id) AS friend_count
    FROM RequestAccepted
    GROUP BY requester_id
    UNION ALL
    SELECT accepter_id AS person, COUNT(DISTINCT requester_id) AS friend_count
    FROM RequestAccepted
    GROUP BY accepter_id
)
SELECT person as id, SUM(friend_count) AS num
FROM FriendCounts
GROUP BY person
ORDER BY 2 DESC
LIMIT 1;
