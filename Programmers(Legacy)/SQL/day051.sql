-- 없어진 기록 찾기
select ao.animal_id, ao.name
from animal_ins ai right join animal_outs ao on ai.animal_id = ao.animal_id
where ai.animal_id is null
order by 1