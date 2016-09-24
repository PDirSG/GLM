#ifndef __GLM_MAT4__
#    define __GLM_MAT4__

typedef float MAT4[4][4];

void identityMatrix(MAT4 matrix)
{
	for(int X = 0; X < 4; X++)
	{
		for(int Y = 0; Y < 4; Y++)
		{	
			if(X == Y)
			{
				matrix[X][Y] = 1;
			}
			else
			{		
				matrix[X][Y] = 0;
			}		
		}
	}
}

#endif
