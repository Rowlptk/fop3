create database fop_3

use fop_3

create table sql1
(
id int,
name varchar(20),
salary money
)

select * from sql1

insert into sql1(id,name,salary) values (101,'ram prasad',3000);
insert into sql1 values (102,'shyam prasad',4000);
insert into sql1(id,name) values (103,'gita devi')

delete from sql1 where id = 102

update sql1 set salary = 5000 where salary is null

truncate table sql1

drop table sql1

use fop_3
drop database fop_3
