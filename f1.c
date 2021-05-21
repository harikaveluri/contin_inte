int *func()
{
	static int a;
	a+=1;
	return &a;
}
