#include <stdio.h>

int main(){
	int x;
	printf("Nhap so kWh dien: ");
	
	do{
		scanf("%d",&x);
		if(x<0){
			printf("Vui long nhap so kWh dien lon hon 0\n");
		}
	}while(x<0);
	
	int y;
	if(x>200){
		y=50*1678+50*1734+100*2014+(x-200)*2536;
	}else{
		if(x>100){
				y=50*1678+50*1734+(x-100)*2014;
		}else{
			if(x>50){
					y=50*1678+(x-50)*1734;
			}else{
				y=x*1678;
			}
		}
	}
	printf("Tien dien phai tra la %d VND",y);
}
