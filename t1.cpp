#include<iostream>
using namespace std;

bool narcissus(int i){
	int a,b,c;
	a=i/100;
	b=(i-a*100)/10;
	c=i%10;
	return i==a*a*a+b*b*b+c*c*c;
}

int main(){
	int n;
	cin>>n;
    int i;
	for (i=100;i<n;i++)
		if(narcissus(i))
			cout<<i<<endl;
}