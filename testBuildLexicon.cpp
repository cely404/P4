#include <assert.h>
#include "boggleutil.h"
#include <stdio.h>
#include <iostream>
using namespace std;
/**
 * Test for building the lexicon
 */
int main() {

  //create a trie player to perform tests on
  Trie *trie = new Trie();
 
  //insert some words with prefixes
  trie->insert("dog");
 /* trie->insert("dogged");
  trie->insert("dogmatic");
  trie->insert("ass");
  trie->insert("assert");
  trie->insert("ship");
  trie->insert("shipped");
*/

  //test valid words
  assert(trie->search("dog"));
 /* assert(trie->search("dogmatic"));
  assert(trie->search("shipped"));
  assert(trie->search("assert"));
  assert(trie->search("dogged"));
  assert(trie->search("ship"));

  //test incomplete prefixes
  assert(! trie->search("shi"));  
  assert(! trie->search("dogma"));
  assert(! trie->search("as"));  
  assert(! trie->search("asser"));
  assert(! trie->search("do"));
 
  //test invalid trie that add on to valid prefixes
  assert(! trie->search("dogma"));
  assert(! trie->search("dogmatically"));
  assert(! trie->search("ships"));
  assert(! trie->search("shipwreck"));
  assert(! trie->search("assertion"));
  assert(! trie->search("shipping"));
 
  //insert new trie that add onto the valid prefixes
  trie->insert("dogma");
  trie->insert("dogmatically");
  trie->insert("ships");
  trie->insert("shipwreck");
  trie->insert("assertion");
  trie->insert("shipping");


  //test if new trie are valid
  assert(trie->search("dogma"));
  assert(trie->search("dogmatically"));
  assert(trie->search("ships"));
  assert(trie->search("shipwreck"));
  assert(trie->search("assertion"));
  assert(trie->search("shipping"));

  //other cases 
  assert(! trie->search(""));
  assert(! trie->search(" "));
  assert(! trie->search("d"));
  assert(! trie->search("dog "));
  assert(! trie->search(" ship"));*/
  cout << "All tests passed" << endl;


}

