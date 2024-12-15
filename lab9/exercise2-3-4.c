#include<stdio.h>

typedef struct{
    char name[50];
    int salary;
} Employee;

void printEmployees(Employee *e, int length){
    for(int i=0; i<length; i++){
        printf("Employee %d\n", (i+1));
        printf("Name: %s\nSalary: %d\n\n", e[i].name, e[i].salary);}
}

int highsalary(Employee *e, int length, int thres, Employee *result){
    int number = 0;
    for(int i=0; i<length; i++){
        if(e[i].salary>thres){
            result[number]=e[i];
            number++;
        }       
    }
    return number;
    //printEmployees(result, number);
}

void avarage(Employee *e, int length, Employee *result2){
    int total=0;
    int number2=0;
    for(int i=0; i<length; i++){
        total+=e[i].salary;
    }
    int avarage=total/length;

    for(int i=0; i<length; i++){
        if(e[i].salary>avarage){
            result2[number2]=e[i];
            number2++;
        }
    }
    printEmployees(result2, number2);
}

int compare(Employee *e){
    if(e[0].salary>e[1].salary)
        return 1;
    else if(e[0].salary<e[1].salary)
        return -1;
    else
        return 0;
}

int main(){
    int n;
    int threshold;

    Employee employee[100];
    Employee highEmployee[100];
    Employee highAvarageEmployee[100];

    printf("How many employees: ");
    scanf("%d", &n);
    getchar();
    
    for(int i=0; i<n; i++){
        printf("Employee %d\n", (i+1));

        printf("Name: ");
        fgets(employee[i].name, sizeof(employee[i].name), stdin);

        printf("Salary: ");
        scanf("%d", &employee[i].salary);
        getchar();}

    printf("Threshold: ");
    scanf("%d", &threshold);
    
    puts("Employees");
    printEmployees(employee, n);

    puts("High salary employees");
    int number;
    number = highsalary(employee, n, threshold, highEmployee);
    printEmployees(highEmployee, number);

    puts("High avarage salary employees");
    avarage(employee, n, highAvarageEmployee);

    if(compare(employee)==1)
        puts("first employee has higher salary");
    else if(compare(employee)==-1)
        puts("second employee has higher salary");
    else if(compare(employee)==0)
        puts("first employee has higher salary");
}
