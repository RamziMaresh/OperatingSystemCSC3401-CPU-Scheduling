#include<bits/stdc++.h>

using namespace std;
 
struct Process
{
   int ccode;     // course code
   int duration;      // class duration
   int priority;  //priority
   int arrival_time;   //prefered arrival time
};
 
/* 
    this function is used for sorting all
    classes in increasing order of arrival time
*/
bool comparison(Process a, Process b)
{
    return (a.arrival_time < b.arrival_time);
}
 
// function to find the waiting time for all classes
void findWaitingTime(Process proc[], int n, int wt[])
{
    // waiting time for first classes is 0
    wt[0] = 0;
 
    // calculating waiting time
    for (int i = 1; i < n ; i++)
    {
        wt[i] = proc[i-1].duration + wt[i-1] ;
    }
}
 
// function to calculate turn around time
void findTurnAroundTime(Process proc[], int n, int wt[], int tat[])
{
    
    for (int i = 0; i < n ; i++)
    {
        tat[i] = proc[i].duration + wt[i];
    }
}
 
// function to calculate average time
void findAverageTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    // function to find waiting time of all classes
    findWaitingTime(proc, n, wt);
 
    // function to find turn around time for all classes
    findTurnAroundTime(proc, n, wt, tat);
 
    // display classes along with all details
    cout << "Below are the list of classes sorted by which class is start first";
    cout << "\n\nCourse Code "<< " Burst time "
         << " Waiting time " << " Turn around time\n";
 
    // calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << proc[i].ccode << "\t\t"
             << proc[i].duration << "\t " << wt[i]
             << "\t\t " << tat[i] <<endl;
    }
 
    cout << "\nAverage waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
 
// main function
int main()
{
    // courses CSC2201 with priority 2 for 3 hours with prefered to start first, 
	// CSC3401 with priority 3 for 2 hours prefered to start second, 
	// and CSC1103 with priority 1 for 1 hour 
	Process proc[] = {{2201,3,2,1}, {3401, 2, 3,2}, {1103, 1,1,3}};
    int n = sizeof proc / sizeof proc[0];
 
    // sorting classes by arrival time.
    sort(proc, proc + n, comparison);
 
    findAverageTime(proc, n);
    
    return 0;
}
