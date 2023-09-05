#include"Companies.h"
#include"Employees.h"

int main()
{
	Companies comp;

	comp.add_company(new Company("Oranta", "Insurance", "0501234567", "Sumskay street"));
	comp.add_company(new Company("Oranta", "Insurance", "0501234567", "Sumskay street"));
	comp.add_company(new Company("Oranta", "Insurance", "0501234567", "Sumskay street"));
	comp.add_company(new Company("Oranta", "Insurance", "0501234567", "Sumskay street"));

	comp.show_info();

	Employees em;
	em.add_employee(new Employee("Ivanov", "Sergey", "driver", 15000));
	em.add_employee(new Employee("Ivanov", "Sergey", "driver", 15000));
	em.add_employee(new Employee("Ivanov", "Sergey", "driver", 15000));
	em.add_employee(new Employee("Ivanov", "Sergey", "driver", 15000));

	em.show_info();

	return 0;
}
