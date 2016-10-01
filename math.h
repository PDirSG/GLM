#ifndef math_H
#	define math_H

#   include <math.h>

float degreesToRadians(float degrees) { return degrees * (M_PI / 180); };
float radiansToDegrees(float radians) { return radians * (180 / M_PI); };

float *_Allocate(int columnSize, int rowSize)
{
	return (float *) malloc((columnSize * rowSize) * sizeof(float));
}

float *_VEC4
			(
			float A,
			float B,
			float C,
			float D
			)
{
	float *vector = _Allocate(1, 4);
	
	vector[0] = A;
	vector[1] = B;
	vector[2] = C;
	vector[3] = D;
	
	return vector;
}

float *_VEC3
			(
			float A,
			float B,
			float C
			)
{
	float *vector = _Allocate(1, 3);
	
	vector[0] = A;
	vector[1] = B;
	vector[2] = C;
	
	return vector;
}

float *_VEC2
			(
			float A,
			float B
			)
{
	float *vector = _Allocate(1, 2);
	
	vector[0] = A;
	vector[1] = B;
	
	return vector;
}

float *_MAT4
			(
			float A, float B, float C, float D,
			float E, float F, float G, float H,
			float I, float J, float K, float L,
			float M, float N, float O, float P
			)
{
	float *matrix = _Allocate(4, 4);
	
	matrix[ 0] = A; matrix[ 1] = B; matrix[ 2] = C; matrix[ 3] = D;
	matrix[ 4] = E; matrix[ 5] = F; matrix[ 6] = G; matrix[ 7] = H;
	matrix[ 8] = I; matrix[ 9] = J; matrix[10] = K; matrix[11] = L;
	matrix[12] = M; matrix[13] = N; matrix[14] = O; matrix[15] = P;	

	return matrix;
}

float *addition(float *A, float *B, int columnSize, int rowSize)
{
	float *C = _Allocate(columnSize, rowSize);
	
	for(int I = 0; I < (columnSize * rowSize); I++)
		C[I] = A[I] + B[I];
	
	return C;
}

float *subtraction(float *A, float *B, int columnSize, int rowSize)
{
	float *C = _Allocate(columnSize, rowSize);
	
	for(int I = 0; I < (columnSize * rowSize); I++)
		C[I] = A[I] - B[I];
	
	return C;
}



float *multiplication
					(
					float *A, int columnSize1, int rowSize1, 
					float *B, int columnSize2, int rowSize2
					)
{
	//...
}

#	include "math.c"

#endif
