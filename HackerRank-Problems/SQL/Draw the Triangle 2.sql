DELIMITER $$

create procedure answer()
begin

declare counter int default 1;
declare stars varchar(255) default '';

while counter<=20 do
set stars=repeat('* ',counter);
select stars;
set counter=counter+1;
end while;
end$$

DELIMITER ;

CALL answer()