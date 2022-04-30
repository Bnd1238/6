#include "shestaya.h"
void cplx::print()
{
	if (im >= 0)
		cout << re << "+" << im << "i"  ;
	else
		cout << re << "-" << -1 * im << "i" ;
}
double cplx::m()
{
	return sqrt(re * re + im * im);
}

void cplx::SetRe(int a)
{
	re = a;
}
void cplx::SetIm(int a)
{
	im = a;
}
void srt(vector<int>& vec)
{
	bool ch = 1;
	while (ch)
	{
		ch = 0;
		for (int i = 0; i < 9; ++i)
		{

			if (vec[i] > vec[i + 1])
			{
				swap(vec[i], vec[i + 1]);
				ch = 1;
			}
		}
	}
}
void srt(vector<double>& vec)
{
	bool ch = 1;
	while (ch)
	{
		ch = 0;
		for (int i = 0; i < 9; ++i)
		{

			if (vec[i] > vec[i + 1])
			{
				swap(vec[i], vec[i + 1]);
				ch = 1;
			}
		}
	}
}
void srt(vector<cplx>& vec)
{
	bool ch = 1;
	while (ch)
	{
		ch = 0;
		for (int i = 0; i < vec.size()-1; ++i)
		{

			if (vec[i].m() > vec[i + 1].m())
			{
				swap(vec[i], vec[i + 1]);
				ch = 1;
			}
		}
	}
}
