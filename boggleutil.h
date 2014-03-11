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
   // int x=0;

  
  public:
    //"trie node index class"
    struct TrieNode{
      bool isEnd;
      struct TrieNode* childIndex[26];
    }*root;



    //struct TrieNodeIndex *root = new TrieNodeIndex[26]; 

    Trie();

    bool search(string word);
    void insert(string word);

}; 
#endif //BOGGLEUTIL_H
