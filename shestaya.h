#ifndef CH
#define CH
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
class cplx
{
	int re, im;
	/*cplx(int a = 0, int b = 0) :re(a), im(b)
	{
		std::cout << "open " << this << std::endl;
	}*/
	/*~cplx()
	{
		std::cout << "close " << this << std :: endl;
	}*/
public:
	double m();
	void print();
	void SetRe(int);
	void SetIm(int);
	
};
void srt(vector<int>& vec);
void srt(vector<double>& vec);
void srt(vector<cplx>& vec);
#endif
