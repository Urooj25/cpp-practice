#include <iostream>
using namespace std;

int main() {

//  FOR LOOP — 3 Real Life Examples

// 1. School — 5 students ki attendance print karna
cout << "=== FOR LOOP ===" << endl;

cout << "\n1. School Attendance:" << endl;
for (int i = 1; i <= 5; i++) {
    cout << "   Student " << i << " — Present" << endl;
}

// 2. Daraz — 3 items ka bill print karna
cout << "\n2. Daraz Bill:" << endl;
string items[3] = {"Apple", "Milk", "Bread"};
int prices[3]   = {60, 120, 80};

for (int i = 0; i < 3; i++) {
    cout << "   " << items[i] << " -> Rs. " << prices[i] << endl;
}

// 3. Game — 3 baar countdown karna
cout << "\n3. Game Countdown:" << endl;
for (int i = 3; i >= 1; i--) {
    cout << "   " << i << "..." << endl;
}
cout << "   GO!" << endl;



//  WHILE LOOP — 3 Real Life Examples


cout << "\n=== WHILE LOOP ===" << endl;

// 1. ATM — jab tak balance ho, paise nikalte raho
cout << "\n1. ATM Withdrawal:" << endl;
int balance = 5000;
int withdrawal = 1000;
while (balance >= withdrawal) {
    balance -= withdrawal;
    cout << "   Rs. 1000 nikale — Remaining: Rs. " << balance << endl;
}
cout << "   Balance kam ho gaya!" << endl;

// 2. Food Delivery — order ready hone ka wait
cout << "\n2. Food Delivery — Order Status:" << endl;
int minutes = 1;
while (minutes <= 3) {
    cout << "   Minute " << minutes << ": Khana ban raha hai..." << endl;
    minutes++;
}
cout << "   Order Ready!" << endl;

// 3. Exam — jab tak questions baqi hain, solve karo
cout << "\n3. Exam Questions:" << endl;
int questions = 3;
while (questions > 0) {
    cout << "   Question " << questions << " solve kiya!" << endl;
    questions--;
}
cout << "   Paper khatam!" << endl;



//  DO-WHILE LOOP — 3 Real Life Examples

cout << "\n=== DO-WHILE LOOP ===" << endl;

// 1. ATM PIN — pehle enter karo, phir check hoga
cout << "\n1. ATM PIN Check:" << endl;
int pin;
int correctPin = 1234;
do {
    pin = 1234; // user ne sahi dala (simulate)
    cout << "   PIN entered: " << pin << endl;
} while (pin != correctPin);
cout << "   PIN sahi hai! Access granted." << endl;

// 2. Restaurant — menu pehle dikhao, phir pocho
cout << "\n2. Restaurant Menu:" << endl;
int choice;
do {
    cout << "   1. Biryani  2. Pizza  3. Exit" << endl;
    choice = 3; // user ne 3 choose kiya (simulate)
    cout << "   Aap ne choose kiya: " << choice << endl;
} while (choice != 3);
cout << "   Shukriya! Phir aana." << endl;

// 3. Game — ek baar zaroor khelna, phir pocho
cout << "\n3. Game — Play Again?" << endl;
char answer;
do {
    cout << "   Game khel rahe hain... Score: 100!" << endl;
    answer = 'n'; // user ne n choose kiya (simulate)
    cout << "   Play again? (y/n): " << answer << endl;
} while (answer == 'y');
cout << "   Game Over!" << endl;

return 0;
}

