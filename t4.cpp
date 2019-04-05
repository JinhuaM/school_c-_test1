#include<iostream>
using namespace std;

int main(){
	float f,c;
	cout<<"输入一个华氏温度：";
	cin>>f;
	c=(5.0/9.0)*(f-32.0);
	cout<<"转化为摄氏温度为："<<c<<endl;
}