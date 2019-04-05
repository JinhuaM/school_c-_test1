#include<iostream>
using namespace std;

int MaxY(int a, int b) {
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	if (max%min == 0)
		return min;
	else
		MaxY(min, max%min);
}

int MinG(int a, int b) {
	int n = MaxY(a, b);
	return a * b / n;
}

int main() {
	int a, b;
	cout << "请输入两个整数：";
	cin >> a >> b;
	cout << "这两个整数的最大公因数为：" << MaxY(a, b) << "\n这两个整数的最小公倍数为：" << MinG(a, b) << endl;
}