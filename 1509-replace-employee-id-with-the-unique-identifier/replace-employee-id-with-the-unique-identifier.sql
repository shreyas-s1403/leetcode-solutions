# Write your MySQL query statement below
select 
case when unique_id is not null then unique_id else null end as unique_id,name from Employees e left join EmployeeUNI e1 on e.id=e1.id; 