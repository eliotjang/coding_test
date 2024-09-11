-- 오랜 기간 보호한 동물(1)
select ai.name, ai.datetime
from animal_ins ai left join animal_outs ao on ai.animal_id = ao.animal_id
where ao.datetime is null
order by 2
limit 3