/* 
	Table emp already created as per the given definition 
    Perform the given task
*/
DECLARE
	rows_affected number(2);
BEGIN
	DELETE from emp where sal<1500;
    IF sql%notfound THEN
    	dbms_output.put_line('no rows affected');
    ELSIF sql%found THEN
    	rows_affected:=sql%rowcount;
        dbms_output.put_line(rows_affected);
    END IF;
END;
/

/* Write a PL/SQL block to fetch the sum of salaries of all the employees working in department number 20 using Cursors. */
DECLARE
   CURSOR emp_cursor IS select sum(sal) from emp where deptno=20;
   salary emp.sal%type;
BEGIN
	OPEN emp_cursor;
   	FETCH emp_cursor into salary;
    dbms_output.put_line(salary);
    CLOSE emp_cursor;
END;
/
