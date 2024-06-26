-- 헤비 유저가 소유한 장소
SELECT
    id
  , name
  , places.host_id
FROM
    places
  , (
        SELECT host_id, COUNT(host_id)
        FROM places
        GROUP BY host_id
        HAVING COUNT(host_id) >= 2
    ) heavy_user
WHERE
    places.host_id IN (heavy_user.host_id)
ORDER BY id