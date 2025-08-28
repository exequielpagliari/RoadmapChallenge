#include "Vectores.h"
#include <algorithm>

// Operaciones Componentes
Vector3 operator+(const Vector3 &a, const Vector3 &b) {
  return Vector3(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector3 operator-(const Vector3 &a, const Vector3 &b) {
  return Vector3(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector3 operator*(const Vector3 &a, const float &b) {
  return Vector3(a.x * b, a.y * b, a.z * b);
}

Vector3 operator*(const float &a, const Vector3 &b) {
  return Vector3(a * b.x, a * b.y, a * b.z);
}

Vector3 operator*(const Vector3 &a, const Vector3 &b) {
  return Vector3(a.x * b.x, a.y * b.y, a.z * b.z);
}

float dot(const Vector3 &a, const Vector3 &b) {
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

// Operaciones no componentes
float lenSq(const Vector3 &v) { return v.x * v.x + v.y * v.y + v.z * v.z; }

float len(const Vector3 &v) {
  float lensq = lenSq(v);
  if (lensq < VEC3_EPSILON) {
    return 0.0f;
  }
  return sqrtf(lensq);
}

void normalize(Vector3 &v) {
  float lensq = lenSq(v);
  if (lensq < VEC3_EPSILON) {
    return;
  }
  float invLen = 1.0f / sqrtf(lensq);
  v.x *= invLen;
  v.y *= invLen;
  v.z *= invLen;
}

Vector3 normalized(const Vector3 &v) {
  float lensq = lenSq(v);
  if (lensq < VEC3_EPSILON) {
    return v;
  }
  float invLen = 1.0f / sqrtf(lensq);
  return Vector3(v.x * invLen, v.y * invLen, v.z * invLen);
}

float angle(const Vector3 &a, const Vector3 &b) {
  float dotValue = dot(a, b);
  float lenA = len(a);
  float lenB = len(b);
  if (lenA < VEC3_EPSILON || lenB < VEC3_EPSILON)
    return 0.0f;
  float lenValue = lenA * lenB;
  float arg = std::max(-1.0f, std::min(1.0f, dotValue / lenValue));
  float radians = acosf(arg);
  if (radians < VEC3_RADIANS_EPSILON)
    return 0.0f;
  return radians;
}

bool isClosed(float a, float b) { return fabs(a - b) < VEC3_RADIANS_EPSILON; }

Vector3 projection(const Vector3 &a, const Vector3 &b) {
  float magBsq = lenSq(b);
  if (magBsq < VEC3_EPSILON) {
    return Vector3();
  }
  float scale = dot(a, b) / magBsq;
  return b * scale;
}

Vector3 reflect(const Vector3 &a, const Vector3 &b) {
  float magBsq = lenSq(b);
  if (magBsq < VEC3_EPSILON) {
    return Vector3();
  }
  float scale = dot(a, b) / magBsq;
  Vector3 proj2 = b * (scale * 2);
  return a - proj2;
}
