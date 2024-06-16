-- 우유와 요거트가 담긴 장바구니
SELECT
    cart_id
FROM
    cart_products
WHERE
    name in ( 'Yogurt', 'Milk' )
GROUP BY
    cart_id
HAVING
    COUNT(DISTINCT name) = 2
ORDER BY
    cart_id