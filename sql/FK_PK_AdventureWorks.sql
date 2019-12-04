--create database name
use store_db

create table Register
(
	id int identity(1,1) primary key,
	name varchar(50) not null,
	contact numeric(10,0) unique,
	age int not null 
)

create table teamMember
(
	id int foreign key references Register(id),
	teamName varchar(40),
	teamRating int default 3 check(teamRating>0 and teamRating<=5)
)

select * from Register
select * from teamMember

insert into Register(name, contact, age) values ('Tom', 9801200111, 23),('Jerry',9801200110,24),('Oggy',9801200109,20),
('Cockroaches',9801200108,10)

insert into teamMember values (1,'Aaloo',4),(1,'Cauli',2)

insert into teamMember(id,teamName) values (2,'Cauli')

insert into teamMember values(10,'Aaloo',5)


use AdventureWorks2012;
select * from Person.Address

select city from Person.Address

select AddressID , city from Person.Address

select top 10 percent AddressID , city from Person.Address

