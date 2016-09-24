#ifndef __GLM_MAT4__
#    define __GLM_MAT4__

typedef float MAT4[4][4];

void identityMatrix(MAT4 matrix)
{
	memset(matrix, 0, sizeof(matrix[0][0]) * 4 * 4);
	
	for(int I = 0; I < 4; I++)
	{
		matrix[I][I] = 1;
	}
}

#endif
