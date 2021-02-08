#include<stdio.h>
int main () {
    int a,b,c,i ;
    scanf("%d",&a) ;
    scanf("%d",&b) ;
    scanf("%d",&c) ;
    if(a<=30&&a>=0||b<=30&&b>=0||c<=40&&c>=0){
        i = a+b+c ;
    if(i>=80)
        printf("A") ;
    else if (i>=75&&i<=79)
        printf("B+") ;
    else if (i>=70&&i<=74)
        printf("B") ;
    else if (i>=65&&i<=69)
        printf("C+") ;
    else if (i>=60&&i<=64)
        printf("C") ;
    else if (i>=55&&i<=59)
        printf("D+") ;
     else if (i>=50&&i<=54)
        printf("D") ;
     else if (i>=0&&i<=49)
        printf("F") ;

        }


    return 0 ;
}
