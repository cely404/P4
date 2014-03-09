
#ifndef BOGGLEPLAYER_H
#define BOGGLEPLAYER_H


#include "iboggleplayer.h"
#include <set>
#include <vector>
#include <string>

using std::vector;
using std::set;
using std::string;


class boggleplayer public iboggleplayer{

public:
struct alphanode{
	bool present = false;
    bool is_end = false;
    struct * structptr = nullptr; 
  };

private:
/**
*  Function will be used as a helper function for the buildLexicon function. 
*  Takes in a string and inserts it into the trie 
*/
void insert(string word);
/**
*  Function will be used as a helper function for the buildLexicon function. 
*  Takes in a string and determines if the string is located in the trie. Returns
*  true if string present and false otherwise 
*/ 
bool search(string word);
alphanode root = nullptr;

};
#endif // BOGGLEPLAYER_H

