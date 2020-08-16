
              Group names:
   Group 3:

     1.Ramzi Maresh 1626871
     2.md farhad ahmed 1622909
     3.Farhan Jamal 1611595


# Introduction

CPU Scheduling is a process of determining which process will own CPU for execution while another process is on hold. 
The main task of CPU scheduling is to make sure that whenever the CPU remains idle, the OS at least select one of the 
processes available in the ready queue for execution. The selection process will be carried out by the CPU scheduler. 
It selects one of the processes in memory that are ready for execution.
The two kinds of Scheduling methods:

Preemptive Scheduling
In Preemptive Scheduling, the tasks are mostly assigned with their priorities. Sometimes it is important to run a task 
with a higher priority before another lower priority task, even if the lower priority task is still running. The lower 
priority task holds for some time and resumes when the higher priority task finishes its execution.

Non-Preemptive Scheduling
In this type of scheduling method, the CPU has been allocated to a specific process. The process that keeps the CPU busy 
will release the CPU either by switching context or terminating. It is the only method that can be used for various 
hardware platforms. That's because it doesn't need special hardware (for example, a timer) like preemptive scheduling.

The Types of CPU scheduling Algorithm are:
-First Come First Serve (FCFS)
-Shortest-Job-First (SJF) Scheduling
-Shortest Remaining Time
-Priority Scheduling
-Round Robin Scheduling
-Multilevel Queue Scheduling
In this assignment we will foucsing on FCFS,SJF and priority scheduling.

# Consideration


There are several different criteria to consider when trying to select the "best" scheduling algorithm for a particular situation and environment, including:

	1. CPU utilization - Ideally the CPU would be busy 100% of the time, so as to waste 0 CPU cycles.

	2. Throughput - Number of processes completed per unit time. May range from 10 / second to 1 / hour depending on the specific processes.

	3. Turnaround time - Time required for a particular process to complete, from submission time to completion.

	4. Waiting time - How much time processes spend in the ready queue waiting their turn to get on the CPU.

	5. Response time - The time taken in an interactive program from the issuance of a command to the commence of a response to that command.

In our senario, for every course code or class have their own arrival time, duration and priority. So in this case what we need to consider is:

	1.  The arrival of time of class, which class should start first.
	1.1 Arrival Time: Time at which the process arrives in the ready queue.

	2.  The duration of each classs, how much time been taken for each class.
	2.2 Burst Time: Time required by a process for CPU execution.

	3.  Priority of the class, which class is the most important one should be start first.

	4.  The waiting time, how much amount of time be wainted before start the new class.
	4.1 Waiting Time(W.T): Time Difference between turn around time and burst time. Waiting Time = Turn Around Time – Burst Time

In general one wants to optimize the average value of a criteria ( Maximize CPU utilization and throughput, and minimize 
all the others. ) However some times one wants to do something different, such as to minimize the maximum response time.
Sometimes it is most desirable to minimize the variance of a criteria than the actual value. I.e. users are more accepting 
of a consistent predictable system than an inconsistent one, even if it is a little bit slower.

# Analysis

## FCFS
- First Come First Serve is the full form of FCFS. It is the easiest and most simple CPU scheduling algorithm. In this type 
of algorithm, the process which requests the CPU gets the CPU allocation first. This scheduling method can be managed 
with a FIFO queue.
As the process enters the ready queue, its PCB (Process Control Block) is linked with the tail of the queue. So, 
when CPU becomes free, it should be assigned to the process at the beginning of the queue.
FCFS is non preemptive in nature and FCFS results in quite long waiting time for the processes and thus increases average waiting time.
A process may have to wait for quite long to get executed depending on the burst time of the processes that have arrived first.

## SJF
- SJF algorithm is a special case of priority scheduling. Each process is equipped with a priority number that is burst time. The
CPU is allocated to the process that has the highest priority (smallest integer value is usually the biggest priority) . If several
processes have the same priority, then it will use FCFS algorithm. Scheduling priority consists of two schemes, non-preemptive and
preemptive. If there is a process P1 comes on when P0 is running, it will be a priority P1. Suppose P1 greater priority than the
priority P0; then the non-preemptive, fixed algorithm will complete P0 to the end of its CPU burst, and put P1 in the head position
in the queue. While in preemptive, P0 will be stopped first, and replace the CPU allocated to P1.
SJF is also non-preemptive but its preemptive version is also there called Shortest Remaining Time First (SRTF) algorithm.
The average waiting time for given set of processes is minimum.It does not lead to the convoy effect.

## Priority

- Priority scheduling is a method of scheduling processes based on priority. In this method, the scheduler selects the tasks 
to work as per the priority.
Priority scheduling also helps OS to involve priority assignments. The processes with higher priority should be carried out 
first, whereas jobs with equal priorities are carried out on a round-robin or FCFS basis. Priority can be decided based on 
memory requirements, time requirements, etc.

