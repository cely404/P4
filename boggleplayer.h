
#ifndef BOGGLEPLAYER_H
#define BOGGLEPLAYER_H
#include <utility>
#include <vector>
#include <string>
#include "boggleutil.h"

using std::string;
using std::pair;
using std::vector;
class iboggleplayer;


class boggleplayer{

public:
Trie* root=0; 
private:
<<<<<<< HEAD
/**
*  Function will be used as a helper function for the buildLexicon function. 
*  Takes in a string and inserts it into the trie 
*/
void insert(string word);
void rSearch();
/**
*  Function will be used as a helper function for the buildLexicon function. 
*  Takes in a string and determines if the string is located in the trie. Returns
*  true if string present and false otherwise 
*/ 
bool search(string word);
alphanode root = nullptr;
=======
>>>>>>> d0625106fe10e37ea8e7de03cb240d4f5f872507

};
#endif // BOGGLEPLAYER_H

