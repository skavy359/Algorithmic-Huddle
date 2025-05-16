read x
read y
read z

if [ $x -eq $z ] && [ $x -eq $y ]
then
echo "EQUILATERAL"
elif [ $x -eq $y ] || [ $x -eq $z ] || [ $y -eq $z ]
then
echo "ISOSCELES"
else
echo "SCALENE"
fi
