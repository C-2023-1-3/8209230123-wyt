//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//bool is_prime(int num) {
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}
//void printPrimeNumber(int numofprime)
//{
//	const int max = 200;
//	const int line = 10;
//	int count = 0;
//	int number = 2;
//	while (count < numofprime)
//	{
//		if (is_prime(number))
//		{
//			count++;
//			if (count % line == 0)
//			{
//				cout << setw(5) << number << endl;
//			}
//			else
//				cout << setw(5) << number;
//		}
//		number++;
//	}
//}
//int main() {
//	cout << "The first 200 prime numbers are \n";
//	printPrimeNumber(200);
//	int m = 0;
//	cout << "请输入一个数：";
//	cin >> m;
//	if (is_prime(m))
//		cout << "是素数";
//	else
//		cout << "不是素数";
//	return 0;
//}
