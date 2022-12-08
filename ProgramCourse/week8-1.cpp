#include<iostream>

using namespace std;


struct node {
	int v;
	node* next;
};


node* createList(int n) {
	int flag = 0;
	node* p = nullptr;
	node* curr = nullptr;
	for (int i = 0; i < n; i++) {
		if (flag == 0) {
			flag = 1;
			curr = new node;
			int val;
			cin >> val;
			curr->v = val;
			curr->next = nullptr;
			p = curr;
		}
		else {
			node* tmp = new node;
			int val;
			cin >> val;
			tmp->v = val;
			tmp->next = nullptr;
			curr->next = tmp;
			curr = curr->next;
		}
	}
	return p;
}


void display(node* p) {
	if (!p) {
		cout << "This is an empty set" << endl;
	}
	else {
		node* curr = p;
		while (curr != nullptr) {
			cout << curr->v << ' ';
			curr = curr->next;
		}
	}
	cout << endl;
}


node* listCopy(node* p) {
	int flag = 0;
	if (!p) return nullptr;
	node* curr = p;
	node* res = new node;
	res->v = curr->v;
	res->next = nullptr;
	node* rescurr = res;
	while (curr) {
		if (flag == 0) {
			flag = 1;
			curr = curr->next;
		}
		else {
			node* tmp = new node;
			tmp->v = curr->v;
			tmp->next = nullptr;
			rescurr->next = tmp;
			rescurr = rescurr->next;
			curr = curr->next;
		}
	}
	return res;
}


node* unionSet(node* p1, node* p2) {
	if (!p1 && !p2) return nullptr;
	node* p11 = listCopy(p1);
	node* p22 = listCopy(p2);
	node* res = new node;
	node* head = p11;
	while (p11->next != nullptr) {
		p11 = p11->next;
	}
	p11->next = p22;
	res = head;
	return res;
}


int in(int n, node* p) {
	if (p == nullptr) {
		return -1;
	}
	node* curr = p;
	while (curr != nullptr) {
		if (curr->v == n) {
			return 1;
		}
		curr = curr->next;
	}
	return 0;
}


node* removeDuplicate(node* p1, node* p2) {
	int flag = 0;
	node* u = unionSet(p1, p2);
	node* curr = u;
	node* res = nullptr;
	node* rescurr = nullptr;
	if (!u) return res;
	res = new node;
	rescurr = res;
	rescurr->v = curr->v;
	rescurr->next = nullptr;
	while (curr) {
		if (flag == 0) {
			curr = curr->next;
			flag = 1;
		}
		else {
			if (!in(curr->v, res)) {
				node* p = new node;
				p->v = curr->v;
				p->next = nullptr;
				rescurr->next = p;
				rescurr = rescurr->next;
			}
			curr = curr->next;
		}
	}
	rescurr->next = nullptr;
	return res;
}


node* intersectionSet(node* p1, node* p2) {
	int flag = 0;
	node* curr = p1;
	node* res = nullptr;
	node* rescurr = nullptr;
	if (p2 == nullptr || p1 == nullptr) {
		return nullptr;
	}
	else {
		while (curr != nullptr) {
			if (in(curr->v, p1) && in(curr->v, p2)) {
				if (flag == 0) {
					res = new node;
					rescurr = res;
					rescurr->v = curr->v;
					// rescurr->next = nullptr;
					flag = 1;
				}
				else {
					node* p = new node;
					p->v = curr->v;
					p->next = nullptr;
					rescurr->next = p;
					rescurr = rescurr->next;
				}
			}
			curr = curr->next;
		}
		if(rescurr) rescurr->next = nullptr;
		return res;
	}
}


node* diffSet(node* p1, node* p2) {
	int flag = 0;
	node* curr = p1;
	node* res = nullptr;
	node* rescurr = nullptr;
	if (!p2) return p1;
	else if (p1 == nullptr) {
		return nullptr;
	}
	else {
		while (curr != nullptr) {
			if (in(curr->v, p1) && !in(curr->v, p2)) {
				if (flag == 0) {
					res = new node;
					rescurr = res;
					rescurr->v = curr->v;
					// rescurr->next = nullptr;
					flag = 1;
				}
				else {
					node* p = new node;
					p->v = curr->v;
					p->next = nullptr;
					rescurr->next = p;
					rescurr = rescurr->next;
				}
			}
			curr = curr->next;
		}
		if(rescurr) rescurr->next = nullptr;
		return res;
	}
}




int main() {
	node* p1, * p2;
	cout << "请输入两个链表的长度n1和n2：" << endl;
	int n1, n2;
	cin >> n1 >> n2;
	cout << endl << "请依次输入两个链表中的元素，每个链表中的元素个数为您刚才输入的n1和n2" << endl;
	p1 = createList(n1);
	p2 = createList(n2);
	cout << endl << "您输入的两个集合为" << endl;
	display(p1);
	display(p2);
	cout << endl << "并集为：" << endl;
	node* uuu = unionSet(p1, p2);
	display(uuu);
	cout << endl << "去重后的并集：" << endl;
	node* uu = removeDuplicate(p1, p2);
	display(uu);
	cout << endl << "交集为：" << endl;
	node* intersection = intersectionSet(p1, p2);
	display(intersection);
	cout << endl << "差集为：" << endl;
	node* diff = diffSet(p1, p2);
	display(diff);
	return 0;
}