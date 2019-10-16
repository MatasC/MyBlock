#ifndef HEADER
#define HEADER

//libraries

#include <cstdint>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include<random>
#include "sha256.h"

//namespace

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::stringstream;

//classes

class Transaction
{
public:
	Transaction();

	void SetTransaction(int amount, string from, string to);

	int GetAmount() const
	{
		return amount_;
	}
	string GetFrom() const
	{
		return from_;
	}
	string GetTo() const
	{
		return to_;
	}

private:

	string from_;
	string to_;
	int amount_;
};

class MyBlock
{
public:
	string prev_;

	MyBlock(uint32_t IndexIn, const string &DataIn);

	string GetHash();

	void MineBlock(uint32_t Difficulty, vector<Transaction>& temp);
	void AddInfo(int start, int end, vector <Transaction> Trans)
	{
		for(int i = start; i < end; i++)
		{
			Info_.push_back(Trans[i]);
		}
	}

private:
	uint32_t Index_;
	int64_t Nonce_;
	string Data_;
	string Hash_;
	time_t Time_;
	vector <Transaction> Info_;
	string CalculateHash() const;
};

class MyChain
{
public:
	MyChain();

	void AddBlock(MyBlock New, vector<Transaction>& temp);

private:
	uint32_t Difficulty_;
	vector<MyBlock> Chain_;

	MyBlock GetLastBlock() const;
};

class User
{
public:
	User();

	void irasymas(std::istringstream& skaitymas);

	string GetName() const
	{
		return name_;
	}
	string GetKey() const
	{
		return public_key;
	}

	int GetBling() const
	{
		return bling_;
	}

	void SetBling(int temp)
	{
		bling_ = temp;
	}

private:

	string name_;
	string surname_;
	string public_key;
	int bling_;

};

//functions

string Convertion(char[]);
void skaitymas(vector <User> &Users);
void Trans(User x, User y, int amount, vector <Transaction>& AllTrans);
void kurimas(vector <User>& vartotojai, vector <Transaction> Visos);

#endif
