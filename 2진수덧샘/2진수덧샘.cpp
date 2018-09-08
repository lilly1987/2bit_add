#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>
#include <stack>
#include <string>

using namespace std;

int* str2int(string s) throw(string)
{
	cout << "s.size():" << s.size() << endl;
	int *r = new int [s.size()]();

	for (int i = 0;i < s.size();i++) {
		cout << "s.size():" << s.size() << endl;
		r[i] = s[i] - '0';
		cout << "i:" << i << " , r[i]:" << r[i] << " , s[i]:" << s[i] << endl;
		if (r[i] > 1 || r[i] < 0) {
			throw "2진수 아님";
		}
	}
	return r;
}

string int2str(int r[],int sz)  {
	string s;
	//cout << "sizeof(r):" << sizeof(r) << endl;// 동적 배열로 만든 포인터로 사이즈 호출하면 주소값 크기가 특정됨
	for (int i = 0;i< sz;i++) {
		//cout << "sizeof(r):" << sizeof(r) << endl;
		cout <<"i:"<< i<<" , r[i]:" << r[i] << endl;
		s.push_back(r[i] + '0');
	}
	return s;
}


int main(){

	string  a, b;
	cout << "입력값 첫번째:";
	getline(cin, a);
	//cin >> a;
	//cin.getline(a, sizeof(a));

	cout << "입력값 두번째:";
	getline(cin, b);
	//cin >> b;
	
	cout << a << " , " << b << endl;

	int* r1 ;
	int* r2 ;
	int as = a.size(), bs = b.size();
	try
	{
		r1 = str2int(a);
		r2 = str2int(b);

		cout << "r1:" << r1 << endl;// 포인터라서 r1의 값. 해당 값은 실제 값이 시작되는 주소값이 출력
		cout << "&r1:" << &r1 << endl;// r1의 주소
		cout << "*(&r1):" << *(&r1) << endl;// r1 값과 같음
		cout << "*r1:" << *r1 << endl;// r1이 가리키는 주소값에 있는 값 출력
		cout << "&(*r1):" << &(*r1) << endl;// 

		cout << int2str(r1,as) << endl;
		cout << int2str(r2,bs) << endl;

	}
	catch (string exception)
	{
		cout << exception << endl;
	}

	// 2진수 덧샘 구현부. 아오 귀찬아서 패스

	return 0;
}