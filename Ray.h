 #include "Coordinates.h"

class Ray {
  private:
    float lambda;
    Coordinates src;
    Coordinates dir;
    float phase;
  public:
    Ray (float lambda, float phase, Coordinates src, Coordinates dir)
    : src(src), dir(dir)
    {
      this->lambda = lambda;
      this->phase = phase;
    }

    Coordinates getSrc() {
      return src;
    }

    Coordinates getDir() {
      return dir;
    }
};