#include<iostream>
using namespace std;
class point {
private:
	int x, y;
public:
	point(int a, int b) {
		this->x = a; this->y = b;
	}
	void setPoint(int i, int j) {
		this->x += i; this->y += j;
	}
	void display() {
		cout << "这点的坐标为：" << "(" << x << "," << y << ")";
	}
};
int main() {
	point p(60, 80);
	int i, j;
	cin >> i >> j;
	p.setPoint(i,j);
	p.display();
	system("pause");
	return 0;
}