#include<stdio.h>
int main()
{
    int a,b,c,i,x;
    char n[5];
    int v[5];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    if(a>c){
        x=a;
        a=c;
        c=x;
    }
    if(b>c){
        x=b;
        b=c;
        c=x;
    }
    scanf("%s",n);
    for(i=0; i<3; i++)
    {
        if(n[i]=='A')
            v[i]=a;
        else if(n[i]=='B')
            v[i]=b;
        else if(n[i]=='C')
            v[i]=c;
    }
    printf( "%d %d %d", v[0], v[1], v[2] );
    return 0;
}
