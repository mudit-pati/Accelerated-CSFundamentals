/*
Header file
For Cube class
*/

#pragma once

class cube {
public:
  double getVolume();
  double getSurfaceArea();
  void setLength(double length);

private:
  double length_;
};

// a header file starts with pragma once
// it will be compiled once irrespective of the many function calls
// the syntax for class is class <classname> {...};
// ends with a semi colon
// there are public functions or data which is accessible to client code
// private functions or data is accessible to only class itself
// put the header file in the same place where class implementation resides
