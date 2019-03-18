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
g=gcd(a,b);
			m=a*b/g; 
			printf("%d\n",m);


int main(){
	
	int t=0; 
	int g,m;  
	int a,b; 
	scanf("%d",&t); 
	for(int i=0;i<t;i++){
		int n=0; 
		scanf("%d",&n); 
		int arr[n]={0,};
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]); 
		}
		for(int p=0;p<n;p++){
			for(int q=0;q<p;q++){
				
			}
		}
	}

	return 0; 
}