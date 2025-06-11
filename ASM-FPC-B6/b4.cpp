#include <stdio.h>

int main(){
	int n=0;
	int sdn=0;
	int temp=0;
	printf("Vui long nhap n = ");
	scanf("%d",&n);
	while(n>0){
		temp = n % 10;
		sdn = sdn * 10 + temp;
		n /= 10;
	}
	printf("So dao nguoc la %d",sdn);
}
