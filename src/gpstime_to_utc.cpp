#include <iostream>
#include <iomanip>
#include "time_conversion.h"

// This function displays the help
void showHelp(char * program_name)
{
  std::cout << std::endl;
  std::cout << "Usage: " << program_name << " gps_week_number gps_week_milliseconds" << std::endl;
  std::cout << "--help/-h:  Show this help." << std::endl;
}

int main(int argc, char** argv) {
  if (argc == 3) {
    uint32_t gps_week_number = atoi(argv[1]);
    uint32_t gps_week_milliseconds = atoi(argv[2]);
    const double gps_secs =
              gps2unix(gps_week_number * 604800 + gps_week_milliseconds * 0.001);
    std::cout << "gps_week_number: " << gps_week_number << " gps_week_milliseconds: " << gps_week_milliseconds << " utc: " << std::fixed << std::setprecision(6) << gps_secs << std::endl;
  } else if (argc == 2 && argv[1] == "-h" || argv[1] == "--help") {
      
  } else {
    showHelp(argv[0]);
  }

  return 0;
}