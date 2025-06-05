#include <stdio.h>

int main(){
	int x,money;
	printf("Nhap tien luong theo nam: ");
	
	do{
		scanf("%d",&money);
		if(x<0){
			printf("Vui long nhap so tien luong lon hon 0\n");
		}
	}while(x<0);
	x= money - 11000000;
	int y;
	if(money>384000000){
		y=x*0.25;
		printf("Tien thue phai tra la %d VND",y);
	}else if(money>216000000){
		y=x*0.2;
		printf("Tien thue phai tra la %d VND",y);	
	}else if(money>120000000){
		y=x*0.15;
		printf("Tien thue phai tra la %d VND",y);	
	}else if(money>60000000){
		y=x*0.1;
		printf("Tien thue phai tra la %d VND",y);
	}else if(money>11000000){
		y=x*0.05;
		printf("Tien thue phai tra la %d VND",y);
	}else{
		printf("Khong phai nop thue");
	}

}
