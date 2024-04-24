-- 자동차 종류 별 특정 옵션이 포함된 자동차 수 구하기
select car_type CARS, count(1)
from car_rental_company_car
where options regexp '통풍시트|열선시트|가죽시트'
group by 1
order by 1