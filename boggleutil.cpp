#include "boggleutil.h"

   Trie::Trie(){
      bool present = false;
      bool is_end = false;
      Trie* structptr=0; 
   }

 


  /**
    *  Function will be used as a helper function for the buildLexicon function. 
    *  Takes in a string and inserts it into the trie which will use an array of structs
    *  as its backing structure 
    */
   void Trie::insert(string word){
      if(word.isEmpty())
      return;
      Trie* current = root; 
      int i = 0; 

      /**
       * Case where root is null/empty trie 
       */
      if(!root){
         Trie* root = malloc(26 * sizeof(*Trie);
         current =  root;
	 root[(int)word[i]-97]->present = true;
	 i++;
      }

     for(; i<word.size(); i++){
        if( current[((int)word[i]-97)]->present = false ){
	   alphanode node = new Trie();
	   current->structpr=node; 		
           node[(int)word[i]-97]->present = true;
	   current = node;
	}
      }
   current->is_end = true; 
   return; 
   }

   /**
    *  Function will be used as a helper function for the buildLexicon function. 
    *  Takes in a string and determines if the string is located in the trie. Returns
    *  true if string present and false otherwise 
    */ 
   bool Trie::search(string word){
      if(word == nullptr)
         return false; 

      Trie* current = root; 
      for(int i=0; i < word.size(); i++){
         if( !current[word[i]-97]->present )
            return false; 
         if(current->structptr == nullptr)
	    return false; 
	 current = current->structpr; 	
      }
      return current->is_end; 
   }


}





