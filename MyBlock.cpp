#include "header.h"

MyBlock::MyBlock(uint32_t IndexIn, const string &DataIn) : Index_(Index_in), Data_(DataIn)
{
	Nonce_ = -1;
	Time_ = time(nullptr);
}

string MyBlock::GetHash()
{
	return Hash_;
}

void MyBlock::MineBlock(uint32_t Difficulty)
{
	char cstr[Difficulty + 1];
}