//#include<iostream>
//#include<cstring>
//using namespace std;
//int indexOf(const char* s1,const char* s2);
//int main() {
//	cout << " Please enter the first string : " << endl;
//	string s1;
//	cin >> s1;
//	const char* str1 = NULL;
//	str1 = s1.c_str();
//	cout << " Please enter the second string : " << endl;
//	string s2;
//	cin >> s2;
//	const char* str2 = NULL;
//	str2 = s2.c_str();
//	int a = indexOf(str1, str2);
//	cout << a;
//	system("pause");
//	return 0;
//}
//int indexOf(const char* s1, const char* s2)
//{
//	int a,b, index, j, k;
//	bool s3[] = { false };
//	a = strlen(s1); b = strlen(s2);
//	int i = 0;
//	for (j = 0, k =i; (j < a) && (k < i + a); j++, k++)
//		if (s1[j] == s2[k]) {
//			index = i;
//			s3[j] = true;
//		}
//	int h = 0;
//	for (int n = 0; n < a; n++) {
//		if (s3[n] == false && i == b - a) {
//			return -1;
//			break;
//		}
//		if (s3[n])h++;
//		if (h == a) {
//			h++;
//		}
//		if (h == a) {
//			cout << index << endl;
//			break;
//		}
//	}
////}