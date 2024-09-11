-- 1174.immediate-food-delivery-2.sql
SELECT ROUND(
    SUM(IF(a.min_order_date = a.min_delivery_date, 1, 0)) / COUNT(*) * 100,
    2
  ) immediate_percentage
FROM (
    SELECT MIN(order_date) min_order_date,
      MIN(customer_pref_delivery_date) min_delivery_date
    FROM delivery
    GROUP BY customer_id
  ) a