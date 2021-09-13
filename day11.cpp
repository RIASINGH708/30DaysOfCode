#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int A[6][6];
    int maxSum = INT_MIN;
    
    for(int i = 0;i < 6;i++){
       for(int j = 0;j < 6;j++){
          cin >> A[i][j];
       }
    }
    
    for(int i = 2; i < 6;i++){
        for(int j = 2;j < 6;j++){
            int sum = A[i-2][j-2] + A[i-2][j-1] + A[i-2][j] 
                                  + A[i-1][j-1] 
                    + A[i][j-2]   + A[i][j-1]   + A[i][j];
            if (sum > maxSum){
                maxSum = sum;
            }
        }
    }
    
    cout << maxSum << endl;
    return 0;
}
