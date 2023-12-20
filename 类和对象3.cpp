//#include<iostream>
//using namespace std;
//class Cube {
//	public:
//		void setL(int l) {
//			m_L = l;
//		}
//		int getL() {
//			return m_L;
//		}
//		void setW(int w) {
//			m_W = w;
//		}
//		int getW() {
//			return m_W;
//		}
//		void setH(int h) {
//			m_H = h;
//		}
//		int calculateV() {
//			return m_L * m_W * m_H;
//		}
//	private:
//		int m_L;
//		int m_W;
//		int m_H;
//	};
//	int main() {
//		Cube c1,c2,c3;
//		int L1, W1, H1;
//		int L2, W2, H2;
//		int L3, W3, H3;
//		cin >> L1 >> W1 >> H1;
//		cin >> L2 >> W2 >> H2;
//		cin >> L3 >> W3 >> H3;
//		c1.setL(L1);
//		c1.setW(W1);
//		c1.setH(H1);
//		c2.setL(L2);
//		c2.setW(W2);
//		c2.setH(H2);
//		c3.setL(L3);
//		c3.setW(W3);
//		c3.setH(H3);
//		cout << "c1的体积为:" << c1.calculateV();
//		cout << "c2的体积为:" << c1.calculateV();
//		cout << "c3的体积为:" << c1.calculateV();
//	}