#include "Employee.cpp"
class PartTimeEmployee :public Employee {
private:
	int workingHour;
public:
	PartTimeEmployee(string name,int paymentHour,int workingHour):Employee(name,paymentHour){
		this->workingHour = workingHour;
	}
	int calculateSalary() {
		return workingHour * Employee::getPaymentPerHour();
	}
};