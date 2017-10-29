/*
 * BarberShop.cpp
 *
 *  Created on: Oct 28, 2017
 *      Author: Job
 */

#include "BarberShop.h"

BarberShop::BarberShop(){

}

BarberShop::~BarberShop(){

}

//adds a customer to the queue
void BarberShop::addCustomer(Customer& customer){
	if(s1.isEmpty()){
		flipStacks();
	}
	s1.push(customer);
}

//returns next customer, and removes him/her from the queue
Customer& BarberShop::nextCustomer(){
	if(s2.isEmpty()){
		flipStacks();
	}
	return s2.pop();
}

void BarberShop::flipStacks(){
	if(s1.isEmpty()){
		while(s2.isEmpty() == 0){
			s1.push(s2.pop());
		}
	}
	else{
		while(s1.isEmpty() == 0){
			s2.push(s1.pop());
		}
	}
}
