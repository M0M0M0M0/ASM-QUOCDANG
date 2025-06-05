#include <stdio.h>

int main(){
	int x,money;
	printf("Nhap tien luong theo thang: ");
	
	do{
		scanf("%d",&money);
		if(x<0){
			printf("Vui long nhap so tien luong lon hon 0\n");
		}
	}while(x<0);
	x= money - 11000000; //x = thu nhap tinh thue
	int y;
	if(x>52000000){
		y=(5*5000000/100+10*5000000/100+8000000*15/100+14000000*20/100+20000000*25/100+(x-52000000)*0.25;
		printf("Tien thue phai tra la %d VND",y);
	}else if(x>32000000){
		y=x*(5*5000000/100+10*5000000/100+8000000*15/100+14000000*20/100+(x-32000000)*0.2;
		printf("Tien thue phai tra la %d VND",y);	
	}else if(x>18000000){
		y=x*(5*5000000/100+10*5000000/100+8000000*15/100+(x-18000000)*0.15);
		printf("Tien thue phai tra la %d VND",y);	
	}else if(x>10000000){
		y=x*(5*5000000/100+10*5000000/100+(x-10000000)*0.1);
		printf("Tien thue phai tra la %d VND",y);
	}else if(x>5000000){
		y=x*(5*5000000/100+(x-5000000)*0.05);
		printf("Tien thue phai tra la %d VND",y);
	}else{
		printf("Khong phai nop thue");
	}

}
