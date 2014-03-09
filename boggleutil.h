#ifndef BOGGLEUTIL_H
#define BOGGLEPUTIL_H


#include <set>
#include <vector>
#include <string>

using std::vector;
using std::set;
using std::string;


class boggleutil {

public:				
void getneighbors(int rows, int cols, int i, int j,
	vector<pair<int, bool>> &vec, string** diceArray);

private:

}; 
#endif //BOGGLEUTIL_H