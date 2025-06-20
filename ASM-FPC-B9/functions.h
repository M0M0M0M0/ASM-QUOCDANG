//tim max cua mang n so nguyen
int maxArray(int array[],int n){
	int max=array[0];
		for(int i=0;i<n;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
	return max;
}
//tim min cua mang n so nguyen
int minArray(int array[],int n){
	int min=array[0];
	for(int i=0;i<n;i++){
		if(array[i]<min){
			min=array[i];
		}
	}
	return min;
}
//tich cua a va b
int tich(int a,int b){
	int c = a*b;
	return c;
}
