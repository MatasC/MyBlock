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
	while(getline(in, eilute))
	{
		std::istringstream skaityti(eilute);
		Users.push_back(User());
		Users[temp].irasymas(skaityti);
		temp++;
	}
	in.close();
}