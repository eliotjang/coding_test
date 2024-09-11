-- datetime에서 date로 형 변환
select animal_id, name, substr(datetime, 1, 10)
from animal_ins
order by animal_id