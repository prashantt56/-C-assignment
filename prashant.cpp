#include<stdio.h>
#include"area.h"
int main(){
	int q,w;
	scanf("%d",&q);
	scanf("%d",&w);
	printf("%d",tri(q,w));
	printf("\n");
	printf("%d",squ(q));
	printf("\n");
    printf("%d",rec(q,w));
 


}
