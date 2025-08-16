#include "Vectores.h"

//Operaciones Componentes
Vector3 operator+(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector3 operator-(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector3 operator*(const Vector3& a, const float& b)
{
	return Vector3(a.x * b, a.y * b, a.z * b);
}

Vector3 operator*(const float& a, const Vector3& b)
{
	return Vector3(a * b.x, a * b.y, a * b.z);
}

Vector3 operator*(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x * b.x, a.y * b.y, a.z * b.z);
}

float dot(const Vector3& a, const Vector3& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

//Operaciones no componentes
float lenSq(const Vector3& v)
{
	return v.x * v.x + v.y * v.y + v.z * v.z;
}

float len(const Vector3& v)
{
	float lensq = lenSq(v);
	if (lensq < VEC3_EPSILON){
		return 0.0f;
	}
	return sqrtf(lensq);
}
