-- 진료과별 총 예약 횟수 출력하기
select mcdp_cd '진료과 코드', count(1) '5월예약건수'
from appointment
where date_format(apnt_ymd, '%y-%m') = '22-05'
group by 1
order by 2, 1