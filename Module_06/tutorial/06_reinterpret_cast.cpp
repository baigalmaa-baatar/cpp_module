int	main(void)
{
	float a = 420.123f;

	void * b = &a;								//Implicit promottion -> Okay
	int	* c = reinterpret_cast <int *>(b);		//Explicit promotion -> Okay, I obey
	int	& d = reinterpret_cast <int &>(b);		//Explicit promotion -> Okay, I obey

	return 0;
}