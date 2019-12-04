-- stored procedure

create table bank1
(
id int,
name varchar(30),
withdraw money
)

create procedure sp_mybank
(
@id int,
@name varchar(30),
@withdraw money,
@statement varchar(20) = ''
)
as
Begin
	if @statement = 'insert'
	begin
		insert into bank1 values(@id,@name,@withdraw)
	end

	if @statement = 'select'
	begin
		select * from bank1
	end

	if @statement = 'update'
	begin
		update bank1 set name = @name, withdraw = @withdraw where id = @id;
	end

	if @statement = 'delete'
	begin
		delete from bank1 where id = @id;
	end
end

exec sp_mybank 1,'ram',300,'insert'
exec sp_mybank 1,'12',34,'select'
exec sp_mybank 1,'shyam',300,'update'