#include <stdio.h>

int main(){
	int n=0;
	int i=0;
	printf("Vui long nhap n = ");
	scanf("%d",&n);
	if(n<=1){
		printf("Khong co so le nao nho hon n.");
	}else{
		printf("So le nho hon n bao gom: ");
		do{
			if(i%2==1){
				printf("%d ",i);
			}
			i++;
		}while(i<n);
	}
}
