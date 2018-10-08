#include "headers/zeros.h"

using namespace std;

vector < vector <float> > zeros(int height, int width) {
	// int i, j;

	// OPTIMIZATION: Reserve space in memory for vectors
	vector < vector <float> > newGrid(height, vector<float>(width, 0.0));
	newGrid.reserve(height);
	// for(vector < vector <float> >::iterator it=newGrid.begin(); it != newGrid.end(); ++it)
	// {
	// 	it->reserve(width);
	// }
	return newGrid;
}
