#ifndef BOGGLEUTIL_H
#define BOGGLEUTIL_H


#include <set>
#include <vector>
#include <string>
#include <utility>
#include <iterator>

using std::vector;
using std::set;
using std::string;
using std::pair;

class TrieNode{

public:

  bool isEnd;
  TrieNode* childIndex[26];

  TrieNode(){
    isEnd = false;
    for (int i = 0; i < 25; i++){ 
      childIndex[i] = NULL;
    }
  } 

};



class Trie{

  private:
  
  protected:

    TrieNode* root;
  
  public:
    Trie();
    bool search(string word);
    void insert(string word);

}; 




#endif //BOGGLEUTIL_H
