// bj2309.cpp
#include <iostream>
#include <algorithm>
using namespace std;

void calculator(int* arr,int sum){
	int tmp=0; 
	//int tarr[9] = *arr;
	sort(arr,arr+9);
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){ 
			int flag = sum - arr[i] -arr[j];
			if(flag == 100){
				for(int k=0;k<9;k++){
					if(i==k || j==k) continue;
					cout << arr[k] << '\n';
				}	 
			}
		}
	}
}




int main(){
	int arr[9]; 
	int sum=0; 
	// int i=0; 
	for(int i=0;i<9;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	calculator(arr, sum); 
	
	return 0; 
}