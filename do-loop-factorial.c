#include<stdio.h>

main()
{
	int i = 1,n,f;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	do{
		f = f * i;
		i++;
		
	}while(i<=n);
	
	printf("The factorial of %d is %d\n",n,f);
}