#pragma once
#include <iostream>
using namespace std;
int ucln(int a, int b);
int chuyen(char c);
class PhanSo
{
public:
	int tuSo;
	int mauSo;
	friend istream& operator >> (istream&, PhanSo&);
	friend ostream& operator<<(ostream&, PhanSo& ps);
	PhanSo& rutGon();
	PhanSo operator+(PhanSo a);
	PhanSo operator-(PhanSo a);
	PhanSo operator*(PhanSo a);
	PhanSo operator/(PhanSo a);
	PhanSo();
	PhanSo(int a, int b);
	~PhanSo();
};

