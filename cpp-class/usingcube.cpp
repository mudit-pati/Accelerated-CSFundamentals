//using Cube

#include <iostream>
using namespace std;

#include "cube.h"

int main() {
  cube c;

  c.setLength(3.3);
  double volume = c.getVolume();
  std::cout << "Volume of the cube is " << volume << std::endl;

  return 0;

}
