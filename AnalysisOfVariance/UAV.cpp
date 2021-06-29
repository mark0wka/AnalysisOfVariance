#include "UAV.h"

double SumOfQuadOfSum(Matrix mat, int m, int n)
{
	double res = 0;
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += mat[i][j];
		}
		res += pow(sum, 2);
		sum = 0;
	}

	return res;
}

double QuadOfSums(Matrix mat, int m, int n)
{
	double res = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			res += mat[i][j];
		}
	}
	res = pow(res, 2);

	return res;
}

double SumsOfQuad(Matrix mat, int m, int n)
{
	double res = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			res += pow(mat[i][j], 2);
		}
	}

	return res;
}

// Межгрупповая компонента дисперсии
double IntergroupMidQuad(Matrix mat, int m, int n)
{
	int PowFree = m - 1;
	double Q1 = (SumOfQuadOfSum(mat, m, n) / n) - QuadOfSums(mat, m, n) / (m * n);
	double res = Q1 / PowFree;
	return res;
}

// Внутригрупповая компонента дисперсии
double IntragroupMidQuad(Matrix mat, int m, int n)
{
	int PowFree = m * n - m;
	double Q2 = SumsOfQuad(mat, m, n) - (SumOfQuadOfSum(mat, m, n) / n);
	double res = Q2 / PowFree;
	return res;
}