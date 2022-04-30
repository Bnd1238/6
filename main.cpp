#include "shestaya.h"
int main()
{
	vector<int>vec(10);
	vector<double>vec1(10);
	vector<cplx>vec2(10);
	for (int i = 0; i < 10; ++i)
	{
		vec[i] = rand() % 15;
		vec1[i] = rand() % 15;
		vec2[i].SetRe(rand() % 15);
		vec2[i].SetIm(rand() % 15);
	}
	srt(vec);
	srt(vec1);
	srt(vec2);
	for (int i = 0; i < 10; ++i)
	{
		vec2[i].print();
		std::cout << " " << vec[i] << " " << vec1[i] << std::endl;
	}
	return 0;
}