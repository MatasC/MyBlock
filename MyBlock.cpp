#include "header.h"

MyBlock::MyBlock(uint32_t IndexIn, const string &DataIn) : Index_(IndexIn), Data_(DataIn)
{
	Nonce_ = -1;
	Time_ = time(nullptr);
	Info_.reserve(100);
}

string MyBlock::GetHash()
{
	return Hash_;
}

void MyBlock::MineBlock(uint32_t Difficulty, vector<Transaction>& temp)
{
	char cstr[Difficulty + 1];
	for(uint32_t i = 0; i < Difficulty; i++)
	{
		cstr[i] = '0';
	}

	cstr[Difficulty] = '\0';

	string str(cstr);

	do {
		Nonce_++;
		Hash_ = CalculateHash();
	} while (Hash_.substr(0, Difficulty) != str);
	Info_ = temp;
	cout << "MyBlock mined: " << Hash_ << endl;
}

inline string MyBlock::CalculateHash() const
{
	stringstream ss;

	ss << Index_ << Time_ << Data_ << Nonce_ << prev_;

	return sha256(ss.str());

	// string temp = ss.str();

	// char input[temp.length()];

	// for(int i = 0; i < temp.length(); i++)
	// {
	// 	input[i] = temp[i];
	// }

	// return Convertion(input);
}

string Convertion(char input[])
{
	std::stringstream stream;
	int t[256];
	for (int i = 0; input[i] != '\0'; i++ )
	{
		t[i] = input[i];
		stream << std::hex << t[i];
	}
	string output(stream.str());
	return output;
}