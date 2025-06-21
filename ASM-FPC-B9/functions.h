//uoc chung lon nhat
int ucln(int a,int b){
	int uoc;
	for(int i=1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){
			uoc=i;
		}
	}
	return uoc;
}
//boi chung nho nhat
int bcnn(int a,int b){
	int uc = ucln(a,b);
	int bcnn = a*b/uc;
}
//x mu y
int tich(int a,int b){
	int c=1;
	for(int i=0;i<b;i++){
		c *= a;
	}
	return c;
}
//tong cac chu so cua so nguyen n
int tongchuso(int n){
	int	temp=n;
	int tong=0;
	if(temp<0){
		n=-n;
	}
	while(n>0){
		tong += n%10;
		n /= 10;
	}
	return tong;
}
