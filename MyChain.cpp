#include "header.h"

MyChain::MyChain() 
{
	Chain_.emplace_back(MyBlock(0, "Genesis Block"));
	Difficulty_ = 3;
}

void MyChain::AddBlock(MyBlock New, vector<Transaction>& temp)
{
	New.prev_ = GetLastBlock().GetHash();
	New.MineBlock(Difficulty_, temp);
	Chain_.push_back(New);
}

MyBlock MyChain::GetLastBlock() const
{
	return Chain_.back();
}
