#include <stdio.h>

int main(){
	int n=0;
	int i=1;
	int tong=0;
	printf("Vui long nhap n = ");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			tong += i;
		}
		i++;
	}
		printf("Tong cac uoc cua n la %d",tong);
}
