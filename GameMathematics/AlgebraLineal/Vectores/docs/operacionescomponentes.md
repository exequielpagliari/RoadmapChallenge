# Operaciones Basadas en Componentes de Vectores

## Introducción
Estas operaciones se basan en los cálculos de sus componentes individuales (x, y, z).

## Conceptos clave
- Las operaciones son: Suma, Resta, Escalado, Multiplicación y Producto Punto.
- Mientras que las operaciones de suma, resta, multiplicación y producto punto se utiliza la referencia de un Vector anexo, en el caso del escalado, la referencia es de un Float.
- Las funciones se pueden declarar como parte del Struct o como una función aparte en la propia interfaz.
- Para estas operaciones, se pueden utilizar el desbordamiento de operadores, con la instrucción `operator` y el respectivo símbolo de operación a utilizar.
- Producto Punto es una función aparte que no responde a un operador concreto.

## Ejemplo práctico

Suma de Vectores
```cpp
Vector3 operator+(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x + b.x, a.y + b.y, a.z + b.z);
}
```

Resta de Vectores
```cpp
Vector3 operator-(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x - b.x, a.y - b.y, a.z - b.z);
}
```

Escalado de Vectores
```cpp
Vector3 operator*(const Vector3& a, const float& b)
{
	return Vector3(a.x * b, a.y * b, a.z * b);
}
```

Multiplicación de Vectores
```cpp
Vector3 operator*(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x * b.x, a.y * b.y, a.z * b.z);
}
```


Producto Punto de Vectores
```cpp
float dot(const Vector3& a, const Vector3& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}
```


## Recursos
- [Vector - Wikipedia](https://es.wikipedia.org/wiki/Vector)
- [Vector - hyperphysics](http://hyperphysics.phy-astr.gsu.edu/hbasees/vect.html)
