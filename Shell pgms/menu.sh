echo "OPTIONS"
echo "1. Prime"
echo "2. Factorial"
ch='y'
while ((ch=='y'))
do
	echo "Enter an Option:"
	read n
	case $n in 
	1) echo "Enter a Number:"
	read p
	f=0
	for((i=2;i<p;i++))
	do
		if (( p%i==0 ))
		then
			(( f=f+1 ))
			fi
		done
		
		if (( f==0 ))
		then
			echo "It is Prime."
		else 
			echo "It is Not Prime."
			fi
		echo "Do you want to Continue?"
		read ch;;
	
	
	2) echo "Enter a Number:"
	read f
	fac=1
	for ((i=1;i<=f;i++))
	do 
		(( fac=fac*i ))
	done
	echo $f "Factorial="
	echo $fac
	echo "Do you want to Continue?"
	read ch;;
	
	*) echo "Invalid Choice!" #default choice
	echo -n "Do you want to Continue?"
	read ch;;
	esac #end case
	
done 
