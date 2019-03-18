#include <iostream>
using namespace std;
  
int gcd(int a, int b){
    if (b == 0) return a;
    else return gcd(b, a%b);
}
  
int main(){
    int arr[101][101];
    long sum = 0;
    int a, num;
  
    cin >> num;
    for (int i = 1; i <= num; i++){
        cin >> a;
        for (int j = 1; j <= a; j++){
            cin >> arr[i][j];
        }
        for (int j = 1; j <= a-1; j++){
            for (int k = j + 1; k <= a; k++)
            sum += gcd(arr[i][j], arr[i][k]);
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
