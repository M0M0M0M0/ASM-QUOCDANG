#include <stdio.h>

int main(){
	int x=0;
	int n;
	do{
		printf("Vui long nhap so nguyen duong n = ");
		scanf("%d",&n);
		if(n<=0) printf("Khong hop le.\n");
	}while(n<=0);
	int temp=n;
	while(temp>0){
		if(x<temp%10){
			x=temp%10;
		}
		temp /=10;
	}
	printf("Chu so lon nhat cua %d la %d",n,x);
}
