// c++ program to implement Shortest Job first

#include<bits/stdc++.h>

using namespace std;
 
struct Process
{
   string courseCode; // course code
   int duration;      // class duration / burst time
   int startedTime;   // prefered started time / arrival time
   
};
 
// function to find the waiting time for all processes

void findWaitingTime(Process course[], int n, int waitingTime[]) {
   int runTime[n];
   for (int i = 0; i < n; i++)
   runTime[i] = course[i].duration;
   int complete = 0, t = 0, minm = INT_MAX;
   int shortest = 0, finishTime;
   bool check = false;
   while (complete != n) {
      for (int j = 0; j < n; j++) {
         if ((course[j].startedTime <= t) && (runTime[j] < minm) && runTime[j] > 0) {
            minm = runTime[j];
            shortest = j;
            check = true;
         }
      }
      if (check == false) {
         t++;
         continue;
      }
      
      runTime[shortest]--;
      minm = runTime[shortest];
      if (minm == 0)
         minm = INT_MAX;
         // If a process gets completely executed
         if (runTime[shortest] == 0) {
            complete++;
            check = false;
            finishTime = t + 1;
            // Calculate waiting time
            waitingTime[shortest] = finishTime - course[shortest].duration - course[shortest].startedTime;
            if (waitingTime[shortest] < 0)
               waitingTime[shortest] = 0;
         }
         // Increment time
         t++;
  }
}

// function to calculate turn around time
void findTurnAroundTime(Process course[], int n, int waitingTime[], int turnAroundTime[])
{
    // calculating turnaround time by adding bt[i] + wt[i]
    for (int i = 0; i < n ; i++)
    {
        turnAroundTime[i] = course[i].duration + waitingTime[i];
    }
}
 
// function to calculate average time

void findAverageTime(Process course[], int n)
{
    int waitingTime[n], turnAroundTime[n], totalWaitingTime = 0, totalTurnAroundTime = 0;
 
    // function to find waiting time of all processes
    findWaitingTime(course, n, waitingTime);
 
    // function to find turn around time for all processes
    findTurnAroundTime(course, n, waitingTime, turnAroundTime);
 
// display processes along with all details
    cout << "COURSE CODE  "<< " DURATION  "<< " WAITING TIME  " << " TURN AROUND TIME\n";
 
    // calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++)
    {
        totalWaitingTime = totalWaitingTime + waitingTime[i];
        totalTurnAroundTime = totalTurnAroundTime + turnAroundTime[i];
        //cout << course[i].courseCode << "\t\t"<< course[i].duration <<"\t\t"<< waitingTime[i] <<"\t\t" << turnAroundTime[i] <<endl;
        cout << course[i].courseCode << "\t"<< course[i].duration <<"\t\t"<< waitingTime[i] <<"\t\t" << turnAroundTime[i] <<endl;
    }
 
    cout << "\nAverage waiting time = "<< (float)totalWaitingTime / (float)n;
    cout << "\nAverage turn around time = "<< (float)totalTurnAroundTime / (float)n << "\n";
}
 
 
// main function
int main()
{
   	Process course[] = {{"CSC 3102",2,1}, {"INFO 3501", 1,2}, {"CSC 3402", 3,3}, {"INFO 3305", 4,4}};
    int n = sizeof course / sizeof course[0];

    // sorting processes by burst time.
    // sort(course, course + n, comparison);
 
    cout << "Order of schedule for courses :\n\n";
 
    findAverageTime(course, n);
    
    return 0;
}
