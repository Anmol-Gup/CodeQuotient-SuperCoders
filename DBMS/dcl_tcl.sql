INSERT INTO employee VALUES(1,'Rahul');
select * from employee;

SAVEPOINT point1;

INSERT INTO employee VALUES(3,'Rohan');
select * from employee;

SAVEPOINT point2;
DELETE FROM employee where id = 3;
select * from employee;

ROLLBACK TO SAVEPOINT point2;
select * from employee;

COMMIT;

INSERT INTO employee VALUES(5,'Rohit');
select * from employee;

COMMIT;
