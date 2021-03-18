#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a,b,num,countT=0,countF=0,i;
	scanf("%d",&num);
	char a1[num],b2[num];
	scanf("%d",&a);
	scanf("%d",&b);
	itoa(a,a1,10);
	itoa(b,b2,10);
	for(i=0;i<strlen(a1);i++)
	{
		if(a1[i]==b2[i])
		countT++;
		else
		countF++;
	}
	printf("%d %d",countT,countF);
}
