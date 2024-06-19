#include <stdio.h>
#include <string.h>
// #include <gtk/gtk.h>
#include <windows.h>
#include <stdlib.h>

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
    printf("***************************************************Danh sach***********************************************************\n");
    printf("**STT\tMSSV\t\tSurname\t\tMiddle_name\tGiven_name\tSex\tAge\tMath\tPhysics    Chemistry **\n");


    for(int i = 0; i < index; i++) {
        printf("**%s\t", student[i].stt);
        printf("%s\t", student[i].mssv);
        printf("%s\t\t", student[i].surname);
        printf("%s      \t", student[i].middlename);
        printf("%s\t\t", student[i].givenname);
        printf("%s\t", student[i].sex);
        printf("%s\t", student[i].age);
        printf("%s\t", student[i].math);
        printf("%s\t  ", student[i].physics);
        printf(" %s\t", student[i].chemistry);

        printf("     **\n");
    }
    printf("***********************************************************************************************************************\n");
}

void add(struct students student[], int *index) {
    char add[10][20];
    char indexstr[3];
    printf("\n1. Them sinh vien\n", *index + 1);
    printf("-----------------------------\n");
    printf("Nhap sinh vien thu %d\n", *index + 1);
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
    printf("-----------------------------\n");

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
    printf("%s      \t", student.middlename);
    printf("%s\t\t", student.givenname);
    printf("%s\t", student.sex);
    printf("%s\t", student.age);
    printf("%s\t", student.math);
    printf("%s\t  ", student.physics);
    printf(" %s\t", student.chemistry);
    printf("    **\n");
    
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
    while(1) {
        system("cls");
        printf("CHUONG TRINH QUAN LY SINH VIEN FPTU BANG C\n");
        printf("****************************************************\n");
        printf("** 1. Them sinh vien.\t\t\t\t  **\n");
        printf("** 2. Cap nhat thong tin sinh vien boi ID.\t  **\n");
        printf("** 3. Xoa sinh vien boi ID.\t\t\t  **\n");
        printf("** 4. Tim kiem sinh vien theo ten.\t\t  **\n");
        printf("** 5. Sap xep sinh vien theo diem trung binh GPA. **\n");
        printf("** 6. sap xep sinh vien theo ten.\t\t  **\n");
        printf("** 7. Hien Thi danh sach sinh vien.\t\t  **\n");
        printf("** 8. Thoat.\t\t\t\t\t  **\n");
        printf("****************************************************\n");
        printf("Nhap tuy chon: ");
        scanf("%d", &user);
        // user = 7;


    
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
            printf("Nhap ten hoac MSSV: ");
            scanf("%s", name);
            for(int i = 0; i < index; i++) {
                if(!strcmp(name, student[i].givenname) || !strcmp(name, student[i].mssv)) {
                    check = 1;
                }
            }
            if(check) {
                printf("***************************************************Menu***************************************************************\n");
                printf("**STT\tMSSV\t\tSurname\t\tMiddle_name\tGiven_name\tSex\tAge\tMath\tPhysics    Chemistry**\n");
                for(int i = 0; i < index; i++) {
                    if(!strcmp(name, student[i].givenname) || !strcmp(name, student[i].mssv)) {
                        searchName(student[i], index);
                    }
                }
                printf("**********************************************************************************************************************\n");
            } else {
                printf("Khong do sinh vien trong danh sach");
            }
            system("pause");
        
            break;
        case 5:
            if(0) {
                printf("123");
            }
            system("pause");
            break;
        case 6:
        
            break;
        case 7:
            getStudents(student, index);
            break;
        case 8: 
            return 0;
        default:
        
            printf("Khong co chuc nang nay");
            break;
        }
    }
    return 0;
}

