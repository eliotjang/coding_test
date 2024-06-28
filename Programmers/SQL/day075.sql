-- 자동차 대여 기록 별 대여 금액 구하기
WITH truck_discount as (
    SELECT
        daily_fee
      , car_type
      , history_id
      , DATEDIFF(end_date, start_date) + 1 date_diff
      , CASE
            WHEN DATEDIFF(end_date, start_date) + 1 < 7 THEN NULL
            WHEN DATEDIFF(end_date, start_date) + 1 < 30 THEN '7일 이상'
            WHEN DATEDIFF(end_date, start_date) + 1 < 90 THEN '30일 이상'
            ELSE '90일 이상'
        END duration_type
    FROM
        car_rental_company_car c
        INNER JOIN car_rental_company_rental_history h
            ON c.car_id = h.car_id
    WHERE
        car_type = '트럭'
)

SELECT
    truck_discount.history_id
  , ROUND (
      truck_discount.daily_fee * ( 1 - 0.01 * IFNULL(discount_rate, 0) ) * truck_discount.date_diff
    ) as fee
FROM
    truck_discount
    LEFT JOIN car_rental_company_discount_plan d
        ON truck_discount.car_type = d.car_type
        AND truck_discount.duration_type = d.duration_type
ORDER BY
    fee DESC
  , history_id DESC