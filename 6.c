#include<stdio.h>
#include<string.h>
int main(){
	long long x=0;
	char y[10][10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	int c[20];
	int m,k;
	scanf("%lld",&x);
	if(x==0)
        printf("Zero") ;
	for(m=0;x>0;m++){
		c[m]=x%10;
		x=x/10;
	}
	for(m--;m>=0;m--){
		for(k=0;k<10;k++)
			if(c[m]==k)
				printf("%s",y[k]);
			if(m!=0)
				printf("-");
	}
	return 0;
}
