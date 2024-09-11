-- 고양이와 개는 몇 마리 있을까
select animal_type, count(1) count
from animal_ins
where animal_type in ('Cat', 'Dog')
group by 1
order by 1