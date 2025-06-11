#include <stdio.h>

int main(){
	int n=0;
	int i=0;
	int max=0;
	printf("Vui long nhap n = ");
	scanf("%d",&n);
	if(n<6){
		printf("Khong co so nao nho hon n chia het cho ca 2 va 3.");
	}else{
		printf("So nho hon n chia het cho ca 2 va 3 la: ");
		i=n;
		do{			
			i--;
			if(i%6==0){
				max=i;
			}
		}while(max==0);
		printf("%d",max);
	}
}
