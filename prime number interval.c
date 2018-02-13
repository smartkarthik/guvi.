#include<stdio.h>
void main()
{
    int a,b,count,i,j;
    printf("enter the prime interval A and B");
    scanf("%d%d",&a,&b);
    for(i=a+i;i<b;i++)
    {
       int count=0;
    for(j=2;j<i/2;j++)
    {
        if(i%j==0)
        {
            count++;
            break;
        }
    }
}
if(count==0)
{
    printf("%d",i);
}
return 0;
}
