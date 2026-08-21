# Write your MySQL query statement below

select s.project_id , round((sum(t.experience_years) / count(s.project_id) ) , 2 ) as average_years from Project as s left join Employee as t on s.employee_id = t.employee_id group by s.project_id ;  