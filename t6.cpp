#include<iostream>
using namespace std;

int getPower(int x, int y) {
	int f;
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else
		f = getPower(x, y - 1)*x;
	return f;
}

double GetPower(double x, int y) {
	double f;
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else
		f = GetPower(x, y - 1)*x;
	return f;
}

int main() {
	int a, m;
	double b;
	cout << "�ֱ�����һ������a,��һ��ʵ��b: ";
	cin >> a >> b;
	cout << "\n������һ������m��Ϊָ����";
	cin >> m;
	cout << "\na^m=" << getPower(a, m) << "\nb^m=" << GetPower(b, m) << endl;
}