#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    map<string, int>students;
    string name;
    int mark;
    int x;
    
    cin>>n;
    while (n--)
    {
        cin>>x;
        if (x==1) 
        {
             cin>>name>>mark;
             students[name]+=mark; 
        }
        else if (x==2) 
        {
             cin >> name;
             students.erase(name); 
        }
        else if (x==3)
         {
            cin>>name;
            cout << students[name] << endl; 
         }
    }
    return 0;
}




