#include <stdio.h>
#include <string.h>

struct students {
   char stt[20];
   char surname[20];
   char middlename[20];
   char givenname[20];
   char mssv[20];
   char sex[20];
   char age[20];
   char math[20];
   char physics[20]; 
   char chemistry[20];
};

void save(struct students student[],int index) {

    
    FILE * fp = NULL;
    fp = fopen("students.txt", "r+");
    for(int i = 0; i < index; i++) {
        fprintf(fp, "%s %s %s %s %s %s %s %s %s %s\n", 
            student[i].stt, 
            student[i].mssv, 
            student[i].surname,
            student[i].middlename,
            student[i].givenname,
            student[i].sex,
            student[i].age,
            student[i].math,
            student[i].physics,
            student[i].chemistry);
    }
    fclose(fp);
}

void getStudents(struct students student[], int index) {
    printf("%d", index);
    printf("***************************************************Menu***************************************************************\n");
    printf("**STT\tMSSV\t\tSurname\t\tMiddle_name\tGiven_name\tSex\tAge\tMath\tPhysics    Chemistry**\n");


    for(int i = 0; i < index; i++) {
        printf("**%s\t", student[i].stt);
        printf("%s\t", student[i].mssv);
        printf("%s\t\t", student[i].surname);
        printf("%s\b\b\t\t", student[i].middlename);
        printf("%s\t\t", student[i].givenname);
        printf("%s\t", student[i].sex);
        printf("%s\t", student[i].age);
        printf("%s\t", student[i].math);
        printf("%s\t", student[i].physics);
        printf("\t\b\b\b\b\b%s\t\t", student[i].chemistry);

        printf("\b\b\b\b**\n");
    }
    printf("**********************************************************************************************************************\n");
}

void add(struct students student[], int *index) {
    printf("%d\n", *index);
    char add[10][20];
    char indexstr[3];
    
    printf("Nhap MSSV: ");
    scanf("%s", add[0]);
    printf("Nhap ho: ");
    scanf("%s", add[1]);
    printf("nhap ten dem: ");
    scanf("%s", add[2]);
    printf("nhap ten: ");
    scanf("%s", add[3]);
    printf("nhap gioi tinh: ");
    scanf("%s", add[4]);
    printf("nhap tuoi: ");
    scanf("%s", add[5]);
    printf("nhap diem toan: ");
    scanf("%s", add[6]);
    printf("nhap diem ly: ");
    scanf("%s", add[7]);
    printf("nhap diem hoa: ");
    scanf("%s", add[8]);

    sprintf(indexstr, "%d", (*index + 1));
    strcpy(student[*index].stt, indexstr);
    strcpy(student[*index].mssv, add[0]);
    strcpy(student[*index].surname, add[1]);
    strcpy(student[*index].middlename, add[2]);
    strcpy(student[*index].givenname, add[3]);
    strcpy(student[*index].sex, add[4]);
    strcpy(student[*index].age, add[5]);
    strcpy(student[*index].math, add[6]);
    strcpy(student[*index].physics, add[7]);
    strcpy(student[*index].chemistry, add[8]);
    (*index)++;
    save(student, *index);

}

void update() {

}

void removed() {

}

void searchName(struct students student, int index) {
    printf("**%s\t", student.stt);
    printf("%s\t", student.mssv);
    printf("%s\t\t", student.surname);
    printf("%s\b\b\t\t", student.middlename);
    printf("%s\t\t", student.givenname);
    printf("%s\t", student.sex);
    printf("%s\t", student.age);
    printf("%s\t", student.math);
    printf("%s\t", student.physics);
    printf("\t\b\b\b\b\b%s\t\t", student.chemistry);
    printf("\b\b\b\b**\n");
}

void arrangeGPA() {

}

void arrangeName() {

}



int main(void) {

    FILE * fp = NULL;
    fp = fopen("students.txt", "r+"); 

    int index = 0;

    struct students student[20];
    while(fscanf(fp, "%s %s %s %s %s %s %s %s %s %s", 
                    student[index].stt, 
                    student[index].mssv, 
                    student[index].surname,
                    student[index].middlename,
                    student[index].givenname,
                    student[index].sex,
                    student[index].age,
                    student[index].math,
                    student[index].physics,
                    student[index].chemistry) != EOF ) {
       index++;
    }
    fclose(fp);
   // printf("%s", student[3] );

    int user;
    char name[20];
    int check = 0;

    // printf("Chon chuc nang");
    scanf("%d", &user);


    
    switch (user)
    {
    case 1:
        add(student, &index);
        break;
    case 2:
       
        break;
    case 3:
       
       
        break;
    case 4:
        scanf("%s", name);
        for(int i = 0; i < index; i++) {
            if(strcmp(name, student[i].givenname) == 0) {
                check = 1;
            }
        }
        if(check) {
            printf("***************************************************Menu***************************************************************\n");
            printf("**STT\tMSSV\t\tSurname\t\tMiddle_name\tGiven_name\tSex\tAge\tMath\tPhysics    Chemistry**\n");
            for(int i = 0; i < index; i++) {
                if(strcmp(name, student[i].givenname) == 0) {
                    searchName(student[i], index);
                }
            }
            printf("**********************************************************************************************************************\n");
        } else {
            printf("Khong do sinh vien trong danh sach");
        }
        break;
    case 5:
        if(0) {
            printf("123");
        }
        break;
    case 6:
       
        break;
    case 7:
        getStudents(student, index);
        break;
    case 8:
        
        
        // getStudents(student, index);
        save(student, index);

        index++;
        break;
    default:
    
        printf("Khong co chuc nang nay");
        break;
    }

    return 0;
}

