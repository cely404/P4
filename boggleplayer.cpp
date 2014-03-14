#include "boggleplayer.h"
#include <stdio.h>
#include <iostream>

using namespace std;



void BogglePlayer::buildLexicon(const vector<string>& word_list){
  lex = new Trie();
	vector<string>::const_iterator vit = word_list.begin();
	vector<string>::const_iterator ven = word_list.end(); 
	for(; vit != ven; vit++)
		lex->insert(*vit);

}
int BogglePlayer::computeIndex(int i, int j, int width){
   return ((i*width)+j);
}

void BogglePlayer::setBoard(unsigned int rows, unsigned int cols,
                                                      string** diceArray){
  //vector< vector<pair<string,bool> > > graph;
  for(int i = 0; i < (int)rows ;i++ ){
    //vector<pair<string,bool> > vec;
    for(int j = 0; j< (int)cols ; j++){
      vector<pair<string,int> > vec ;
      vec.clear();

      vec.push_back(std::make_pair(diceArray[i][j],computeIndex(i,j,cols)));
      if((i-1>=0) && (j-1>=0) && (i-1<(int)rows) && (j-1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i-1][j-1],computeIndex(i-1,j-1, cols)));

      if((i-1>=0) && (i-1<(int)rows))
        vec.push_back(std::make_pair(diceArray[i-1][j],computeIndex(i-1,j,cols)));

      if((i-1>=0) && (j+1>=0) && (i-1<(int)rows) && (j+1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i-1][j+1], computeIndex(i-1, j+1, cols)));

      if((j-1>=0) && (j-1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i][j-1], computeIndex(i,j-1,cols)));

      if((j+1>=0) && (j+1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i][j+1],computeIndex(i,j+1,cols)));

      if((i+1>=0) && (j-1>=0) && (i+1<(int)rows) && (j-1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i+1][j-1], computeIndex(i+1,j-1,cols)));

      if((i+1>=0) && (i+1<(int)rows))
        vec.push_back(std::make_pair(diceArray[i+1][j],computeIndex(i+1,j,cols)));

      if((i+1>=0) && (j+1>=0) && (i+1<(int)rows) && (j+1<(int)cols))
        vec.push_back(std::make_pair(diceArray[i+1][j+1],computeIndex(i+1,j+1,cols)));
     
      graph.push_back(vec);

    }
  } 
  vector< vector<pair<string,int> > >::iterator vit = graph.begin();
  vector< vector<pair<string,int> > >::iterator ven = graph.end();
/*  for(;vit != ven; vit++){
    vector<pair<string,int> >::iterator vit2 = (*vit).begin();
  vector<pair<string,int> >::iterator ven2 = (*vit).end();
    cout << "neighbors of "<<(*vit2).first << "are "<<endl;
    for(; vit2!=ven2; vit2++){
      //printing out anything with e in in it 
    //  for(int i=0; i< (*vit2).first.size(); i++){
        
        cout << "the index of word "<< (*vit2).first <<"is" << ((*vit2).second)<< endl;
    }
      
  }*/
  
} 





bool BogglePlayer::isInLexicon(const string& word_to_check){
  return lex->search(word_to_check);
}


vector<int> BogglePlayer::isOnBoard(const string& word_to_check){
  goodpaths.clear();
  if (word_to_check.size() < 3){
    return goodpaths; 
  }
  return rFindBoard(0,word_to_check); 
}

vector<int> BogglePlayer::rFindBoard(int indexi, string word){
  //don't know how yet but if set Board hasn't been called then we 
  //return a null vector
  
  //setting up graph each time with all bools reset 
  vector< vector<pair<string,int> > > mygraph;
  mygraph = graph;
   
  
  vector< vector<pair<string,int> > >::iterator vit = mygraph.begin();
  vector< vector<pair<string,int> > >::iterator ven = mygraph.end();

  vit+= indexi; 
  for(;vit != ven; vit++){
    vector<pair<string,int> >::iterator vit2 = (*vit).begin();
    vector<pair<string,int> >::iterator ven2 = (*vit).end();
      if( word.find( (*vit2).first)!= -1 ){
        //end condition, found end of string return vector 
        if((*vit2).first.compare(word)==0){
          goodpaths.push_back((*vit2).second);
          return goodpaths;  
        }else{ //else you go into its neighbors and shorten word passed in
          word = word.substr((*vit2).first.size(),word.size()-1);
          for(; vit2!=ven2; vit2++){
            if( word.find( (*vit2).first)!= -1 ){
            //end condition, found end of string return vector 
               return rFindBoard((*vit2).second, word); 
            }
          }
        }
      }
  }
  return goodpaths; 

}


bool BogglePlayer::getAllValidWords(unsigned int minimum_word_length,
                                                   set<string>* words){
  return false;
}


void BogglePlayer::getCustomBoard(string** &new_board, unsigned int *rows,
                                          unsigned int *cols){
}

