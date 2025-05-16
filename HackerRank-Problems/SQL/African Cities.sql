select NAME from CITY where COUNTRYCODE in (select CODE from COUNTRY where CONTINENT="Africa");
