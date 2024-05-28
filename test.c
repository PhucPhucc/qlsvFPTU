#include <stdio.h>

void getData(char *stt, char *name, char *mssv, char *major, char *birth) {
    
}

int main(void)
{
    FILE * fp = NULL;

    //Mở file bằng hàm fopen
    // fopen_s(&fp, "script.txt", "r+");
    fp = fopen("script.txt", "r");
    char stt[5][50];
    char name[5][50];
    char mssv[5][50];
    char major[5][50];
    char birth[5][50];
    int i = 0;


    while(fscanf(fp, "%s %s %s %s %s", stt[i], name[i], mssv[i], major[i], birth[i]) != EOF) {
        printf("%s %s %s %s %s\n", stt, name, mssv, major, birth);
        i++;
    }


    for(int i = 0; i < 4; i++) {
        printf("%s ", stt[i]);
        printf("%s ", name[i]);
        printf("%s ", mssv[i]);
        printf("%s ", major[i]);
        printf("%s ", birth[i]);
        printf("\n");
    }




    // fclose(fp);

    // char (array[2][10])[5];

    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         scanf(" ", &((array[j][10])[i]));
    //     }
    // }

    // for (int i = 0; i < 5; i++) {
    //     printf("%d: \n", i);
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d: ", j);
    //         printf("%s\n", (array[j][10])[i]);
    //     }
    // }

    // // fp = fopen("script.txt", "r"); 
    // // while(fscanf(fp, "%s", stt) != EOF) {
    // //     array[i] = stt;

    // //     i++;
    // // }

    // // for (int j = 0; j < count; j++) {
    // //     printf("%s", array[j]);
    // // }
    return 0;
}
