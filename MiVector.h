#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

template <class T>
class MiVector {
public:
	T x;
	T y;
	T z;

	MiVector(T x, T y, T z) {
		x = x;
		y = y;
		z = z;
	}
	T SumaVectorial(MiVector<T> vec2) {
		MiVector<T> sum(MiVector<T> v);
	}
	T ProductoPunto(MiVector<T> vec2) {
		return x *  vec2.x + y * vec2.y + z * vec2.z;
	}
	T ProductoCruz(MiVector<T> vec2) {
		vec2 c;
		c.x = a.y * b.z - a.z * b.y;
		c.y = a.z * b.x - a.x * b.z;
		c.z = a.x * b.y - a.y * b.x;
		return c;
	}
	T SqrMagnitude(MiVector<T> vec2) {
		vec2 c;
		c.x = x * 2;
		c.y = y * 2;
		c.z = z * 2;
		return;
	}
	std::string ToString() {
		std::ostringstream ss;
		ss << "(" << x << "," << y << "," << z << ")";
		return ss.str();
	}

};