#include <iostream>
#include <iomanip>
#include "time_conversion.h"

int main(int argc, char** argv) {
  if (argc == 3) {
    uint32_t gps_week_number = atoi(argv[1]);
    uint32_t gps_week_milliseconds = atoi(argv[2]);
    const double gps_secs =
              gps2unix(gps_week_number * 604800 + gps_week_milliseconds * 0.001);
    std::cout << "gps_week_number: " << gps_week_number << " gps_week_milliseconds: " << gps_week_milliseconds << " utc: " << std::fixed << std::setprecision(6) << gps_secs << std::endl;
  }

  return 0;
}