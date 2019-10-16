#include "header.h"

int main()
{
	MyChain Blocky = MyChain();
	vector <User> vartotojai;
	vector <Transaction> Visos;
	skaitymas(vartotojai);

	int start = 0, end = 100;
	while (end <= 10000)
	{
		kurimas(vartotojai, Visos);
		Blocky.AddBlock(MyBlock(1, "Block 1 Data"), Visos);
		start += 100;
		end += 100;
		Visos.clear();
	}
}