#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare variables for start and end times (hours and minutes)
    int h1, m1, h2, m2;

    // Input time in "HH:MM, HH:MM" format
    string timeInput1;
    string timeInput2;
    getline(cin, timeInput1);  // Read the entire input line
    getline(cin,timeInput2);
    // Parse the input string
    sscanf(timeInput1.c_str(), "%d:%d", &h1, &m1);
    sscanf(timeInput2.c_str(), "%d:%d",&h2,&m2);

    // Calculate the midpoint in minutes from start time to end time
    int startTimeInMinutes = h1 * 60 + m1;  // Convert start time to minutes
    int endTimeInMinutes = h2 * 60 + m2;    // Convert end time to minutes
    int midpointMinutes = (startTimeInMinutes + endTimeInMinutes) / 2;

    // Convert the midpoint minutes back to hours and minutes
    int hm = midpointMinutes / 60;  // Hours
    int mm = midpointMinutes % 60;  // Minutes

    // Output the result in "HH:MM" format
    printf("%02d:%02d\n", hm, mm);

    return 0;
}
