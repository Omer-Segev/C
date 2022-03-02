#include <stdio.h>

main()
{
	int read_char;

	while((read_char = getchar()) != EOF){

		if (read_char == '\b'){
			printf("\\b");
		} else if (read_char == '\t'){
			printf("\\t");
		} else if( read_char == '\\'){
			printf("\\\\");
		} else {
			putchar(read_char);		
		}
	}

}
