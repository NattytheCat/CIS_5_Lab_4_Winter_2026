#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::end;
using std::string;

// Calculate sum of scores using const pointer
int calculateSum(const int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// pass by value (sum and size are copies)
double getAverage(int sum, int size) {
    return (double)sum / size;
}

// pointer/array param (changes original array)
// default bonus is 5
void addBonus(int arr[], int size, int bonus = 5) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + bonus;

    }
}

// pointer (read only)
int findHighest(const int* arr, int size) {
    int high = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > high) {
            high = arr[i];
        }
    }
    return high;

}

// Count how many students passed (score >= 70), pass by const pointer (read-only)
int countPassed(const int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; ++i) {
        if(arr[i] >= 70) {
            ++count;
        }
    }
    return pass count;
}

int main() {
    const int SIZE = 5;
    int scores[SIZE] = { 65, 82, 90, 45, 78 };

    // Show original scores
    std::cout << "Original scores: ";
    for(int i = 0; i < size; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

     int sum = calculateSum(scores, SIZE);
    double avg = getAverage(sum, SIZE);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    addBonus(scores, SIZE); // uses default bonus = 5


    // Show new scores after bonus
    std::cout << "Scores after added bonus: ";
    for(int i = 0; i < size; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    // Find highest score
    int highest = findHighest(scores, size);
    std::cout << "Highest score: " << highest << std::endl;

    // Count the number of students who passed
    int passedCount = countPassed(scores, size);
    std::cout << "Number of students passed (>=70): " << passedCount << std::endl;

    return 0;
}
