#include <stdio.h>
#include <string.h>
#define MAX_FILES 100
#define MAX_NAME_LENGTH 20
// Structure to represent a file
typedef struct {
 char name[MAX_NAME_LENGTH];
 int parent_index;
} File;
// Function prototypes
void singleLevelDirectory();
void twoLevelDirectory();
int main() {
 printf("Simulating Single Level Directory\n");
 singleLevelDirectory();
 printf("\nSimulating Two Level Directory\n");
 twoLevelDirectory();
 return 0;
}
// Function to simulate single level directory
void singleLevelDirectory() {
 File files[MAX_FILES];
 int file_count = 0;
 
 // Adding files to the directory
 strcpy(files[file_count].name, "file1.txt");
 files[file_count++].parent_index = -1;
 strcpy(files[file_count].name, "file2.txt");
 files[file_count++].parent_index = -1;
 // Listing files
 printf("Files in the directory:\n");
 for (int i = 0; i < file_count; i++) {
 printf("%s\n", files[i].name);
 }
}
// Function to simulate two level directory
void twoLevelDirectory() {
 File files[MAX_FILES];
 int file_count = 0;
 // Adding files to directories
 strcpy(files[file_count].name, "file1.txt");
 files[file_count++].parent_index = 0; // Directory 1
 strcpy(files[file_count].name, "file2.txt");
 files[file_count++].parent_index = 0; // Directory 1
 strcpy(files[file_count].name, "file3.txt");
 files[file_count++].parent_index = 1; // Directory 2
 // Listing files in directories
 printf("Files in directory 1:\n");
 for (int i = 0; i < file_count; i++) {
 if (files[i].parent_index == 0) {
 printf("%s\n", files[i].name);
 }
 }
 printf("\nFiles in directory 2:\n");
 for (int i = 0; i < file_count; i++) {
 if (files[i].parent_index == 1) {
 printf("%s\n", files[i].name);
 }
 }
}