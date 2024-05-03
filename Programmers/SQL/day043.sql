-- 조건에 맞는 사용자와 총 거래금액 조회하기
select user_id, nickname, total_sales
from
(
select user_id, nickname, sum(price) total_sales
from used_goods_board b inner join used_goods_user u on b.writer_id = u.user_id
group by 1
order by 3
) a
where total_sales >= 700000