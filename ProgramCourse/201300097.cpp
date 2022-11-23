#include<iostream>
#include<fstream>
#include<string>

using namespace std;

typedef struct {
	string stuId;
	string name;
	string gender;
	string hometown;
	string birthday;
} stu;


int main() {
	stu stus[20];
	ifstream f;
	f.open("d:\\student.txt", ios::in);
	if (!f) {
		cout << "Error: Failed to open the file" << endl;
		exit(-1);
	}
	f >> stus[0].stuId;
	while (!f.fail()) {
		f >> stus[0].name;
		f >> stus[0].gender;
		f >> stus[0].hometown;
		f >> stus[0].birthday;
		for (int i = 1; i < 20; i++) {
			f >> stus[i].stuId;
			f >> stus[i].name;
			f >> stus[i].gender;
			f >> stus[i].hometown;
			f >> stus[i].birthday;
		}
	}
	int tt = 0;
	int cntMale = 0;
	int cntFemale = 0;
	for (int i = 0; i < 20; i++) {
		if (stus[i].gender == "男") {
			cntMale++;
		}
		else if (stus[i].gender == "女") {
			cntFemale++;
		}
	}
	cout << "The number of man is " << cntMale << endl;
	cout << "The number of woman is " << cntFemale << endl;
	int cntNovember = 0;
	for (int i = 0; i < 20; i++) {
		if (stus[i].birthday[5] == '1' && stus[i].birthday[6] == '1') {
			cntNovember++;
		}
	}
	cout << "There are " << cntNovember << " students born in November" << endl;
	while (1) {
		cout << "Now please enter a name to query:" << endl;
		int flag = 0;
		string nameToQuery;
		cin >> nameToQuery;
		for (int i = 0; i < 20; i++) {
			if (stus[i].name == nameToQuery) {
				flag = 1;
				cout << stus[i].stuId << ' ' << stus[i].name << ' ' << stus[i].gender << ' ' << stus[i].hometown << ' ' << stus[i].birthday << endl;
				break;
			}
		}
		if (flag == 0) cout << "没有这个同学的信息" << endl;
		cout << "Would you like to continue query?" << endl;
		cout << "[y/n]?" << endl;
		int end = 0;
		while (1) {
			string ans;
			cin >> ans;
			if (ans[0] == 'y') {
				end = 0;
				break;
			}
			else if (ans[0] == 'n') {
				end = 1;
				break;
			}
			else {
				cout << "Invalid input. Please input your reply again" << endl;
				continue;
			}
		}
		if (end == 0) continue;
		else break;
	}
	for (int i = 0; i < 20; i++) {
		if (stus[i].name == "王宁") {
			stus[i].hometown = "南京";
		}
	}
	ofstream of;
	of.open("d:\\student.txt", ios::out);
	if (!of) {
		cout << "Error: Failed to open the file" << endl;
		exit(-1);
	}

	for (int i = 0; i < 20; i++) {
		of << stus[i].stuId << ' ' << stus[i].name << ' ' << stus[i].gender << ' ' << stus[i].hometown << ' ' << stus[i].birthday << endl;
	}
	f.close();
	cout << "Done: the file \"student.txt\" has been changed" << endl;
	return 0;
}
