#include <stdio.h>

int main(){
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++){
		printf("Vui long nhap phan tu thu %d vao mang: ",i+1);
		scanf("%d",&ar[i]);
	}
	int min=ar[0],max=ar[0];
	for(int i=0;i<n;i++){
		if(ar[i]>max){
			max=ar[i];
		}
		if(ar[i]<min){
			min=ar[i];
		}
	}
	int x;
	printf("Vui long nhap x = ");
	scanf("%d",&x);
	if(x<=min){
		printf("Gia tri trong mang xa x nhat la %d",max);
	}else if(x>=max){
		printf("Gia tri trong mang xa x nhat la %d",min);
	}else if(max-x>x-min){
		printf("Gia tri trong mang xa x nhat la %d",max);
	}else if(max-x==x-min){
  printf("Cac gia tri trong mang xa x nhat la %d va %d",min,max);
 }else{
		printf("Gia tri trong mang xa x nhat la %d",min);
	}
}
