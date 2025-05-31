#include <stdio.h>

int main(){
	
	float a;
	printf("Nhap a = ");
	scanf("%f",&a);
	
	float b;
	printf("Nhap b = ");
	scanf("%f",&b);
	
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		float x;
		x = -b/a;
		printf("Phuong trinh co nghiem x = %.2f",x);
	}
}
