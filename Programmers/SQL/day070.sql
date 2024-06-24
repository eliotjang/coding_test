-- 그룹별 조건에 맞는 식당 목록 출력하기
SELECT
    member_name
  , review_text
  , DATE_FORMAT(review_date, '%Y-%m-%d') review_date
FROM
    member_profile m
    INNER JOIN rest_review r
        ON m.member_id = r.member_id
WHERE
    r.member_id = (
        SELECT member_id
        FROM rest_review
        GROUP BY member_id
        ORDER BY COUNT(*) DESC LIMIT 1
    )
ORDER BY
    review_date
  , review_text
