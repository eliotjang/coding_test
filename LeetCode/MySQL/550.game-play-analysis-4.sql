-- 550.game-play-analysis-4.sql
WITH CTE AS (
  SELECT player_id,
    MIN(event_date) event_start_date
  FROM Activity
  GROUP BY player_id
)
SELECT ROUND(
    (
      COUNT(DISTINCT c.player_id) / (
        SELECT COUNT(DISTINCT player_id)
        FROM Activity
      )
    ),
    2
  ) fraction
FROM CTE C
  INNER JOIN Activity a ON c.player_id = a.player_id
  AND DATEDIFF(a.event_date, c.event_start_date) = 1