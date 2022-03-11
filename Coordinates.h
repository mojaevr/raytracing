class Coordinates {
  public:
    float x;
    float y;
    float z;
  public:
    Coordinates(float x, float y, float z) {
      this->x = x;
      this->y = y;
      this->z = z;
    }

    Coordinates(const Coordinates &c) {
      x = c.x;
      y = c.y;
      z = c.z;
    }
};