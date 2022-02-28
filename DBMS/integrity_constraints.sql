/* Create a table `students` with the given schema
	Table `dept` already created*/
 create table students
 (
   id INT, 
   name varchar(50), 
   age INT, CONSTRAINT check_age CHECK(age>15)
 );
ALTER TABLE dept ADD CONSTRAINT checkDeptId CHECK(dept_id>100);

/* Perform the given tasks 
	Table `dept` already created */
 create table students
 (
   id int, name varchar(50), age int, branch varchar(10) default 'CSE'
 );
 alter table dept modify dept_name default 'ECE';
 
 /* Perform the given tasks 
	Table `dept` already created */
  create table students
  (
    id int primary key,
    name varchar(50)
  );
  alter table dept add primary key(dept_id);
  
  /* Perform the given tasks 
	Table `dept` already created */
 create table students
 (
   id int, name varchar(50) NOT NULL, age int
 );
 alter table dept modify dept_name NOT NULL;
 
 /* Perform the given task 
	Table `dept` already created */
create table students
(
  id int,
  name varchar(50) UNIQUE,
  age int
);
ALTER TABLE dept ADD UNIQUE (dept_name);

/* Create the tables `dept` and `students` as per given task */
create table dept
(
  dept_id int primary key,
  dept_name varchar(50)
);
create table students
(
  roll_no int,
  student_name varchar(50),
  age int,
  dept_id REFERENCES dept(dept_id)
);
