# Creación de Vectores

Los vectores son estructuras y uniones de diversas variables anónimas, para poder acceder al arreglo o a las variables individualmente.

### Código de muestra

Struct Vector3 {
union {
struct {
float x,
float y,
float z
};
float v[3];
};

//Métodos de creación de vectores

inlines Vector3() : X(0.0f), y(0.0f), z(0.0f) {}

inlines Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}