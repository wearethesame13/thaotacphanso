#include "PhanSo.h"
int ucln(int a, int b)
{
	{
		int tam = a;
		while (!(a % tam == 0 && b % tam == 0 && tam > 0))
			tam--;
		return tam;
	}
}
int chuyen(char c)
{
	return (int)c - 48;
}




PhanSo& PhanSo::rutGon()
{
	// TODO: insert return statement here
	int temp = ucln(this->tuSo, this->mauSo);
	this->tuSo /= temp;
	this->mauSo /= temp;
	return *this;
}

PhanSo PhanSo::operator+(PhanSo a)
{
	// TODO: insert return statement here
	PhanSo rs;
	rs.tuSo = this->tuSo * a.mauSo + this->mauSo * a.tuSo;
	rs.mauSo = this->mauSo * a.mauSo;
	rs.rutGon();
	return rs;
}

PhanSo PhanSo::operator-(PhanSo a)
{
	PhanSo rs;
	rs.tuSo = this->tuSo * a.mauSo - this->mauSo * a.tuSo;
	rs.mauSo = this->mauSo * a.mauSo;
	rs.rutGon();
	return rs;
}

PhanSo PhanSo::operator*(PhanSo a)
{
	PhanSo rs;
	rs.tuSo = this->tuSo * a.tuSo;
	rs.mauSo = this->mauSo * a.mauSo;
	rs.rutGon();
	return rs;
}

PhanSo PhanSo::operator/(PhanSo a)
{
	PhanSo rs;
	rs.tuSo = this->tuSo * a.mauSo;
	rs.mauSo = this->mauSo * a.tuSo;
	rs.rutGon();
	return rs;
}

PhanSo::PhanSo()
{
	tuSo = 0;
	mauSo = 1;
}

PhanSo::PhanSo(int a, int b)
{
	this->tuSo = a;
	this->mauSo = b;
}


PhanSo::~PhanSo()
{
}

istream& operator>>(istream& is, PhanSo& r)
{
	// TODO: insert return statement here
	cout << "Nhap tu so : ";
	is >> r.tuSo;
	cout << "Nhap mau so : ";
	is >> r.mauSo;
	r.rutGon();
	return is;
}

ostream& operator<<(ostream&os, PhanSo &ps)
{
	// TODO: insert return statement here
	os << ps.tuSo << '/' << ps.mauSo;
	return os;
}
