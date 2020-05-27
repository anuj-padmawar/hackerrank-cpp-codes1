#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int q,op,i;
    
    cin>>q;
    while (q--)
    {
        cin>>op>>i;
        switch (op) 
        {
            case 1: 
             s.insert(i); 
             break;
            case 2: 
             s.erase(i); 
             break;
            case 3:
             cout<<(s.count(i)!=0 ? "Yes" : "No") << endl;    
        }
    }
    return 0;
}




