/**
 *Program Random password genrator
 * Description: Generates random passwords of a user-specified length using C.
 * Author : Joseph Onahi
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main() {
    printf("Enter Pasword length: ");
    int length;
    scanf("%d", &length);
    
    if (length <= 0)
    {
        printf("Pasword lenght must be greater than or = 1!");
        return 1;
    }
    
    char *password = malloc(length + 1);
    
    char *digit = "0123456789";
    char digit_len = strlen(digit);
    
    char *low = "abcdefghijklmnopqrstuvwxyz";
    char low_len = strlen(low);
    
    char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char upper_len = strlen(upper);
    
    char *sym = "!@#$%^&*()";
    char sym_len = strlen(sym);
    
    srand(time(NULL) * getpid());
    
    for (int i =  0; i < length; i++)
    {
        int char_type = rand() % 4;
        
        if (char_type == 0)
        password[i] = digit[rand() % digit_len];
        else if (char_type == 1)
        password[i] = low[rand() % low_len];
        else if (char_type == 2)
        password[i] = upper[rand() % upper_len];
        else 
        password[i] = sym[rand() % sym_len];
    }
    password[length] = '\0';
    printf("password: %s\n", password);
    
    
    free(password);
    
    return 0;
}

