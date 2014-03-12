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
    //"trie node class"
    struct TrieNode{
      bool isEnd;
      struct TrieNode* childIndex[26];
    }*root;

    Trie();
    bool search(string word);
    void insert(string word);

}; 




/*

    class TrieNode(){
      bool isEnd;
      char letter;
      TrieNode** childIndex[26];

      TrieNode(char letter) : letter(letter){ }
    }
*/

#endif //BOGGLEUTIL_H
