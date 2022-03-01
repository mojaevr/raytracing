#include <iostream>
#include "Ray.h"
#include <cmath> 


const float dt = 0.01;
const float c0 = 3;

int main() {
  Ray ray(546, 0, Coordinates(0,0), 1.4);
  float dx = 0;
  float dy = 0;
  float ddir = 0;
  float n = 1;
  float ay = 0;
  for (float t = 0; t < 0.1; t += dt) {
    n = n + 0.01 * ray.getCoordinates().gety();
    dx = c0 / n * cos(ray.getDir()) * dt;
    dx = c0 / n * sin(ray.getDir()) * dt;
    ay = -c0 * 0.01 / n / n;
    ddir = -ay * cos(ray.getDir()) * dt;
    ray.setCoordinates(ray.getCoordinates().getx() + dx, ray.getCoordinates().gety() + dy);
    ray.setDir(ray.getDir() + ddir);
    std::cout << ray.getCoordinates().getx() << '\n';
  }
  return 0;
}