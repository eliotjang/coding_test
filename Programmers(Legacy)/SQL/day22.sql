-- 조건에 맞는 회원수 구하기
select count(1) users
from user_info
where age between 20 and 29
      and date_format(joined, '%Y') = '2021'