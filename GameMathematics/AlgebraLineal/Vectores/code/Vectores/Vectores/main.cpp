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



    std::cout << "Test passed!\n";
	return 0;
}