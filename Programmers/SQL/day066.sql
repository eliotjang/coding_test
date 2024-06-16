-- 조회수가 가장 많은 중고거래 게시판의 첨부파일 조회하기
SELECT
    CONCAT('/home/grep/src/', b.board_id, '/', file_id, file_name, file_ext) file_path
FROM
    used_goods_board b
    INNER JOIN used_goods_file f
        ON b.board_id = f.board_id
WHERE
    views =
        (
            SELECT MAX(views)
            FROM used_goods_board
        )
ORDER BY
    file_id DESC