-- 1075.project-employees-1.sql
SELECT project_id,
  ROUND(AVG(experience_years), 2) average_years
FROM Project p
  INNER JOIN Employee e ON p.employee_id = e.employee_id
GROUP BY project_id