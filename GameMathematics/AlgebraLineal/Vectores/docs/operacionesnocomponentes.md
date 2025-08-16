# Operaciones No Basadas en Componentes de Vectores

## Introducción
Estas operaciones se basan en los cálculos de vectores como entidades completas.

## Conceptos clave
- Las operaciones son: Longitud Cuadrada, Longitud, Normalización.
- Las operaciones utilizan comparativas entre números flotantes, es por esto que se utilizará un valor comparativo para simplificación, llamado `Epsilon` y su valor será de 0.000001, vajo la etiqueta de `VEC3_EPSILON`. Esta será utilzada para comparar valores, y que cualquiera que sea inferior a dicho valor arbitrario, sea considerado 0.
Se representará en código como:
```cpp
#define VEC3_EPSILON 0.000001f
```
- Estas funciones no son parte de un operador.
- Para simplificar procesos, longitud de un vector tiene su versión sin aplicar radicación, pudiendo optimizar cálculos de distancia. Esta diferencia es la implementación de `len` y `lenSqr`.
- Los métodos `nomalize` y `normalized` se diferencian en que el primero afecta el vector pasado como referencia, y el segundo retorna un dato `Vector3`.

## Ejemplo práctico

Longitud Cuadrática
```cpp
float lenSq(const Vector3& v)
{
	return v.x * v.x + v.y * v.y + v.z * v.z;
}
```

Longitud
```cpp
float len(const Vector3& v)
{
	float lensq = lenSq(v);
	if (lensq < VEC3_EPSILON){
		return 0.0f;
	}
	return sqrtf(lensq);
}
```

Normalizar Vector
```cpp
void normalize(Vector3& v)
{
	float lensq = lenSq(v);
	if (lensq < VEC3_EPSILON){
		return;
	}
	float invLen = 1.0f / sqrtf(lensq);
	v.x *= invLen;
	v.y *= invLen;
	v.z *= invLen;
}
```

Normalizado de Vector
```cpp
Vector3 normalized(const Vector3& v)
{
	float lensq = lenSq(v);
	if (lensq < VEC3_EPSILON) {
		return v;
	}
	float invLen = 1.0f / sqrtf(lensq);
	return Vector3(v.x * invLen,v.y * invLen, v.z * invLen);
}
```




## Recursos
- [Vector - Wikipedia](https://es.wikipedia.org/wiki/Vector)
- [Vector - hyperphysics](http://hyperphysics.phy-astr.gsu.edu/hbasees/vect.html)
- [Comparing Floating-Point Numbers Is Tricky - Bit Bashing](https://bitbashing.io/comparing-floats.html)
