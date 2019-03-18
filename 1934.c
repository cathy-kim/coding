#include <stdio.h>

int gcd(int a,int b){
	if(a%b ==0 || b%a ==0){
		if(a>b){
			return b;
		}
		return a; 
	}
	else{
		int r = a%b; 
		gcd(b,r);
	}
}


int main(){
	
	int n=0; 
	int g,m;  
	int a,b; 
	scanf("%d",&n); 
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b); 
		g=gcd(a,b);
		m=a*b/g; 
		printf("%d\n",m);
	}

	return 0; 
}