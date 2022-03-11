#include "Diffuser.h"
#include <vector>
using namespace std;

class Net {
  public:
    float Lx;
    float Ly;
    float Lz;
    int Nx;
    int Ny;
    int Nz;
    vector<vector<vector<Diffuser> > > diffusers;
  public:
    Net (float Lx, float Ly, float Lz,
         int Nx, int Ny, int Nz)
    {
      this->Lx = Lx;
      this->Ly = Ly;
      this->Lz = Lz;
      this->Nx = Nx;
      this->Ny = Ny;
      this->Nz = Nz;

      for (int i = 0; i < Nx; ++i)
      {
        diffusers.push_back(vector<vector<Diffuser> >()); 
        for (int j = 0; j < Ny; ++j)
        {
          diffusers[i].push_back(vector<Diffuser>());
          for (int k = 0; k < Nz; ++k) {
            diffusers[i][j].push_back(Diffuser(0.00946844, 5e-6));
          }
        }
          
      }
    }
};