/* Perform the given tasks 
	Table `emp` and `dept` already created */

/* 1. Find out the empno of the employee who earns the most in the `ACCOUNTING` department.
   2. Find out the average salary of employees working in `SALES` department. */

select empno from emp where 
sal=(select max(sal) from emp join dept on emp.deptno=dept.deptno where dept.dname='ACCOUNTING');
select avg(sal) from emp 
where sal in (select sal from emp join dept on emp.deptno=dept.deptno where dept.dname='SALES');

/* 1. Find out the empno as `empid` and names as `empname` of employees who are managed by the employee named `KING`.
   2. Find out the empno as `empid` and names as `empname` of the employee who has the maximum salary and works as an `ANALYST`. */
select empno as "empid", ename as "empname" from emp 
where mgr in (select empno from emp where ename='KING');
--select max(sal) from emp where job='ANALYST';
select empno as "empid", ename as "empname" from emp 
where sal = (select max(sal) from emp where job='ANALYST');

/* 1. Find out the empno as `empid` and name as `empname` of employees who have salaries more than the average salary of an employee.
   2. Find out the empno as `empid`,name as `empname` and hiredate as `joining` of the employees who work in the location `DALLAS`. */
select empno as "empid",ename as "empname" from emp
where sal>(select avg(sal) from emp);
select empno as "empid", ename as "empname",hiredate as "joining"
from emp where deptno in (select deptno from dept where loc='DALLAS');

/* 1. Find out the empno as `empid` of the person who earns the maximum in each department.
   2. Find out the empno as `empid` , name as `empname` of the employees who manage other employees. */
select empno as "empid" from emp e 
where sal = (select max(sal) from emp where emp.deptno=e.deptno);
select empno as "empid",ename as "ename" from emp e
where empno in (select mgr from emp where emp.mgr=e.empno);

/* Find out the empno as `empid` of the employees who earn more than the average earnings of their respective departments. */
/* Perform the given task 
	create table emp(  
  empno    number(4,0),  
  ename    varchar2(10),  
  job      varchar2(9),  
  mgr      number(4,0),  
  hiredate date,  
  sal      number(7,2),  
  comm     number(7,2),  
  deptno   number(2,0),  
  constraint pk_emp primary key (empno)
);
	Table `emp` already created as per the above given schema */
select empno as "empid" from emp e where sal>(select avg(sal) from emp where emp.deptno=e.deptno);
