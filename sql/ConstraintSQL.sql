create database cust_db1

use cust_db1

alter database cust_db1 modify name= store_db

use store_db

create table myStore
(
	id int ,
	name int
)

insert into myStore values (101,'Face Wash');

-- alter datatype
alter table myStore alter column name varchar(30)

select * from myStore

/* add column */
alter table myStore add price money;

 -- constraints , identity ==> auto-increment, null ,not null, unique, check, default

 create table donation
 (
	id int identity(101,1),
	name varchar(50) not null,
	email varchar(50) null,
	[contact no] numeric(10,0) not null unique,
	rating tinyint default 3 check(rating<=5),
	donation money check (donation>=100)
 )

select * from donation

insert into donation(name,email,[contact no],rating,donation)
values('Unicef','unicef@unicef.org',9801200111,5,1000)

insert into donation(name,email,[contact no],rating,donation)
values('WHO','WHO@WH0.org',9801200112,4,900)

insert into donation(email,[contact no],rating,donation)
values('pandas@pandas.com',9801200113,4,900)

insert into donation(name,[contact no],rating,donation)
values('pandas',9801200113,4,900)

insert into donation(name,[contact no],rating,donation)
values('pandas',9801200112,4,900)

insert into donation(name,[contact no],rating,donation)
values('pandas',9801200114,4,90)

insert into donation(name,[contact no],donation)
values('pandas',9801200114,900)

-- primary key ,foreign key 
-- microsoft ==> adventure works 2012/2014 ==> multiple sql statements check
-- select, orderby, groupby , wildcards , top, having

-- joins, views, triggers, stored procedure ,error handling 