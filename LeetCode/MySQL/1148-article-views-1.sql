-- 1148-article-views-1.sql
SELECT
    DISTINCT author_id id
FROM
    Views
WHERE
    author_id = viewer_id
ORDER BY 
    id