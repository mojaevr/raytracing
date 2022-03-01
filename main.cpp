 #include <iostream>
 #include "Ray.h"


int main() {
  Ray ray(546, 0, Coordinates(1,0), Coordinates(0,0));
  std::cout << ray.getSrc().getx();

  return 0;
}