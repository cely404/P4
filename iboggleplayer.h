/**
 *  CSE 100 C++ Boggle
 *  Authors: Vivek Ramavajjala, Paul Kube
 */

#ifndef IBOGGLEPLAYER_H
#define IBOGGLEPLAYER_H

#include <set>
#include <vector>
#include <string>

using std::vector;
using std::set;
using std::string;

/**
 *  The interface class for any computer Boggle player.
 *  Subclass this, and provide definitions for all the
 *  public pure virtual member functions shown.
 *  See the README for detailed documentation on these functions.
 */
class IBogglePlayer {

  public:
  /**
   * Struct will be used as an internal data structure to hold information about 
   * each entry in the trie. Each "node" in the tree will be an array of 26 structs
   * each with the default values modified as needed  
   */
  struct alphanode{
     bool present = false;
     bool is_end = false;
     struct * structptr = nullptr; 
  };

  virtual void buildLexicon(const vector<string>& word_list) = 0;
  virtual void setBoard(unsigned int rows, unsigned int cols, string** diceArray) = 0;
  virtual bool getAllValidWords(unsigned int minimum_word_length, set<string>* words) = 0;
  virtual bool isInLexicon(const string& word_to_check) = 0;
  virtual vector<int> isOnBoard(const string& word_to_check) = 0;
  virtual void getCustomBoard(string** &new_board, unsigned int *rows, unsigned int *cols) = 0;
  virtual ~IBogglePlayer() {}

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

#endif // IBOGGLEPLAYER_H
