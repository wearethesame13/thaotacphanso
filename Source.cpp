#include "PhanSo.h"
#include <string>
#include <vector>
int main()

{
	string str;
	getline(cin, str);
	int a = 0;
	PhanSo result;
	int flag = 0;
	char temp;
	while (a<=str.length())
	{
		int tuSo = 0;
		int mauSo = 0;
		while (str[a]!='/')
		{
			tuSo *= 10;
			tuSo += chuyen(str[a]);
			a++;
			if (a >= str.length())
			{
				break;
			}
		}

		a++;
		while (str[a] != '+' && str[a] != '-')
		{
			mauSo *= 10;
			mauSo += chuyen(str[a]);
			a++;
			if (a >= str.length())
			{
				break;
			}
		}
		flag++;
		if (flag==1)
		{
			result = result + PhanSo(tuSo, mauSo);
			temp = str[a];
			a++;
			continue;
		}
		
		if (temp=='+')
		{
			result = result + PhanSo(tuSo, mauSo);
		}
		if (temp=='-')
		{
			result = result - PhanSo(tuSo, mauSo);
		}
		temp = str[a];
		if (a>=str.length())
		{
			break;
		}
		a++;
	}
	cout << "Ket qua la: " << result;
	return 0;
}