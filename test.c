#include <stdio.h>

void getStudents(char stt[20][10], char mssv[20][10], char surname[20][20], char middlename[20][20], char givenname[20][20], char sex[20][4], char age[20][10], char math[20][20], char physics[20][20], char chemistry[20][20], int index) {
    printf("************************Menu************************\n");
    for(int i = 0; i < index; i++) {
        printf("**%s\t", stt[i]);
        printf("%s\t\t", mssv[i]);
        printf("%s\t", surname[i]);
        printf("%s\t", middlename[i]);
        printf("%s\t", givenname[i]);
        printf("%s\t", sex[i]);
        printf("%s\t", age[i]);
        printf("%s\t", math[i]);
        printf("%s\t", physics[i]);
        printf("%s\t", chemistry[i]);
        printf("\n");
    }
    printf("***************************************************\n");

}

void add() {

}

void update() {

}

void removed() {

}

void search() {

}

void arrangeGPA() {

}

void arrangeName() {

}

int main(void)
{
    FILE * fp = NULL;

    //Mở file bằng hàm fopen
    // fopen_s(&fp, "script.txt", "r+");
    fp = fopen("script.txt", "r");
    char stt[20][10];
    char surname[20][20];
    char middlename[20][20];
    char givenname[20][20];
    char mssv[20][10];
    char sex[20][4];
    char age[20][10];
    char math[20][20];
    char physics[20][20];
    char chemistry[20][20];

    int index = 0;


    while(fscanf(fp, "%s %s %s %s %s %s %s %s %s %s", stt[index], mssv[index], surname[index], middlename[index], givenname[index], sex[index], age[index], math[index], physics[index], chemistry[index]) != EOF) {
        // printf("%s %s %s %s %s\n", stt, name, mssv, major, birth);
        index++;
    }

    // printf("%d", index);
    getStudents(stt, mssv, surname, middlename, givenname, sex, age, math, physics, chemistry, index);
    // for(int i = 0; i < index; i++) {
    //     printf("**\t%s\t", stt[i]);
    //     printf("%s\t", mssv[i]);
    //     printf("%s\t", surname[i]);
    //     printf("%s\t", middlename[i]);
    //     printf("%s\t", givenname[i]);
    //     printf("%s\t", sex[i]);
    //     printf("%s\t", age[i]);
    //     printf("%s\t", math[i]);
    //     printf("%s\t", physics[i]);
    //     printf("%s\t", chemistry[i]);
    //     printf("\n");
    // }




    
    return 0;
}
