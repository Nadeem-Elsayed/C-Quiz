#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 *This program quizes the user based on their knowledge of:
 *Git
 *Linux
 *C
 *Takes arguments from command line
 */
int main(int argc, char *argv[]){
	
	//Answers
	char a1[10] = "restore";
	char a2[10] = "ls";
	char a3[10] = "string.h";
	
	//Argument Matching
	//Give the user the questions
	//if there are zero arguments provided
	if (argc == 1){
		puts("Usage: quiz -# [<answer>]");
		puts("use quiz --help for a list of commands");
                return EXIT_FAILURE;

	} else if (argc == 2) { // if there is one algorithms provided
		if (strcmp(argv[1], "-1") == 0){//q1
                	puts("Which command is used to remove a file from the staging process?");

		} else if (strcmp(argv[1], "-2") == 0) {//q2
                	puts("Which command is used to list the contents in a directory?");

		} else if (strcmp(argv[1], "-3") == 0) {//q3
                	puts("Which library must be included to use strings in C?");

		} else if (strcmp(argv[1], "--help") == 0) {
			puts("To get a question use quiz [-#] Ex:");
			puts("quiz -1");
			puts("To answer a question use quiz [-#] [<answer>]");
			puts("quiz -2 'Potato'");
			puts("To get a list of commands use --help");
			puts("quiz --help");

		} else {
			puts("Usage: quiz [-#] [<answer>]");
			puts("use quiz --help for a list of commands");
                	return EXIT_FAILURE;

		}
	} else if (argc == 3) { // if there are two arguments provided 
		//if answering question 1
		if (strcmp("-1", argv[1]) == 0){
			if (strcmp(a1, argv[2]) == 0) {
				puts("Answer is Correct!");

			} else {
				puts("Answer is Wrong");

			}
		} else if (strcmp("-2", argv[1]) == 0) {//if first argument is "-2"
			if (strcmp(a2, argv[2]) == 0) {
				puts("Answer is Correct!");

			} else {
				puts("Answer is Wrong");

			}
		} else if (strcmp("-3", argv[1]) == 0) {
			if (strcmp(a3, argv[2]) == 0) {
				puts("Answer is Correct!");

			} else {
				puts("Answer is Wrong");

			}
		} else {
			puts("Usage: quiz [-#] [<answer>]");
			puts("use quiz --help for a list of commands");
			return EXIT_FAILURE;

		}
	} else {
		puts("Usage: quiz [-#] [<answer>]");
		puts("use quiz --help for a list of commands");
		return EXIT_FAILURE;

	}
	return EXIT_SUCCESS;
}
