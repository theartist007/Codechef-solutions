#include<iostream>

using namespace std;

int g(int a,int b)
{
	return b?g(b,a%b):a;
}
int main()
{
	int t,n,c=0,k,gcd;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		int a[n];
		for(int j=0;j<n;j++)	scanf("%d",&a[j]);
			gcd=a[0];
		c=0;
		for(k=1;k<=n;k++)
		{
			if(gcd==1)	
			{
				c++;
				printf("0\n");
				break;
			}
			gcd=g(gcd,a[k]);

		}
		if(c==0)	printf("-1\n");
	}
	return 0;
}