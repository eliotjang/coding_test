-- 중성화 여부 파악하기
select animal_id,
       name,
       -- 정규 표현식 RegExp 사용
       if(sex_upon_intake regexp('^Neutered|^Spayed'), 'O', 'X') '중성화'
       /*if(sex_upon_intake like 'Neutered%'
          or sex_upon_intake like 'Spayed%' , 'O', 'X') '중성화'*/
from animal_ins
order by animal_id