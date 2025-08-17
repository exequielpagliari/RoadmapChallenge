#include <iostream>
#include "Vectores.h"
#include <cassert>
using namespace std;

int main()
{
    
    //Test de Creación
    Vector3 v(1, 2, 3);

    assert(v.x == 1.0f && v.y == 2 && v.z == 3); 
    std::cout << "Vector Creation Test passed!\n";
    
    Vector3 a(v);
    assert(a.x == v.x && a.y == v.y && a.z == v.z);
    std::cout << "Vector Creation For Another Vector Test passed!\n";

    Vector3 b;
    assert(b.x == 0 && b.y == 0 && b.z == 0);
    std::cout << "Vector Creation Zero Value Test passed!\n";
    
    //Test Suma
    Vector3 c(v + a);
    assert(c.x == (a.x + v.x) && c.y == (a.y + v.y) && c.z == (a.z + v.z));
    std::cout << "Vector Sum Test passed!\n";

    Vector3 negative(-1, -2, -3);
    Vector3 result = v + negative;
    assert(result.x == 0 && result.y == 0 && result.z == 0);
    std::cout << "Negative Vector Test passed!\n";
    
    //Test Resta
    Vector3 d(a - v);
    assert(d.x == (a.x - v.x) && d.y == (a.y - v.y) && d.z == (a.z - v.z));
    std::cout << "Vector Sub Test passed!\n";

    // Test Escalado / Multiplicación
    Vector3 e(v * 2);
    assert(e.x == (2 * v.x) && e.y == (2 * v.y) && e.z == (2 * v.z));
    std::cout << "Vector Scaling Right Vector Test passed!\n";

    Vector3 f(2 * v);
    assert(f.x == (2 * v.x) && f.y == (2 * v.y) && f.z == (2 * v.z));
    std::cout << "Vector Scaling Left Vector Test passed!\n";

    Vector3 scaled = v * 0.5f;
    assert(scaled.x == 0.5f && scaled.y == 1.0f && scaled.z == 1.5f);
    std::cout << "Decimal Scaling Test passed!\n";

    Vector3 zero_scaled = v * 0;
    assert(zero_scaled.x == 0 && zero_scaled.y == 0 && zero_scaled.z == 0);
    std::cout << "Zero Scaling Test passed!\n";

    Vector3 g(v * a);
    assert(g.x == (a.x * v.x) && g.y == (a.y * v.y) && g.z == (a.z * v.z));
    std::cout << "Vector Mult Test passed!\n";


    // Test Producto Punto

    Vector3 h;
    Vector3 i;
    assert(dot(h, i) == 0);
    std::cout << "Vector Dot Zero Test passed!\n";

    assert(dot(a, v) == 14);
    std::cout << "Vector Dot Test passed!\n";

    assert(dot(a, v * -1) == -14);
    std::cout << "Vector Dot Negative  Test passed!\n";

    //Test Longitud
    Vector3 j(1, 1, 1);
    Vector3 k(-1, -1, -1);
    Vector3 l(0, 0, 0);

    assert(lenSq(j) == 3.0f);
    std::cout << "LenSq Test passed!\n";
        
    assert(lenSq(k) == 3.0f);
    std::cout << "LenSq Negative Test passed!\n";

    assert(lenSq(l) == 0.0f);
    std::cout << "LenSq Zero Test passed!\n";

    assert(len(j) == sqrtf(3));
    std::cout << "Len Test passed!\n";

    assert(len(k) == sqrtf(3));
    std::cout << "Len Negative Test passed!\n";

    assert(len(l) == 0.0f);
    std::cout << "Len Zero Test passed!\n";

    //Test Normalizado

    Vector3 m(2, 2, 2);
    normalize(m);
    assert(m.x = (sqrtf(3) / 3) && m.y == (sqrtf(3) / 3) && m.z == (sqrtf(3) / 3));
    std::cout << "Normalize Test passed!\n";

    Vector3 n(-2, -2, -2);
    normalize(n);
    assert(n.x = -(sqrtf(3) / 3) && n.y == -(sqrtf(3) / 3) && n.z == -(sqrtf(3) / 3));
    std::cout << "Normalize Negative Test passed!\n";

    normalize(l);
    assert(l.x == 0.0f && l.y == 0.0f && l.z == 0.0f);
    std::cout << "Normalize Zero Test passed!\n";

    //Test Ángulos
    Vector3 o(0, 1, 0);
    Vector3 p(1, 0, 0);
    Vector3 q(1, 1, 0);
    Vector3 r(-1, 1, 0);

    assert(angle(v,a) == 0);
    std::cout << "Angle Equal Test passer!\n";

    assert(angle(l, j) == 0);
    std::cout << "Angle Equal Zero Test passer!\n";

    assert(isClosed(angle(k, j) * 57.2958f, 180));
    std::cout << "Angle Oposite Test passer!\n";

    assert(isClosed(angle(o, p) * 57.2958f, 90));
    std::cout <<  "Angle Perpendicular Test passer!\n";

    assert(isClosed(angle(e, v) * 57.2958f, 0));
    std::cout << "Angle Colineals Test passer!\n";

    assert(isClosed(angle(p, q) * 57.2958f, 45));
    std::cout << "Value: " << angle(p, q) * 57.2958f << "  Angle Acute Test passer!\n";

    assert(isClosed(angle(p, r) * 57.2958f, 135));
    std::cout << "Value: " << angle(p, r) * 57.2958f << "  Angle Obtuse Test passer!\n";

    std::cout << "Test passed!\n";



	return 0;
}