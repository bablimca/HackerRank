#include <stdio.h>
#include <stdlib.h>

int main()
{
    int candy(int [],int);
    int a[20],n,i;
    printf("Enter the no of students should be less than 20:");
    scanf("%d",&n);
    printf("Enter the grade of each student:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",candy(a,n));
    return 0;
}
int candy(int a[],int n)
{
    int c[20],i;
    long sum=0;
    for(i=0;i<n;i++)
        c[i]=1;
    for(i=0;i<n;i++)
    {
        if(a[i+1]>a[i])
        {
            c[i+1]=c[i]+1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",c[i]);
    printf("\n");
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>a[i+1])
        {
            if(c[i]<=c[i+1])
            c[i]=c[i+1]+1;
        }
    }
    for(i=0;i<n;i++)
        {
            sum=sum+c[i];
            printf("%d ",c[i]);
        }
    return sum;

}
