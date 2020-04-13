#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector <int> v;
int c,t;
cin>>c;

while (c--)
    {
    cin>>t;
    v.push_back(t);
    }

cin>>c;
v.erase(v.begin()+c-1);

cin>>c>>t;
v.erase(v.begin()+ c-1, v.begin()+ t-1);

cout<<v.size()<<"\n";
auto x=v.end();

for (auto i=v.begin();i!=x;i++)
    {
    cout<<*i<<" ";
    }
return 0;
}

