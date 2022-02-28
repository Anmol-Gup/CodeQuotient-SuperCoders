/* Create a sequence `stud_seq` as per given task. */
create sequence stud_seq
start with 1000
increment by 2
minvalue 10
maxvalue 5000
cycle;

/* Perform the given task 
	Sequence `stud_seq` already created */
alter sequence stud_seq
increment by 10
maxvalue 10000;

/* Create a cluster named `stud_dept_cluster` that contains 2 tables 
`students` and `dept` with the given schema */
create cluster stud_dept_cluster (deptno number(2));
create index index_cluster on cluster stud_dept_cluster;
create table dept (deptno number(2), dname varchar2(20))
cluster stud_dept_cluster (deptno);
create table students (rollno number(5), name varchar2(20),deptno number(2))
cluster stud_dept_cluster(deptno);
