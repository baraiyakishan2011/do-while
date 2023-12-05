#include<stdio.h>

main()
{
	
	int i = 1,n;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	do{
		if(i%2==1){
			printf("%d\n",i);
		}
		i++;
	}while(i<=n);
}