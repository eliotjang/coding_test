-- 입양 시각 구하기(2)
SET @hour := -1;

SELECT
    @hour := @hour + 1 hour
  , (
        SELECT COUNT(@hour)
        FROM animal_outs
        WHERE HOUR(datetime) = @hour
    ) hour_count
FROM
    animal_outs
WHERE
    @hour < 23
ORDER BY 
    hour