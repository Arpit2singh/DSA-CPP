# Write your MySQL query statement below

select s.name , t.bonus from Employee as s left join Bonus as t on s.empId = t.empId where t.bonus <1000 or t.bonus is null ; 