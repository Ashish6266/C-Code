#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(std::vector<long long> &numbers) {
	long long num;
	long long largestNum;
	long long secoundLargestNum;

	std::vector<long long> productList;

	for (int l = 0; l < numbers.size(); l++)
	{
		std::cin >> num;
		numbers.at(l) = num;
	}

	std::sort(numbers.begin(), numbers.end());
	largestNum = numbers[numbers.size() - 1];
	secoundLargestNum = numbers[numbers.size() - 2];
	
	//for (int i = 0; i < numbers.size()-1; i++)
	//{
	//	for (int j = 1 + i; j < numbers.size(); j++)
	//	{
	//		product = numbers[i] * numbers[j];
	//		if (largestProduct < product) {
	//			largestProduct = product;
	//		}
	//		
	//		productList.push_back(largestProduct);
	//	}
	//}

	return largestNum * secoundLargestNum;
}

int main() {
	long long vectorLength;
	
	std::cin >> vectorLength;
	std::vector<long long> numberList(vectorLength);
	std::cout << MaxPairwiseProduct(numberList);
	
	return 0;
}