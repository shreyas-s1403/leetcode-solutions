# Write your MySQL query statement below
select u.name,case when sum(r.distance) is not null then sum(r.distance) else 0 end as travelled_distance from Users u left join Rides r on 
u.id=r.user_id group by u.id,u.name order by travelled_distance desc,u.name asc;