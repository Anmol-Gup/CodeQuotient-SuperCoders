/* 1. ‘insert_stud’ accepts 3 parameters as ‘roll_no’, ‘name’ and ‘marks’ and inserts those values into the student table.
   2. ‘update_stud’ accepts 2 parameters as ‘roll_no’ and ‘marks’ and updates the marks of roll number passed in the procedure.
*/
Create or replace PROCEDURE insert_stud(roll_no in INT,name in VARCHAR,marks in INT )
IS
BEGIN
	insert into students VALUES(roll_no,name,marks);
END;
/
Create or replace PROCEDURE update_stud(roll_no in INT,marks in INT)
IS
BEGIN
	update students set marks=marks where roll_no=roll_no;
END;
/

/* 1. Create a function named ‘getMaximum’ that accepts three numbers as parameters and returns the maximum of the three.
   2. Create a function named ‘getSquare’ that returns the square of the number passed as the parameter.
*/
create or replace function getMaximum(a in number,b in number,c in number)
return number
IS
begin
    IF a>b and a>c THEN
        return a;
    ELSIF b>a and b>c then
       return b;
    ELSE 
        return c;
    end if;
end;
 /
create or replace function getSquare(a in number)
return number
IS
	x number;
    begin
    	return a*a;
    end;
 /
 
 /* packages in oracle */
 

CREATE PACKAGE math_operations AS
    PROCEDURE display (number INT);
    FUNCTION pow(a int,b int) return INT;
    FUNCTION addNum(a int,b int) RETURN INT;
END math_operations;
/
CREATE PACKAGE BODY math_operations AS
    PROCEDURE display (number int) IS
    BEGIN
        DBMS_OUTPUT.PUT_LINE(number);
    END;
    FUNCTION addNum (a in int, b in int) 
    return int
    IS
    BEGIN
        return a+b;
    END;
    FUNCTION pow (a in int, b in int) 
    return int
    IS
    BEGIN
        return power(a,b);
    END;
END math_operations;
/

DECLARE
    c int;
    d int;
BEGIN
    c:=math_operations.addNum(10,20);
    d:=math_operations.pow(4,5);
    math_operations.display(c);
    math_operations.display(d);
END;
/
