-- 584-find-customer-referee.sql
SELECT
    name
FROM
    Customer
WHERE
    NOT referee_id = 2
    OR referee_id IS NULL