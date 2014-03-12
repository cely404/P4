#include "boggleplayer.h"

void BogglePlayer::buildLexicon(const vector<string>& word_list){
        Trie* lex = new Trie();
	vector<string>::const_iterator vit = word_list.begin();
	vector<string>::const_iterator ven = word_list.end(); 
	for(; vit != ven; vit++)
		lex->insert(*vit);

}

void BogglePlayer::setBoard(unsigned int rows, unsigned int cols,
                                                      string** diceArray){
  vector< vector<pair<string,bool> > > graph;

  for(int i = 0; i < (int)rows ;i++ ){
    vector<pair<string,bool> > vec;
    for(int j = 0; j< (int)cols ; j++ ){

      vec.push_back(std::make_pair(diceArray[i][j], false));

      if((i-1>=0) && (j-1>=0) && (i-1<(int)rows) && (j-1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i-1][j-1], false));

      if((i-1>=0) && (i-1<(int)rows))
        vec.push_back(std::make_pair(diceArray[i-1][j], false));

      if((i-1>=0) && (j+1>=0) && (i-1<(int)rows) && (j+1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i-1][j+1], false));

      if((j-1>=0) && (j-1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i][j-1], false));

      if((j+1>=0) && (j+1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i][j+1], false));

      if((i+1>=0) && (j-1>=0) && (i+1<(int)rows) && (j-1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i+1][j-1], false));

      if((i+1>=0) && (i+1<(int)rows))
        vec.push_back(std::make_pair(diceArray[i+1][j], false));

      if((i+1>=0) && (j+1>=0) && (i+1<(int)rows) && (j+1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i+1][j+1], false));
    }
    
    graph.push_back(vec);
  }

} 

bool BogglePlayer::getAllValidWords(unsigned int minimum_word_length,
                                                   set<string>* words){
  return false;
}

bool BogglePlayer::isInLexicon(const string& word_to_check){
  return false;
}

vector<int> BogglePlayer::isOnBoard(const string& word_to_check){
  vector<int> one; 
  return one;
}

void BogglePlayer::getCustomBoard(string** &new_board, unsigned int *rows,
                                          unsigned int *cols){

}

