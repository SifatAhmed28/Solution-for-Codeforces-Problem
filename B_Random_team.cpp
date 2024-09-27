#include<bits/stdc++.h>
using namespace std;

void calculateMaxCombinations(int people, int groups) {
    int max_combinations = people * (people - 1) / 2;
    cout << max_combinations << " ";
}

void calculateEqualMinCombinations(int peoplePerGroup, int totalGroups) {
    int combinationsPerGroup = peoplePerGroup * (peoplePerGroup - 1) / 2;
    cout << combinationsPerGroup * totalGroups << " ";
}

void calculateUnequalMinCombinations(int largerGroupCount, int largerGroupSize, int smallerGroupCount, int smallerGroupSize) {
    int largerGroupCombinations = largerGroupSize * (largerGroupSize - 1) / 2;
    int smallerGroupCombinations = smallerGroupSize * (smallerGroupSize - 1) / 2;
    cout << largerGroupCombinations * largerGroupCount + smallerGroupCombinations * smallerGroupCount << " ";
}

int main() {
    int totalPeople, totalGroups;
    cin >> totalPeople >> totalGroups;

    if (totalPeople % totalGroups == 0) {
        // If people can be evenly distributed among groups
        calculateEqualMinCombinations(totalPeople / totalGroups, totalGroups);
    } else {
        // If people cannot be evenly distributed among groups
        int baseGroupSize = totalPeople / totalGroups;
        int largerGroupCount = totalPeople % totalGroups;
        int smallerGroupCount = totalGroups - largerGroupCount;

        calculateUnequalMinCombinations(largerGroupCount, baseGroupSize + 1, smallerGroupCount, baseGroupSize);
    }
    
    // Calculate the maximum number of combinations possible
    calculateMaxCombinations(totalPeople - (totalGroups - 1), totalGroups - 1);
}
