int main()
{
	char str[123];
	char *tok = strtok(str, " ");
	while (tok)
	{

		tok = strtok(NULL, " ");
	}
}

// 0 1 1 2 3 5
int FiboAdd(int n) {
    if (n == 0 || n == 1) 
        return (n);
	if (n == 2) 
        return (1);	
	if (n == 3) 
        return (2);
	if (n == 4) 
        return (3);	
    int a = 2, b = 3, res;
    for (int i = 5; i <= n; i++)
	{
		res = a + b;
		a = b;
		b = res;
	} 

    return (res); 
}

