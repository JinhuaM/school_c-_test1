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
	cout << "����������������";
	cin >> a >> b;
	cout << "�������������������Ϊ��" << MaxY(a, b) << "\n��������������С������Ϊ��" << MinG(a, b) << endl;
}