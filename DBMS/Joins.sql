/* Display the roll_no, name, marks from the cartesian product of the two tables. 
	Tables `students` and `stud_marks` already created */
select stud.roll_no, stud.stud_name, studM.marks from students stud,stud_marks studM;

/* Display all the details of those students , who have scored marks in the range 30-75.(Both numbers inclusive). */
/* Tables `stud_marks` and `students` already created */
select * from students inner join stud_marks on students.roll_no=stud_marks.stud_roll
where marks between 30 and 75;

/* Display the roll_no,name,marks of students irrespective of the fact that their marks are present or not in the `stud_marks` table */
select s1.roll_no,s1.stud_name, s2.marks from students s1 left join stud_marks s2 
on s1.roll_no=s2.stud_roll;

/* Display the roll_no,name and marks of students irrespective of the fact that their names are present or not in the 'students' table
  Tables 'students' and 'stud_marks' already created */
select roll_no,stud_name,marks from students s right join stud_marks m
on s.roll_no=m.stud_roll;

/* Display the `roll_no`,`name` and `marks` of students irrespective of the fact that their respective data is available in the respective tables. */
select roll_no,stud_name,marks from students full join stud_marks on students.roll_no=stud_marks.stud_roll;

/* Display all the data of students and their marks using natural join where marks >= 35.
 Table `students` and `stud_marks` already created */
 select * from students s natural join stud_marks m where marks>=35;
 
 /* Get all the categories whose products are purchased and as described in order details. */
 select distinct cat.categoryid,cat.title from categories cat join products prod
on cat.categoryid=prod.categoryid join OrderDetails od
on od.productid=prod.productid;

/* list the products which are similar to products which the user has purchased earlier for user with userid=1 */
select * from products where categoryid in 
(select prod.categoryid from products prod join categories cat
on prod.categoryid=cat.categoryid join orderdetails od on od.productid=prod.productid join
users u on u.userid=od.userid);

/* Get the title and Stock of All the product records sorted on the basis of title and if the title for the two record matches then sort on the based of stock */
select title,stock from products order by title,stock;

/* Get Orderamount and Dated from  orders from users whose name is Name1 */
select amount,dated from orderheaders o inner join users u
on o.userid=u.userid and name='Name1';

/* Get the name and age of users which are are youth and by youth means their age must be greater then and 18 and less than 25 */
select name,age from users where age between 18 and 25;


