#include "iboggleplayer.cpp"

virtual void buildLexicon(const vector<string>& word_list)=0;{
	vector<string>::iterator vit = v.begin();
	vecotr<string>::iteraotr ven = v.end(); 
	for(; vit != ven; vit++)
		insert(*vit);

}
/**
 *  Function will be used as a helper function for the buildLexicon function. 
 *  Takes in a string and inserts it into the trie which will use an array of structs
 *  as its backing structure 
 */
void insert(string word){
	if(word == nullptr || word.size() > 16 )
		return;
	alphanode * current = root; 
	int i = 0; 

	/**
 	 * Case where root is null/empty trie 
 	 */
	if(!root){
		alphanode* root = malloc(26 * sizeof(*alphanode);
		current =  root;
		root[(int)word[i]-97]->present = true;
		i++;
	}

	for(; i<word.size(); i++){
		if( current[((int)word[i]-97)]->present = false ){
			alphanode node = new alphanode();
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
bool search(string word){
	if(word == nullptr)
		return false; 

	alphanode * current = root; 
	for(int i=0; i < word.size(); i++){
		if( !current[word[i]-97]->present )
			return false; 
		if(current->structptr == nullptr)
			return false; 
		current = current->structpr; 	
	}
	return current->is_end; 
}

virtual void setBoard(unsigned int rows, unsigned int cols, string** diceArray) = 0;
virtual bool getAllValidWords(unsigned int minimum_word_length, set<string>* words) = 0;
virtual bool isInLexicon(const string& word_to_check) = 0;
virtual vector<int> isOnBoard(const string& word_to_check) = 0;
virtual void getCustomBoard(string** &new_board, unsigned int *rows, unsigned int *cols) = 0;
virtual ~IBogglePlayer() {}
