/* Write a PL/SQL block to calculate the area, 
perimeter of a rectangle of length 20 and breadth 10. */
DECLARE
length number:=20;
breadth number:=10;
BEGIN
dbms_output.put_line(length*breadth);
dbms_output.put_line(2*(length+breadth));
END;
/

/* create a PL/SQL block and perform the given task
	Table `students` already created as per the following definition
    	create table students(
    		roll_no INTEGER PRIMARY KEY,
    		fname VARCHAR(20),
    		lname VARCHAR(20),
    		CGPA NUMBER(6,3)
		);
*/
DECLARE
stud_row students %rowtype;
BEGIN
select * into stud_row from students where roll_no=4;
DBMS_output.put_line(stud_row.fname||' '||stud_row.cgpa);
END;
/

/* Perform the given tasks using PL/SQL 
	Table `student` already created with the following given schema 
    CREATE TABLE student (
       rollNo INT PRIMARY KEY,
        studentName VARCHAR2(50),
        branch VARCHAR2(10),
        semester INT
    );
*/
DECLARE
	rollNo student.rollNo%type;
	studentName student.studentName%type;
    branch student.branch%type;
    semester student.semester%type;
   BEGIN
   	Insert into student Values(345,'Ayush','CSE','6');
    Insert into student (rollNo,studentName,branch) Values (167,'Gopal','ECE');
    Insert into student (rollNo,studentName,semester) Values (370,'Pranav',8);
    Update student set studentName='Aman' where rollNo=124;
    Delete from student where rollNo in (109,655);
END;
/

DECLARE
	marks student.marks %type;
	CURSOR stud_cursor IS select rollNo,marks from student;
	roll_no student.rollNo %type;
	grade varchar(20);
BEGIN
	OPEN stud_cursor; 
   	LOOP 
    	FETCH stud_cursor into roll_no, marks; 
		EXIT WHEN stud_cursor%notfound;
		/* Use control statements to store the grade in the variable `grade` according to `marks` */
		/* Do not change the given code */
		/* Write the code from this line */
		IF marks>=90 and marks<=100 THEN
        	grade:='O';
        ELSIF marks>=80 and marks<=89 THEN
        	grade:='A+';
        ELSIF marks>=70 and marks<=79 THEN
        	grade:='A';
        ELSIF marks>=60 and marks<=69 THEN
        	grade:='B+';
		ELSIF marks>=50 and marks<=59 THEN
        	grade:='B';
        ELSIF marks>=40 and marks<=49 THEN
        	grade:='C';
        ELSIF marks>=33 and marks<=39 THEN
        	grade:='P';
        ELSE 
        	grade:='F';
        END IF;
			dbms_output.put_line(roll_no||' '||grade);
   	END LOOP;
	CLOSE stud_cursor; 
END;
/

/* Print all the even numbers present in the range [1,200] */
DECLARE
	i number:=2;
BEGIN
    while(i<=200) LOOP
    dbms_output.put_line(i);
    i:=i+2;
    END LOOP;
 END;
 /
 
 /* Print the first 50 positive numbers using the the GOTO statement. */
DECLARE
   a number := 1;
BEGIN	
	<<printnext>>	
     dbms_output.put_line(a);
     a:=a+1;
     IF a<=50 THEN
     	goto printnext;
     END IF;
END;
/
