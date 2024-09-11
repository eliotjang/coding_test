-- 상품을 구매한 회원 비율 구하기
SELECT
    YEAR(sales_date) year
  , MONTH(sales_date) month
  , count(DISTINCT o.user_id) purchased_users
  , ROUND( count(DISTINCT o.user_id) / t.total_users, 1 ) purchased_ratio
FROM
    user_info u
    INNER JOIN online_sale o
        ON u.user_id = o.user_id
  , (
        SELECT count(*) total_users
        FROM user_info
        WHERE YEAR(joined) = '2021'
    ) t
WHERE
    YEAR(joined) = '2021'
GROUP BY
    year
  , month
ORDER BY
    year
  , month