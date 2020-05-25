#include <stdio.h>
#include<stdlib.h>
int main()
{
    int* prime;
    int n,i,j,t=1,k=5;
    
    printf("Enter the value of n:");
    scanf("%d",&n);
    prime = (int*)calloc(5, sizeof(int)); 
    prime[0]=2, prime[1]=3, prime[2]=5, prime[3]=7, prime[4]=11;
    for(i=12;i<=n;i++)
    {
        int flag=1;
        for(j=0;j<k;j++)
        {
             if((i%prime[j])==0)
                {   flag=0;
                    break;
                }
        }
                if (flag==1)
                {
                    prime[k]=i;
                 k++;
                }
    }
    printf("The prime numbers in range (1-%d) are:",n);
    printf(" %d ",prime[0]);
    while(t<k)
    {
        printf(", %d ",prime[t]);
        t++;
    }
}


