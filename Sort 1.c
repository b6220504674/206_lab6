#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char k[n][1000],temp[1000];
    for(i=0;i<n;i++)
    {
        scanf("%s",k[i]);
    }
for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(k[i],k[j])>0);
            {
                strcpy(temp,k[i]);
                strcpy(k[i],k[j]);
                strcpy(k[j],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",k[i]);
    }
return 0;
}
