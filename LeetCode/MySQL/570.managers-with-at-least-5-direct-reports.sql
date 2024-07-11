-- 570.managers-with-at-least-5-direct-reports.sql
SELECT e.name
FROM Employee e
  INNER JOIN (
    SELECT managerId
    FROM Employee
    GROUP BY managerId
    HAVING COUNT(managerId) >= 5
  ) sort ON e.id = sort.managerId