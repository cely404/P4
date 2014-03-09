#include "BOGGLEUTIL_H"

void getneighbors(int rows, int cols, int i, int j,
	vector<pair<int, bool>> &vec, string** diceArray){

	vec.push_back(diceArray[i][j], false);


	if((i-1>=0) && (j-1>=0) && (i-1<rows) && (j-1<cols))
		vec.push_back(diceArray[i-1][j-1], false);


	if((i-1>=0) && (i-1<rows))
		vec.push_back(diceArray[i-1][j], false);


	if((i-1>=0) && (j+1>=0) && (i-1<rows) && (j+1<cols))
		vec.push_back(diceArray[i-1][j+1], false);


	if((j-1>=0) && (j-1<cols))
		vec.push_back(diceArray[i][j-1], false);


	if((j+1>=0) && (j+1<cols))
		vec.push_back(diceArray[i][j+1], false);


	if(i+1>=0) && (j-1>=0) && (i+1<rows) && (j-1<cols))
		vec.push_back(diceArray[i+1][j-1], false);


	if((i+1>=0) && (i+1<rows))
		vec.push_back(diceArray[i+1][j], false);

	if((i+1>=0) && (j+1>=0) && (i+1<rows) && (j+1<cols))
		vec.push_back(diceArray[i+1][j+1], false);

}

