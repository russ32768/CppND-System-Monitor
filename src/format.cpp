#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#include "format.h"

using std::string;

// TODOxx: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  int h = seconds / 3600;
  int m = (seconds % 3600) / 60;
  int s = seconds % 60;
  std::ostringstream out;
  out << std::setfill('0') << std::setw(2) << h << ":" << std::setw(2) << m
      << ":" << std::setw(2) << s;
  return out.str();
}