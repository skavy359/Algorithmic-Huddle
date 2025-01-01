select SUM(c.POPULATION) from CITY c
join
COUNTRY d
on c.COUNTRYCODE=d.CODE
where d.CONTINENT="Asia";
