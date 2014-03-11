#include "boggleutil.h"

/**
 *  Function will be used as a helper function for the buildLexicon 
 *  function.Takes in a string and inserts it into the trie which will 
 *  use an array of structs as its backing structure 
 */
void Trie::insert(string word){
  if(word.empty())
  return;

  struct container *current[26];
  int i = 0; 

  /**
   * Case where root is null/empty trie 
   */
  if(!x){
    struct container curr = new container[26];
	  curr[(int)word[i]-97]->present = true;
 	  root = curr; 
	  i++;
	  this->x=1;
  }
  current = root; 

  for(; i<word.size(); i++){
    if( current[((int)word[i]-97)]->present = false ){
	   Trie child = new Trie[26];
	   current->ptr=child; 		
     child[(int)word[i]-97]->present = true;
    }
	  current = child;
      }
   current->is_end = true; 
   return; 
   }

   /**
    *  Function will be used as a helper function for the buildLexicon 
    *  function. Takes in a string and determines if the string is located 
    *  in the trie. Returns true if string present and false otherwise 
    */ 
   bool Trie::search(string word){
      if(word.empty())
         return false; 

      Trie *current = root; 
      for(int i=0; i < word.size(); i++){
         if( !current[word[i]-97]->present )
            return false; 
         if(current->ptr == 0 && !(current->end))
	    return false; 
	 current = current->ptr; 	
      }
      return current->is_end; 
   }


}





