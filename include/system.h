#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <vector>

#include "process.h"
#include "processor.h"

class System {
 public:
  Processor& Cpu();                   // TODOxx: See src/system.cpp
  std::vector<Process>& Processes();  // TODOxx: See src/system.cpp
  float MemoryUtilization();          // TODOxx: See src/system.cpp
  long UpTime();                      // TODOxx: See src/system.cpp
  int TotalProcesses();               // TODOxx: See src/system.cpp
  int RunningProcesses();             // TODOxx: See src/system.cpp
  std::string Kernel();               // TODOxx: See src/system.cpp
  std::string OperatingSystem();      // TODOxx: See src/system.cpp

  // TODOxx: Define any necessary private members
 private:
  Processor cpu_ = {};
  std::vector<Process> processes_ = {};
};

#endif