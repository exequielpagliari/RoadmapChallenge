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

    Vector3 d(v - a);
    assert(d.x == (a.x - v.x) && d.y == (a.y - v.y) && d.z == (a.z - v.z));
    std::cout << "Vector Sub Test passed!\n";

    Vector3 e(v * 2);
    assert(e.x == (2 * v.x) && e.y == (2 * v.y) && e.z == (2 * v.z));
    std::cout << "Vector Escaling Vector Test passed!\n";

    Vector3 f(v * a);
    assert(f.x == (a.x * v.x) && f.y == (a.y * v.y) && f.z == (a.z * v.z));
    std::cout << "Vector Mult Test passed!\n";

    std::cout << "Test passed!\n";
	return 0;
}