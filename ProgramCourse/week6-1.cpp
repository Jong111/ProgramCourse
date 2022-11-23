//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//
//double timesReciprocal(int n) {
//	double res1 = 1;
//	for (int i = 1; i <= n; i++) {
//		res1 /= i;
//	}
//	return res1;
//}
//
//double sin(double x, int n) {
//	int i = 0;
//	double res = 0.0;
//	while (n) {
//		double tmp = pow(-1, i) * fabs(pow(x, 2 * i + 1) * timesReciprocal(2 * i + 1));
//		res = res + tmp;
//		//printf("%.4lf\n",(pow(-1, i) * pow(x, 2*i+1)));
//		i++;
//		n--;
//	}
//	return res;
//}
//
//int main() {
//	int n;
//	double x;
//	printf("Please input x and n\n");
//	printf("Note that in order to avoid floating point exception, please don't input a too-large x\n");
//	scanf_s("%lf %d", &x, &n);
//	if (n < 0) {
//		printf("invalid n\n");
//	}
//	else printf("%.4lf", sin(x, n));
//	return 0;
//}