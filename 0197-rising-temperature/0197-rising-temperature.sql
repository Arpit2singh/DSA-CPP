# Write your MySQL query statement below

select distinct s.id from Weather as s join Weather as t on datediff(s.recordDate , t.recordDate ) = 1 where s.temperature > t.temperature ; 