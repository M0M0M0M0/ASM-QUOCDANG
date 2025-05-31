#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	printf("Nhap lan luot 3 he so a, b, c cua phuong trinh bac 2: ax^2+bx+c = 0\n");
	do{
		printf("Nhap a = ");
		scanf("%f",&a);
		printf("Nhap b = ");
		scanf("%f",&b);
		printf("Nhap c = ");
		scanf("%f",&c);
		if(a==0 && b==0){
			printf("Vui long nhap it nhat a hoac b khac 0.\n");
		}
	} while (a==0 && b==0);
	float x,x1,x2;
	if(a==0){
		x = -c/b;
		printf("Phuong trinh co 1 nghiem la x = %f",x);
	}else{
		float y;
		y = pow(b,2)-4*a*c;
		if(y<0){
			printf("Phuong trinh vo nghiem");
		}else{
			if(y==0){
				x = -b/(2*a);
				printf("Phuong trinh co 1 nghiem la x = %f",x);
			}else{
				x1 = (-b+sqrt(y))/(2*a);
				x2 = (-b-sqrt(y))/(2*a);
				printf("Phuong trinh co 2 nghiem phan biet la:\n");
				printf("x1 = %.3f\n",x1);
				printf("x2 = %.3f\n",x2);
			}
		}
	}
}
