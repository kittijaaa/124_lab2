#include<stdio.h>
int main ()
{
    int i,m ;
    char a ;
    scanf("%c",&a) ;
    scanf("%d",&i) ;
    if(i<=31&&i>=1)
    {
        if(i%2==1)
        {
            if(i%5==0&&i%10!=0)
                printf("%c",92) ;
            if(a>='A'&&a<='I')
                printf("(^_^)") ;
            else if(a>='J'&&a<='R')
                printf("(*o*)") ;
            else if(a>='S'&&a<='Z')
                printf("(T_T)") ;
            if(i%5==0&&i%10!=0)
                printf("/") ;
        }
        else if(i%2==0)
        {
            if(a>='A'&&a<='I')
                printf("{@_@}") ;
            else if(a>='J'&&a<='R')
                printf("{*v*}") ;
            else if(a>='S'&&a<='Z')
                printf("{x_x}") ;
        }

    }
        return 0 ;
}
