//I will put some stuff for vector operations to here soon.

void _MultiplyMatrix //"Hardcoded"
		   (
		   float *A,
		   float *B
		   )
{	
	float *temporary = _Allocate(4, 4);

	temporary[ 0] = A[ 0] * B[ 0] + A[ 1] * B[ 4] + A[ 2] * B[ 8] + A[ 3] * B[12];
	temporary[ 1] = A[ 0] * B[ 1] + A[ 1] * B[ 5] + A[ 2] * B[ 9] + A[ 3] * B[13];
	temporary[ 2] = A[ 0] * B[ 2] + A[ 1] * B[ 6] + A[ 2] * B[10] + A[ 3] * B[14];
	temporary[ 3] = A[ 0] * B[ 3] + A[ 1] * B[ 7] + A[ 2] * B[11] + A[ 3] * B[15];

	temporary[ 4] = A[ 4] * B[ 0] + A[ 5] * B[ 4] + A[ 6] * B[ 8] + A[ 7] * B[12];
	temporary[ 5] = A[ 4] * B[ 1] + A[ 5] * B[ 5] + A[ 6] * B[ 9] + A[ 7] * B[13];
	temporary[ 6] = A[ 4] * B[ 2] + A[ 5] * B[ 6] + A[ 6] * B[10] + A[ 7] * B[14];
	temporary[ 7] = A[ 4] * B[ 3] + A[ 5] * B[ 7] + A[ 6] * B[11] + A[ 7] * B[15];

	temporary[ 8] = A[ 8] * B[ 0] + A[ 9] * B[ 4] + A[10] * B[ 8] + A[11] * B[12];
	temporary[ 9] = A[ 8] * B[ 1] + A[ 9] * B[ 5] + A[10] * B[ 9] + A[11] * B[13];
	temporary[10] = A[ 8] * B[ 2] + A[ 9] * B[ 6] + A[10] * B[10] + A[11] * B[14];
	temporary[11] = A[ 8] * B[ 3] + A[ 9] * B[ 7] + A[10] * B[11] + A[11] * B[15];

	temporary[12] = A[12] * B[ 0] + A[13] * B[ 4] + A[14] * B[ 8] + A[15] * B[12];
	temporary[13] = A[12] * B[ 1] + A[13] * B[ 5] + A[14] * B[ 9] + A[15] * B[13];
	temporary[14] = A[12] * B[ 2] + A[13] * B[ 6] + A[14] * B[10] + A[15] * B[14];
	temporary[15] = A[12] * B[ 3] + A[13] * B[ 7] + A[14] * B[11] + A[15] * B[15];

	for(int I = 0; I < 4 * 4; I++)
		A[I] = temporary[I];
		
	_Free(temporary);
}

void _IdentityMatrix(float *A)
{
	_MAT4
	(
		A,
		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1
	);
}

void _TransposeMatrix(float *A, float X, float Y, float Z)
{
	_MAT4
	(
		A,
		1, 0, 0, X,
		0, 1, 0, Y,
		0, 0, 1, Z,
		0, 0, 0, 1
	);
}

void _TranslateMatrix(float *A, float X, float Y, float Z)
{
	float *temporary = _Allocate(4, 4);
	_TransposeMatrix(temporary, X,Y,Z);


        _MultiplyMatrix(A, temporary);
        _Free(temporary);
}

void _RotationMatrixX(float *A, float angle)
{
	_MAT4
	(
		A,
		1,  	     0,           0, 0,
		0, +cos(angle), -sin(angle), 0,
		0, +sin(angle), +cos(angle), 0,
		0,           0,           0, 1
	);
}

void _RotationMatrixY(float *A, float angle)
{
	_MAT4
	(
		A,
		+cos(angle), 0, +sin(angle), 0,
			  0, 1,	 	  0, 0,
		-sin(angle), 0, +cos(angle), 0,
			  0, 0,		  0, 1
	);
}
void _RotationMatrixZ(float *A, float angle)
{
	_MAT4
	(
		A,
		+cos(angle), -sin(angle), 0, 0,
		+sin(angle), +cos(angle), 0, 0,
			  0,	       0, 1, 0,
		  	  0,	       0, 0, 1
	);
}

typedef enum
{
	_X_Axis,
	_Y_Axis,
	_Z_Axis
}Axises;

void _RotateMatrix(float *A, float angle, Axises axis)
{
	float *temporary = _Allocate(4, 4);
	
	switch(axis)
	{
		case _X_Axis:
			_RotationMatrixX(temporary, angle);
			break;
		case _Y_Axis:
			_RotationMatrixY(temporary, angle);
			break;
		case _Z_Axis:
			_RotationMatrixZ(temporary, angle);
			break;
	}
	
	_MultiplyMatrix(A, temporary);
	_Free(temporary);
}

void _ScalingMatrix(float *A, float X, float Y, float Z)
{
	_MAT4
	(
		A,
		X, 0, 0, 0,
		0, Y, 0, 0,
		0, 0, Z, 0,
		0, 0, 0, 1
	);
}

void _ScaleMatrix(float *A, float X, float Y, float Z)
{
	float *temporary = _Allocate(4, 4);
	_ScalingMatrix(temporary, X, Y, Z);

	_MultiplyMatrix(A, temporary);
	_Free(temporary);
}

//I will add some stuff for projection matrices to here soon.
