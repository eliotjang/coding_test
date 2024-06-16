-- 저자 별 카테고리 별 매출액 집계하기
SELECT
    a.author_id
  , a.author_name
  , category
  , SUM(sales * price) total_price
FROM
    book b
    INNER JOIN author a
        ON b.author_id = a.author_id
    INNER JOIN book_sales s
        ON b.book_id = s.book_id
WHERE 
    DATE_FORMAT(sales_date, '%Y-%m') = '2022-01'
GROUP BY
    a.author_id
  , category
ORDER BY
    a.author_id
  , category DESC