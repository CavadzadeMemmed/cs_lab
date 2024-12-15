#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50

typedef struct Employee {
    int id;
    char name[MAX_NAME_LEN];
    double salary;
    struct Employee* next; 
} Employee;

Employee* createEmployee(int id, const char* name, double salary) {
    Employee* newEmp = (Employee*)malloc(sizeof(Employee));
    newEmp->id = id;
    strncpy(newEmp->name, name, MAX_NAME_LEN);
    newEmp->salary = salary;
    newEmp->next = NULL;
    return newEmp;
}

void printEmployee(Employee* emp) {
    if (emp != NULL) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp->id, emp->name, emp->salary);
    }
}

void printEmployeeList(Employee* empList) {
    Employee* current = empList;
    while (current != NULL) {
        printEmployee(current);
        current = current->next;
    }
}

Employee* getEmployeesWithSalaryMoreThan(Employee* empList, double threshold) {
    Employee* resultList = NULL;
    Employee* last = NULL;

    Employee* current = empList;
    while (current != NULL) {
        if (current->salary > threshold) {
            Employee* newEmp = createEmployee(current->id, current->name, current->salary);
            if (resultList == NULL) {
                resultList = newEmp;
            } else {
                last->next = newEmp;
            }
            last = newEmp;
        }
        current = current->next;
    }

    return resultList;
}

Employee* getEmployeesWithSalaryMoreThanAvg(Employee* empList) {
    double totalSalary = 0;
    int count = 0;

    Employee* current = empList;
    while (current != NULL) {
        totalSalary += current->salary;
        count++;
        current = current->next;
    }

    if (count == 0) return NULL;

    double avgSalary = totalSalary / count;
    return getEmployeesWithSalaryMoreThan(empList, avgSalary);
}

int main() {
    Employee* empList = NULL;
    Employee* last = NULL;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        int id;
        char name[MAX_NAME_LEN];
        double salary;

        printf("Enter ID, Name, and Salary for employee %d: ", i + 1);
        scanf("%d", &id);
        getchar(); 
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; 
        scanf("%lf", &salary);

        Employee* newEmp = createEmployee(id, name, salary);

        if (empList == NULL) {
            empList = newEmp;
        } else {
            last->next = newEmp;
        }
        last = newEmp;
    }

    printf("\nEmployee List:\n");
    printEmployeeList(empList);

    double threshold;
    printf("\nEnter the salary threshold: ");
    scanf("%lf", &threshold);

    Employee* filteredList = getEmployeesWithSalaryMoreThan(empList, threshold);
    printf("\nEmployees with salary more than %.2f:\n", threshold);
    printEmployeeList(filteredList);

    Employee* avgFilteredList = getEmployeesWithSalaryMoreThanAvg(empList);
    printf("\nEmployees with salary more than the average:\n");
    printEmployeeList(avgFilteredList);

    return 0;
}
