-- 특정 기간동안 대여 가능한 자동차들의 대여비용 구하기
SELECT
    c.car_id
  , c.car_type
  , ROUND(daily_fee * ( 1 - 0.01 * discount_rate) * 30) as fee
FROM
    car_rental_company_car c
    INNER JOIN car_rental_company_rental_history h
        ON c.car_id = h.car_id
    INNER JOIN car_rental_company_discount_plan d
        ON c.car_type = d.car_type
WHERE
    c.car_type IN ('세단', 'SUV')
    AND c.car_id NOT IN (
        SELECT car_id
        FROM car_rental_company_rental_history
        WHERE start_date <= '2022-11-30'
        AND end_date >= '2022-11-1'
    )
    AND duration_type = '30일 이상'
GROUP BY 
    c.car_id
HAVING
    fee >= 500000
    AND fee < 2000000
ORDER BY
    fee DESC
  , c.car_type
  , c.car_id