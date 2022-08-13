#include <stdio.h>
void towerOfHanoi(int n,char a,char b,char c)
{
    if(n>0)
    {
        towerOfHanoi(n-1,a,c,b);
        printf("move %d disk from %c to %c with the help of %c\n",n,a,c,b);
        towerOfHanoi(n-1,b,a,c);
    }
}
int main()
{
    int n;
    printf("enter the number of rings: ");
    scanf("%d",&n);
    towerOfHanoi(n,'a','b','c');
}