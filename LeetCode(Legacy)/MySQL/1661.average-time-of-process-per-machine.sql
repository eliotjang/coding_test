-- 1661.average-time-of-process-per-machine.sql
SELECT machine_id,
  ROUND(
    SUM(
      CASE
        WHEN activity_type = 'start' THEN timestamp * -1
        ELSE timestamp
      END
    ) / COUNT(DISTINCT process_id),
    3
  ) processing_time
FROM Activity
GROUP BY machine_id