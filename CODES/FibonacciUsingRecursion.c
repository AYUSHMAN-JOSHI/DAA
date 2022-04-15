#include<stdio.h>

int fibonacci(int n)
{
    if(n<=1)
        return;
    return (fibonacci(n-1)+fibonacci(n-2));
}

int main()
{
    int n;
    printf("Please input n to get nth term: ");
    scanf("%d",&n);
    printf("%d ",fibonacci(n));
}
