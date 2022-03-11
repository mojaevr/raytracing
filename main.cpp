#include <iostream>
#include "Ray.h"
#include "Net.h"

const float c = 3e8;

int main() {
  Ray ray(Coordinates(0,0,0), Coordinates(0,0,1), 1);
  Indicatrix x;
  Net net(1,1,1,1,1,1);

  return 0;
}