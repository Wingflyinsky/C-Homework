#include<iostream>
using namespace std;

class Number {
private:
	int num;
	int sys;
public:
	Number(int n, int s) {
		this->num = n;
		this->sys = s;
	}
	Number converto(int n) {
		Number temp(this->num, n);
		return temp;
	}
	void show() {
		int a[10];
		int temp = this->num;
		int size=0;
		for (size; temp >= this->sys; size++) {
			a[size] = temp % this->sys;
			temp = temp / this->sys;
		}
		a[size] = temp;
		for (int i = size; i >= 0; i--) {
			cout << a[i];
		}
		cout << endl;
	}
};

int main() {
	int n, n1, n2;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2;
		Number no1(n1, 10);     //n1是10进制正整数
		Number no3 = no1.converto(n2);  //no3是n2进制的正整数
		no3.show();     //输出结果
	}
}