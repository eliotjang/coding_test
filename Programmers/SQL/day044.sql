-- 가격대 별 상품 개수 구하기
select case when 0 <= price and price < 10000 then '0'
            when 10000 <= price and price < 20000 then '10000'
            when 20000 <= price and price < 30000 then '20000'
            when 30000 <= price and price < 40000 then '30000'
            when 40000 <= price and price < 50000 then '40000'
            when 50000 <= price and price < 60000 then '50000'
            when 60000 <= price and price < 70000 then '60000'
            when 70000 <= price and price < 80000 then '70000'
            when 80000 <= price and price < 90000 then '80000'
            else '90000' end price_group,
       count(1) products
from product
group by 1
order by 1