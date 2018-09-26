//
//  main.cpp
//  Week5DataMax
//
//  Created by Michael Cruz on 7/10/17.
//  Copyright © 2017 Michael Cruz. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//
//CLASS DECLARATION SECTION
//
class Employee {
public:
    void CalculatePay(void);
    void DisplayInformation(void);
    string EmployeeName ;
    double hours ;
    double wage ;
    double basepay ;
   	int overtime_hours ;
    double overtime_pay ;
    double overtime_extra ;
    double iIndividualSalary ;
};

//FUNCTION DECLARATION SECTION
//
void AddSomethingUp (Employee emps[3]);
//


int main()
{
    
    
    cout << "\nWelcome to the Employee Pay Center\n\n" ;
    
    /*
     TODO:
     Use this section to define your objects.  You will have one object per employee.  You have only three employees.
     The format is your class name and your object name.
     */
    
    Employee employee1, employee2, employee3;
    
    
    
    
    /*
     TODO:
     Here you will prompt for the first employee’s information.
     Prompt the employee name, hours worked, and the hourly wage.  For each piece of information, you will update the appropriate class member defined above.
     Example of Prompts
     Enter the employee name      =
     Enter the hours worked       =
     Enter his or her hourly wage =
     */
    
    cout << "Enter the employee name      = ";
    
    cin >> employee1.EmployeeName;
    
    cout << "Enter the hours worked       = ";
    
    cin >> employee1.hours;
    
    cout << "Enter his or her hourly wage = ";
    
    cin >> employee1.wage;
    
    /*
     TODO:
     Here you will prompt for the second employee’s information.
     Prompt the employee name, hours worked, and the hourly wage.  For each piece of information, you will update the appropriate class member defined above.
     Enter the employee name      = 
     Enter the hours worked       = 
     Enter his or her hourly wage = 
     */
    
    cout << "Enter the employee name      = ";
    
    cin >> employee2.EmployeeName;
    
    cout << "Enter the hours worked       = ";
    
    cin >> employee2.hours;
    
    cout << "Enter his or her hourly wage = ";
    
    cin >> employee2.wage;
    
    /*
     TODO:
     Here you will prompt for the third employee’s information.
     Prompt the employee name, hours worked, and the hourly wage.  For each piece of information, you will update the appropriate class member defined above.
     Enter the employee name      =
     Enter the hours worked       =
     Enter his or her hourly wage =
     */
    
    cout << "Enter the employee name      = ";
    
    cin >> employee3.EmployeeName;
    
    cout << "Enter the hours worked       = ";
    
    cin >> employee3.hours;
    
    cout << "Enter his or her hourly wage = ";
    
    cin >> employee3.wage;
    
    cout << endl;
    
    /*
     TODO:
     Here you will make a call to the CalculatePay method to implement the employee pay calcuations for each object defined above.  You will do this for each of the three employees or objects.
     Remember that each object already contains the hours and wage information it needs through the prompts above.
     The format for this step is the following:
     [(object name.method name( )] ;
     */
    
    employee1.CalculatePay();
    employee2.CalculatePay();
    employee3.CalculatePay();
    
    employee1.DisplayInformation();
    employee2.DisplayInformation();
    employee3.DisplayInformation();
    
    /*
     TODO:
     This section you will send all three objects as an array of Employees to a function that will add up the the following information:
     - Total Employee Salaries
     - Total Employee Hours
     - Total Overtime Hours
     
     The format for this AddSomethingUp function is the following:
     Create an array of three employee objects
     Initialize the elements of  the array with each of the three employee objects defined above
     Implement function call [functionname(array)]
     */
    
        Employee emps[3] {employee1, employee2, employee3};
    
        AddSomethingUp(emps);
    
    return 0;
    
} //End of Main Function


void Employee::CalculatePay ( ) {
    //Initialize overtime variables
    overtime_hours=0;
    overtime_pay=0;
    overtime_extra=0;
    
    if (hours > 40)
    {
        
        /*
         TODO:
         This section is for the basic calculations for determining overtime pay.
         base pay = 40 hours times the hourly wage
         overtime hours = hours worked – 40
         overtime pay = hourly wage * 1.5
         overtime extra pay over 40 = overtime hours * overtime pay
         salary = overtime money over 40 hours + your base pay
         */
        
        overtime_hours = hours-40;
        overtime_pay = wage*1.5 ;
        overtime_extra = overtime_hours*overtime_pay;
        basepay = 40 * wage;
        iIndividualSalary = overtime_extra + basepay;
        
    }	// if (hours > 40)
    else
    {
        
        /*
         TODO:
         Here you are going to calculate the hours less than 40 hours.
         Your base pay is = your hours worked times your wage
         Salary = your base pay
         */
        
        basepay = hours * wage;
        iIndividualSalary = overtime_extra + basepay;
        
        
    } // End of the else
    
    /*
     TODO:
     Implement call  to DisplayInformation method to output the employee information.  Method  is defined below.
     */
    
    
} //End of CalculatePay Function

void Employee::DisplayInformation ( ) {
    // This function displays all the employee output information.
    
    /*
     TODO:
     This is your cout statements to display the employee information:
     Employee Name ............. =
     Base Pay .................. =
     Hours in Overtime ......... =
     Overtime Pay Amount........ =
     Total Pay ................. =
     */
    
    cout << "Employee Name ............. =" << EmployeeName << endl;
    cout << "Base Pay .................. =" << basepay << endl;
    cout << "Hours in Overtime ......... =" << overtime_hours << endl;
    cout << "Overtime Pay Amount........ =" << overtime_extra << endl;
    cout << "Total Pay ................. =" << iIndividualSalary << endl << endl;
    
} // END OF Display Employee Information

    void AddSomethingUp (Employee emps[3]) {
    // This function calculates and displays the total employee output information.
    
    // Initialize running totals to zero
    double iTotal_salaries = 0;
    int iTotal_hours = 0;
    int iTotal_OvertimeHours = 0;
    
    
    /*
     TODO:
     Add the total hours for objects 1, 2, and 3.
     Add the salaries for each object.
     Add the total overtime hours.
     */
    
    
    
    for(int x=0; emps[x].iIndividualSalary; x++)
    {
        iTotal_salaries = emps[x].iIndividualSalary;
    }
    
    
    for(int y=0; emps[y].hours; y++)
    {
        iTotal_hours += emps[y].hours;
    }
    
    
    for(int z=0; emps[z].overtime_hours; z++)
    {
        iTotal_OvertimeHours += emps[z].overtime_hours;
    }
        
    
    /*
     TODO:
     Then display the information below.
     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     %%%% EMPLOYEE SUMMARY DATA%%%%%%%%%%%%%%%%%%%%%%%
     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     %%%% Total Employee Salaries ..... = 576.43
     %%%% Total Employee Hours ........ = 108
     %%%% Total Overtime Hours......... = 5
     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     */
    
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
            << "%%%% EMPLOYEE SUMMARY DATA%%%%%%%%%%%%%%%%%%%%%%%" << endl
            << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
        cout << "%%%% Total Employee Salaries ..... = " << iTotal_salaries << endl;
        cout << "%%%% Total Employee Hours ........ = " << iTotal_hours << endl;
        cout << "%%%% Total Overtime Hours......... = " << iTotal_OvertimeHours << endl;
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
            << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl << endl;
    
} // End of function

