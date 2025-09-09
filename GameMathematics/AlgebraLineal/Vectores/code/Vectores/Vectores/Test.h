#pragma once
#include "Vectores.h"

class Test {
public:
  void runtest();

private:
  void creationtest();

  void sumtest();
  void subtest();
  void scaletest();
  void dottest();
  void lengthtest();
  void normaltest();
  void angletest();
  void projectiontestPerpendicular();
  void projectiontestParalel();
  void projectiontestOposing();
  void reflectiontestBasicNormalUp();
  void reflectiontestBasicNormalDown();
  void crossTest();
  void crossZeroTest();
  void crossOneTest();
};
