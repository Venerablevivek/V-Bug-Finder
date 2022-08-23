# V-Bug-Finder
V_Bug_Finder is software that keeps track of bugs that the user encountered in any software development or in any project.

The three main functionalities of the Bug Tracking system is:

1.Creating a new text file and writing the details entered by the user into the text file.
2.Option to change the status of the bug.
3. Report of specific bug file.

Now will see what are functions involved

Main Function: The idea is to keep a variable id that stores the id of the Bugs that are registered till now. There are mainly three options out of which user can select the functionality:

 1. Create/File a New Bug
 2. Change Status of Bug
 3. Report a Bug
 4. Exit
Switch Statements are used to Switch into the functionalities as preferred by the user.

1. Create/File a New Bug: This function will ask the user for his name, and create a new text file as a name with the id number attached to it.

For Example:

 a. If the user creating a bug file for the first time id which is initially 0 incremented by 1 and if the user enters name as bugfile then the file that our program will create will be named as bugfile1.txt 
 b. If the user creating a bug file for the 3rd time id incremented by 1 three times and if the user enters the name as bugfile again then the file that our program will create will be named as bugfile3.txt
 c. After naming the file, Take the information from the user and add it to the text file with the time of creation attached to it 

The information is taken by a user for a bug is:

- Bug Filed by User.
- Bug Type
- Bug Priority
- Bug Description
- Bug Status

2. Change Status of Bug: Take the information about the bug and change the status of the bug in the desired file. Also, update the Last Updated Time of the Bug.

3. Report about Bug: Take the information about the bug. Such as Bug file name and print the contents of the Bug.
