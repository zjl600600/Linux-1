#include <stdio.h>
#include <string.h>
int p(char a[][1000],int n)
{
    char b[1000];
	for(int i=0;i<n-1;i++)
	{
		int k=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
				k=1;
			}
		}
		if(k==0)
			break;
	}
}	
int main()
{
	int n;
	printf("Please enter n strings\nn=");
	scanf("%d",&n);
	char a[n][1000];
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);

	}
	printf("Before sorting.\n");
	for(int i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}

	printf("After sorting.\n");
	p(a,n);
	for(int i=0;i<n;i++)
	{
	  printf("%s\n",a[i]);
	}
	return 0;
}
