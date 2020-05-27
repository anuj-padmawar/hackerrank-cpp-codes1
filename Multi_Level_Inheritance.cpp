#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};

class Equilateral : public Triangle{
      public:
          void equilateral(){
            cout<<"I am an equilateral triangle\n";
          }
};


//Write your code here.

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    Isosceles x;
    x.isosceles();
    eqr.triangle();
    return 0;
}

