#include<stdio.h>
void towerOfHanoi(int n,char source,char auxiliary,char destination)
{
    if(n<=0)
        return;
    towerOfHanoi(n-1,source,destination,auxiliary);
    printf("Move disc from %c to %c.\n",source,destination);
    towerOfHanoi(n-1,auxiliary,source,destination);
}
int main()
{
    int n;
    printf("Please input no. of discs: ");
    scanf("%d",&n);
    towerOfHanoi(n,'A','B','C');
}
