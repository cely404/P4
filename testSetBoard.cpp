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
   
  // create separate lexicons
  vector<string> lex0;
  lex0.push_back("apple");
  lex0.push_back("pledge");
  lex0.push_back("edge");
  lex0.push_back("ledge");
  lex0.push_back("led");
  lex0.push_back("get");
  lex0.push_back("name");

  vector<string> lex1;
  lex1.push_back("apple");
  lex1.push_back("pledge");
  lex1.push_back("get");
  lex1.push_back("name");
  lex1.push_back("edge");
  lex1.push_back("ledge");
  lex1.push_back("led");

  vector<string> lex2;
  lex2.push_back("abcdef");
  lex2.push_back("fcde");
  lex2.push_back("fdabc");
  lex2.push_back("bcdef");

  vector<string> lex3;
  lex3.push_back("adef");
  lex3.push_back("aecfb");
  lex3.push_back("deba");
  lex3.push_back("cfe");

  vector<string> lex4;
  lex4.push_back("aejglok");
  lex4.push_back("dglojfie");
  lex4.push_back("mjgdhlpokfa");
  lex4.push_back("gjfklhdc");

  vector<string> lex5;
  lex5.push_back("adbc");
  lex5.push_back("dbac");
  lex5.push_back("cbda");

  

  //create boards 
  string row0[] = {"a","pple", "dge", "tname"};
  string* board[] = {row0};

  string Arow0[] = {"apple"};
  string Arow1[] = {"dge"};
  string Arow2[] = {"t"};
  string Arow3[] = {"name"};
  string* Aboard[] = {Arow0, Arow1,Arow2,Arow3};
 
  string Brow0[] = {"a","b"};
  string Brow1[] = {"c","d"};
  string Brow2[] = {"e","f"};
  string* Bboard[] = {Brow0,Brow1,Brow2};

  string Crow0[] = {"a","b", "c"};
  string Crow1[] = {"d","e", "f"};
  string* Cboard[] = {Crow0,Crow1};

  string Drow0[] = {"a","b", "c", "d"};
  string Drow1[] = {"e","f", "g", "h"};
  string Drow2[] = {"i","j", "k", "l"};
  string Drow3[] = {"m","n", "o", "p"};
  string* Dboard[] = {Drow0, Drow1, Drow2, Drow3};

  string Erow0[] = {"a","b"};
  string Erow1[] = {"c","d"};
  string* Eboard[] = {Erow0, Erow1};

  boggle0->buildLexicon(lex0);
  boggle1->buildLexicon(lex1);
  boggle2->buildLexicon(lex2);
  boggle3->buildLexicon(lex3);
  boggle4->buildLexicon(lex4);
  boggle5->buildLexicon(lex5);

  boggle0->setBoard(1, 4, board);
  boggle1->setBoard(4, 1, Aboard);
  boggle2->setBoard(3, 2, Bboard);
  boggle3->setBoard(2, 3, Cboard);
  boggle4->setBoard(4, 4, Dboard);
  boggle5->setBoard(2, 2, Eboard);

  //all tests pass 
  cout << "OK." << endl;


}

