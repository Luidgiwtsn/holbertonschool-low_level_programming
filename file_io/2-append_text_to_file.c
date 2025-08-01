#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Ajoute du texte a la fin d'un autre fichier
 *@filename: Contient la string.
 *@text_content: Contient la string a integrer
 *Return: Sur succes ou echec.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int index = 0;
int file;

if (filename == NULL)
	{
	return (-1);
	}
if (text_content == NULL)
	{
	text_content = "";
	}

while (text_content[index] != '\0')
	{
	index++;
	}

file = open(filename, O_WRONLY | O_APPEND);

if (file == -1)
	{
	close(file);
	return (-1);
	}

write(file, text_content, index);

if (close(file) == -1)
	{
	return (-1);
	}

return (1);
}