#ifndef __LA_MAT4__
#    define __LA_MAT4__

float *identityMatrix(void)
{
	static MAT4 matrix;

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

	return matrix;
}

void translateMatrix(MAT4 matrix, float X, float Y, float Z) 
{
	matrix[ 3] = matrix[ 3] + X;
	matrix[ 7] = matrix[ 7] + Y;
	matrix[11] = matrix[11] + Z;
}

void scaleMatrix(MAT4 matrix, float X, float Y, float Z)
{
	matrix[ 0] = matrix[ 0] + X;
	matrix[ 5] = matrix[ 5] + Y;
	matrix[10] = matrix[10] + Z;	
}

#	define RADIANS(DEGREES) DEGREES * (PI/180)
#	define DEGREES(RADIANS) RADIANS * (180/PI)


void rotateMatrixX(MAT4 matrix, float angle)
{
	//...
}

void rotateMatrixY(MAT4 matrix, float angle)
{
	//...
}

void rotateMatrixZ(MAT4 matrix, float angle)
{
	//...
}


float *ortographicMatrix(float left, float right, float bottom, float top)
{
	static MAT4 matrix;

	for(int I = 0; I < 16; I++)
		matrix[I] = 0;
	

	//...

	return matrix;
}

float *perspectiveMatrix(/*...*/)
{
	static MAT4 matrix;

	for(int I = 0; I < 16; I++)
		matrix[I] = 0;
	

	//...

	return matrix;
}

//...

#endif
