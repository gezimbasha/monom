#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <math.h>
using namespace std;

template<class T, unsigned int M, unsigned int N>
class Matrix
{
private:
	T x[M][N];	
public:
	Matrix(void);
	~Matrix();
};

//////////////////////////////////////////////////
// Constructors
/////////////////////////////////////////////////
template<class T, unsigned int M, unsigned int N>
Matrix<T,M,N>::Matrix(void)
{
	for(int i=0; i<M; i++)
		for(int j=0; j<N; j++)
			x[i][j]=0;
}

template<class T, unsigned int M, unsigned int N>
Matrix<T,M,N>::~Matrix()
{
}

#endif
