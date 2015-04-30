#include<iostream>
#include<fstream>
#include"Trie.h"

using namespace std;

Trie::Trie(int readCount, int inputk) :k(inputk), memoryUsed(sizeof (TrieNode*))
{
	int rest = readCount;
	ifstream in1("solexa_100_170_1.fa");
	if (!in1)
	{
		throw "Input 1 not exists";
	}
	ifstream in2("solexa_100_170_2.fa");
	if (!in2)
	{
		throw "Input 2 not exists";
	}

	trieRoot = new TrieNode();
	while (readCount--)
	{
		char s[200];
		in1.getline(s, 200);
		cout << s << endl;
	}



	in1.close();
	in2.close();
}