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

// �����ռ����Ƕ��
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


// 1.  ֱ���ڳ�Աǰ�������ռ�����::

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
// ���һ�������д��ڶ����ͬ���������ռ�ʱ���������Ὣ��ϳɲ�һ��
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
// ȫȱʡ���������в���������Ĭ��ֵ
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
// ��ȱʡ���������ֲ�������Ĭ��ֵ  Ҫ��ֻ�ܴ����������
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
// �������أ���������ͬ�������� ��ͬ���ֵĺ�������������б�ͬ(���������͡����ʹ���)
// �뷵��ֵ�����Ƿ���ͬ�޹�
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
// �������ڱ���׶Σ������ʵ�ε����ͽ�������, �������ݵ�ʵ�����͵Ľ��ѡ����ú��ʵĺ���
Add(1,2);  // 1-->int, 2-->int  Add(int,int)
Add(1.0, 2.0);  // 1.9��Ԫ
return 0;
}
*/

#if 0
// 1
void TestFunc()
{}

// 2��1�ǲ���������ͬ
// 2
void TestFunc(int a)
{}

// 3
void TestFunc(int a, double b)
{}

// 3��4��ͬ���������ʹ���
// 4
void TestFunc(double a, int b)
{}

// 2��5����������
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
// C���Ժ����������ι��򣺱�����ֻ���ں�������ǰ����_
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
// ��C++������

// _Add
// extern "C"����:  ����������C�ķ����б���
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