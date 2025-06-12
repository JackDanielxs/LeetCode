/* Write your T-SQL query statement below */
select ROUND(SUM(i.tiv_2016),2) as tiv_2016 from Insurance i
where i.tiv_2015 in (select tiv_2015 from Insurance where pid <> i.pid)
and CONCAT(i.lat, ' ', i.lon) not in (select CONCAT(lat, ' ', lon) from Insurance where pid <> i.pid)