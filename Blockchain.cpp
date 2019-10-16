#include "header.h"

int main()
{
	std::random_device r;
	std::default_random_engine el(r());
	std::uniform_int_distribution<int> uniform_dist(1, 1000);
	int amount = 0, x, y;

	vector <User> vartotojai;
	vector <Transaction> Visos;
	skaitymas(vartotojai);

	while (Visos.size() != 10000)
	{
		amount = uniform_dist(el);
		x = uniform_dist(el) - 1;
		do
		{
			y = uniform_dist(el) - 1;

		} while(x == y);
		
		if (vartotojai[x].GetBling() >= amount)
			Trans(vartotojai[x], vartotojai[y], amount, Visos);
	}
	for (auto i : Visos)
	{
		cout << i.GetFrom() << " " << i.GetTo() << " " << i.GetAmount() << endl;
	}

}
