## Files
- Unix maintains a file system
    - file system controls how data is stored and retrieved

- Primary abstractions:
    - Directories
    - Files

- Files are contained within directories
## Permissions
### Permissions: System Calls
- System calls: a request from a program to the OS to do something on its behalf
- ... including accessing files and directories

- System calls:
    - typically exposed through functions in C library
    - Unix utilities (mkdir, ls, touch) are programs that call these functions
    - Permissions are enforced via system calls
### Permissions: Unix Groups
- Groups are a mechanism for saying that a subset of Unix users are related
    - I could make a "212_F23" unix group
    
- Members:
    - Me
    - 2 TAs

### Permissions
- Permissions are properties associated with files and directories
    - System calls have built in checks to permissions
        - only succeed if proper permissions are in place

    - Group: Allow a unix group to access a file
    - Other: Allow anyone on the system to access a file
- Three types of permissions
    - Read
    - Write
    - Execute

### Executable Files
- An executable file: a file that you can invoke from the command line
    - Scripts 
    - Binary programs
- The concept of whether a file is executable is linked with file permissions
