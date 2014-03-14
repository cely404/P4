#include <vector>
#include "boggleplayer.h"
#include <string>
#include <assert.h>
#include <stdio.h>
#include <iostream>
#include "boggleutil.h"

using namespace std;
/**
 * A test for the isInLexicon method
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

  //build the lexicons
  boggle0->buildLexicon(lex0);
  boggle1->buildLexicon(lex1);
  boggle2->buildLexicon(lex2);
  boggle3->buildLexicon(lex3);
  boggle4->buildLexicon(lex4);
  boggle5->buildLexicon(lex5);

 //check that valid words are in the lexicon
  assert( boggle0->isInLexicon("apple") );
  assert( boggle0->isInLexicon("pledge") );
  assert( boggle0->isInLexicon("edge") );
  assert( boggle0->isInLexicon("name") );
  assert( boggle0->isInLexicon("get") );
  assert( boggle0->isInLexicon("led") );

  assert( boggle1->isInLexicon("apple") );
  assert( boggle1->isInLexicon("pledge") );
  assert( boggle1->isInLexicon("get") );
  assert( boggle1->isInLexicon("name") );
  assert( boggle1->isInLexicon("edge") );
  assert( boggle1->isInLexicon("led") );

  assert( boggle2->isInLexicon("abcdef") );
  assert( boggle2->isInLexicon("fdabc") );
  assert( boggle2->isInLexicon("fcde") );
  assert( boggle2->isInLexicon("bcdef") );

  assert( boggle3->isInLexicon("adef") );
  assert( boggle3->isInLexicon("aecfb") );
  assert( boggle3->isInLexicon("deba") );
  assert( boggle3->isInLexicon("cfe") );

  assert( boggle4->isInLexicon("aejglok") );
  assert( boggle4->isInLexicon("dglojfie") );
  assert( boggle4->isInLexicon("mjgdhlpokfa") );
  assert( boggle4->isInLexicon("gjfklhdc") );

  assert( boggle5->isInLexicon("adbc") );
  assert( boggle5->isInLexicon("dbac") );
  assert( boggle5->isInLexicon("cbda") );

  //check that invalid words are not in the lexicon
  assert(! boggle0->isInLexicon("app") );
  assert(! boggle0->isInLexicon("pled") );
  assert(! boggle0->isInLexicon("dge") );
  assert(! boggle0->isInLexicon(" ") );

  assert(! boggle1->isInLexicon("app") );
  assert(! boggle1->isInLexicon("pled") );
  assert(! boggle1->isInLexicon("getn") );
  assert(! boggle1->isInLexicon("") );

  assert(! boggle2->isInLexicon("abcdfe") );
  assert(! boggle2->isInLexicon("acdb") );
  assert(! boggle2->isInLexicon("fdce") );
  assert(! boggle2->isInLexicon("shit") );

  assert(! boggle3->isInLexicon("adeb") );
  assert(! boggle3->isInLexicon("aecf") );
  assert(! boggle3->isInLexicon("fceda") );

  assert(! boggle4->isInLexicon("aeimnop") );
  assert(! boggle4->isInLexicon("dgloj") );
  assert(! boggle4->isInLexicon("aejglo") );

  assert(! boggle5->isInLexicon("abcd") );
  assert(! boggle5->isInLexicon("dba") );
  assert(! boggle5->isInLexicon("cbd") );

  //all tests pass 
  cout << "OK." << endl;


}


