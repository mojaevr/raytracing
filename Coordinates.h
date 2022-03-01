class Coordinates {
  public:
    float x;
    float y;
  public:
    Coordinates(float x, float y) {
      this->x = x;
      this->y = y;
    }

    Coordinates(const Coordinates &c) {
      x = c.x;
      y = c.y;
    }

    float getx() {
      return x;
    }

    float gety() {
      return y;
    }

    void setx(float x) {
      this->x = x;
    }

    void sety(float y) {
      this->y = y;
    }
};