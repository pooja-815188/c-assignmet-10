#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int i,j,k,c=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            if(k==0 || i==0)

                c=1;

            else
        
                c=c*(i-k+1)/k;
                printf("%d ",c);

        }
        printf("\n");
    }
}
