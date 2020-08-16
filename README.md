# OperatingSystemCSC3401-CPU-Scheduling
# ClassScheduling Assignment
Finding the optimum class scheduling algorithm

# Introduction
In many aspects, trying to schedule a class time is very similar to CPU scheduling. 
For example

1. Each class has a duration class time, similar to a process having a process burst time.
2. In some cases, high level courses has higher priority than others. Similarly, process with much more importance, has higher priority than others. 
3. For some classes, lecturers prefer to have morning classes instead of afternoon classes because they come to the office much earlier than other lecturers. Similarly, Some algorithms in CPU scheduling has specific arrival time, thus processes that arrices first usually gets to run first. 

However, there are significant difference between class scheduling and CPU scheduling. In CPU scheduling, an algorithm can be pre-emptive. Meaning a process can be stopped, and put on the waiting queue/ready queue until it gets scheduled again. In Class scheduling, it is non-preemptive. We cannot stop a class from running to allow another process to run. 

Additionally, we do not assume new classes to be introduced during scheduling, meaning, the scheduling would be final with the input given, and no new courses are introduced after the scheduling have been made. 


# Assignment

Your job is to propose the best scheduling algorithm to implement in finding the best Class Scheduling solution. 
Your choices of algorithms is using FCFS, Round-Robin, SJF, SRTF, or Priority Scheduling.  
As a hint, you can't use some algorithms, because they are pre-emptive scheduling algorithms. For example, you can use FCFS is a non-preemptive algorithm. Which ones are non-preemptive? 

## Input

Similar to a process, each class, will have the following members of integer values to consider, its course code, duration, prefered started time and priority. 
We consider each course can be in the duration of 1 hour, 2 hours, or 3 hours at a time. We can therefore represent a course/class as a structure like the code 
given below. 

```
using namespace std;
 
struct Process
{
   int ccode;     // course code
   int duration;      // class duration
   int priority;  //priority
   int arrival_time;   //prefered arrival time
};
```

We can therefore, represent all the courses in an array and initialize them such as the code given below.

```
// courses CSC2201 with priority 2 for 3 hours with prefered to start first, 
// CSC3401 with priority 3 for 2 hours prefered to start second, 
// and CSC1103 with priority 1 for 1 hour 
Process proc[] = {{2201,3,2,1}, {3401, 2, 3,2}, {1103, 1,1,3}};
```

You can access each member in the process by using the dot operator in c++. An example is given below. 

```
cout << proc[0].ccode;  //prints out the course code in the first element of the array
```

As an example, the code for FCFS (fcfs.cpp) is already given to you. Your job is to write the code for two other algorithms that you can consider using to schedule courses. 
Note that in FCFS, you can ignore the priority parameter, and prefered start time (arrival) because the algorithm only cares about what is in the queue (array). 

## Output

Your output has to display out

* Output the order of scheduling for the courses, in FCFS, and other 2 algorithms that you propose.
* average waiting time
* average turnaround time

## Analysis

Include in text file called analysis.md, your analysis of the algorithm, the input that you have given and the output that your algorithm have produced. 
Give an explanation as to why this is better or worst than other algorithms you've have considered. 

## What to Submit

1. Create a github account. Fork a copy of this repository. Refer to how to fork, https://docs.github.com/en/github/getting-started-with-github/fork-a-repo
2. AFter the fork, download your own fork repository. 
3. Upload your codes into your own repository. Make sure your repository contains the following files.
* modified version of  **FCFS algorithm** (fcfs.cpp is already given, you may need to modify it yourself to do your analysis), 
* **2nd algorithm** to use as comparison, include the .cpp file, 
* **3rd algorithm**,  include the .cpp file to use as comparison and the 
* **analysis.md** file.



