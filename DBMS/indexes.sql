/* Perform the given tasks 
 create table students(
    rollNo int,
    fname varchar(20),
    lname varchar(20),
    email_id varchar(50),
    CGPA number(6,2)
);
 Table `students` already created */
 CREATE INDEX stud_single_idx ON students(rollNo);
 CREATE INDEX stud_comp_idx ON students(fname,lname);
 CREATE UNIQUE INDEX stud_uniq_idx ON students(email_id);
 CREATE INDEX stud_func_idx ON students(trunc(cgpa,2));
 
 /* Perform the given tasks 
	Index `stud_idx` already created */
alter index stud_idx rename to student_index;

/* Drop the given index 
	Index `stud_idx` already created */
 drop index stud_idx;
