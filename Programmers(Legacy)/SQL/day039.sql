-- 성분으로 구분한 아이스크림 총 주문량
select ingredient_type, sum(total_order)
from first_half fh inner join icecream_info ii on fh.flavor = ii.flavor
group by 1
order by 2