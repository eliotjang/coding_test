-- 입약 시각 구하기(1)
select date_format(datetime, '%H') hour, count(1) count
from animal_outs
where date_format(datetime, '%H') between 9 and 19
group by 1
order by 1