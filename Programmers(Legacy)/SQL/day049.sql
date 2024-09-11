-- 식품분류별 가장 비싼 식품의 정보 조회하기
select category, price, product_name
from food_product
where (category, price) in ( select category, max(price)
                             from food_product
                             group by 1
                            )
having category in ('과자', '국', '김치', '식용유')
order by 2 desc