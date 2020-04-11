#include "processor.h"
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
  float utilization{0};
  long active_ticks = LinuxParser::ActiveJiffies();
  long idle_ticks = LinuxParser::IdleJiffies();
  long duration_active{active_ticks - cached_active_ticks};
  long duration_idle{idle_ticks - cached_idle_ticks};
  long duration{duration_active + duration_idle};
  utilization = static_cast<float>(duration_active) / duration;
  cached_active_ticks = active_ticks;
  cached_idle_ticks = idle_ticks;
  return utilization;
}