int	main(void){

	int	a = 42;
	int const * b = &a;						//Okay
	int * c = b;							//Not okay
	int * d = const_cast<int *>(b);		//Okay

	return 0;
}