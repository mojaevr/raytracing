 #include "Coordinates.h"

class Ray {
  public:
    Coordinates n;
    Coordinates r;
    float intensity;
    float len;
    Ray (Coordinates r, Coordinates n, float intensity)
    : r(r), n(n)
    {
      if (n.x == n.y == n.z == 0) throw std::invalid_argument( "n cannot be 0");
      this->r = r;
      this->n = n;
      this->intensity = intensity;
      this->len = 0;
    }
};