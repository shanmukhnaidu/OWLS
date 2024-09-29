# Write your MySQL query statement below
select p.product_name,year,price
from sales s left join product p on p.product_id=s.product_id;