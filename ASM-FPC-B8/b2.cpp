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
	int temp=0,found=0; 	//temp la khoang cach gan nhat, con found la flag cho second
	int first,second;
	int temp=max-min;	
	for(int i=0;i<n;i++){
		if(ar[i]<x){	//duyet mang tim gia tri gan nhat nho hon x
			if(x-ar[i]<temp){
				temp=x-ar[i];
				first=ar[i];
			}
		}else if(ar[i]==x){ //truong hop x = 1 phan tu trong mang
			first=ar[i];
			break;
		}else{
			if(ar[i]-x<temp){ //duyet mang tim gia tri gan nhat lon hon x && reset dieu kien cua second trong truong hop tim first moi
				temp=ar[i]-x;
				first=ar[i];
				found=0;
			}else if(ar[i]-x==temp){ //truong hop co gia tri gan nhat thu 2
				second=ar[i];
				found=1;
			}
		}
	}
	if(x<=min){
		printf("Gia tri trong mang gan %d nhat la %d",x,min);
	}else if(x>=max){
		printf("Gia tri trong mang gan %d nhat la %d",x,max);
	}else if(found==1){ //check thu xem co co gia tri thu 2 khong
		printf("Cac gia tri gan nhat voi %d la %d va %d",x,first,second);
	}else{
		printf("Gia tri trong mang gan %d nhat la %d",x,first);
	}
	
}
