#include <stdio.h>

#include "Calculator.h"

int main() {
  Calculator calc;
  calc.Push1();
  calc.Push2();
  calc.Push3();
  calc.PushPlus();
  calc.Push1();
  calc.Push2();
  
  printf("%d (should be 123+12=135)\n", calc.Result());
  return 0;
}