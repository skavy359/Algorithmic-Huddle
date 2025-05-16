/*
Enter your query here.
*/
select NAME from STUDENTS where MARKS>75
order by RIGHT(NAME,3) asc, ID asc;
