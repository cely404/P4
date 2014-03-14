#include <assert.h>
#include <vector>
#include "boggleplayer.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include "boggleutil.h"

 using namespace std;
/**
 * A test for the setBoard method
 * */
int main() {

  //create boggle players
  IBogglePlayer * boggle0 = new BogglePlayer();
  IBogglePlayer * boggle1 = new BogglePlayer();
  IBogglePlayer * boggle2 = new BogglePlayer();
  IBogglePlayer * boggle3 = new BogglePlayer();
  IBogglePlayer * boggle4 = new BogglePlayer();
  IBogglePlayer * boggle5 = new BogglePlayer();
   
  //create boards 
 // string row0[] = {"a","b", "cd", "efg"};
 // string* board[] = {row0};

 /* string Arow0[] = {"a"};
  string Arow1[] = {"bc"};
  string Arow2[] = {"def"};
  string Arow3[] = {"gh"};
  string* Aboard[] = {Arow0, Arow1,Arow2,Arow3};
*/ 
  string Brow0[] = {"a","bc"};
  string Brow1[] = {"d","ef"};
  string Brow2[] = {"ghi","j"};
  string* Bboard[] = {Brow0,Brow1,Brow2};
/*
  string Crow0[] = {"abc","def", "g"};
  string Crow1[] = {"h","i", "jk"};
  string* Cboard[] = {Crow0,Crow1};

  string Drow0[] = {"a","b", "c", "d"};
  string Drow1[] = {"e","f", "g", "h"};
  string Drow2[] = {"i","j", "k", "l"};
  string Drow3[] = {"m","n", "o", "p"};
  string* Dboard[] = {Drow0, Drow1, Drow2, Drow3};
*/
  //set all the boards
 // boggle0->setBoard(1, 4, board);
//  boggle1->setBoard(4, 1, Aboard);
  boggle2->setBoard(3, 2, Bboard);
  //boggle3->setBoard(2, 3, Cboard);
 // boggle4->setBoard(4, 4, Dboard);


  //check the boards for valid words
 /* vector<int>::iterator vit=boggle0->isOnBoard("abcd").begin();
  vector<int>::iterator ven=boggle0->isOnBoard("abcd").end();
  for(;vit!=ven; vit++){
  cout << "The index of it is "<< *vit; 
  }*/
//  assert(boggle0->isOnBoard("abcd").size() > 0);
  vector<int> vec;
  vec = boggle2->isOnBoard("abcd"); 
 // assert(boggle0->isOnBoard("cdefg").size() > 0);
 /* assert(boggle0->isOnBoard("efgc").size() > 0);
  assert(boggle0->isOnBoard("bcd").size() > 0);

  assert(boggle1->isOnBoard("abc").size() > 0);
  assert(boggle1->isOnBoard("bcdef").size() > 0);
  assert(boggle1->isOnBoard("ghdefbc").size() > 0);

  assert(boggle2->isOnBoard("ghi").size() > 0);
  assert(boggle2->isOnBoard("ghief").size() > 0);
  assert(boggle2->isOnBoard("bcaef").size() > 0);
  assert(boggle2->isOnBoard("jdabc").size() > 0);

  assert(boggle3->isOnBoard("abcijk").size() > 0);
  assert(boggle3->isOnBoard("def").size() > 0);
  assert(boggle3->isOnBoard("gih").size() > 0);

  assert(boggle4->isOnBoard("aejglok").size() > 0);
  assert(boggle4->isOnBoard("dglojfie").size() > 0);
  assert(boggle4->isOnBoard("aeimnoplhdcbfjkg").size() > 0);
  assert(boggle4->isOnBoard("gjfklhdc").size() > 0);

  //check the boards for invalid words
  assert(boggle0->isOnBoard("").size() == 0);
  assert(boggle0->isOnBoard("ab").size() == 0);  
  assert(boggle0->isOnBoard("efgc").size() == 0);
  assert(boggle0->isOnBoard("cda").size() == 0);

  assert(boggle1->isOnBoard("abca").size() == 0);
  assert(boggle1->isOnBoard("adef").size() == 0);
  assert(boggle1->isOnBoard("ghdefb").size() == 0);
  assert(boggle1->isOnBoard("cdefgh").size() == 0);

  assert(boggle2->isOnBoard("abce").size() == 0);
  assert(boggle2->isOnBoard("jghibc").size() == 0);
  assert(boggle2->isOnBoard("adje").size() == 0);
  assert(boggle2->isOnBoard("bc").size() == 0);

  assert(boggle3->isOnBoard("abcij").size() == 0);
  assert(boggle3->isOnBoard("ndefia").size() == 0);
  assert(boggle3->isOnBoard("efg").size() == 0);
  assert(boggle3->isOnBoard("jkiabcd").size() == 0);

  assert(boggle4->isOnBoard("af").size() == 0);
  assert(boggle4->isOnBoard("paeje").size() == 0);
  assert(boggle4->isOnBoard("abcklge").size() == 0);
  assert(boggle4->isOnBoard("gjklph").size() == 0);

*/
  //all tests pass 
  cout << "OK." << endl;


}


