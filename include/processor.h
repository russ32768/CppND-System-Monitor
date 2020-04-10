#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODOxx: See src/processor.cpp

  // TODOxx: Declare any necessary private members
 private:
  long cached_active_ticks = 0;
  long cached_idle_ticks = 0;
};

#endif