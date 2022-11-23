//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//void PrintCalendar(int n) {
//	if (n > 12 || n < 1) cout << "invalid input" << endl;
//	else {
//		cout << "日" << ' ' << "一" << ' ' << "二" << ' ' << "三" << ' ' << "四" << ' ' << "五" << ' ' << "六" << endl;
//		if (n == 1 || n == 10) {
//			int flag1 = 0;
//			int flag2 = 0;
//			cout << setw(20) << 1 << endl;
//			for (int i = 2; i <= 29; i++) {
//				if (i >= 2 && i <= 8) {
//					if (flag1 == 0) {
//						cout << ' ';
//						flag1 = 1;
//					}
//					cout << i << "  ";
//					if (i == 8) cout << endl;
//				}
//				else {
//					if (flag2 == 0) {
//						cout << ' ';
//						flag2 = 1;
//					}
//					cout << i << ' ';
//					if ((i - 1) % 7 == 0) cout << endl;
//				}
//			}
//			cout << 30 << ' ' << 31;
//		}
//
//		else if (n == 2) {
//			int flag1 = 0;
//			string str1 = "1  2  3  4  5";
//			cout << setw(20) << str1 << endl;
//			for (int i = 6; i <= 26; i++) {
//				if (i >= 6 && i <= 8) {
//					if (flag1 == 0) {
//						cout << ' ';
//						flag1 = 1;
//					}
//					cout << i << "  ";
//				}
//				else {
//					cout << i << ' ';
//					if ((i - 5) % 7 == 0) cout << endl;
//				}
//			}
//			cout << 27 << ' ' << 28;
//		}
//
//		else if (n == 3) {
//			int flag1 = 0;
//			string str1 = "1  2  3  4  5";
//			cout << setw(20) << str1 << endl;
//			for (int i = 6; i <= 26; i++) {
//				if (i >= 6 && i <= 8) {
//					if (flag1 == 0) {
//						cout << ' ';
//						flag1 = 1;
//					}
//					cout << i << "  ";
//				}
//				else {
//					cout << i << ' ';
//					if ((i - 5) % 7 == 0) cout << endl;
//				}
//			}
//			cout << 27 << ' ' << 28 << ' ' << 29 << ' ' << 30 << ' ' << 31;
//		}
//
//		else if (n == 4) {
//			int flag1 = 0;
//			string str1 = "1  2";
//			cout << setw(20) << str1 << endl;
//			for (int i = 3; i <= 30; i++) {
//				if (i >= 3 && i <= 9) {
//					if (flag1 == 0) {
//						cout << ' ';
//						flag1 = 1;
//					}
//					cout << i << "  ";
//					if ((i - 2) % 7 == 0) cout << endl;
//				}
//				else {
//					cout << i << ' ';
//					if ((i - 2) % 7 == 0) cout << endl;
//				}
//			}
//		}
//
//		else if (n == 5) {
//			int flag1 = 0;
//			int flag2 = 0;
//			for (int i = 1; i <= 28; i++) {
//				if (i >= 1 && i <= 7) {
//					if (flag1 == 0) {
//						cout << ' ';
//						flag1 = 1;
//					}
//					cout << i << "  ";
//					if ((i % 7) == 0) cout << endl;
//				}
//				else {
//					if (flag2 == 0) {
//						cout << ' ';
//						flag2 = 1;
//					}
//					if (i == 8) {
//						cout << i << "  ";
//					}
//					else cout << i << ' ';
//					if (i % 7 == 0) cout << endl;
//				}
//			}
//			cout << 29 << ' ' << 30 << ' ' << 31;
//		}
//
//		else if (n == 6) {
//			int flag1 = 0;
//			string str1 = "1  2  3  4";
//			cout << setw(20) << str1 << endl;
//			for (int i = 5; i <= 25; i++) {
//				if (i >= 5 && i <= 8) {
//					if (flag1 == 0) {
//						cout << ' ';
//						flag1 = 1;
//					}
//					cout << i << "  ";
//					if ((i - 4) % 7 == 0) cout << endl;
//				}
//				else if (i >= 9 && i <= 11) {
//					cout << i << ' ';
//					if ((i - 4) % 7 == 0) cout << endl;
//				}
//				else {
//					cout << i << ' ';
//					if ((i - 4) % 7 == 0) cout << endl;
//				}
//			}
//			cout << 26 << ' ' << 27 << ' ' << 28 << ' ' << 29 << ' ' << 30;
//		}
//
//		else if (n == 7) {
//			cout << setw(20) << "1  2" << endl;
//			cout << " 3  4  5  6  7  8  9" << endl;
//			cout << "10 11 12 13 14 15 16" << endl;
//			cout << "17 18 19 20 21 22 23" << endl;
//			cout << "24 25 26 27 28 29 30" << endl;
//			cout << 31;
//		}
//
//		else if (n == 8) {
//			cout << setw(20) << "1  2  3  4  5  6" << endl;
//			cout << " 7  8  9 10 11 12 13" << endl;
//			cout << "14 15 16 17 18 19 20" << endl;
//			cout << "21 22 23 24 25 26 27" << endl;
//			cout << "28 29 30 31";
//		}
//
//		else if (n == 9) {
//			cout << setw(20) << "1  2  3" << endl;
//			cout << " 4  5  6  7  8  9 10" << endl;
//			cout << "11 12 13 14 15 16 17" << endl;
//			cout << "18 19 20 21 22 23 24" << endl;
//			cout << "25 26 27 28 29 30";
//		}
//
//		else if (n == 11) {
//			cout << setw(20) << "1  2  3  4  5" << endl;
//			cout << " 6  7  8  9 10 11 12" << endl;
//			cout << "13 14 15 16 17 18 19" << endl;
//			cout << "20 21 22 23 24 25 26" << endl;
//			cout << "27 28 29 30";
//		}
//
//		else if (n == 12) {
//			cout << setw(20) << "1  2  3" << endl;
//			cout << " 4  5  6  7  8  9 10" << endl;
//			cout << "11 12 13 14 15 16 17" << endl;
//			cout << "18 19 20 21 22 23 24" << endl;
//			cout << "25 26 27 28 29 30 31";
//		}
//	}
//}
//
//int main() {
//	int n;
//	cout << "Please input a month n" << endl;
//	cin >> n;
//	PrintCalendar(n);
//	return 0;
//}