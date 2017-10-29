//============================================================================
// Name        : BennyTheBarber.cpp
// Author      : Job
// Date		   : 10/28/2017
// Description : A queue made of stacks
//============================================================================

#include <iostream>
#include "LinkedStack.h"
#include "BarberShop.h"
using namespace std;

int main() {

	BarberShop shop;
	Customer customer1("MARK","KILGORE");
	Customer customer2("RICK","GRIMM");
	shop.addCustomer(customer1);
	shop.addCustomer(customer2);
	Customer nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;
	Customer customer3("JILL","WOLFF");
	shop.addCustomer(customer3);
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;

	return 0;
}
