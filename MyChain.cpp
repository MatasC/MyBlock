#include "header.h"

MyChain::MyChain() 
{
	Chain_.emplace_back(MyBlock(0, "Genesis Block"));
	Difficulty_ = 6;
}

void MyChain::AddBlock(MyBlock New)
{
	New.prev_ = GetLastBlock().GetHash();
	New.MineBlock(Difficulty_);
	Chain_.push_back(New);
}

MyBlock MyChain::GetLastBlock() const
{
	return Chain_.back();
}
