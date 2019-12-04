use AdventureWorks2012

-- select with where

select * from Person.Password where not (BusinessEntityID >= 2 and BusinessEntityID <= 10)

-- and, or, not, > ,< ,>= ,<=, == , <>(not equal to)

-- wild card ==> _ ==> character, % ==> string

select * from person.Person where LastName like 'Duff_'
select * from person.Person where LastName like 'Dan%'

select * from sales.CurrencyRate where ToCurrencyCode like 'C[AN][DY]'
select * from sales.CurrencyRate where ToCurrencyCode like 'A[^R][^S]'

-- aggregate function, avg, sum, count, min, max

select 
avg(UnitPrice) as Average,
sum(UnitPrice) as TotalSum,
count(UnitPrice) as TotalCount, 
min(UnitPrice) as MinimumValue,
max(UnitPrice) as MaximumValue
from sales.SalesOrderDetail

-- group by

select * from Production.WorkOrderRouting order by OperationSequence asc
select * from Production.WorkOrderRouting order by OperationSequence desc

select workorderId , sum(ActualResourceHrs) as ActualResourceHrs from Production.WorkOrderRouting 
group by WorkOrderID having sum(ActualResourceHrs) = 17.6

-- join ==> inner join ==> intersection of set
-- outer join ==> full outer join ==> union of set
--				  left outer join ==> A
--				  right outer join  ==> B

select * from Sales.Currency

select * from Sales.CurrencyRate

create view myview as
select A.Name, B.FromCurrencyCode, B.AverageRate
from
Sales.Currency A
left outer join
Sales.CurrencyRate B
on
A.CurrencyCode = B.ToCurrencyCode

select * from myview