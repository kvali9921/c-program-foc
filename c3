QUESTION-11:- Summing up any n numbers,average

#include<stdio.h>
 int main()
 {
 	int i,n,sum=0,numbers;
 	float average;
 	
 	printf("enter the range numbers(end limit):\n");
 	 scanf("%d",&n);
 	 printf("\enter the elementsone by one:\n");
 	 for(i=0;i<n;++i)
 	 {
	  scanf("%d",&numbers);
	sum += numbers;
}
   average = sum/n;
   printf("\nsum of the %d numbers =%d",n,sum);
   printf("\naverage of the %d numbers=%f",n, sum);
   return 0;
   
}

OUTPUT:-

enter the range numbers(end limit):
2
ter the elementsone by one:
3
1

sum of the 2 numbers =4
average of the 2 numbers=0.000000
