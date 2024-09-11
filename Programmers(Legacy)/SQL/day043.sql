-- 조건에 맞는 사용자와 총 거래금액 조회하기
select user_id, nickname, sum(price) total_price
from used_goods_board b inner join used_goods_user u on b.writer_id = u.user_id
where status = 'done'
group by 1
having total_price >= 700000
order by 3