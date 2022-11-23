//#include <iostream>
//#include "mystring.h"
//using namespace std;
//int main()
//{
//    char str1[20] = "hello ";
//    char str2[5] = "NJU ";
//    str_cat(str1, str2);
//    cout << str1 << endl; //输出: hello NJU
//    int len = str_len(str1);
//    char str3[20];
//    str_cpy(str3, str1, len);//往str3中拷贝str1的前len个字符；
//    cout << str3 << endl; // 输出：hello NJU 
//    char str4[4] = "PKU";
//    if (str_cmp(str2, str4) > 0)
//        cout << str2 << endl;
//    else
//        cout << str4 << endl;  //输出: PKU
//    str_cat(str1, str2);
//    str_replace(str1, str2, str4);  //注意存在多个str2，在str1中找到str2，并用str4替换
//    cout << str1 << endl; // 输出: hello PKUPKU
//    char str5[3] = "my";
//    int index = str_find(str1, str4); //str4的第一个字符在str1中的位置
//    str_insert(str1, index, str5); //在下标index处插入str5;
//    cout << str1 << endl;  //输出： hello myPKUPKU
//    to_lower(str1); // 将str1中的所有大写字母改为小写
//    cout << str1 << endl; //输出: hello mypkupku
//    return 0;
//}