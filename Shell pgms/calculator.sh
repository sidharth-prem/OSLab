add()
{
	((ans=x+y))
	echo -n $x" + "$y" = ";
	echo $ans
}

subtract()
{
	((ans=x-y))
	echo -n $x" - "$y" = ";
	echo $ans
}

multiply()
{
	((ans=x*y))
	echo -n $x" * "$y" = ";
	echo $ans
}

divide()
{
	((ans=x/y))
	echo -n $x" / "$y" = ";
	echo $ans
}

echo "    CALCULATOR    "
echo "******************"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo -n "Enter two numbers: "
read x y
ch='y'
while ((ch=='y'))
do
	echo -n "Enter the choice: "
	read n
	case $n in
		1) add
		echo -n "Do you want to continue?"
		read ch;;
		2) subtract
		echo -n "Do you want to continue?"
		read ch;;
		3) multiply
		echo -n "Do you want to continue?"
		read ch;;
		4) divide
		echo -n "Do you want to continue?"
		read ch;;
		*) echo "Invalid Option!!"
		echo -n "Do you want to continue?"
		read ch;;
	esac
done
