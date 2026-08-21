# Write your MySQL query statement below

select t.product_name , s.year , s.price from Sales as s inner join Product as t on s.product_id = t.product_id ; 