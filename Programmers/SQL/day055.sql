-- 조건에 맞는 사용자 정보 조회하기
select user_id, nickname, concat(city, ' ', street_address1, ' ', street_address2) as '전체주소', concat(substring(tlno,1,3), '-', substring(tlno,4,4), '-', substring(tlno,8,4)) '전화번호'
from used_goods_board b inner join used_goods_user u on b.writer_id = u.user_id
group by 1
having count(writer_id) >= 3
order by 1 desc