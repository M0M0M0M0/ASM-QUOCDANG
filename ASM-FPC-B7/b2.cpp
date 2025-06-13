#include <stdio.h>

int main(){
	int a,b;
	int uoc,boi;
	do{
		printf("Vui long nhap a va b lon hon 0.\n");
		printf("a = ");
		scanf("%d",&a);
		printf("b = ");
		scanf("%d",&b);
		if(a<=0||b<=0) printf("Khong hop le.\n\n");
	}while(a<=0||b<=0);
	for(int i=1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){
			uoc=i;
		}
	}
	/*
	while(b!=0){
		int temp=a%b;
		a=b
		b=temp;
		
	*/
	boi=a*b/uoc;
	/*
	for(int i=1;i<=a*b;i++){
		if(i%a==0&&i%b==0){
			boi=i;
			break;
		}
	}
	*/
	printf("Boi chung nho nhat cua %d va %d la %d\n",a,b,boi);
	printf("Uoc chung lon nhat cua %d va %d la %d",a,b,uoc);
}
