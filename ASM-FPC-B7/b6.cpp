#include <stdio.h>

int main(){
	int n;
	int x=0;
	do{
		printf("Vui long nhap so nguyen duong n = ");
		scanf("%d",&n);
		if(n<=0) printf("Khong hop le.\n");
	}while(n<=0);
	int temp=n;
	while(temp>0){
		if((temp%10)%2==0){
			x=1;
		}
		temp /=10;
	}
	if(x==0){
		printf("So %d toan chu so le.",n);
	}else{
		printf("So %d khong phai toan chu so le.",n);
	}
}
