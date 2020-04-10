#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(int pid) : pid_(pid) {}
  int Pid();                               // TODOxx: See src/process.cpp
  std::string User();                      // TODOxx: See src/process.cpp
  std::string Command();                   // TODOxx: See src/process.cpp
  float CpuUtilization();                  // TODOxx: See src/process.cpp
  std::string Ram();                       // TODOxx: See src/process.cpp
  long int UpTime();                       // TODOxx: See src/process.cpp
  bool operator<(Process const& a) const;  // TODOxx: See src/process.cpp
  bool operator>(Process const& a) const;  // TODOxx: See src/process.cpp

  // TODOxx: Declare any necessary private members
 private:
  int pid_;
  int cpu_util_ = 0;
};

#endif