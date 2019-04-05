#include<iostream>
using namespace std;

const double PI=3.14159265358979;

inline double c(double r){
	return PI*r*r;
}

inline double v(double r){
	return PI*(4/3)*r*r*r;
}

int main(){
	double r=3.0;
	double a=c(r);
	double b=v(r);
	cout<<a<<"   "<<b<<endl;
	return 0;
}