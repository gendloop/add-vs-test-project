#pragma once

#ifndef COLOR_NONE
#define COLOR_NONE  "\033[0m"
#endif // !COLOR_NONE
#ifndef RED
#define RED         "\033[31m"      /* Red */
#endif // !RED
#ifndef GREEN
#define GREEN       "\033[32m"      /* Green */
#endif // !GREEN
#ifndef YELLOW
#define YELLOW      "\033[1;33m"      /* Yellow */
#endif // !YELLOW
#ifndef BLUE
#define BLUE		"\033[1;30;44m"    /* BLUE */
#endif // !BLUE

#ifndef DEBUG
#define DEBUG    true \
		&& std::cerr.setf(std::ios_base::boolalpha) \
		&& std::cerr << BLUE  << "[  DEBUG   ] " << COLOR_NONE
#endif // !DEBUG

#ifndef INFO
#define INFO     true \
		&& std::cerr.setf(std::ios_base::boolalpha) \
		&& std::cerr << YELLOW  << "[   INFO   ] " << COLOR_NONE
#endif // !INFO
