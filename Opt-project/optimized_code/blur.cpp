#include "headers/blur.h"
#include "headers/zeros.h"

using namespace std;

// OPTIMIZATION: Pass large variable by reference
vector < vector <float> > blur(vector < vector < float> > *grid) {

	static float blurring = 0.12;

	static float center = 1.0 - blurring;
	static float corner = blurring / 12.0;
	static float adjacent = blurring / 6.0;

  static vector < vector <float> > window = {{corner, adjacent, corner},
                                      {adjacent, center, adjacent},
                                      {corner, adjacent, corner}};

  const static vector <int> DX = {-1, 0, 1};
  const static vector <int> DY = {-1, 0, 1};

	int height;
	int width;
	height = (*grid).size();
	width = (*grid)[0].size();

  	// OPTIMIZATION: Use your improved zeros function
  vector < vector <float> > newGrid = zeros(height,width);

	int i, j;
	float val;
	int dx;
	int dy;
	int ii;
	int jj;
	int new_i;
	int new_j;
	float multiplier;

	for (i=0; i<height; ++i ) {
		for (j=0; j<width; ++j ) {
			val = (*grid)[i][j];
			for (ii=0; ii<3; ++ii) {
				dy = DY[ii];
				for (jj=0; jj<3; ++jj) {
					dx = DX[jj];
					new_i = (i + dy + height) % height;
					new_j = (j + dx + width) % width;
					multiplier = window[ii][jj];
					newGrid[new_i][new_j] += val * multiplier;
				}
			}
		}
	}

	return newGrid;
}
