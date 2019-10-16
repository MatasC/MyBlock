#include "header.h"

User::User()
{
	name_ = "";
	surname_ = "";
	bling_ = 0;
	public_key = "";
}

void User::irasymas(std::istringstream& skaitymas)
{
	skaitymas >> name_;
	skaitymas >> surname_;
	skaitymas >> bling_;
	stringstream ss;
	ss << name_ << surname_ << bling_;
	public_key = sha256(ss.str());
}

void skaitymas(vector <User> &Users)
{
	std::ifstream in;
	in.open("vartotojai.txt");
	int temp = 0;
	string eilute;
	while (getline(in, eilute))
	{
		std::istringstream skaityti(eilute);
		Users.push_back(User());
		Users[temp].irasymas(skaityti);
		temp++;
	}
	in.close();
}

void kurimas(vector <User>& vartotojai, vector <Transaction> Visos)
{
	std::random_device r;
	std::default_random_engine el(r());
	std::uniform_int_distribution<int> uniform_dist(1, 1000);

	int amount = 0, x, y;

	while (Visos.size() != 100)
	{
		amount = uniform_dist(el);
		x = uniform_dist(el) - 1;
		do
		{
			y = uniform_dist(el) - 1;

		} while (x == y);

		if (vartotojai[x].GetBling() >= amount)
			Trans(vartotojai[x], vartotojai[y], amount, Visos);
	}
}