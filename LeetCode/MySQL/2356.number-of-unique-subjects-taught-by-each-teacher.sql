-- 2356.number-of-unique-subjects-taught-by-each-teacher.sql
SELECT teacher_id,
  count(DISTINCT subject_id) cnt
FROM Teacher
GROUP BY teacher_id