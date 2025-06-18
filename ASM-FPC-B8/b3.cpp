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
	printf("Doan [%d,%d] chua tat ca cac gia tri trong mang.",min,max);
}
