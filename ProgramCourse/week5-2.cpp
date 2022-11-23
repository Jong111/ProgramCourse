//#include<iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	int min, max;
//	if (a < b) {
//		min = a;
//		max = b;
//	}
//	else {
//		min = b;
//		max = a;
//	}
//	int res1 = 0;
//	int res2 = 0;
//	for (int i = 1; i <= min; i++) {
//		if (min % i == 0 && max % i == 0) {
//			if (i > res1) {
//				res1 = i;
//			}
//		}
//	}
//	for (int i = max; i <= min * max; i++) {
//		if (i % min == 0 && i % max == 0) {
//			res2 = i;
//			break;
//		}
//	}
//	cout << "Greatest common divisor is " << res1 << endl;
//	cout << "Least common multiple is " << res2 << endl;
//	return 0;
//}