#include <stdio.h>
static int s=1;
int e(int n, int x)
{
    if(n==0)
    {
        return s;
    }
    else
    {
        s=1+(x/n)*s;
    }
    return e(n-1,x);
}
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    printf("%d",e(x,n));
}