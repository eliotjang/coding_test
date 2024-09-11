-- 조건에 맞는 도서와 저자 리스트 출력하기
select book_id, author_name, date_format(published_date, '%Y-%m-%d') published_date
from book b inner join author a on b.author_id = a.author_id
where category = '경제'
order by 3