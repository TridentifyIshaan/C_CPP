#include<iostream>
using namespace std;

struct Process {
    int pid; // Process ID
    int at; // Arrival Time
    int bt; // Burst Time
    int ct; // Completion Time
    int wt; // Waiting Time
    int tat; // Turnaround Time
};

void findCompletionTime( Process p[], int n) {
    p[0].ct = p[0].bt;
    for ( int i = 1; i < n; i++) {
        p[i].ct = p[i-1].ct + p[i].bt;
    }
}

void findTurnaroundTime( Process p[], int n) {
    for ( int i = 0; i < n; i++) {
        p[i].tat = p[i].ct - p[i].at;
    }
}

void findWaitingTime ( Process p[], int n) {
    p[0].wt = 0;
    for ( int i = 1; i < n; i++ ) {
        p[i].wt = p[i].tat - p[i].bt;
    }
}

double printAverageWaitingTime ( Process p[], int n) {
    double total = 0;
    for ( int i = 0; i < n; i++ ) {
        total += p[i].wt;
    }
    return total / n;
}

double printAverageTurnaroundTime ( Process p[], int n) {
    double total = 0;
    for ( int i = 0; i < n; i++ ) {
        total += p[i].tat;
    }
    return total / n;
}

void findFCFS ( Process p[], int n ) {
    findCompletionTime(p, n);
    findTurnaroundTime(p, n);
    findWaitingTime(p, n);
}

void printFCFS ( Process p[], int n) {
    cout << "FCFS Scheduling" << endl << "Arrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time" << endl;
    for ( int i = 0; i < n; i++ ) {
        cout << p[i].at << "\t\t" << p[i].bt << "2\t\t" << p[i].ct << "\t\t" << p[i].tat << "\t\t" << p[i].wt << endl;
    }
    cout << "Average Waiting Time: " << printAverageWaitingTime(p, n) << endl;
    cout << "Average Turnaround Time: " << printAverageTurnaroundTime(p, n) << endl;
}


int main () {
    int n = 5; // array size
    // array
    Process p[n]={{1,0,5},{2, 1, 3}, {3, 2, 2}, {4, 3, 4}, {5, 4, 1}};
    findFCFS(p, n);
    printFCFS(p, n);
    return 0;
}