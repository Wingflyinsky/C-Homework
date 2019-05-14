#include<iostream>
#include<string>
using namespace std;


class Table {
private:
	int row;
	int column;
	string grid[50][50];
public:
	Table() {
		row = 5;
		column = 5;
	}
	Table(int r,int c) {
		row = r;
		column = c;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				grid[i][j] = " ";
			}
		}
	}
	void addRow() {
		row++;
		for (int j = 0; j < column; j++) {
			grid[row][j] = " ";
		}
	}
	
	void addColumn() {
		column++;
		for (int i = 0; i < row; i++) {
			grid[i][column] = " ";
		}
	}

	void delRow(int r) {
		for (int i = r-1; i < row; i++) {
			for (int j = 0; j < column; j++) {
				grid[i][j] = grid[i + 1][j];
			}
		}
		row--;
	}

	void delColumn(int c) {
		for (int i = 0; i < row; i++) {
			for (int j = c-1; j < column; j++) {
				grid[i][j] = grid[i][j+1];
			}
		}
		column--;
	}
	
	void set(int r,int c,string s) {
		grid[r - 1][c - 1] = s;
	}

	void set(int r, int c, int s) {
		grid[r - 1][c - 1] = to_string(s);
	}

	void set(int r, int c, double s) {
		grid[r - 1][c - 1] = to_string(s);
	}

	void show() {
		for (int j = 0; j < column; j++) {
			cout <<'\t'<< j + 1 << '\t';
		}
		cout << endl;
		for (int i = 0; i < row; i++) {
			cout << i + 1 << "\t";
			for (int j = 0; j < column; j++) {
				cout << grid[i][j]<<"\t\t";
			}
			cout << endl;
		}
	}
};

int main() {
	Table tb;
	tb.show();
	tb.addRow();
	tb.show();
	tb.addColumn();
	tb.show();
	Table tb1(5, 5);
	tb1.show();
	tb1.set(1, 1, 30);
	tb1.set(2, 2, "hello");
	tb1.show();
	tb1.delRow(1);
	tb1.show();
	tb1.delColumn(1);
	tb1.show();
	return 0;
}