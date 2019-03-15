// 5
// 22220228
// 20150002
// 01010101
// 20140230
// 11111111
//  sw expert academy


#include <cstdio> 

int main(){
	int n, i=0,j=0,sum=0; 
	scanf("%d",&n);  
	int cout=0 
	for(j=0;j<n;j++){
		int a[3]={0,};
		scanf("%4d %2d %2d", &a[0],&a[1],&a[2]); 
		if(a[0]<=0){
			cout = -1; 
		}else if(a[1]<0 || a[1] >12){	
			cout = -1; 
		}else if(a[2]<0 || a[2] >31){
			cout = -1; 
		}

		


	}

	return 0; 
}