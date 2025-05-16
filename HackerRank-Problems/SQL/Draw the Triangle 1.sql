DELIMITER $$

CREATE PROCEDURE answer()
BEGIN
    declare counter int default 20;
    declare stars varchar(255) default '';
    
    while counter>0 do
        set stars=repeat('* ',counter);
        select stars;
        set counter=counter-1;
    end while;
END$$

DELIMITER ;

CALL answer();