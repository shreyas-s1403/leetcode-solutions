# Write your MySQL query statement below
select * from Users where REGEXP_LIKE(email,'^[A-Za-z0-9]+@[A-Za-z]+\\.com$','c') order by user_id;