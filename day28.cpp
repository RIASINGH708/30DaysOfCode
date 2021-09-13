#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    vector<string> names;
    for(int n = 0; n < N; n++){
        string name, email;
        cin >> name >> email;
        
        if(email.find("@gmail.com") != string::npos){
            names.push_back(name);
        }        
    }
    
    sort(names.begin(), names.end());
    for(auto &s : names){
        cout << s << endl;
    }
    return 0;
}
