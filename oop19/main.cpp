#include "Employee.cpp"
#include "PartTimeEmployee.cpp"
#include "FullTimeEmployee.cpp"
int main() {
	Employee* employee1 = new PartTimeEmployee("Chuong", 50000, 5);
	cout << "Name : " << employee1->getName() << endl;
	cout << "Salary per hour " <<employee1->calculateSalary()<< endl;
	Employee* employee2 = new FullTimeEmployee("Khung", 50000);
	cout << "Name : " << employee2->getName() << endl;
	cout << "Salary per day " << employee2->calculateSalary() << endl;
	Employee* employee3 = new FullTimeEmployee("Khung", 10000);
	cout << "Name : " << employee3->getName() << endl;
	cout << "Salary per day " << employee3->calculateSalary() << endl;
}