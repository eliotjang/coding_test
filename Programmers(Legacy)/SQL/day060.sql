-- 년, 월, 성별 별 상품 구매 회원 수 구하기
select date_format(sales_date,'%Y') year, date_format(sales_date, '%m') month, gender, count(distinct o.user_id) users
from user_info u inner join online_sale o on u.user_id = o.user_id
where not gender is null
group by 1, 2, 3
order by 1, 2, 3