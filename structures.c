// Online C compiler to run C program online
#include <stdio.h>
//library containing strcpy function
#include <string.h>

struct student {
    char name[50];
    int age;
    char gender[10];
    char class[10]
};

int main() {
    //call struct
    struct student St;
    strcpy(St.name, "Tirzah");
    St.age = 20;
    strcpy(St.gender, "Female");
    
    strcpy(St.class,"year2");
    
    //call struct
    struct student Stu;
    strcpy(Stu.name, "Diana");
    Stu.age = 20;
    strcpy(Stu.gender, "Female");
    
    strcpy(Stu.class,"year1");
    
    printf("Name: %s\n", Stu.name);
    printf("Age: %d\n", Stu.age);
    printf("Gender: %s\n", Stu.gender);
    printf("Class: %s\n",Stu.class);

    printf("Name: %s\n", St.name);
    printf("Age: %d\n", St.age);
    printf("Gender: %s\n", St.gender);
    printf("Class: %s\n",St.class);

    return 0;
}
