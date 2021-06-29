#include "TWAV.h"

Matrix GroupMidCell(Matrix3 mat3, int m, int l, int n) {
	Matrix mat(m, std::vector<double>(l));
	double tmp = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < n; k++) {
				tmp += mat3[i][j][k];
			}
			mat[i][j] = tmp / n;
			tmp = 0;
		}
	}

	return mat;
}

std::vector<double> GroupMidRow(Matrix3 mat3, int m, int l, int n) {
	std::vector<double> vec(m);
	Matrix mat = GroupMidCell(mat3, m, l, n);
	double tmp;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			tmp += mat[i][j];
		}
		vec[i] = tmp / l;
		tmp = 0;
	}

	return vec;
}

std::vector<double> GroupMidCol(Matrix3 mat3, int m, int l, int n) {
	std::vector<double> vec(l);
	Matrix mat = GroupMidCell(mat3, m, l, n);
	double tmp;

	for (int j = 0; j < l; j++) {
		for (int i = 0; i < m; i++) {
			tmp += mat[i][j];
		}
		vec[j] = tmp / m;
		tmp = 0;
	}

	return vec;
}

double GenMid(Matrix3 mat3, int m, int l, int n) {
	double res;
	Matrix mat = GroupMidCell(mat3, m, l, n);
	double tmp;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			tmp += mat[i][j];
		}
	}

	res = tmp / (m * l);
	return res;
}

double Q1(Matrix3 mat3, int m, int l, int n) {
	double res;
	double mid = GenMid(mat3, m, l, n);
	std::vector<double> vec = GroupMidRow(mat3, m, l, n);

	for (int i = 0; i < m; i++) {
		res += pow((vec[i] - mid), 2);
	}

	res *= l * n;
	return res;
}

double Q2(Matrix3 mat3, int m, int l, int n) {
	double res;
	double mid = GenMid(mat3, m, l, n);
	std::vector<double> vec = GroupMidCol(mat3, m, l, n);

	for (int j = 0; j < l; j++) {
		res += pow((vec[j] - mid), 2);
	}

	res *= m * n;
	return res;
}

double Q3(Matrix3 mat3, int m, int l, int n) {
	double res;
	double mid = GenMid(mat3, m, l, n);
	std::vector<double> vecCol = GroupMidCol(mat3, m, l, n);
	std::vector<double> vecRow = GroupMidRow(mat3, m, l, n);
	Matrix mat = GroupMidCell(mat3, m, l, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			res += pow((mat[i][j] - vecRow[i] - vecCol[j] + mid), 2);
		}
	}

	res *= n;
	return res;
}

double Q4(Matrix3 mat3, int m, int l, int n) {
	double res;
	Matrix mat = GroupMidCell(mat3, m, l, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < n; k++) {
				res += pow((mat3[i][j][k] - mat[i][j]), 2);
			}
		}
	}

	return res;
}

double QGen(Matrix3 mat3, int m, int l, int n) {
	double res;
	double mid = GenMid(mat3, m, l, n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < n; k++) {
				res += pow((mat3[i][j][k] - mid), 2);
			}
		}
	}

	return res;
}