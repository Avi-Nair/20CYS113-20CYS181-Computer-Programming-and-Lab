#include <stdio.h>
#include <string.h>

struct students{
    char name[30];
    int age;
    enum score{
        A,B,C,D,F
    }e_s;
}b[72];

int main(){
    char grade[10];  // Variable to store the grade entered by the user
    int val_menu, t=0, error;  // Variables to store menu choice, counter, and error flag
    
    do{
        scanf("%d", &val_menu);  // Read the menu choice from the user
        
        switch (val_menu){
            
            case 1: 
                if(t==3){
                    printf("Maximum number of students reached.\n");  // Print an error message if the maximum number of students is reached
                }
                else{
                    scanf("%s", b[t].name);  // Read the name of the student
                    scanf("%d", &b[t].age);  // Read the age of the student
                    scanf("%s", grade);  // Read the grade of the student
                    
                    if (strcmp(grade,"A")==0){
                        b[t].e_s = 0;  // Assign the enum value corresponding to grade A
                    }
                    else if (strcmp(grade,"B")==0){
                        b[t].e_s = 1;  // Assign the enum value corresponding to grade B
                    }
                    else if (strcmp(grade,"C")==0){
                        b[t].e_s = 2;  // Assign the enum value corresponding to grade C
                    }
                    else if (strcmp(grade,"D")==0){
                        b[t].e_s = 3;  // Assign the enum value corresponding to grade D
                    }
                    else if (strcmp(grade,"F")==0){
                        b[t].e_s = 4;  // Assign the enum value corresponding to grade F
                    }
                    else{
                        b[t].e_s = 4;  // Assign the enum value 4 for any other grade
                    }
                    t = t + 1;  // Increment the counter for the number of students
                    printf("\nStudent added successfully.\n");  // Print a success message after adding the student    
                }
                break;
                
            case 2: // Displaying students
                printf("List of students:\n");
                for(int i = 0; i < t; i++){
                    printf("Student %d\n", i+1);
                    printf("Name: %s\n", b[i].name);
                    printf("Age: %d\n", b[i].age);
                    
                    if (b[i].e_s == 0){
                        printf("Score: A\n");
                    }
                    else if (b[i].e_s == 1){
                        printf("Score: B\n");
                    }
                    else if (b[i].e_s == 2){
                        printf("Score: C\n");
                    }
                    else if (b[i].e_s == 3){
                        printf("Score: D\n");
                    }
                    else if (b[i].e_s == 4){
                        printf("Score: F\n");
                    }
                    printf("\n");
                }
                break;
                
            case 3: // Highest score
                printf("Highest-scoring student:\n");
                for(int i = 0; i < t; i++){
                    if (b[i].e_s == 0){
                        printf("Name: %s\n", b[i].name);
                        printf("Age: %d\n", b[i].age);
                        if (b[i].e_s == 0){
                            printf("Score: A\n");
                        }
                        else if (b[i].e_s == 1){
                            printf("Score: B\n");
                        }
                        else if (b[i].e_s == 2){
                            printf("Score: C\n");
                        }
                        else if (b[i].e_s == 3){
                            printf("Score: D\n");
                        }
                        else if (b[i].e_s == 4){
                            printf("Score: F\n");
                        }
                    }
                    break;
                }
                printf("\n");
                break;
                
            case 4: // Exiting
                printf("Exiting the program. Thank you for using our system!");
                break;
        }
    } while (val_menu != 4);  // Repeat the loop until the user chooses to exit
}

