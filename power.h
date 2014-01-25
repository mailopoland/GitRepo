double pow(double a, unsigned n){
	double result = 1;	
	for( unsigned i = 0 ; i < n ; i++ )
		result *= a;
	return result;
}
