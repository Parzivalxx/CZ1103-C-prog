#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char name[40];
    char telno[40];
    int id;
    double salary;
} Employee;

void printEmp(Employee *emp, int size);
int readin(Employee *emp);
int search(Employee *emp, int size, char *target);
int addEmployee(Employee *emp, int size, char *target);

int main()
{
    Employee emp[MAX];
    char name[40], *p;
    int size, choice, result;

    printf("Select one of the following options: \n");
    printf("1: readin() \n");
    printf("2: search() \n");
    printf("3: addEmployee() \n");
    printf("4: print() \n");
    printf("5: exit() \n");

    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                size = readin(emp);
                break;
            case 2:
                printf("Enter search name: \n");
                scanf("\n");
                fgets(name, 40, stdin);
                if (p=strchr(name,'\n'))
                    *p = '\0';
                result = search(emp,size,name);
                if (result != 1)
                    printf ("Name not found! \n");
                break;
            case 3:
                printf("Enter new name: \n");
                scanf("\n");
                fgets(name, 40, stdin);
                if (p=strchr(name,'\n'))
                    *p = '\0';
                result = search(emp,size,name);
                if (result != 1)
                    size = addEmployee(emp, size, name);
                else
                    printf("The new name has already existed in the database\n");
                break;
            case 4:
                printEmp(emp, size);
                break;
            default:
                break;
        }
    } while (choice < 5);
    return 0;
}

void printEmp(Employee *emp, int size)
{
    int i;
    printf("The current employee list: \n");
    if (size==0)
        printf("Empty array\n");
    else {
        for (i=0; i<size; i++)
            printf("%s %s %d %.2f\n",emp[i].name,emp[i].telno,emp[i].id, emp[i].salary);
    }
}

int readin(Employee *emp)
{
    /* write your code here */
    char id[20], salary[20], *p;
    int size;
    int atoi(id);
    double atof(salary);
    size = 0;
    while (1) {
        printf("Enter name: \n");
        scanf("\n");
        fgets(emp[size].name, 40, stdin);
        if (p=strchr(emp[size].name,'\n'))
            *p = '\0';
        if (strcmp(emp[size].name,"#")==0)
            break;
        printf("Enter tel: \n");
        fgets(emp[size].telno, 20, stdin);
        if (p=strchr(emp[size].telno,'\n'))
            *p = '\0';
        printf("Enter id: \n");
        fgets(id, 20, stdin);
        if (p=strchr(id,'\n'))
            *p = '\0';
        emp[size].id = atoi(id);
        printf("Enter salary: \n");
        fgets(salary, 20, stdin);
        if (p=strchr(salary,'\n'))
            *p = '\0';
        emp[size].salary = atof(salary);
        size++;
    };
    return size;
}
int search(Employee *emp, int size, char *target)
{
    /* write your code here */
    int i;
    for (i=0;i<size;i++) {
        if (strcmp(emp[i].name,target)==0) {
            printf("Employee found at index location: %d\n", i);
            printf("%s %s %d %.2f\n",emp[i].name,emp[i].telno,emp[i].id, emp[i].salary);
            return 1;
        };
    };
    return 0;
}
int addEmployee(Employee *emp, int size, char *target)
{
    /* write your code here */
    char id[20], salary[20], *p;
    int atoi(id);
    double atof(salary);
    if (size == MAX) {
        printf("Database is full\n");
    }
    else {
        strcpy(emp[size].name,target);
        printf("Enter tel: \n");
        fgets(emp[size].telno, 20, stdin);
        if (p=strchr(emp[size].telno,'\n'))
            *p = '\0';
        printf("Enter id: \n");
        fgets(id, 20, stdin);
        if (p=strchr(id,'\n'))
            *p = '\0';
        emp[size].id = atoi(id);
        printf("Enter salary: \n");
        fgets(salary, 20, stdin);
        if (p=strchr(salary,'\n'))
            *p = '\0';
        emp[size].salary = atof(salary);
        printf("Added at position: %d\n", size);
        size++;
    };
    return size;
}
