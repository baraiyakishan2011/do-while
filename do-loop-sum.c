#include<stdio.h>

main()
{
	int i = 1,n,sum = 0;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	do{
		sum = sum + i;
		i++;
		
	}while(i<=n);
	
	printf("Sum of 1 to N : %d\n",sum);
}