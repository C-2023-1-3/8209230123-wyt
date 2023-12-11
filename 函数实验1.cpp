//#include<iostream>
//using namespace std;
//int gys(int num1, int num2) {
//	int i = 1;
//	int k = 1;
//	while (i <= num1 && i <= num2) {
//		if (num1 % i == 0 && num2 % i == 0)
//			k = i;
//			i++;
//	}
//	return k;
//}
//int gbs(int num3, int num4) {
//	int k = 1;
//	for (int i = 2; i <= num3 && i <= num4; i++) {
//		if (num3 % i == 0 && num4 % i == 0)
//			k = i;
//	}
//	int h = num3 * num4 / k;
//	return h;
//}
//int main() {
//	int m ; int n ;
//	cout << "请输入两个整数："<<endl;
//	cout << "m=";
//	cin >> m;
//	cout << "n=" ;
//	cin >> n;
//	cout << "m,n的最大公约数为：" << gys(m, n)<<endl;
//	cout << "m,n的最小公倍数为：" << gbs(m, n)<<endl;;
//	return 0;
//}