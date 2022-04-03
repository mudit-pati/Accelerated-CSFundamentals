// Cube class implementation

// First step is including the header file

#include "cube.h"

double cube::getVolume() {
  return length_ * length_ * length_;
}

double cube::getSurfaceArea() {
  return length_ * length_ * 6;
}

void cube::setLength(double length) {
  length_ = length;
}

// Initialising all three public functions and private
