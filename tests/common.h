#pragma once

#define COLOR_NONE  "\033[0m"
#define RED         "\033[31m"      /* Red */
#define GREEN       "\033[32m"      /* Green */
#define YELLOW      "\033[1;33m"      /* Yellow */
#define BLUE		"\033[1;30;44m"    /* BLUE */

#define DEBUG    true \
		&& std::cerr.setf(std::ios_base::boolalpha) \
		&& std::cerr << BLUE  << "[  DEBUG   ] " << COLOR_NONE

#define INFO     true \
		&& std::cerr.setf(std::ios_base::boolalpha) \
		&& std::cerr << YELLOW  << "[   INFO   ] " << COLOR_NONE
