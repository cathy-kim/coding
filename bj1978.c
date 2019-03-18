#include <cstdio> 

bool sosu(int n){
	if(n==1){
		return false;
	}else if(n>1){
 		for(int i=2;i*i<=n;i++){
	        if(n%i==0){
	            return false; 
		        }
	    }
    	return true; 
	}
}

int main(){
    int n=0,count=0; 
    scanf("%d",&n); 
    for(int i=0;i<n;i++){
    	int m;
        scanf("%d",&m);
        if(sosu(m)){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}