select ANIMAL_ID, NAME
from ANIMAL_INS
where INTAKE_CONDITION in ('Sick')
order by ANIMAL_ID