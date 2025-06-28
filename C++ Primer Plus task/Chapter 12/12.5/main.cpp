#include "ATM.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MIN_PER_HR = 60;

bool newcustomer(double x){
    return (std::rand() * x / RAND_MAX < 1);
}

bool check(double x){
    return abs(x - 1) < 0.05;
}

int main(){
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "The maximum size of queue is 10.\n";
    int qs = 10;
    Queue line(qs);
    cout << "The number of simulation hours is 100.\n";
    int hours = 100;
    long cyclelimit = MIN_PER_HR * hours;
    double perhour;
    cout << "Enter the average number of customers per hour: ";
    cin >> perhour;
    while (true){
        cout << "The average number of customers per hour is " << perhour << " now.\n";
        double min_per_cust = MIN_PER_HR / perhour;
        Customer temp;
        long turnaways = 0, customers = 0, served = 0, sum_line = 0, wait_time = 0, line_wait = 0;
        for (int cycle = 0; cycle < cyclelimit; cycle++){
            if (newcustomer(min_per_cust)){
                if (line.isfull())
                    turnaways++;
                else{
                    customers++;
                    temp.set(cycle);
                    line.enqueue(temp);
                }
            }
            if (wait_time <= 0 && !line.isempty()){
                line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time > 0)
                wait_time--;
            sum_line += line.queuecount();
        }
        double average_wait = (double)line_wait / served;
        if (check(average_wait)){
            cout << average_wait << " is the average wait time.\n";
            break;
        }
        else{
            perhour++;
        }
    }
    cout << "The average number of customers per hour should be " << perhour << ".\n";
    cout << "Done!\n";
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        continue;
    }
    std::cout << "Bye!\n";
    return 0;
}