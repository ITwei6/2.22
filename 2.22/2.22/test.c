//#include <stdio.h>
//void F1()
//{
//	int a = 10;
//	printf("%p\n", &a);
//}
//void F2()
//{
//	int b = 10;
//	printf("%p\n", &b);
//}
//long long Fac(size_t N)
//{
//	if (0 == N)
//		return 1;
//
//	return Fac(N - 1) * N;
//}
//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}
//int main()//空间复用问题+调用过程不清楚
//{
//	long long n;
//	Fib(n);
//	return 0;
//}
#include "test.h"
void TestSL()
{
	SL s;
	SLInit(&s);//初始化
	
    SLpushBack(&s, 1);//尾插
	SLpushBack(&s, 2);
	SLpushBack(&s, 3);
	SLpushBack(&s, 4);
	SLpushBack(&s, 5);
	SLpopBack(&s);//尾删
	SLpopBack(&s);//尾删
	SLpopBack(&s);//尾删
	SLpopBack(&s);//尾删
	
	SLPrint(&s);//打印
	
	SLDestroy(&s);//销毁
}
int main()
{
	TestSL();
}