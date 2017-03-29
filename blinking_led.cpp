#include <iostream>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "GPIO.h"

using namespace std;

int main (void)
{


	string inputstate = "0";
	GPIO* gpio = new GPIO("PC7");

	gpio->setdir_gpio("out"); // GPIO17 set to input

	cout << " Set GPIO pin directions" << endl;


	for(;;)
	{
		cout << "Current input pin state is " << inputstate  <<endl;
        gpio->setval_gpio(inputstate);
		if(inputstate == "0") {
            inputstate = "1";
        } else {
            inputstate = "0";
        }
        sleep(1);  // wait for 1 second
	}
	cout << "Existing....." << endl;
    delete gpio;
    gpio = NULL;
	return 0;
}
