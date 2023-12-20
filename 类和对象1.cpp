//#include<iostream>
//using namespace std;
//class Time             // 定义Time类
//{
//private:
//	int hour;
//	int minute;
//	int sec;
//public:
//	void setTime() {
//		int H; int M; int S ;
//		cin >> H;   //输入设定的时间 
//		cin >> M;
//		cin >> S;
//		hour = (H >= 0 && H < 24) ? H: 0;
//		minute = (M >= 0 && M < 24) ? M : 0;
//		sec = (S >= 0 && S < 24) ? S : 0;
//	}
//	void showTime() {
//		cout << "Now time is:" << hour << ":" << minute << ":" << sec;
//	}
//};
//int main()
//{
//	Time t1;//定义t1为Time类对象
//	t1.setTime();
//	t1.showTime();
//	return 0;
//}
////改写程序，要求：
////(1)将数据成员改为私有的；
////(2)将输入和输出的功能改为由成员函数实现；
////(3)在类体内定义成员函数。
////然后编译和运行程序。请分析什么成员应指定为公用的 ? 什么成员应指定为私有的 ? 什么函数最好放在类中定义 ? 什么函数最好在类外定义 ?
