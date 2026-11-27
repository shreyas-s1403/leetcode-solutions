# Write your MySQL query statement below
select * from products where REGEXP_LIKE(description,'(^|[^A-Za-z0-9])SN[0-9]{4}-[0-9]{4}([^0-9A-Za-z]|$)','c') order by product_id;

#([^0-9]|$) checks if there is no extra digit after the serial no ends.
# that is it checks id the next character is a non digit or the end of the string