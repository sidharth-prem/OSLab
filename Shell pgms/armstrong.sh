echo "Enter a number:"
read n
a=0
c=0
((temp=$n))
while (($temp>0))
do
	c=$((c+1))
	temp=$((temp/10))
done
	temp=$((n))
while(($temp>0))
do
	d=$((temp%10))
	temp=$((temp/10))
	a=$((a+(d**c)))
done
if((a==n))
then 	
	echo "The number is Armstrong."
else 
	echo "The number is not Armstrong."
fi 
