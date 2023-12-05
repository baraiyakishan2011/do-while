#include<stdio.h>

main()
{
	int i = 1,n;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	do{
		if(n%2==0){
			printf("%d\n",n);
		}
		n--;
	}while(i<n);
}