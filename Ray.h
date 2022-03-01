 #include "Coordinates.h"

class Ray {
  private:
    float lambda;
    Coordinates coordinates;
    float dir;
    float phase;
  public:
    Ray (float lambda, float phase, Coordinates coordinates, float dir)
    : coordinates(coordinates)
    {
      this->lambda = lambda;
      this->phase = phase;
      this->dir = dir;
    }

    Coordinates getCoordinates() {
      return coordinates;
    }

    float getDir() {
      return dir;
    }

    void setCoordinates(float x, float y) {
      coordinates.setx(x);
      coordinates.sety(y);
    }

    void setDir(float dir) {
      this->dir = dir;
    }
};