#include <iostream>
#include "Vectores.h"
#include <cassert>
using namespace std;

int main()
{
    
    
    Vector3 v(1, 2, 3);

    assert(v.x == 1.0f && v.y == 2 && v.z == 3); 
    std::cout << "Vector Creation Test passed!\n";
    
    Vector3 a(v);
    assert(a.x == v.x && a.y == v.y && a.z == v.z);
    std::cout << "Vector Creation For Another Vector Test passed!\n";

    Vector3 b;
    assert(b.x == 0 && b.y == 0 && b.z == 0);
    std::cout << "Vector Creation Zero Value Test passed!\n";
    
    Vector3 c(v + a);
    assert(c.x == (a.x + v.x) && c.y == (a.y + v.y) && c.z == (a.z + v.z));
    std::cout << "Vector Sum Test passed!\n";

    Vector3 negative(-1, -2, -3);
    Vector3 result = v + negative;
    assert(result.x == 0 && result.y == 0 && result.z == 0);
    std::cout << "Negative Vector Test passed!\n";

    Vector3 d(a - v);
    assert(d.x == (a.x - v.x) && d.y == (a.y - v.y) && d.z == (a.z - v.z));
    std::cout << "Vector Sub Test passed!\n";

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

    Vector3 h;
    Vector3 i;
    assert(dot(h, i) == 0);
    std::cout << "Vector Dot Zero Test passed!\n";

    assert(dot(a, v) == 14);
    std::cout << "Vector Dot Test passed!\n";

    assert(dot(a, v * -1) == -14);
    std::cout << "Vector Dot Negative  Test passed!\n";

    std::cout << "Test passed!\n";
	return 0;
}