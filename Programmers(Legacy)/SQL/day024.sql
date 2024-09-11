-- 카테고리 별 상품 개수 구하기
select substr(product_code, 1, 2) category, count(1) products
from product
group by 1
order by 1