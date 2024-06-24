-- 대여 횟수가 많은 자동차들의 월별 대여 횟수 구하기
SELECT
    DATE_FORMAT(start_date, '%m') month
  , car_id
  , count(*) records
FROM
    car_rental_company_rental_history
WHERE
    DATE_FORMAT(start_date, '%m') >= 8
    AND DATE_FORMAT(start_date, '%m') <= 10
    AND car_id IN (
        SELECT car_id
        FROM car_rental_company_rental_history
        WHERE DATE_FORMAT(start_date, '%m') >= 8
              AND DATE_FORMAT(start_date, '%m') <= 10
        GROUP BY car_id
        HAVING count(*) >= 5
        ORDER BY car_id
    )
GROUP BY
    month
  , car_id
HAVING
    records > 0
ORDER BY
    month
  , car_id desc
 