#include <stdio.h>

main(){
	int blank_count = 0, tabs_count = 0, newline_count = 0;
	int read_char;

	while((read_char = getchar()) != EOF){

		if (read_char == '\n'){
			++newline_count;
		} else if (read_char == '\t'){
			++tabs_count;
		} else if( read_char == ' '){
			++blank_count;
		}
	}
	
	printf("Number of newline character is %d\n", newline_count);
	printf("Number of tabs character is %d\n", tabs_count);
	printf("Number of blank character is %d\n", blank_count);
	
}
