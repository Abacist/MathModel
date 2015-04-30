#include<iostream>

using namespace std;

class TrieNode
{
private:
	friend class Trie;
	TrieNode* child[4];//represent A T C G
	int getIndex(char c)//inline 
	{
		if (c == 'A') return 0;
		if (c == 'T') return 1;
		if (c == 'C') return 2;
		if (c == 'G') return 3;
		throw "Invalid input";
	}
	TrieNode()//inline
	{
		for (int i = 0; i < 4; i++)
		{
			child[i] = nullptr;
		}
	}
};

class Trie
{
public:
	Trie(int readCount, int inputk);
private:
	long long memoryUsed;
	int k;
	TrieNode* trieRoot;
};