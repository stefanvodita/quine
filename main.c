#include <stdio.h>

char s[] = "int main(void)\n"
"{\n"
"	printf(\"#include <stdio.h>\\n\\nchar s[] = \\\"\");\n"
"	for (int i = 0; s[i]; ++i)\n"
"		printf(\"%c\", s[i]);\n"
"	printf(\"\\\";\\n\");\n"
"	printf(\"%s\", s);\n"
"	return 0;\n"
"}\n";

int main(void)
{
	printf("#include <stdio.h>\n\nchar s[] = \"");
	for (int i = 0; s[i]; ++i)
		printf("%c", s[i]);
	printf("\";\n");
	printf("%s", s);
	return 0;
}
