#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ARRAY_SIZE = 100;
const int SEQUENCE_SIZE = 10;

int findMinSumSequence(const int* arr, int startIdx) {
    if (startIdx >= ARRAY_SIZE - SEQUENCE_SIZE + 1) {
        return startIdx;
    }

    int currentSum = 0;
    int minSum = INT_MAX;
    int minSumIdx = startIdx;

    for (int i = 0; i < SEQUENCE_SIZE; i++) {
        currentSum += arr[startIdx + i];
    }

    if (currentSum < minSum) {
        minSum = currentSum;
        minSumIdx = startIdx;
    }

    int nextIdx = findMinSumSequence(arr, startIdx + 1);

    if (arr[nextIdx] < currentSum) {
        minSum = arr[nextIdx];
        minSumIdx = nextIdx;
    }

    return minSumIdx;
}

int main() {
    srand(time(0));

    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Array: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minSumIdx = findMinSumSequence(arr, 0);

    cout << "Position of the sequence with minimum sum: " << minSumIdx << endl;

    return 0;
}
