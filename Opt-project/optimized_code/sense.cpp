#include "headers/sense.h"

using namespace std;

// OPTIMIZATION: Pass larger variables by reference
void sense(char color,
	vector< vector <char> > *grid,
	vector< vector <float> > *beliefs,
	float p_hit,
	float p_miss)
{
	// OPTIMIZATION: Is the newGrid variable necessary?
  	// Could the beliefs input variable be updated directly?
	int i, j;
	float height = (*grid).size();
	float width = (*grid)[0].size();
	for (i=0; i<height ; i++)
	{
		for (j=0; j<width; j++)
		{

			if ((*grid)[i][j] == color)
			{
				(*beliefs)[i][j] = (*beliefs)[i][j] * p_hit;
			}
			else
			{
				(*beliefs)[i][j] = (*beliefs)[i][j] * p_miss;
			}
		}
	}
}
