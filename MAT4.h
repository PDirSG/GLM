#ifndef __GLM_MAT4__
#    define __GLM_MAT4__

typedef float MAT4[4][4];

void identityMatrix(MAT4 matrix)
{
	for(int X = 0; X < 4; X++)
	{
		for(int Y = 0; Y < 4; Y++)
		{	
			matrix[X][Y] = 0;
		}
	}
	
	for(int I = 0; I < 4; I++)
	{
		matrix[I][I] = 1;
	}
}

#endif
