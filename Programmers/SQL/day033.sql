-- 상품 별 오프라인 매출 구하기
select product_code, sum(price * sales_amount) sum
from product p inner join offline_sale os on p.product_id = os.product_id
group by 1
order by 2 desc, 1