#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool IsPrime(int num){
    if(num==1)
        return false;
    for(int i=2;i<=(int)sqrt(num);i++){
        if(num%i==0)
            return false;
    }    
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        if(IsPrime(num))
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
    }
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
