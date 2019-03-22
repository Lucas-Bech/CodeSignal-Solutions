bool sameDigitNumber(int n) {
	int d = n % 10;
	while (n /= 10)
		if (n % 10 != d)
			return false;
	return true;
}
