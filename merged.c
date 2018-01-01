#include<stdio.h>
#include<conio.h>

main(void)
{
	int a[20], n, m, b[20], i, j, k, o, c[50];
	printf("enter the size of first array\n");
	scanf("%d", &n);
	printf("enter the element of first array\n\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		
	}
	printf("enter the size of the second array\n\n");
	scanf("%d", &m);
	printf("enter the element of the second array\n\n");
	for(i=0; i<m; i++)
	{
		scanf("%d", &b[i]);
		
	}
	o=m+n;
	
	for(i=0; i<n; i++)
	{
		a[i]=c[i];
		
	}
	for(j=0; j<o; j++)
	{
		b[j]=c[j+5];
	}
	printf("element of merged array\n\n");
	
	for(k=0; k<o; k++)
	{
		printf("%d\n", c[k]);
		
	}
	getch();
}
