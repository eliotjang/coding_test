-- 주문량이 많은 아이스크림들 조회하기
SELECT
    h.flavor
FROM
    first_half h
    INNER JOIN july j
        ON h.flavor = j.flavor
GROUP BY
    h.flavor
ORDER BY
    SUM(h.total_order + j.total_order) DESC
    LIMIT 3