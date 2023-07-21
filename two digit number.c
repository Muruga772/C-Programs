#include<Stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=a%1000;
    if(s<a%1000)
    {
        s=a%1000;
    }
    a/=10;
    printf("%d",s);
}
