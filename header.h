#ifndef HEADER
#define HEADER

//libraries

#include <cstdint>
#include <vector>
#include <string>
#include <iostream>

//namespace

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector

//classes

class MyBlock
{
public:
	string prev_;

	MyBlock(uint32_t IndexIn, const string &DataIn);

	string GetHash();

	void MineBlock(uint32_t Difficulty);

private:
	uint32_t Index_;
	int64_t Nonce_;
	string Data_;
	string Hash_;
	time_t Time_;

	string CalculateHash() const;
};

class MyChain
{
public:
	MyChain();

	void AddBlock(MyBlock New);

private:
	uint32_t Difficulty_;
	vector<MyBlock> Chain_;

	MyBlock GetLastBlock() const;
};

#endif
