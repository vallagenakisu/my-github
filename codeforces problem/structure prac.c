#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
    int code;
    char name[100];
    char date_of_joining[100];
} employee ;

int jobExperience(char *s, char *r){
    int yearCount, days, month, year,x1,x2;
    sscanf(s,"%d-%d-%d",&days,&month,&year);
    x1 = days + (month*30) + (year*365);
    sscanf(r,"%d-%d-%d",&days,&month,&year);
    x2 = days + (month*30) + (year*365);
    yearCount = (x1-x2)/365; 
    return yearCount;
}

int main(){
    employee a[3];
    char date[100];
    for(int i=0; i<3; i++){
        printf("\nEnter Code:");
        scanf("%d",&a[i].code);
        printf("Enter Name:");
        // fgets(a[i].name,100,stdin);
        scanf("%s",a[i].name);
        printf("Enter Date of Joining(d-m-y):");
        scanf("%s",a[i].date_of_joining);
    }
    printf("Enter today's date:");
    scanf("%s",date);
    for(int i=0; i<3; i++){
        int experience = jobExperience(date,a[i].date_of_joining);
        if(experience>3){
            printf("%s",a[i].name); 
        }
    }
    return 0; 
}