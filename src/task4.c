#include <string.h>
int main()
{
int i = 1;
char *line="Lorem Ipsum is simply dummy text of the printing and typesetting industry.";
int words=1;
for (i=1; i< strlen(line); i++)
{
	if (line[i-1]==' ' && line[i]!=' ')
	words++;
	}
}
