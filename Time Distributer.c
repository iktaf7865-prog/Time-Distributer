#include<stdio.h>
#include<conio.>

void time_distributer(int subjects, float study_duration, float break_duration);

void main() {
    clrscr();
    int subjects;
    float study_duration, break_duration;
    
    printf("Enter the no. of subjects: ");
    scanf("%d", &subjects);
    
    printf("Enter study duration: ");
    scanf("%f", &study_duration);
    
    printf("Enter break duration: ");
    scanf("%f", &break_duration);
    
    time_distributer(subjects, study_duration, break_duration);
    getch();
}

void time_distributer(int subjects, float study_duration, float break_duration) {
    float time_distribution = (study_duration - break_duration) / subjects;
    printf("You can give = %f hour to each subject", time_distribution);
