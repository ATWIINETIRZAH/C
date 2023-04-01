#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    int authentication = 0; //track authentication status
    
    // prompt user for username and password
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    
    // check if username and password match
    if (strcmp(username, "Tirzah") == 0 && strcmp(password, "1234") == 0) {
        authentication = 1;
    }
    
    // print appropriate message based on authentication status
    if (authentication) {
        printf("Authentication successful! Welcome, %s.\n", username);
    } else {
        printf("Authentication failed. Invalid username or password.\n");
    }
    
    return 0;
}
