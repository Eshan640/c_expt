#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    // Assigning present address details one by one (only last assigned will hold)
    strcpy(addr.home_address, "GURU NANAK PURA");
    printf("Home Address: %s\n", addr.home_address);

    strcpy(addr.city, "NARNAUL");
    printf("City: %s\n", addr.city);

    strcpy(addr.state, "HARYANA");
    printf("State: %s\n", addr.state);

    strcpy(addr.zip, "123001");
    printf("Zip: %s\n", addr.zip);

    // Because of union nature, only the last assigned field ('zip') holds valid data now,
    // so if you want to display full present address together, use struct instead.
    // For demonstration, this shows overwriting effect.

    return 0;
}