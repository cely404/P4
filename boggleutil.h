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
public:
   Trie();
   bool search(string word);
   void insert(string word);

}; 
#endif //BOGGLEUTIL_H
