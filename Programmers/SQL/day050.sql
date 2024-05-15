-- 5월 식품들의 총매출 조회하기
select fp.product_id, product_name, sum(price * amount) as total_sales
from food_product fp inner join food_order fo on fp.product_id = fo.product_id
where date_format(produce_date, '%y%m') = '2205'
group by 1
order by 3 desc, 1