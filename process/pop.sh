echo "enter your numbers\n"
read r1 r2
echo "what is your name ?"
echo "my name is $1 $2"

echo "you entered values"$r1 $r2 
evenodd(){
p=(11,42,-3,44,225)
k=0
k1=5
for ((c=$r1;c<=$r2;c++))
do
	r=`expr $c % 2`
	if(($r==0))
		then 
			echo "even"
	else
		echo "odd"
	fi
done
while(($k<$k1))
do
	echo ${p[k]}
	((k++))	
done
}
evenodd

