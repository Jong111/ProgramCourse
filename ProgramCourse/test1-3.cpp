//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	vector<int> count;
//	while (1) {
//		int n;
//		cin >> n;
//		count.push_back(n);
//		if (n == -1) break;
//	}
//	vector<int> res;
//	for (int i = 0; i < 5; i++) {
//		res.push_back(count[count.size() - 2 - i]);
//	}
//	int flag = 1;
//	for (int i = 0; i < res.size(); i++) {
//		if (res[i] != 0) {
//			flag = 0;
//			break;
//		}
//	}
//	/*for (int i = 0; i < res.size(); i++) {
//		cout << res[i] << ' ';
//	}*/
//	if (flag == 0) cout << "normal";
//	else cout << "slow";
//	/*for (int i = 0; i < count.size(); i++) {
//		if (count[i] != 0) {
//			cnt = 0;
//			continue;
//		}
//		if (count[i] == 0) {
//			cnt++;
//		}
//		if (cnt == 5) {
//			flag = 1;
//		}
//	}
//	if (flag == 0) cout << "normal";
//	else cout << "slow";*/
//	return 0;
//}