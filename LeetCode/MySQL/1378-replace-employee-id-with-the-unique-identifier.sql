-- 1378-replace-employee-id-with-the-unique-identifier.sql
SELECT unique_id,
  name
FROM Employees e
  LEFT JOIN EmployeeUNI u ON e.id = u.id