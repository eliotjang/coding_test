-- 자동차 대여 기록에서 대여중 / 대여 가능 여부 구분하기
select car_id,
       case when car_id in (select car_id  from car_rental_company_rental_history where str_TO_DATE('20221016', '%Y%m%d') between start_date and end_date)  then '대여중'
       else '대여 가능' end availability
from (select distinct car_id from car_rental_company_rental_history) a
group by 1
order by 1 desc