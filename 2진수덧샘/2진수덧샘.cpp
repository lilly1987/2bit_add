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
			throw "2���� �ƴ�";
		}
	}
	return r;
}

string int2str(int r[],int sz)  {
	string s;
	//cout << "sizeof(r):" << sizeof(r) << endl;// ���� �迭�� ���� �����ͷ� ������ ȣ���ϸ� �ּҰ� ũ�Ⱑ Ư����
	for (int i = 0;i< sz;i++) {
		//cout << "sizeof(r):" << sizeof(r) << endl;
		cout <<"i:"<< i<<" , r[i]:" << r[i] << endl;
		s.push_back(r[i] + '0');
	}
	return s;
}


int main(){

	string  a, b;
	cout << "�Է°� ù��°:";
	getline(cin, a);
	//cin >> a;
	//cin.getline(a, sizeof(a));

	cout << "�Է°� �ι�°:";
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

		cout << "r1:" << r1 << endl;// �����Ͷ� r1�� ��. �ش� ���� ���� ���� ���۵Ǵ� �ּҰ��� ���
		cout << "&r1:" << &r1 << endl;// r1�� �ּ�
		cout << "*(&r1):" << *(&r1) << endl;// r1 ���� ����
		cout << "*r1:" << *r1 << endl;// r1�� ����Ű�� �ּҰ��� �ִ� �� ���
		cout << "&(*r1):" << &(*r1) << endl;// 

		cout << int2str(r1,as) << endl;
		cout << int2str(r2,bs) << endl;

	}
	catch (string exception)
	{
		cout << exception << endl;
	}

	// 2���� ���� ������. �ƿ� �����Ƽ� �н�

	return 0;
}