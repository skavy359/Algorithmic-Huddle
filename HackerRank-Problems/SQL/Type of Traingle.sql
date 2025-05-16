select case 
when (a+b>c and a+c>b and b+c>a) then case
when (a=b and b=c) then 'Equilateral'
when (a=b and a<>c) or (a=c and a<>b) or (b=c and b<>a) then 'Isosceles'
else 'Scalene'
end
else 'Not A Triangle'
end
from TRIANGLES;
