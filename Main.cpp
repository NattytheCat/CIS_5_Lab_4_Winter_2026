#include <iostream>
#include <iomanip>

using std::cout;
using std::end;
using std string;


int main()
{
// My array of student scores
int scores[5] = {65, 82, 90, 45, 78};
int size = 5;

// Display the original scores
cout << "Original Scores: ";
for (int i = 0; i < size; ++i)
{
cout << scores[i] << " ";
}
cout << endl;

// Calculate the sum and average
int sum = calculateSum(scores, size);
double average = getAverage(sum, size);
cout << "Sum: " << sum << ", Average: " << average << endl;

// Add bonus points to each score (default bonus is = 5)
addBonus(scores, size);

// Show new scores after bonus
cout << "Scores after bonus: ";
for (int i = 0; i < size; ++i)
{
cout << scores[i] << " ";
}
cout << endl;

// Find the highest score
int highest = findHighest(scores, size);
cout << " The Highest Score: " << highest << endl;



return 0;
}
