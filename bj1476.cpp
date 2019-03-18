#include <iostream>
#include <algorithm>
using namespace std; 

int main(){
	//input: E S M 
	//output: N
	int E, S, M; 
	int N=1;
	int e=1, s=1, m=1;
	bool flag=true;  
	
	cin >> E; 
	cin >> S; 
	cin >> M; 
	while(flag){
		if(E == e && S==s && M == m){
			flag=false; 
			//printf("%d",N);
			cout << N << endl;
			break;
		}
		e++;
		s++;
		m++;
		
		if(e==16){
			e=1; 
		}
		if(s==29){
			s=1;
		}
		if(m==20){
			m=1;	
		}
		
		N++;
	}
	
	
	
	return 0;
}