#include <iostream>
using namespace std;


class Bank {
    private:
        string name;

	public:
	    Bank(string name)
	    {
		    // this keyword refers to current instance itself
		    this->name = name;
	    }
         string getBankName()
	    {
		    // Returning name of bank
		    return name;
	    }
};

class Employee {
	// Attributes of employee
	private:
         string name;

	public:
	    Employee(string name)
	    {
		    // This keyword refwrs to current insytance itself
		    this->name = name;
	    }
        string getEmployeeName()
	    {
		    return name;
	    }
};

int main()
	{          
		Bank bank("HBL GULSHAN BRANCH");
		Employee emp("ALI ABBAS");
		// Print and display name and
		// corresponding bank of employee
		cout<<emp.getEmployeeName()+ " is employee of "+ bank.getBankName();
	}

