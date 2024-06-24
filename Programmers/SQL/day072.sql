-- 조건에 부합하는 중고거래 댓글 조회하기
SELECT
    title
  , r.board_id
  , r.reply_id
  , r.writer_id
  , r.contents
  , DATE_FORMAT(r.created_date, '%Y-%m-%d') created_date
FROM
    used_goods_board b
    INNER JOIN used_goods_reply r
        ON b.board_id = r.board_id
WHERE
    DATE_FORMAT(b.created_date, '%Y-%m') = '2022-10'
ORDER BY 
    r.created_date
  , title