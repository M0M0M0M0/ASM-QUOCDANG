#include <stdio.h>

int main(){
	int x;
	printf("Nhap tien luong theo nam: ");
	
	do{
		scanf("%d",&x);
		if(x<0){
			printf("Vui long nhap so tien luong lon hon 0\n");
		}
	}while(x<0);
	
	int y;
	if(x>384000000){
		y=(x-11000000)*0.25;
		printf("Tien thue phai tra la %d VND",y);
	}else{
		if(x>216000000){
				y=(x-11000000)*0.2;
				printf("Tien thue phai tra la %d VND",y);	
		}else{
			if(x>120000000){
					y=(x-11000000)*0.15;
					printf("Tien thue phai tra la %d VND",y);	
			}else{
				if(x>60000000){
					y=(x-11000000)*0.1;
					printf("Tien thue phai tra la %d VND",y);
				}else{
					if(x>11000000){
						y=x*0.05;
						printf("Tien thue phai tra la %d VND",y);
					}else{
						printf("Khong phai nop thue");
					}
				}
			}
		}
	}

}
