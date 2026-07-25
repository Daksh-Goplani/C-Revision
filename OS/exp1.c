// Implement any 5 system calls: 

//Header file for printf()
#include<stdio.h>

//Header file for open() and file modes
#include<fcntl.h>

//Header file for read(), write(), close()
#include<io.h>

//Header file for _getpid()
#include<process.h>

int main(){

    int fd, pid, n; // file descriptor, process ID, store no of bytes read
    char data[] = "Hello World!"; // text to write in file
    char buffer[100]; // to read read file

    // System call 1 : open()
    // Create/Open file in write mode
    fd = open("demo.txt", O_CREAT | O_WRONLY | O_TRUNC,  0644);
    
    if(fd == -1){
        printf("File cannot be opened.\n");
        return 1;
    }
    
    // System call 2 : write()
    // Write data into file
    write(fd, data, sizeof(data)-1);
    
    // System call 3 : close()
    // Close the file
    close(fd);
    
    // System call 4 : lopen()
    // Open the same file n read mode
    fd = open("demo.txt", O_RDONLY);
    
    // System call 5 : read()
    // Read data from the file
    n= read(fd, buffer, sizeof(buffer)-1);

    buffer[n] = '\0';

    printf("File Content: \n%s\n", buffer);

    // Close the file
    close(fd);

    //Extra system call: _getpid()
    // Display process ID
    pid = _getpid();
    printf("Process ID = %d\n", pid);

    return 0;
}