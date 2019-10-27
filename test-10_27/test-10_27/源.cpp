#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

#if 0
int a1 = 10;
int a2 = 20;


int main()
{
	int a = 10;

	return 0;
}
#endif

#include <stdio.h>


#if 0
int a = 1;

namespace N1
{
	int a = 10;
	int b = 20;

	int Add(int left, int right)
	{
		return left + right;
	}
}

// 命名空间可以嵌套
namespace N2
{
	int a = 30;
	int b = 40;

	int Sub(int left, int right)
	{
		return left - right;
	}

	namespace N3
	{
		int a = 40;
		int b = 50;

		int Mul(int left, int right)
		{
			return left*right;
		}
	}
}


// 1.  直接在成员前加命名空间名字::

int main()
{
	int a = 60;
	printf("%d \n", a);
	printf("%d \n", ::a);
	printf("%d \n", N1::a);
	printf("%d\n", N2::N3::a);
	return 0;
}
#endif

#if 0
namespace N1
{
	int a = 10;
	int b = 20;

	int Add(int left, int right)
	{
		return left + right;
	}
}

//using N1::a;


int a = 10;

int main()
{
	printf("%d\n", N1::a);
	return  0;
}
#endif

#if 0
namespace N1
{
	int a = 10;
	int b = 20;

	int Add(int left, int right)
	{
		return left + right;
	}
}

using namespace N1;


int main()
{
	printf("%d\n", Add(a, b));
	return 0;
}
#endif

#if 0
// 如果一个工程中存在多个相同名称命名空间时，编译器会将其合成并一个
namespace N1
{
	int a = 10;
	int b = 20;

	int Add(int left, int right)
	{
		return left + right;
	}
}


namespace N1
{
	int c = 10;
	int d = 20;

	int Sub(int left, int right)
	{
		return left - right;
	}
}
#endif

#if 0
// #include <iostream.h>

#include <iostream>
using namespace std;

int main()
{
	int a;
	double d;
	cin >> a;
	cin >> d;
	cout << a << " " << d << endl;

	cin >> a >> d;
	cout << a << " " << d << endl;

	cout << 10;
	cout << 12.34 << " " << 'A' << "\n";
	cout << "hello world" << endl;
	return 0;
}
#endif


/*
void TestFunc(int a = 10)
{
cout << a << endl;
}

int main()
{
TestFunc();
TestFunc(100);
return 0;
}
*/

#if 0
// 全缺省参数：所有参数都带有默认值
void TestFunc(int a = 1, int b = 2, int c = 3)
{
	cout << a << " " << b << " " << c << endl;
}

int main()
{
	TestFunc();
	TestFunc(10);
	TestFunc(10, 20);
	TestFunc(10, 20, 30);
	return 0;
}
#endif

#if 0
// 半缺省参数：部分参数带有默认值  要求：只能从右往左给出
void TestFunc(int a, int b = 2, int c = 3)
{
	cout << a << " " << b << " " << c << endl;
}

int main()
{
	TestFunc(10);
	TestFunc(10, 20);
	TestFunc(10, 20, 30);
	return 0;
}
#endif

#if 0
void TestFunc(int a = 10);

void TestFunc(int a = 20)
{
	cout << a << endl;
}

int main()
{
	TestFunc();
	return 0;
}
#endif

#if 0
int g_a = 30;

void TestFunc(int a);
void TestFunc(int a)
{
	cout << a << endl;
}

int main()
{
	TestFunc(10);
	return 0;
}
#endif


/*
// 函数重载：必须在相同的作用域， 相同名字的函数，如果参数列表不同(个数、类型、类型次序)
// 与返回值类型是否相同无关
int Add(int left, int right)
{
return left + right;
}

double Add(double left, double right)
{
return left + right;
}

namespace N
{
char Add(char left, char right)
{
return left + right;
}
}


int main()
{
// 编译器在编译阶段，必须对实参的类型进行推演, 根据推演的实参类型的结果选择调用合适的函数
Add(1,2);  // 1-->int, 2-->int  Add(int,int)
Add(1.0, 2.0);  // 1.9亿元
return 0;
}
*/

#if 0
// 1
void TestFunc()
{}

// 2与1是参数个数不同
// 2
void TestFunc(int a)
{}

// 3
void TestFunc(int a, double b)
{}

// 3与4不同：参数类型次序
// 4
void TestFunc(double a, int b)
{}

// 2和5参数的类型
// 5
int TestFunc(char a)
{
	return 0;
}

// 6
char TestFunc(char a)
{
	return a;
}


int main()
{
	int ret1 = TestFunc('a');
	char ret2 = TestFunc('b');
	TestFunc('c');
	return 0;
}
#endif

#if 0
// C语言函数名字修饰规则：编译器只是在函数名字前增加_
// _Add
//int Add(int left, int right);
// {
// 	return left + right;
// }

// _Add
double Add(double left, double right);
// {
// 	return left + right;
// }

int main()
{
	Add(1, 2); // call _Add
	return 0;
}
#endif


#if 0
// 
int Add(int left, int right);
// {
// 	return left + right;
// }

// _Add
double Add(double left, double right);
// {
// 	return left + right;
// }

double Add(int left, double right);

int main()
{
	Add(1, 2); // call _Add
	Add(1.0, 2.0);
	Add(1, 2.0);
	return 0;
}
#endif

#if 0
// 在C++工程中

// _Add
// extern "C"作用:  将函数按照C的风格进行编译
extern "C" int Add(int left, int right);
// {
// 	return left + right;
// }

int main()
{
	Add(1, 2); // ?Add@@YAHHH@Z---vs
	return 0;
}
#endif


#if 0
void TestFunc(int a = 10)
{}

void TestFunc()
{}

int main()
{
	TestFunc();
	return 0;
}
#endif