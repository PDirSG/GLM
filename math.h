#ifndef math_H
#	define math_H

#   include <math.h>

#	define degreesToRadians(degrees) degrees * (M_PI / 180)
#	define radiansToDegrees(radians) radians * (180 / M_PI)

#	define _Allocate(columnSize, rowSize) (float *) malloc((columnSize * rowSize) * sizeof(float))
#	define _Free(memoryBlock) free(memoryBlock)

void _VEC4
		 (
		 float *vector,
			
		 float A,
		 float B,
		 float C,
		 float D
		 )
{	
	vector[0] = A;
	vector[1] = B;
	vector[2] = C;
	vector[3] = D;
}

void _VEC3
		 (
		 float *vector,
			
		 float A,
		 float B,
		 float C
		 )
{	
	vector[0] = A;
	vector[1] = B;
	vector[2] = C;
}

void _VEC2
		 (
		 float *vector,

		 float A,
		 float B
		 )
{	
	vector[0] = A;
	vector[1] = B;
}

void _MAT4
		 (
		 float *matrix,
			
		 float A, float B, float C, float D,
		 float E, float F, float G, float H,
		 float I, float J, float K, float L,
		 float M, float N, float O, float P
		 )
{	
	matrix[ 0] = A; matrix[ 1] = B; matrix[ 2] = C; matrix[ 3] = D;
	matrix[ 4] = E; matrix[ 5] = F; matrix[ 6] = G; matrix[ 7] = H;
	matrix[ 8] = I; matrix[ 9] = J; matrix[10] = K; matrix[11] = L;
	matrix[12] = M; matrix[13] = N; matrix[14] = O; matrix[15] = P;	
}

#	include "math.c"

#endif
