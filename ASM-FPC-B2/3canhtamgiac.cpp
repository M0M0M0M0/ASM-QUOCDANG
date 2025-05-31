#include <stdio.h>

int main(){
	float a,b,c;
	printf("Nhap lan luot 3 canh cua tam giac.\n");
	do {
		printf("Canh a = ");
		scanf("%f",&a);
		printf("Canh b = ");
		scanf("%f",&b);
		printf("Canh c = ");
		scanf("%f",&c);
		if(a<=0||b<=0||c<=0){
			printf("Vui long nhap 3 canh lon hon 0.\n");
		}
	}while (a<=0||b<=0||c<=0);
	if(a+b>c && a+c>b && b+c>a){
		printf("3 canh co tao thanh tam giac");
	}else{
		printf("3 canh khong tao thanh tam giac");
	}
}
