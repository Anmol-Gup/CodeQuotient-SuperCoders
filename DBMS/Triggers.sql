/* Table `students` is already created 
	Create an empty valid trigger */
create or replace trigger student_trigger
    before insert or update
    on students
begin
    null; /* Just for creating an empty valid trigger */
end; 
/

/* Create a trigger named `stud_trigger` on `students` table that validates the input 
	Table `students` already created as per below given schema 
    create table students(
    	roll_no INTEGER PRIMARY KEY,
        stud_name VARCHAR(50),
        dept_no INTEGER
    ); 
*/
create or replace trigger stud_trigger
    before insert
    on students
    FOR EACH ROW
declare
	myexception exception;
    PRAGMA EXCEPTION_INIT(myexception,-20001); 
begin
	IF(:NEW.roll_no<0) THEN
        raise_application_error(-20001,'Roll Number can not be negative');
    ELSE
    	dbms_output.put_line('Data Inserted');
    END IF;
end; 
/

/* Perform the given tasks. Table `students` and `stud_logs` already created as per below schema
create table students(
  roll_no INTEGER PRIMARY KEY,
  stud_name VARCHAR(50),
  marks INTEGER
);
create table stud_logs(
  roll_no INTEGER,
  status VARCHAR(15)
); 
*/
CREATE OR REPLACE TRIGGER stud_update
  AFTER UPDATE
  ON students
  FOR EACH ROW
BEGIN
   insert into stud_logs values(:OLD.roll_no,'updated');
END;
/
CREATE OR REPLACE TRIGGER stud_delete
  AFTER DELETE
  ON students
  FOR EACH ROW
BEGIN
   insert into stud_logs values(:OLD.roll_no,'deleted');
END;
/

/* Disable the trigger named `stud_trigger` */
ALTER TRIGGER stud_trigger DISABLE;

/* Delete the trigger named `stud_trigger` */
DROP TRIGGER stud_trigger;
