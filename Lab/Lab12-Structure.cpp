/*
    จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
    ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
    แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;

    Test Case:
        Enter the details of 3 students :
        Student 1:
        Name: 
            John Doe
        ID: 
            101
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            64
        Scores in Subject 3: 
            66
        Scores in Subject 4: 
            54
        Scores in Subject 5: 
            56

        Student 2:
        Name: 
            Jane Smith
        ID: 
            102
        Scores in Subject 1: 
            43
        Scores in Subject 2: 
            70
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            77
        Scores in Subject 5: 
            80

        Student 3:
        Name: 
            Mark Johnson
        ID: 
            103
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            74
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            81
        Scores in Subject 5: 
            69

    Output:
    Student Details:
    Student 1:
    Name: John Doe
    ID: 101
    Scores: 77 64 66 54 56
    Grades: B+  C C+ D  D+
    Average Scores: 63.4

    Student 2:
    Name: Jane Smith
    ID: 102
    Scores: 43 70 76 77 80
    Grades:  F  B B+ B+  A
    Average Scores: 69.2

    Student 3:
    Name: Mark Johnson
    ID: 103
    Scores: 77 74 76 81 69
    Grades: B+  B B+  A C+
    Average Scores: 75.4
*/

#include <stdio.h>
#include <string>
struct Student {
    char Name[20];
    char Last[20] ;
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
};
void calculateGrade(float score) {
    if (score >= 76 && score <= 80) printf ( " A" ) ;
    else if (score >= 71 && score <= 75) printf ( "  B+" ) ;
    else if (score >= 66 && score <= 70) printf ( " B" ) ;
    else if (score >= 61 && score <= 65) printf ( "  C+" ) ;
    else if (score >= 56 && score <= 60) printf ( " C" ) ;
    else if (score >= 51 && score <= 55) printf ( "  D+" ) ;
    else if (score >= 50 && score <= 54) printf ( " D" ) ;
    else if (score >= 0 && score <= 49 )printf ( " F" ) ;
}
int main() {
    struct Student S[3];
    int i ;
    for (int i = 0; i < 3; i++) {
        printf("Name:\n");
        scanf("%s %s", S[i].Name,S[i].Last);

        printf("ID:\n");
        scanf("%s", S[i].ID);

        printf("Scores in Subject 1:\n");
        scanf("%f", &S[i].ScoreSub1);

        printf("Scores in Subject 2:\n");
        scanf("%f", &S[i].ScoreSub2);

        printf("Scores in Subject 3:\n");
        scanf("%f", &S[i].ScoreSub3);

        printf("Scores in Subject 4:\n");
        scanf("%f", &S[i].ScoreSub4);
        
        printf("Scores in Subject 5:\n");
        scanf("%f", &S[i].ScoreSub5);
    }
    float averageScore = (S[i].ScoreSub1 + S[i].ScoreSub2 + S[i].ScoreSub3 + S[i].ScoreSub4 + S[i].ScoreSub5) / 5.0;
    printf("Student Details:\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i+1 );
        printf("Name: %s %s\n", S[i].Name,S[i].Last);
        printf("ID: %s\n", S[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n", S[i].ScoreSub1, S[i].ScoreSub2, S[i].ScoreSub3, S[i].ScoreSub4, S[i].ScoreSub5);
        printf("Grades:" ) ;
        calculateGrade( S[i].ScoreSub1) ;
        calculateGrade( S[i].ScoreSub2) ;
        calculateGrade( S[i].ScoreSub3) ;
        calculateGrade( S[i].ScoreSub4) ;
        calculateGrade( S[i].ScoreSub5) ;

        printf("\nAverage Scores: %.2f",averageScore ) ;
    }

    return 0;
}