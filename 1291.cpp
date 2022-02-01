int totalDigit(int digit) {
	int count = 0;
	while(digit) {
		count++;
		digit /= 10;
	}
	return count;
}

vector<int> sequentialDigits(int low, int high) {
	int lowDigit = totalDigit(low); 
	int highDigit = totalDigit(high);

	vector<int> result;
	for(int i = lowDigit; i <= highDigit; i++) {
		int startDigit = 1;
		while(startDigit <= (10 - i)) {
			int number = 0;
			for(int j = 0; j < i; j++)
				number = number * 10 + startDigit + j;
			if(number <= high and number >= low)
				result.push_back(number);
			startDigit++;
		}
	}
	return result;
}
