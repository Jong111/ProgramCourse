//#include <iostream>
//#include "mystring.h"
//using namespace std;
//int main()
//{
//    char str1[20] = "hello ";
//    char str2[5] = "NJU ";
//    str_cat(str1, str2);
//    cout << str1 << endl; //���: hello NJU
//    int len = str_len(str1);
//    char str3[20];
//    str_cpy(str3, str1, len);//��str3�п���str1��ǰlen���ַ���
//    cout << str3 << endl; // �����hello NJU 
//    char str4[4] = "PKU";
//    if (str_cmp(str2, str4) > 0)
//        cout << str2 << endl;
//    else
//        cout << str4 << endl;  //���: PKU
//    str_cat(str1, str2);
//    str_replace(str1, str2, str4);  //ע����ڶ��str2����str1���ҵ�str2������str4�滻
//    cout << str1 << endl; // ���: hello PKUPKU
//    char str5[3] = "my";
//    int index = str_find(str1, str4); //str4�ĵ�һ���ַ���str1�е�λ��
//    str_insert(str1, index, str5); //���±�index������str5;
//    cout << str1 << endl;  //����� hello myPKUPKU
//    to_lower(str1); // ��str1�е����д�д��ĸ��ΪСд
//    cout << str1 << endl; //���: hello mypkupku
//    return 0;
//}