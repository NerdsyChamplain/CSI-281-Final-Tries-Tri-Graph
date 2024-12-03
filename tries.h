
#include <iostream>
#include <map>
#include <list>
#include <string>
#include <map>
using namespace std;


struct TrieNode
{
	char c = 'c';

	map<char, TrieNode> children;
	bool isWord = false;
};

class TrieTree
{
	private:
		TrieNode root;
	public:
		bool search(string word)
		{
			// Reference to the root of the tree
			TrieNode* tmp = &root;

			// Go through each character of the word
			for (char ch : word)
			{
				// Check if the next character in the searched word exists
				if (tmp->children.contains(ch))
				{
					// Go to the next node
					tmp = &tmp->children[ch];
				}
				else
				{
					// If the next character doesn't exist, return false
					return false;
				}
			}

			// By now we have gone through all of the characters in the word, so we return the isWord value of the final TrieNode
			// If the traversed characters were truly a word, this value should be true
			return tmp->isWord;
		}

		void put(string word)
		{
			// Reference to the root of the tree
			TrieNode* tmp = &root;

			// Go through each character of the word
			for (char ch : word)
			{
				// Check if the next character in the inserted word exists
				if (tmp->children.contains(ch))
				{
					// Go to the next node
					tmp = &tmp->children[ch];
				}
				else
				{
					// If the next character in the inserted word doesn't exist as a child of the current node, split off
					TrieNode newNode;
					// Insert the new node
					tmp->children.emplace(ch, newNode);
					// Go to that new node
					tmp = &tmp->children[ch];
				}
			}

			// Now that we're at the last letter, set its flag to true
			tmp->isWord = true;
		}

		void remove(string word)
		{

		}

		void remove_aux(string word)
		{

		}

};
