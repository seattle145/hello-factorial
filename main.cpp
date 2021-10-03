/**
 * test functions for factorial
 **/

#include "factorial.h"
#include "factorial.cpp"
#include <cassert>
#include <iostream>

using namespace std;


void test01() {
  assert(fact(1) == 1 && "Was expecting SomeCondition to be true");
  assert(fact(3) == 6 && "Was expecting SomeCondition to be true");
}

void test02() {
  assert(fact(-1) == 1 && "Was expecting SomeCondition to be true");
  assert(fact(5) == 120 && "Was expecting SomeCondition to be true");
}

int main() {
  test01();
  test02();
  memoryLeakFunction();

  cout << "Done." << endl;
  return 0;
}
