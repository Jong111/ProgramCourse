//#include<iostream>
//#include"mystring.h"
//using namespace std;
//
//int str_len(char* str) {
//	int len = 0;
//	char* p = str;
//	while (1) {
//		if (*p != '\0') {
//			len++;
//			p++;
//		}
//		else break;
//	}
//	return len;
//}
//
//char* str_cat(char* dest, char* src) {
//	char* p = dest+str_len(dest);
//	char* q = src;
//	while (1) {
//		if (*q == '\0') {
//			break;
//		}
//		else {
//			*p = *q;
//			p++;
//			q++;
//		}
//	}
//	*p = '\0';
//	return dest;
//}
//
//char* str_cpy(char* dest, char* src, int len) {
//	int n = len;
//	char* p = dest;
//	char* q = src;
//	while (n) {
//		if (*q == '\0') {
//			break;
//		}
//		else {
//			*p = *q;
//			p++;
//			q++;
//			n--;
//		}
//	}
//	*p = '\0';
//	return dest;
//}
//
//int str_cmp(char* str1, char* str2) {
//	char* p = str1;
//	char* q = str2;
//	while (1) {
//		if (*p > *q) {
//			return 1;
//		}
//		else if (*p < *q) {
//			return -1;
//		}
//		else {
//			if (*p == '\0' && *q == '\0') {
//				return 0;
//			}
//			p++;
//			q++;
//		}
//	}
//}
//
//void str_findSeq(char* str1, char* str2, int* res) {
//	char* p = str1;
//	char* q = str2;
//	int* k = res;
//	//int t = 0;
//	int m = str_len(str1);
//	int n = str_len(str2);
//	if (n > m) cout << "Error" << endl;
//	else {
//		while (1) {
//			if (*p == *q) {
//				int flagP = p - str1;
//				int tmp = n;
//				int sign = 1;
//				while (tmp) {
//					if (*p != *q) {
//						sign = 0;
//						break;
//					}
//					p++;
//					q++;
//					tmp--;
//				}
//				if (sign == 1) {
//					*k = flagP;
//					k+=1;
//					//t++;
//					p = flagP + str1 + 1;
//					q=str2;
//				}
//				else {
//					p = flagP + str1 + 1;
//					q = str2;
//				}
//			}
//			else {
//				if (*p == '\0') {
//					break;
//				}
//				else {
//					p++;
//					q = str2;
//				}
//			}
//		}
//		//cout << t << endl;
//	}
//}
//
//int in(int a, int* arr, int size) {
//	int* p = arr;
//	for (int i = 0; i < size; i++) {
//		if (*p == a) return 1;
//		else p++;
//	}
//	return 0;
//}
//
//char* str_replace(char* dest, char* src1, char* src2) {
//	int kkk1 = 0;
//	int kkk2 = 0;
//	char* p = dest;
//	char* q = src1;
//	char* k = src2;
//	int n = str_len(dest);
//	int m = str_len(src1);
//	int diff = m - str_len(src2);
//	if (*p == '\0' || *q == '\0') return dest;
//	else {
//		int res[100] = { 0 };
//		for (int i = 0; i < 100; i++) {
//			res[i] = -1;
//		}
//		str_findSeq(dest, src1, res);
//		int len = 0;
//		for (int i = 0; i < 100; i++) {
//			if (res[i] != -1) len++;
//			else break;
//		}
//		int size = len * str_len(src2);
//		int toBeReplaced[100] = { 0 };
//		int kk = 0;
//		for (int i = 0; i < len; i++) {
//			int j = 0;
//			int nn = str_len(src1);
//			while (nn) {
//				toBeReplaced[kk + j] = res[i] + j;
//				nn--;
//				j++;
//			}
//			kk += str_len(src2)+1;
//		}
//		char tmp[100]={0};
//		int tmpi = 0;
//		int desti = 0;
//		int src2i = 0;
//		int cnt = n;
//		while (cnt) {
//			if (in(desti, toBeReplaced, size)!=0) {
//				kkk2++;
//				tmp[tmpi] = src2[src2i];
//				tmpi++;
//				src2i++;
//				desti++;
//				int ttt = 0;
//				if (src2i == str_len(src2)) {
//					desti += diff;
//					int tttt = 0;
//					src2i = 0;
//				}
//			}
//			else {
//				src2i = 0;
//				tmp[tmpi] = dest[desti];
//				tmpi++;
//				desti++;
//				int tt = 0;
//			}
//			cnt--;
//		}
//		str_cpy(dest, tmp, str_len(tmp));
//		return dest;
//	}
//}
//
//int str_find(char* str1, char* str2) {
//	int res[100] = { 0 };
//	str_findSeq(str1, str2, res);
//	return res[0];
//}
//
//char* str_insert(char* dest, int index, char* src) {
//	char tmp[100] = { 0 };
//	str_cpy(tmp, dest, index);
//	char* q = src;
//	int tmpi = index;
//	while (1) {
//		if (*q == '\0') break;
//		tmp[tmpi] = *q;
//		tmpi++;
//		q++;
//	}
//	while (1) {
//		tmp[tmpi] = dest[tmpi - str_len(src)];
//		tmpi++;
//		if((tmpi-str_len(src))==str_len(dest)) break;
//	}
//	str_cpy(dest, tmp, str_len(tmp));
//	return dest;
//}
//
//char* to_lower(char* str) {
//	for (int i = 0; i < str_len(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] = str[i] + 'a' - 'A';
//		}
//	}
//	return str;
//}
//
////int main() {
////	char str1[20] = "hello ";
////	char str2[5] = "NJU ";
////	str_cat(str1, str2);
////	cout << str1 << endl; //输出: hello NJU
////	int len = str_len(str1);
////	//cout << len << endl;
////    char str3[20];
////    str_cpy(str3, str1, len);//往str3中拷贝str1的前len个字符；
////    cout << str3 << endl; // 输出：hello NJU 
////	char str4[4] = "PKU";
////    if (str_cmp(str2, str4) > 0)
////        cout << str2 << endl;
////    else
////        cout << str4 << endl;  //输出: PKU
////	str_cat(str1, str2);
////	/*cout << str1 << 'a' << endl;
////	cout << str_len(str1) << endl;*/
////    str_replace(str1, str2, str4);  //注意存在多个str2，在str1中找到str2，并用str4替换
////    cout << str1 << endl; // 输出: hello PKUPKU
////	char str5[3] = "my";
////    int index = str_find(str1, str4); //str4的第一个字符在str1中的位置
////	//cout << index << endl;
////	str_insert(str1, index, str5); //在下标index处插入str5;
////	cout << str1 << endl;  //输出： hello myPKUPKU
////	to_lower(str1); // 将str1中的所有大写字母改为小写
////    cout << str1 << endl; //输出: hello mypkupku
////	return 0;
////}
//
