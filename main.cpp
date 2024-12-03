#include "tries.h"

int main()
{
	TrieTree tree;

	tree.put("spongebob");
	tree.put("squidward");
	tree.put("sandy");
	tree.put("patrick");
	tree.put("krabs");
	tree.put("gary");
	tree.put("larry");

	if (tree.search("spongebob"))
	{
		cout << "Found: " << "spongebob" << endl;
	}
	else
	{
		cout << "Did not find: " << "spongebob" << endl;
	}

	if (tree.search("squidward"))
	{
		cout << "Found: " << "squidward" << endl;
	}
	else
	{
		cout << "Did not find: " << "squidward" << endl;
	}

	if (tree.search("squid"))
	{
		cout << "Found: " << "squid" << endl;
	}
	else
	{
		cout << "Did not find: " << "squid" << endl;
	}

	if (tree.search("sandy"))
	{
		cout << "Found: " << "sandy" << endl;
	}
	else
	{
		cout << "Did not find: " << "sandy" << endl;
	}

	if (tree.search("sand"))
	{
		cout << "Found: " << "sand" << endl;
	}
	else
	{
		cout << "Did not find: " << "sand" << endl;
	}
	

	return 0;
}