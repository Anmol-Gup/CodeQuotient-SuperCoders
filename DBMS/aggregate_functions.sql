/* Perform the given task 
	Table `students` already created */
select stud_dept as "dept", count(roll_no) as "cnt" from students group by stud_dept;

select stud_dept as "dept", count(roll_no) as "cnt" from students 
where stud_dept in ('CSE','Mechanical')
group by stud_dept;

/* Display all the records of the table in ascending order of the student’s names. */
select * from students order by stud_name;

/* Find the highest-scoring student’s marks as 'highest' and the lowest scoring student's marks as 'lowest'
	Table `students` already created */
select max(stud_marks) as "highest", min(stud_marks) as "lowest" from students;

/* Display the count of students as 'count' who have scored more than 50 marks. 
	Table `students` already created */
select count(*) as "count" from students where stud_marks>50;

/* Perform the given tasks 
	Table `students` already created */
select sum(stud_marks) as "sum" from students where stud_dept='ECE';
select avg(stud_marks) as "average" from students where stud_marks>70;

select upper(stud_fname) as "upper" from students;
select lower(stud_lname) as "lower"from students;
select length(stud_full_name) as "length"from students;

select ROUND(CGPA, 2) as "Rounded" from students; 
select TRUNC(CGPA, 1) as "Truncated" from students;

 select concat(fname,concat(' ',lname)) as "FullName" from students;
 select replace(fname,'a','i') as "UpdatedFirstName" from students;
 select substr(fname,1,5) as "Initials" from students;
 
 select ABS(MONTHS_BETWEEN(TO_DATE('03/04/2021','DD/MM/YYYY'), birthdate))
as "Difference" from students;
select NEXT_DAY(birthdate, 'THURSDAY') as "NextThursday" from students;
select ADD_MONTHS(birthdate,10) as "AddedMonths" from students;

/* get all names of female users between age 21-30 */
select name from users where gender='Female' and age between 21 and 30;

/* Get State and  count of users in each state and display only where no of users are >1 */
select state, count(*) from users group by state having count(userid)>1;

/* Count the no of users from each state display no and state */
select count(*), state from users group by state;

/* Count the products based on starting letter i.e products starting with a letter,b and so on */
SELECT
  "Titl",COUNT(*) AS "Total"
FROM
 (SELECT substr(title,1,1) as "Titl"
 from products) t
GROUP BY "Titl";

/* Find the orders who are still pending (i.e. Orders which are completed) */
select * from orderheaders where orderstatus='Completed';

/* find all the orders whose paid status is cod */
SELECT Dated,Title, Quantity, Orderstatus FROM OrderHeaders oh JOIN OrderDetails od 
ON oh.OrderHeaderId = od.OrderHeaderId
JOIN Products prod ON prod.ProductId=od.ProductId and oh.paidstatus='COD';

