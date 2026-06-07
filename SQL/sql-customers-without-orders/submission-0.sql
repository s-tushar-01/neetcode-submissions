-- Write your query below
select name from customers c1 
left join orders o on c1.id=o.customer_id
where o.id is NULL