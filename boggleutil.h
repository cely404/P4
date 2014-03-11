#ifndef BOGGLEUTIL_H
#define BOGGLEPUTIL_H


#include <set>
#include <vector>
#include <string>
#include <utility>
#include <iterator>

using std::vector;
using std::set;
using std::string;
using std::pair;

class Trie{

private:
int x=0; 
public:
	/**
     * Constructor for the Trie class
     */ 
    struct container{
    	bool present=false;
    	bool is_end=false;
    	struct node* ptr[26];
   }*node;

   void initialize();
   bool search(string word);
   void insert(string word);

}; 
#endif //BOGGLEUTIL_H
