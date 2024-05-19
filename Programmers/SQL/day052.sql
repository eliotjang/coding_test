-- 재구매가 일어난 상품과 회원 리스트 구하기
select user_id, product_id
from online_sale
group by 1, 2
having count(*) > 1
order by 1, 2 desc