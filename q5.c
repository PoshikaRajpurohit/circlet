#include<stdio.h>
main()
{
	int i,j,k,l,m;
	for(i=5;i>=1;i--)
	{
		for(l=i;l>1;l--)
		{
			printf(" ",l);
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		for(k=4;k>=i;k--)
		{
			printf("%d",k);
		}
		
		printf("\n");
	}
}