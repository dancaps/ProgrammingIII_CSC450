#include <iostream>
#include <thread>

using namespace std;
mutex mtx;
int shared_counter;

void count_up() {
    mtx.lock(); // Locking the thread while counting up
    shared_counter = 0;
    while (shared_counter <= 20) {
        // Sleeping the tread to slow the program down
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "Counting Up: " << shared_counter << endl;
        shared_counter++;
    }
    mtx.unlock(); // Unlocking the thread
}

void count_down() {
    mtx.lock(); // Locking the thread while counting down
    shared_counter = 20;
    while (shared_counter >= 0) {
        // Sleeping the tread to slow the program down
        this_thread::sleep_for(chrono::milliseconds(200));
        cout << "Counting Down: " << shared_counter << endl;
        shared_counter--;
    }
    mtx.unlock(); // Unlocking the thread
}

int main() {
    thread t1(count_up); // Calling the thread
    thread t2(count_down); // Calling the thread

    t1.join(); // Joining the thread
    t2.join(); // Joining the thread

    return 0;
}
