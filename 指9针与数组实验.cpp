//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int parseHex(const char* const hexString) {
//    int hexNumber = 0;
//    for (const char* p = hexString; *p; ++p) {
//        if (*p >= '0' && *p <= '9') {
//            hexNumber = hexNumber * 16 + (*p - '0');
//        }
//        else if (*p >= 'A' && *p <= 'F') {
//            hexNumber = hexNumber * 16 + (*p - 'A' + 10);
//        }
//        else if (*p >= 'a' && *p <= 'f') {
//            hexNumber = hexNumber * 16 + (*p - 'a' + 10);
//        }
//        else {
//            cout << "Invalid hexadecimal character: " << *p << endl;
//            return -1;
//        }
//    }
//    return hexNumber;
//}
//
//int main() {
//    const char* hexString = "A5";
//    int decimalNumber = parseHex(hexString);
//    if (decimalNumber != -1) {
//        std::cout << "Decimal number: " << decimalNumber << std::endl;
//    }
//    return 0;
//}