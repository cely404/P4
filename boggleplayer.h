
#ifndef BOGGLEPLAYER_H
#define BOGGLEPLAYER_H
#include <utility>
#include <vector>
#include <string>
#include "iboggleplayer.h"
#include "boggleutil.h"

using std::string;
using std::pair;
using std::vector;


class BogglePlayer: public IBogglePlayer{

public:
  Trie *lex; 
  vector< vector<pair<string,int> > > graph;
  void buildLexicon(const vector<string>& word_list);
  void setBoard(unsigned int rows, unsigned int cols, string** diceArray);
  bool getAllValidWords(unsigned int minimum_word_length,
                                                    set<string>* words);
  bool isInLexicon(const string& word_to_check);
  vector<int> isOnBoard(const string& word_to_check);
  void getCustomBoard(string** &new_board, unsigned int *rows,
                                                    unsigned int *cols);


private:
vector<int> goodpaths; 
vector<int> rFindBoard(int index, string word);
int computeIndex(int i, int j, int width);
};
#endif // BOGGLEPLAYER_H

