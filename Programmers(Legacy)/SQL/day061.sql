-- 서울에 위치한 식당 목록 출력하기
select ri.rest_id, rest_name, food_type, favorites, address, round(avg(review_score), 2) score
from rest_info ri inner join rest_review rr on ri.rest_id =rr.rest_id
where address like ('서울%')
group by 1
order by 6 desc, 4 desc