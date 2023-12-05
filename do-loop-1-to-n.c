#include<stdio.h>

main()
{
	int i = 1,n;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	do{
		printf("%d\n",i);
		i++;
	}while(i<=n);
}