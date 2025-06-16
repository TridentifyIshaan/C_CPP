#include <iostream>
using namespace std;
struct Process {
    int pid; // Process ID
    int at; // Arrival Time
    int bt; // Burst Time
    int ct; // Completion Time
    int wt; // Waiting Time
    int tat; // Turnaround Time
};

void findSJF (Process p[], int n) {
    int rt[n]; // Remaining Time Array
    // Copy whole bt to rt
    for (int i = 0; i < n; i++) {
        rt[i] = p[i].bt;
    }
    // number of completed processes, current time, shortest index, minimum burst time
    int complete = 0, t = 0, min_index = 0, min_bt = 99;

    while (complete<n) {
        min_bt = 99;
        for ( int i = 0; i < n; i++ ) {
            if ( p[i].at <= t && rt[i] < min_bt && rt[i] > 0 ) {
                min_bt = rt[i];
                min_index = i;
            }
        }
        rt[min_index]--;
        if ( rt[min_index] == 0 ) {
            complete++;
            p[min_index].ct = t + 1;
            p[min_index].tat = p[min_index].ct - p[min_index].at;
            p[min_index].wt = p[min_index].tat - p[min_index].bt;
        }
        t++;
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

void printSJF ( Process p[], int n) {
    cout << "SJF Scheduling" << endl << "Arrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time" << endl;
    for ( int i = 0; i < n; i++ ) {
        cout << p[i].at << "\t\t" << p[i].bt << "\t\t" << p[i].ct << "\t\t" << p[i].tat << "\t\t" << p[i].wt << endl;
    }
    cout << "Average Waiting Time: " << printAverageWaitingTime(p, n) << endl;
    cout << "Average Turnaround Time: " << printAverageTurnaroundTime(p, n) << endl;
}

int main () {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    Process p[n];
    cout << "Enter process details (PID, Arrival Time, Burst Time): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> p[i].pid >> p[i].at >> p[i].bt;
    }
    findSJF(p,n);
    printSJF(p,n);
    return 0;
}