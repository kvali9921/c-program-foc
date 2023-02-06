echo "Enter total no. of numbers"
read tot
no=0
i=0
num=0
echo "Enter $tot Numbers"
while test $i -lt $tot
do
read no
a[i]=$no
i=`expr $i + 1`
done

echo "DISPLAY NOS"
i=0
while test $i -lt $tot
do
echo ${a[$i]}
i=`expr $i + 1`
done

echo "SQUARE"
i=0
while test $i -lt $tot
do
num=${a[$i]}
for (( j = 0 ; j < $tot ; j++ ))
do
x=${a[$j]}
if test `expr $num \* $num` -eq $x
echo "$x is the square of $num"
fi
j=`expr $j + 1`
done
i=`expr $i + 1`
done

It accepts the nos and displays them too.But later on this error appears,
SQUARE
./m10: line 33: syntax error near unexpected token `fi'
./m10: line 33: ` fi
