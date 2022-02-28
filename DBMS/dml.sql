/* Insert the following data in the `student` table 
	Table `student` already created */
INSERT ALL
  into student (rollNo, studentName, branch, semester) values (106,'Ajay','CSE',4)
  into student (rollNo, studentName, branch, semester) values (107,'Atul','ECE',6)
  into student (rollNo, studentName, semester) values (108,'Yuvraj',6)
  into student (rollNo, studentName, semester) values (109,'Vaibhav',4)
  into student (rollNo, studentName, branch) values (110,'Utkarsh','Civil')
  into student (rollNo, studentName, branch) values (111,'Rohit','CSE')
select * from dual;

/* Perform the given tasks 
	Table `student` already created */
update student set studentName='Sumit Sharma' where rollNo=654;
update student set semester=4 where semester is null;
update student set branch='Civil' where rollNo=655;

/* Perform the given tasks on table `student` 
	Table `student` already created */
delete from student where semester=2 and branch='ECE';
delete from student where branch is NULL;

/* Perform the given tasks 
	Table `student` is already created */
select studentName from student;
select semester, studentName, rollNo from student;
select * from student;

/* Perform the given tasks 
	Table `student` already created*/
select rollNo from student where branch is NULL;

/* Display the roll_no as 'id' and fname as 'name' of all the students.
	Table `students` already created */
select roll_no as "id", fname as "name" from students;

/* Perform the given tasks 
	Table `student` already created */
select marks from student where studentName='Hardik';
select rollNo from student where studentName<>'Kanav';
select rollNo, studentName from student where branch='CSE';
select studentName from student where rollNo>653;
select branch from student where rollNo<654;

/* Perform the given tasks .
	Table `student` already created */
select * from student where marks/2>40;
select studentName as "studname", marks+10 as "inc_marks" from student;

/* Perform the given tasks 
	Table `student` already created*/
select rollNo, studentName from student where semester=4 and marks>75;
select rollNo, studentName from student where branch='ECE' or semester=6;
select rollNo from student where branch='CSE' or marks<40;

/* Perform the given tasks 
	Table `student` already created*/
select rollNo from student where marks between 55 and 65;
select studentName from student where branch in ('CSE','ME');
select rollNo, marks from student where branch not in ('IT','ECE','ME');

/* Perform the given task
	Table `student` already created */
select rollNo, studentName from student where studentName like '_a%';

/* Orders placed by Female */
select o.orderheaderid, o.userid, o.dated, o.amount, o.paidstatus, o.orderstatus
from orderheaders o, users u where u.userid=o.userid and u.gender='Female';

/* find all the orders from orderheaders table whcih are placed by the users having age between 20 and 30 */
select o.orderheaderid, o.userid, o.dated, o.amount, o.paidstatus, o.orderstatus from orderheaders o, users u where u.userid=o.userid and u.age between 20 and 35;

/* Orange Warning */
select title, stock, lowthreshhold from products where stock <= 0.2*lowthreshhold;

/* Missing Email Users */
select name from users where email is NULL;

/* Get all Products based on title */
select title from products where title like '%Shirt%';

/* Filter Products- Display  all T-Shirt Prducts whose has reached the lowthreshhold display only title,threshhold and Stock */
select title, lowthreshhold, stock from products where title='T-Shirt' and stock<=Lowthreshhold;

/* Email detect- Get name of the users who have invalid email address and to invalid means they missing the symbol @ or  blank or null */
select name from users where email is NULL or email not like '%@%';
