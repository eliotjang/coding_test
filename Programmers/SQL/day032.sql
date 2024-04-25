-- 카테고리 별 도서 판매량 집계하기
select b.category, sum(bs.sales) total_sales
from book b inner join book_sales bs on b.book_id = bs.book_id
where bs.sales_date like '2022-01%'
group by 1
order by 1