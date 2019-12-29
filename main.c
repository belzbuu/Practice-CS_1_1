/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char message[100];
    fgets(message,100,stdin);
    int ctr = 0;
    int trav = 0;
    int toN;
    char letters1[] = {'a','b','c'};
    char letters2[] = {'d','e','f'};
    char letters3[] = {'g','h','i'};
    char letters4[] = {'j','k','l'};
    char letters5[] = {'m','n','o'};
    char letters6[] = {'p','q','r','s'};
    char letters7[] = {'t','u','v'};
    char letters8[] = {'w','x','y','z'};
    int i,j;
    int count = 0;
    trav = 0;
    int len = strlen(message);
    while(ctr < len){
        count = 0;
        if(message[ctr] >= 119){
            while(message[ctr+count] >=119){
                count++;
            }
            
            printf("%c",letters8[(count-1)%4]);
        }else if(message[ctr] >= 116){
            
            while(message[ctr+count] >=116 && message[ctr+count] < 119){
                count++;
            }
            
            printf("%c",letters7[(count-1)%3]);
        }
        
        else if(message[ctr] >= 112){
            
            while(message[ctr+count] >=112 && message[ctr+count] < 116){
                count++;
            }
            // ctr += count;
            printf("%c",letters6[(count-1)%4]);
        }else if(message[ctr] >= 109){
            
            while(message[ctr+count] >=109 && message[ctr+count] < 112){
                count++;
            }
            // ctr += count;
            printf("%c",letters5[(count-1)%3]);
        }else if(message[ctr] >= 106){
            
            while(message[ctr+count] >=106 && message[ctr+count] < 109){
                count++;
            }
            // ctr += count;
            printf("%c",letters4[(count-1)%3]);
        }else if(message[ctr] >= 103){
            
            
            while(message[ctr+count] >=103 && message[ctr+count] < 106){
                count++;
            }
            // ctr += count;
            printf("%c",letters3[(count-1)%3]);
            
            
            }else if(message[ctr] >= 100){
        
            while(message[ctr+count] >=100 && message[ctr+count] < 103){
                count++;
            }
            // ctr += count;
            printf("%c",letters2[(count-1)%3]);
        }else if(message[ctr] >= 97){
            
            while(message[ctr+count] >=97 && message[ctr+count] < 100){
                count++;
            }
            // ctr += count;
            printf("%c",letters1[(count-1)%3]);
        }else{
            printf("%c",message[ctr]);
        }
        
        if(count != 0){
            ctr += count;    
        }else{
            ctr++;
        }
     
    }
    return 0;
}
