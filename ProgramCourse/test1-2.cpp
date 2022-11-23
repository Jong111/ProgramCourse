//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int main() {
//	string n1, n2;
//	int res1 = 0;
//	int res2 = 0;
//	cin >> n1 >> n2;
//	for (int i = 1; i < 8; i++) {
//		res1 += (n1[i] - '0') * pow(2, 7 - i);
//		res2 += (n2[i] - '0') * pow(2, 7 - i);
//	}
//	if (n1[0] == '1') {
//		res1 = -res1;
//	}
//	if (n2[0] == '1') {
//		res2 = -res2;
//	}
//	cout << res1 << ' ' << res2 << ' ' << res1 + res2;
//	return 0;
//}