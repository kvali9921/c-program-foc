QUESTIO-21:- Binary to decimal
 
#include<stdio.h>
int main()
{
	int num, binary, decimal=0, base=1, rem;
	printf("enter a binary number: ");
	scanf("%d", &num);
	binary=num;
	while(num > 0)
	{
		rem=num % 10;
		decimal+=rem*base;
		num/=10;
		base*=2;
	}
	printf("the decimal value for the given number is: %d", decimal);
}

OUTPUT:-
enter a binary number: 12
the decimal value for the given number is: 4
