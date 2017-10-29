/*
 * Customer.h
 *
 *  Created on: Oct 28, 2017
 *      Author: Job
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <iostream>

class Customer {
public:
	std::string mfirstname;
	std::string mlastname;
	Customer(std::string, std::string);
	~Customer();

	std::string getName();
};

#endif /* CUSTOMER_H_ */
