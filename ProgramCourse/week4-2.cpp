//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string str;
//	getline(cin, str);
//	//cout << str;
//	int n = str.length();
//	if (str[n - 1] != '#') cout << "invalid input";
//	else {
//		int count = 0;
//		for (int i = 0; i < n; i++) {
//			if (str[i] == '>' && i < n - 2) {	//����n-2��ԭ���������ַ�����'#'��β
//				if (str[i + 1] == '=') {
//					count++;
//				}
//			}
//		}
//		cout << count;
//	}
//	return 0;
//}