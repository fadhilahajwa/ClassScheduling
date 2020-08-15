# Group Members

1. Nur Sabrina Fasha bt Zaidi Sham (1813526)
2. Nor Aliah bt Noor Azman (1814422)
3. Nur Nadiah bt Ali Azmi (1813966)
4. Nur Fadhilah Ajwa bt Rosdee (1815912)

# Introduction

CPU Scheduling is a process of determining which process will own CPU for execution while another process is on hold. The aim of CPU scheduling is to make the system efficient, fast and fair. The main task of CPU scheduling is to make sure that whenever the CPU remains inactive, the operating system will select one of the processes available in the ready queue for execution which will be carried out by the CPU scheduler. There are two types of CPU scheduling which are pre-emptive and non pre-emptive. As for this project, we focus on non pre-emptive scheduling. 

# Consideration

There are various types of scheduling which are FCFS, Round-Robin, SJF, SRTF, or Priority Scheduling. For this project, we have propose to compare three types of scheduling algorithms which are First Come First Serve (FCFS), Shortest-Job First (SJF) and Priority Scheduling. For the data input, we have the arrival time, burst time and priority and we need to find the average waiting time and average turn around time.

# Analysis

Inputs for the project:

Course code: CSC 3102 <br>
Duration: 2 <br>
Priority: 3 <br>
Arrival Time: 1

Course Code: INFO 3501<br>
Duration: 1 <br>
Priority: 4 <br>
Arrival Time: 2

Course Code: CSC 3402 <br>
Duration: 3 <br>
Priority: 1 <br>
Arrival Time: 3

Course Code: INFO 3305 <br>
Duration: 4 <br>
Priority: 2 <br>
Arrival Time: 4

## FCFS

FCFS is like FIFO also known as first come first serve basis as the process which arrives first, gets executed first, or we can say that the process which requests the CPU first, gets the CPU allocated first. It is the easiest and simplest CPU scheduling algorithm. FCFS algorithm does not include any complex logic, it just puts the process requests in a queue and executes it one by one. Every process will get a chance to run, so starvation doesn't occur.

Output

Average waiting time = 3.25 <br>
Average turn around time = 5.75

## SJF

SJF scheduling works on the process with the shortest burst time or duration first. The process of SJF scheduling is by having the smallest execution time is chosen for the next execution. It significantly reduces the average waiting time for other processes awaiting execution. The throughput is increased as more processes can be executed in less amount of time.

Output

Average waiting time = 1.25 <br>
Average turn around time = 3.75

## Priority Scheduling

Priority schudeling work by processing it based on the priority.]In this algorithm, the scheduler selects the tasks to work as per the priority. The priority of process, when internally defined, can be decided based on memory requirements, time limits ,number of open files, ratio of I/O burst to CPU burst etc. The processes with higher priority should be carried out first.

Output

Average waiting time = 2.75 <br>
Average turn around time = 5.25

# Conclusion

Among the three algorithms that we chose, SJF has the shortest average time of waiting time with 1.75 as well as turn around time with 3.75 followed by priority scheduling then FCFS.
