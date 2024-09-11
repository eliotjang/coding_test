-- 1633.percentage-of-users-attended-a-contest.sql
SELECT contest_id,
  ROUND(
    COUNT(user_id) / (
      SELECT COUNT(*)
      FROM Users
    ) * 100,
    2
  ) percentage
FROM Register
GROUP BY contest_id
ORDER BY percentage DESC,
  contest_id