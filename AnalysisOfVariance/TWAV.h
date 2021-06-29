#pragma once
#include<vector>
#include<iostream>
#include <cmath>

using Matrix3 = std::vector<std::vector<std::vector<double>>>;
using Matrix = std::vector<std::vector<double>>;

double Q1(Matrix3 mat3, int m, int l, int n);
double Q2(Matrix3 mat3, int m, int l, int n);
double Q3(Matrix3 mat3, int m, int l, int n);
double Q4(Matrix3 mat3, int m, int l, int n);
double QGen(Matrix3 mat3, int m, int l, int n);
Matrix GroupMidCell(Matrix3 mat3, int m, int l, int n);
std::vector<double> GroupMidRow(Matrix3 mat3, int m, int l, int n);
std::vector<double> GroupMidCol(Matrix3 mat3, int m, int l, int n);
double GenMid(Matrix3 mat3, int m, int l, int n);
