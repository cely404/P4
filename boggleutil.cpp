#include "boggleutil.h"
#include <stdio.h>
#include <iostream>

using namespace std;



/**
 * Constructor initializes root's properties to false and null
 */
Trie::Trie(){

  root = new TrieNode;
  root->isEnd = false;
  //initialize null array
  for(int i=0; i<26; i++){
    delete root->childIndex[i];
    root->childIndex[i]=NULL;
  }

}


/**
 *  Helper function for buildLexicon. Takes in a string and inserts it into  *  the trie which is made up struct TrieNodes 
 */
void Trie::insert(string word){
  
  if(word.empty())
    return;

  //make sure word to be inserted is valid
  for(int i=0; i < (int)word.size(); i++ ){
     if(word[i]<97 || word[i]>122)
     return; 
  }

  TrieNode *current = root;  

  

  //loop through the word and create a trie for each child needed
  for(int i=0; i<(int)word.size(); i++){
    //create child for previously unassigned letter
    if (current != NULL){
      if( current->childIndex[((int)word[i]-97)] == NULL ){

        TrieNode *child = new TrieNode();
        current->childIndex[((int)word[i]-97)]=child; 
        current = child;
		
      }else{
        current=current->childIndex[(int)word[i]-97];
      }
    }
  }
  
  //end of a word is reached
  current->isEnd = true; 
  return; 
}





/**
 *  Helper function for buildLexicon. Takes in a string and determines if
 *  the string is located in the trie. 
 *  Returns true if string present and false otherwise 
 */ 
bool Trie::search(string word){
  if(word.empty())
    return false; 

  TrieNode *current = root; 

  for(int i=0; i < (int)word.size(); i++){

     if((int)word[i]<97 || (int)word[i]>122)
        return false; 

     if (current != NULL){

       if(current->childIndex==NULL)
         return false; 

       if(current->childIndex[(int)word[i]-97] == NULL)
  	 return false;

       current = current->childIndex[(int)word[i]-97]; 	
     }
  }
  return current->isEnd; 
}








