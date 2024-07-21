-- 1193.monthly-transactions-1.sql
SELECT month,
  country,
  COUNT(*) trans_count,
  SUM(state = 'approved') approved_count,
  SUM(amount) trans_total_amount,
  SUM(IF(state = 'approved', amount, 0)) approved_total_amount
FROM (
    SELECT *,
      DATE_FORMAT(trans_date, '%Y-%m') month
    FROM Transactions
  ) a
GROUP BY country,
  month