#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	/*char *s = "Let the strong say that I'm weak";
	*s = 'H';*/

	/*char *str = "Hi.123456789";

	strcpy(str, "Changed.");
	puts(str);
	return (0);*/

	/*char str[20] = "Hi.123456789";

	strcpy(str, "Changed.");
	puts(str);
	return (0);*/

	char *str;

	 str = malloc(20);
	 if (str == NULL) {
		  fprintf(stderr, "Could not allocatie memory.\n");
		  return 1;
	 }

	 strcpy(str, "Initial string");
	 puts(str);

	 strcpy(str, "Changed.");
	 puts(str);

	 free(str);
	 return 0;
}
