/* Create a view named `student_view`. 
create table students(roll_no INTEGER PRIMARY KEY,stud_name VARCHAR(50),marks INTEGER);
	Table `students` already created */
create or replace view student_view as select roll_no as "ID",marks from students where marks>75;

/* alter views */
CREATE OR REPLACE view student_view AS 
SELECT roll_no as "ID",stud_name as "name", marks from students where marks > 50;

/* renaming views */
/* rename the view to ‘student_view’.
  View `stud_view` already created */
rename stud_view to student_view;

/* Drop the view `student_view`.
	View `student_view` already created */
 drop view student_view;



