#ifndef MATRIX_H
#define MATRIX_H

#include <stdarg.h>
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
	
	T coeff(unsigned int i, unsigned int j) const;

	// Friend operators
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

///////////////////////////////////////////////////
// Accessors
//////////////////////////////////////////////////
template<class T, unsigned int M, unsigned int N>
T Matrix<T,N,M>::coeff(unsigned int i, unsigned int j) const
{
	return x[i][j];
}
#endif
