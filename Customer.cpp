//
// Created by shlezimi@wincs.cs.bgu.ac.il on 11/7/18.
//

#include "Customer.h"
Customer::Customer(std::string c_name, int c_id): name(c_name,id(c_id)){}
std::string Customer::getName() const {
    return name;
}

int Customer::getId() const {
    return id;
}

virtual std::vector<int> Customer::order(const std::vector<Dish> &menu) {

}

virtual std::string Customer::toString() const {

}



//vegeterian
VegetarianCustomer::VegetarianCustomer(std::string name, int id):Customer(name,id) {}
std::vector<int> VegetarianCustomer::order(const std::vector<Dish> &menu) {

    for (auto const& value: menu) {
        
    }
}