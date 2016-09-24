#ifndef __GLM_MAT4__
#    define __GLM_MAT4__

typedef float MAT4[4 * 4];

void identityMatrix(MAT4 matrix)
{
	for(int X = 0; X < 4; X++)
	{
		for(int Y = 0; Y < 4; Y++)
		{	
			if(X == Y)
			{
				matrix[(X * 4) + Y] = 1;
			}
			else
			{		
				matrix[(X * 4) + Y] = 0;
			}		
		}
	}
}

void translateMatrix(MAT4 matrix, float X, float Y, float Z) 
{
	matrix[03] = matrix[03] + X;
	matrix[07] = matrix[07] + Y;
	matrix[11] = matrix[11] + Z;
}

void scaleMatrix(MAT4 matrix, float X, float Y, float Z)
{
	matrix[00] = matrix[00] + X;
	matrix[05] = matrix[05] + Y;
	matrix[10] = matrix[10] + Z;	
}

#endif
