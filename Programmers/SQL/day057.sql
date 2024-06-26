-- 조건에 부합하는 중고거래 상태 조회하기
select board_id, writer_id, title, price,
       case when status = 'SALE' then '판매중'
            when status = 'RESERVED' then '예약중'
            when status = 'DONE' then '거래완료' end 'status'
from used_goods_board
where date_format(created_date, '%y%m%d') = '221005'
order by board_id desc