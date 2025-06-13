#include <stdio.h>

int main(){
	int tong=0;
	int n;
	int temp;
	printf("Vui long nhap so nguyen n = ");
	scanf("%d",&n);
	if(n<0){
		temp=-n;
	}else{
		temp=n;
	}
	while(temp>0){
		tong += temp%10;
		temp /=10;
		printf("%d\n",tong);
	}
	printf("Tong cac chu so cua %d la %d",n,tong);
}
