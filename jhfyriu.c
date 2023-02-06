echo "1.Area of circle"
echo "2.Area of Rectangle"
echo "3.Area of Square"
echo "4.Area of Pentagon"
echo "enter the choice of operation:-"
read c
case $c in
1)
echo -n "Enter radius of circle:- "
read r
echo -n "Area of circle is :- $carea"
carea= echo "3.14 * $r * $r" | bc
;;
2)
echo -n "Enter Length of Rectangle:- "
read l
echo -n "Enter Breath of Rectangle:- "
read b
rarea=`expr $l \* $b`
echo "Area of Rectagle is:- $rarea"
;;
3)
echo -n "Enter Length of Square:- "
read l
sarea=`expr $l \* $l`
echo "Area of Square is:- $sarea"
;;
4)
echo -n "Enter apothem length of Rectangle:- "
read a
echo -n "Enter side of the Pentagon:- "
read s
echo -n "Area of Pentagon:- "
parea= echo "2.5 * $s * $a" | bc
;;
*)
echo "wrong input"
;;
esac
