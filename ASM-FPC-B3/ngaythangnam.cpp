#include <stdio.h>

int main(){
	int a,b,c;
	/*
	Kiem tra xem ngay thang hop le khong
	1-3-5-7-8-10-12  31 ngay
	4-6-9-11         30 ngay
	T2               28-29 ngay tuy nam nhuan hay khong
	*/	
	int nn;
	do{
		printf("Nhap ngay a = ");
		scanf("%d",&a);
		printf("Nhap thang b = ");
		scanf("%d",&b);
		printf("Nhap nam c = ");
		scanf("%d",&c);
		nn = (c%4==0 && (c%100!=0 || c%400==0) );
		if( (a==31 && (b==2 || b==4 || b==6 || b==9 || b==11))	||	 (a==30 && b==2)	  || 	(a==29 && b==2 && !nn ) || a<=0 || a>31 || b<=0 || b>=13 || c<=0 ){
			printf("Ngay thang nam khong hop le! Vui long nhap lai:\n");
		}
	} while( (a==31 && (b==2 || b==4 || b==6 || b==9 || b==11))	||	 (a==30 && b==2)	  || 	(a==29 && b==2 && !nn ) || a<=0 || a>31 || b<=0 || b>=13 || c<=0 );
	// Truong hop la ngay 31
	if(a==31  && (b==1 || b==3|| b==5 || b==7 || b==8 || b==10 )) {
		a=1;
		b++;
	}else{
		if(a==31 && b==12){
			//Chuyen sang nam moi neu la ngay cuoi nam
			a=1;
			b=1;
			c++;
		}else{
			//Truong hop la ngay 30
			if(a==30 && (b==4 || b==6 || b==9 || b==11)) {
				a=1;
				b++;
			}else{
				//28 29 thang 2
				if( (a==28 && b==2 && !nn) || (a==29 && b==2) ) {
					a=1;
					b++;
				}else{
					a++;
				}
			}
		}
	}
	printf("Ngay mai la ngay %d thang %d nam %d",a,b,c);
}

