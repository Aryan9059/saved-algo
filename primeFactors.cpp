bool isPrime(int n) {
	if(n == 1) return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
    }
	
	vector<int>AllPrimeFactors(int N) {
	    vector<int> ans;
	    
	    for(int i = 1; i <= sqrt(N); i++) {
	        if(isPrime(i) && N%i == 0) ans.push_back(i);
	        if(N%i == 0 && isPrime(N/i) && i != sqrt(N)) ans.push_back(N/i);
	    }
	    
	    return ans;
	}
