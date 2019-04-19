#include<iostream>
using namespace std;

class HanXin {
private:
	int l3, l5, l7;
public:
	HanXin() {

	}

	void line3(int n) {
		l3 = n;
	}
	void line5(int n) {
		l5 = n;
	}
	void line7(int n) {
		l7 = n;
	}

	void showMany() {
		int i;
		for (i = 10; i < 101; i++) {
			if (i % 3 == l3) {
				if (i % 5 == l5) {
					if (i % 7 == l7) {
						cout << i<<endl;
						break;
					}
				}
			}
		}
		if (i == 101) {
			cout << "Impossible" << endl;
		}
	}
};


#include <iostream>

int main() {
	int n, n1, n2 , n3;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> n1 >> n2 >> n3;
		HanXin hx;  //韩信
		hx.line3(n1);  //3人一排
		hx.line5(n2);   //5人一排
		hx.line7(n3);   //7人一排
		hx.showMany();
	}
}