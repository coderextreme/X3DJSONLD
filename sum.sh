sum=0
while read err
do
	sum=`expr $sum + $err`
done
echo $sum
	
