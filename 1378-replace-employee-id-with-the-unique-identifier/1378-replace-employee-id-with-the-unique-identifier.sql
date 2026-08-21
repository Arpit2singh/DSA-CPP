# Write your MySQL query statement below

select s.unique_id , t.name from Employees as t left join EmployeeUNI as s on s.id = t.id ; 