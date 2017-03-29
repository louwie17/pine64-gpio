#ifndef GPIO_H
#define GPIO_H

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
/* GPIO
 * Purpose: Each object instatiated from this class will control a GPIO pin
 * The GPIO pin number must be passed to the overloaded class constructor
 */
class GPIO
{
public:
	GPIO();
	GPIO(string gnum);
    ~GPIO();
    int setdir_gpio(string dir);
    int setval_gpio(string val);
    int getval_gpio(string& val);
    string get_gpionum();
private:
    int export_gpio();
	int unexport_gpio();
    string find_gpionum(string gnum);

	string gpionum;
};

#endif
