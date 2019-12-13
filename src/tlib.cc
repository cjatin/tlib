#include "tlib.h"

void vecAdd(std::vector<int> &a, std::vector<int> &b, std::vector<int> &c) {
  // c = a+b;
  c.reserve(a.size());
  for (int i = 0; i < a.size(); i++) {
    c.push_back(a[i] + b[i]);
  }
}
