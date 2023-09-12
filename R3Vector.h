#ifndef R3Vector_H
#define R3Vector_H

#include <cmath>
#include <iostream>

template <typename T>

class R3Vec {
	public:
		//Vector
		T e[3];

		//Constructors
		R3Vec() : e{0, 0, 0} {}
		
		R3Vec(T val) {
			e[0] = val;
			e[1] = val;
			e[2] = val;
		}

		R3Vec(T val, double variable) {
			e[0] = val;
			e[1] = val + variable;
			e[2] = val + variable + variable;
		}

		R3Vec(T val, int variable) {
			e[0] = val;
			e[1] = val + variable;
			e[2] = val + variable + variable;
		}

		R3Vec(T e0, T e1, T e2) {
			e[0] = e0;
			e[1] = e1;
			e[2] = e2;
		}

		T length() const {
			return std::sqrt(e[0] * e[0] + e[1] * e[1] + e[2] * e[2]);
		}

		T magnitude() const {
			return length();
		}

		T norm() const {
			return length();
		}

		T dot(const R3Vec &v) {
			return e[0]*v[0] + e[1]*v[1] + e[2]*v[2];
		}

		//X, Y, Z component pulls
		T x() const { return e[0]; }
		T y() const { return e[1]; }
		T z() const { return e[2]; }

		T operator[](int i) const { return e[i]; }
		
		T& operator[](int i) { return e[i]; }

		//Binary Arithmetic Operator
		R3Vec operator+(const R3Vec &v) {
			R3Vec<T> r3vec;
			r3vec[0] = v[0] + e[0];
			r3vec[1] = v[1] + e[1];
			r3vec[2] = v[2] + e[2];
			return r3vec;
		}

		R3Vec operator-(const R3Vec &v) {
			R3Vec<T> r3vec;
			r3vec[0] = v[0] - e[0];
			r3vec[1] = v[1] - e[1];
			r3vec[2] = v[2] - e[2];
			return r3vec;
		}

		R3Vec operator*(const R3Vec &v) {
			R3Vec<T> r3vec;
			r3vec[0] = e[1] * v[2] - e[2] * v[1];
			r3vec[1] = e[2] * v[0] - e[0] * v[2];
			r3vec[2] = e[0] * v[1] - e[1] * v[0];
			return r3vec;
		}

		R3Vec operator*(int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(double val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(long double val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(float val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(short int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(unsigned short int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(unsigned int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(unsigned long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(long long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator*(unsigned long long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] * val;
			r3vec[1] = e[1] * val;
			r3vec[2] = e[2] * val;
			return r3vec;
		}

		R3Vec operator/(int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(double val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(long double val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(float val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(short int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(unsigned short int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(unsigned int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(unsigned long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(long long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator/(unsigned long long int val) {
			R3Vec<T> r3vec;
			r3vec[0] = e[0] / val;
			r3vec[1] = e[1] / val;
			r3vec[2] = e[2] / val;
			return r3vec;
		}

		R3Vec operator%(int val) {
			R3Vec<int> r3vec;
			r3vec[0] = e[0] % val;
			r3vec[1] = e[1] % val;
			r3vec[2] = e[2] % val;
			return r3vec;
		}

		// Unary Arithmetic
		R3Vec operator-() const { return R3Vec(-e[0], -e[1], -e[2]); }

		R3Vec operator+() const {
			R3Vec<T> temp(e[0], e[1], e[2]);
			if (e[0] < 0) {
				temp[0] = -e[0];
			}
			if (e[1] < 0) {
				temp[1] = -e[1];
			}
			if (e[2] < 0) {
				temp[2] = -e[2];
			}
			return temp;
		}

		R3Vec operator--() const { return R3Vec(--e[0], --e[1], --e[2]); }

		R3Vec operator--(int) const { return R3Vec(e[0] - 1, e[1] - 1, e[2] - 1); }

		R3Vec operator++() const { return R3Vec(++e[0], ++e[1], ++e[2]); }
		
		R3Vec operator++(int) const { return R3Vec(e[0] + 1, e[1] + 1, e[2] + 1); }

		//Assignment Operations		
		R3Vec operator=(const R3Vec &v) {
			e[0] = v.e[0];
			e[1] = v.e[1];
			e[2] = v.e[2];
			return *this;
		}

		R3Vec& operator+=(const R3Vec &v) {
			e[0] += v.e[0];
			e[1] += v.e[1];
			e[2] += v.e[2];
			return *this;
		}

		R3Vec& operator-=(const R3Vec &v) {
			e[0] -= v.e[0];
			e[1] -= v.e[1];
			e[2] -= v.e[2];
			return *this;
		}

		R3Vec operator*=(const int val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(const double val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(const long double val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(const float val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(const short int val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(unsigned short int val) { 
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(unsigned int val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(long int val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(unsigned long int val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(long long int val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec operator*=(unsigned long long int val) {
			e[0] *= val;
			e[1] *= val;
			e[2] *= val;
			return *this;
		}

		R3Vec& operator*=(const R3Vec &v) {
			e[0] = e[1] * v[2] - e[2] * v[1];
			e[1] = e[2] * v[0] - e[0] * v[2];
			e[2] = e[0] * v[1] - e[1] * v[0];
			return *this;
		}

		R3Vec& operator/=(double t) {
			return *this *= 1/t;
		}

		R3Vec operator/=(const int val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(const long double val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(const float val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(const short int val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(unsigned short int val) { 
			return *this *= 1/val;
		}

		R3Vec operator/=(unsigned int val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(long int val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(unsigned long int val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(long long int val) {
			return *this *= 1/val;
		}

		R3Vec operator/=(unsigned long long int val) {
			return *this *= 1/val;
		}

		// Relational Overloads
		bool operator<(const R3Vec &v2) {
			return (std::sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]) < v2.magnitude());
		}

		bool operator>(const R3Vec &v2) {
			return (std::sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]) > v2.magnitude());
		}

		bool operator==(const R3Vec &v2) {
			return (std::sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]) == v2.magnitude());
		}

		bool operator!=(const R3Vec &v2) {
			return (std::sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]) != v2.magnitude());
		}

		bool operator<=(const R3Vec &v2) {
			return (std::sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]) <= v2.magnitude());
		}

		bool operator>=(const R3Vec &v2) {
			return (std::sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]) >= v2.magnitude());
		}

		// Input Output Streaming
		friend std::ostream& operator<<(std::ostream&, const R3Vec &v) {
			std::cout << "<" << v[0] << ", " << v[1] << ", " << v[2] << ">";
			return std::cout;
		}
};


#endif
