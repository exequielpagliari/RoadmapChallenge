#pragma once
#include <math.h>

#define VEC3_EPSILON 0.000001f
#define VEC3_RADIANS_EPSILON 0.01f

struct Vector3 {
  union {
    struct {
      float x;
      float y;
      float z;
    };
    float v[3];
  };

  // Métodos de creación de vectores

  inline Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

  inline Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

  inline Vector3(float *fv) : x(fv[0]), y(fv[1]), z(fv[2]) {}
};
// Operaciones Componente
Vector3 operator+(const Vector3 &a, const Vector3 &b);

Vector3 operator-(const Vector3 &a, const Vector3 &b);

Vector3 operator*(const Vector3 &a, const float &b);

Vector3 operator*(const float &a, const Vector3 &b);

Vector3 operator*(const Vector3 &a, const Vector3 &b);

float dot(const Vector3 &a, const Vector3 &b);

// Operaciones No Componente
float lenSq(const Vector3 &v);

float len(const Vector3 &v);

void normalize(Vector3 &v);

Vector3 normalized(const Vector3 &v);

float angle(const Vector3 &a, const Vector3 &b);

bool isClosed(float a, float b);

Vector3 projection(const Vector3 &a, const Vector3 &b);

Vector3 reflect(const Vector3 &a, const Vector3 &b);

Vector3 cross(const Vector3 &a, const Vector3 &b);
