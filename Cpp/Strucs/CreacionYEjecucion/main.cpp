#include <iostream>
#include <vector>

struct Alpha {
  int a;
  float b;
  char c;
};

int main() {
  std::vector<Alpha> vec;
  Alpha alpha;
  alpha.a = 1;
  alpha.b = 0.5f;
  alpha.c = 'a';
  vec.push_back(alpha);
  std::cout << "Struct leido al ser creado. Char del Struct Alpha: " << alpha.c
            << std::endl;
  if (alpha.a == 1) {
    Alpha beta;
    beta.a = 2;
    beta.b = 1.5f;
    beta.c = 'b';
    vec.push_back(beta);
    std::cout << "Struct leido al ser creado. Char del Struct Alpha: " << beta.c
              << std::endl;
  }

  for (int i = 0; i < vec.size(); i++) {
    std::cout << "Struct numero " << i;
    std::cout << " leido en el vector, su valor de a: " << vec[i].a
              << std::endl;
  }

  std::vector<Alpha *> vecP;

  Alpha *alphaP = new Alpha;
  alphaP->a = 3;
  alphaP->b = 2.5f;
  alphaP->c = 'c';
  vecP.push_back(alphaP);
  std::cout << "Struct leido al ser creado. Char del Struct AlphaP: "
            << alphaP->c << std::endl;
  if (alphaP->a == 3) {
    Alpha *betaP = new Alpha;
    betaP->a = 4;
    betaP->b = 3.5f;
    betaP->c = 'd';
    vecP.push_back(betaP);
    std::cout << "Struct leido al ser creado. Char del Struct BetaP: "
              << betaP->c << std::endl;
  }

  for (int i = 0; i < vecP.size(); i++) {
    std::cout << "Struct Puntero numero " << i;
    std::cout << " leido en el vector, su valor de a: " << vecP[i]->a
              << std::endl;
    delete vecP[i];
    vecP[i] = nullptr;
  }

  return 0;
}
