# Write your MySQL query statement below

select s.name from Employee as s inner join Employee as t on s.id = t.managerId 
group by t.managerId  having count(t.managerId) >=5 