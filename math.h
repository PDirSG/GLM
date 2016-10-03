#ifndef math_H
#	define math_H

//Well, i will not declare mathematical functions again like what GLM does. Most of the functions in this library
//are uses hardware dependent functionality, so you can't except your own mathematical functions are more faster.
#       include <math.h>

//This macro declerations are not used in the source code of this library. You can freely remove them. They are
//only in here for making more easier things for programmers.
#	define degreesToRadians(degrees) degrees * (M_PI / 180)
#	define radiansToDegrees(radians) radians * (180 / M_PI)

//Actually  you can just use an float array but i thing allocating the memory when we need, and releasing
//the memory when we do not need anymore is the best.
#	define _Allocate(columnSize, rowSize) (float *) malloc((columnSize * rowSize) * sizeof(float))
#	define _Free(memoryBlock) free(memoryBlock)

//I will put some stuff for vector operations to here soon.

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
