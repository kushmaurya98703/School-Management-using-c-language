#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


struct stu{
    char name[50];
    int id;
    int age;
};

struct tea{
    char name[50];
    int id;
    int age;
};

struct cource{
    char name[50];
    int code;
};

struct stu students[100];
struct tea teachers[100];
struct cource cources[100];

int newstudent=0;
int newteacher=0;
int newcource=0;

void add_student(){
    system("cls");
     printf("Enter student Name: \n");
     scanf("%s",&students[newstudent].name);
     printf("Enter Student Id:\n");
     scanf("%d",&students[newstudent].id);
     printf("Enter Student Age:\n");
     scanf("%d",&students[newstudent].age);
     newstudent++;
     printf("Added Successfully\n");
     getch();
}

void add_teacher(){
    system("cls");
    printf("Enter Teacher Name: \n");
    scanf("%s",&teachers[newteacher].name);
    printf("Enter Teacher Id:\n");
    scanf("%d",&teachers[newteacher].id);
    printf("Enter Teacher Age:\n");
    scanf("%d",&teachers[newteacher].age);
    newteacher++;
    printf("Added Successfully\n");
    getch();
}

void add_course(){
    system("cls");
    printf("Enter Course Name:\n");
    scanf("%s",&cources[newcource].name);
    printf("Enter Course Code: \n");
    scanf("%d",&cources[newcource].code);
    newcource++;
    printf("Added Successfully\n");
    getch();
}

void display_students(){
    system("cls");
    printf("Students:\n");
    for(int i=0;i<newstudent;i++){
        printf("Name:%s,Id:%d,Age:%d\n",students[i].name,students[i].id,students[i].age);

    }
    getch();
}

void display_teacher(){
    system("cls");
    printf("Teachers:\n");
    for(int i=0;i<newteacher;i++){
        printf("Name:%s,Id:%d,Age:%d\n",teachers[i].name,teachers[i].id,teachers[i].age);
    }
    getch();
}

void display_course(){
    system("cls");
    printf("Cource:\n");
    for(int i=0;i<newcource;i++){
        printf("Course Name:%s,Course Code:%d\n",cources[i].name,cources[i].code);

    }
    getch();
}

void search_student(){
    system("cls");
    int ide;
    printf("Enter Student Id:\n");
    scanf("%d",&ide);
    for(int i=0;i<newstudent;i++){
        if(students[i].id==ide){
             printf("Name:%s,Id:%d,Age:%d\n",students[i].name,students[i].id,students[i].age);
        }
        else{
            printf("Not Available\n");
        }
    }
    getch();
}

void search_teacher(){
    system("cls");
    int ide;
    printf("Enter Teacher Id:\n");
    scanf("%d",&ide);
    for(int i=0;i<newteacher;i++){
        if(teachers[i].id==ide){
            printf("Name:%s,Id:%d,Age:%d\n",teachers[i].name,teachers[i].id,teachers[i].age);
        }
        else{
            printf("Not Available\n");
        }
    }
    getch();
}

void search_course(){
    system("cls");
    int cod;
    printf("Enter Course Code:\n");
    scanf("%d",&cod);
    for(int i=0;i<newcource;i++){
        if(cources[i].code==cod){
            printf("Course Name:%s,course Code:%d\n",cources[i].name,cources[i].code);
        }
        else{
            printf("Not Available\n");
        }
    }
    getch();
}

void delet_data(){
    system("cls");
    newstudent=0;
    newteacher=0;
    newcource=0;
    printf("Delet Successfully:\n");
    getch();
}

int menu(){
    system("cls");
    int ch;
    printf("1: Add Student\n");
    printf("2: Add Teacher\n");
    printf("3: Add Courses\n");
    printf("4: Display student Details\n");
    printf("5: Display Teachers Details\n");
    printf("6: Display Courses Details\n");
    printf("7: Search Student\n");
    printf("8: Search Teacher\n");
    printf("9: Search Course\n");
    printf("10:Delet All data\n");
    printf("11:Exit\n\n");
    printf("Enter Your Choice\n");
    scanf("%d",&ch);
    return(ch);
}
int main(){
    while (1){
    system("cls");
    switch (menu()){

        case 1:
        add_student();
          system("cls");
        break;

        case 2:
        add_teacher();
          system("cls");
        break;

        case 3:
        add_course();
          system("cls");
        break;

        case 4:
        display_students();
          system("cls");
        break;

        case 5:
        display_teacher();
          system("cls");
        break;

        case 6:
        display_course();
          system("cls");
        break;

        case 7:
        search_student();
          system("cls");
        break;

        case 8:
        search_teacher();
          system("cls");
        break;

        case 9:
        search_course();
          system("cls");
        break;

        case 10:
        delet_data();
        system("cls");
        break;

        case 11:
        exit(0);
        break;

        default:
        printf("Please Enter Valid Menu Choice\n");

    }

    }
    
}