echo -n "Enter your name: ";
read n;

echo -n "Enter your age: ";
read a;

echo -n "Enter current year: ";
read cy;

if((a>50))
	then ((s=a-50));
	((y=cy-s))
	echo -n "You were 50 in the year: ";
	echo $y;

elif((a<50))
	then ((s=50-a));
	((y=cy+s))
	echo -n "You will be 50 in the year: ";
	echo $y;

else
	echo "You are 50 now!!";
fi
