#include "Employee.cpp"
class FullTimeEmployee :public Employee {
public:
	FullTimeEmployee(string name,int paymentHour):Employee(name,paymentHour)
	{

	}
	int calculateSalary() {
		return 8 * Employee::getPaymentPerHour();
	}
};