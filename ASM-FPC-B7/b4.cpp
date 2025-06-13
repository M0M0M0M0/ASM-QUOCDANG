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
		x = temp%10;
		temp /=10;
	}
	printf("So dau tien cua %d la %d",n,x);
}
