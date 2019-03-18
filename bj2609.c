#include <cstdio>

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
	int a,b;
	int g,m;  
	scanf("%d %d",&a,&b); 
	g=gcd(a,b);
	m=a*b/g; 


	return 0; 
}