#include<stdio.h>
#include<string.h>

struct Student
{
    
    int roll;
    float marks;
    char name[25];
};

int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    
    
    
    struct Student Students[n];
    
    for(int i=0;i<n;i++)
    {
        char t;
        scanf("%c",&t);
        
        printf("\n**********************************************************");
        printf("\nStudent %d\n",i+1);
        
        char temp[25];
        printf("\nEnter name : ");
        fgets(Students[i].name,sizeof(Students[i].name),stdin);
        
        
        
        printf("Enter roll number : ");
        scanf("%d",&Students[i].roll);
        
        printf("Enter marks : ");
        scanf("%f",&Students[i].marks);
        
        
        printf("\n**********************************************************");
    }
    
    
    for(int i=0;i<n;i++)
    {
        printf("\n**********************************************************");
        printf("\nStudent %d\n",i+1);
        
        printf("\nName : %s",Students[i].name);
        
        printf("Roll number : %d",Students[i].roll);
        
        printf("\nMarks : %.2f",Students[i].marks);
        
    
        printf("\n**********************************************************");
        
    }
}
