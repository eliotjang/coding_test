-- 보호소에서 중성화한 동물
select ai.animal_id, ai.animal_type, ai.name
from animal_ins ai inner join animal_outs ao on ai.animal_id = ao.animal_id
where ai.sex_upon_intake like 'Intact%' and
      ao.sex_upon_outcome regexp 'Spayed|Neutered'
order by ai.animal_id