
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,k=0,count=0,r,c=0;
    cin >> n;
    while(n>0)
        {
        r=n%2;
        if(r==1)
            count++;
        else
            {if(count>k)
                k=count;
            count=0;}
        n=n/2;
        
    }c=count;
    if(c>k)
    cout<<c;
    else
        cout<<k;
    return 0;
}
