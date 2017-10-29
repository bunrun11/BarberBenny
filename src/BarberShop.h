/*
 * BarberShop.h
 *
 *  Created on: Oct 28, 2017
 *      Author: Job
 */

#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include <iostream>
#include "LinkedStack.h"
#include "Customer.h"

using namespace std;
class BarberShop{
     LinkedStack<Customer> s1;
     LinkedStack<Customer> s2;

     public:
     BarberShop();
     ~BarberShop();

     void addCustomer(Customer&);
     Customer& nextCustomer();

     private:
     void flipStacks();
};


#endif /* BARBERSHOP_H_ */
