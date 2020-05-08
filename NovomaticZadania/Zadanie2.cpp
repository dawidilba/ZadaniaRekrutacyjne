#include "Zadanie2.h"

std::array<int, 4> pickMorphs(const std::vector<float>& weights) {
	size_t N = weights.size();
	std::array<int, 4> tmp{ -1 };
	std::priority_queue<std::pair<float, int>> sortedWeights;
	std::pair<float, int> top;
	if (N < 4) {
		return tmp;
	}
	else {
		for (size_t i = 0; i < N; i++) {
			sortedWeights.push(std::make_pair(weights[i], i));
		}
	}
	for (int i = 0; i < 4; i++) {
		top = sortedWeights.top();
		sortedWeights.pop();
		tmp[i] = top.second;
	}
	return tmp;
}
