/**
* main - entry point
* display a particular message to stand error
*
* Return: Sucess (1)
*/
int main()
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 62);
	return 1;
}

