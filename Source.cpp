#include <algorithm>


int solution(std::vector<int> &A) {
	if (A.empty())
		return 1;
	std::sort(A.begin(), A.end());
	for (int i = 0; i <= A.size(); i++)
	{
		if (A[i] != i + 1)
			return  i + 1;
	}
	return 1;
}