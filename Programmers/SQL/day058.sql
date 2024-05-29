-- 취소되지 않은 진료 예약 조회하기
select apnt_no, p.pt_name, p.pt_no, d.mcdp_cd, dr_name, apnt_ymd
from appointment a inner join doctor d on d.dr_id = a.mddr_id
                   inner join patient p on a.pt_no = p.pt_no
where d.mcdp_cd = 'CS' and
      date_format(apnt_ymd, '%y%m%d') = '220413' and
      apnt_cncl_yn = 'N'
order by apnt_ymd