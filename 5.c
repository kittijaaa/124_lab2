#include<stdio.h>
int main()
{
    int x,y,i=1,n;
    scanf("%d %d",&x,&y);
    switch(y)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : n = 31; break;
        case 2 : n = 28;break;
        case 4 :
        case 6 :
        case 9 :
        case 11 : n = 30;break;
    }
    while(i < n)
        i+=7;
    i-=7;
    for(i;i<=n;i++)
        x+=1;
    if(x>7)
        x-=7;
    printf("%d",x);
    return 0;
}
