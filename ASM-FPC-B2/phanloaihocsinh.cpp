#include <stdio.h>

int main(){
	
	float d;
	printf("Nhap diem hoc sinh: ");
	scanf("%f",&d);
	
	if(d>=9){
		printf("Hoc sinh suat xac");
	}else{
		if(d>=8){
			printf("Hoc sinh gioi");
		}else{
			if(d>=7){
				printf("Hoc sinh kha");
			}else{
				if(d>=5){
					printf("Hoc sinh trung binh");
				}else{
					printf("Hoc sinh yeu");
				}
			}
		}
	}	
}
