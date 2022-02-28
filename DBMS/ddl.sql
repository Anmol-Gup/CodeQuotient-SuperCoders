/* Create a table named `students` with the given schema */
create table students
(
  rollNo int,
  studentName varchar(50),
  branch varchar(10),
  semester int
);

/* Add a column named gender with a VARCHAR(1) data type to a predefined student table. */
alter table student add gender varchar(1);

/* Table `students` already created. Peform the given tasks */
alter table students rename column phone to contact;
alter table students modify stud_name varchar(30);
alter table students drop column marks;

/* Rename the `student` table to `student_data` 
	Table `student` already define */
alter table student rename to student_data;

/* Drop the table `student` */
drop table student;

/* Delete the table present in the `student` table.
	Table `student` already created */
    truncate table student;
    
   




