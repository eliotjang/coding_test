-- 3월에 태어난 여성 회원 목록 출력하기
select member_id, member_name, gender, date_format(date_of_birth, '%Y-%m-%d') date_of_birth
from member_profile
where date_format(date_of_birth, '%m') = 3 and
      gender = 'W' and
      tlno is not NULL
order by 1