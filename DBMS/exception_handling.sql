DECLARE 
    dividend number;
    divisor number;
    quotient number;
	CURSOR to_divide_cursor IS select dividend,divisor from to_divide;
BEGIN 
	OPEN to_divide_cursor;
	LOOP
    	FETCH to_divide_cursor INTO dividend,divisor;
    	quotient:=dividend/divisor;
		dbms_output.put_line(quotient);
    	EXIT WHEN to_divide_cursor%notfound; 
    END LOOP;
	/* DO NOT change the code */
	/* Add the exception handling block and complete the code */	
	EXCEPTION
    	WHEN others THEN  
      dbms_output.put_line(SQLCODE||' '||SQLERRM);  
END;
/

/* Complete the following given code. Handle the exception when divisor is 0. 
Exception should have a SQLCODE of -20001 and Error message should be `Division by zero`. */
DECLARE
    dividend NUMBER := 50;
    divisor NUMBER :=0;
	exception_name EXCEPTION;
    PRAGMA EXCEPTION_INIT(exception_name, -20001);
BEGIN
	IF divisor=0 THEN
    	RAISE_APPLICATION_ERROR(-20001, 'Division by zero');
    END IF;
    EXCEPTION
    	WHEN exception_name THEN
            dbms_output.put_line(SQLERRM);  	
END;
/
