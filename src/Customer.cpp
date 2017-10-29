/*
 * Customer.cpp
 *
 *  Created on: Oct 28, 2017
 *      Author: Job
 */

#include "Customer.h"

Customer::Customer(std::string firstname, std::string lastname) {
	mfirstname = firstname;
	mlastname = lastname;
}

Customer::~Customer() {

}

//returns the cusomter's name
std::string Customer::getName(){
	return mfirstname + " " + mlastname;
}

