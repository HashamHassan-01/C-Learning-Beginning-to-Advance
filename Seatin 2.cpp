#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 8;         
   const int COLUMNS = 5;    
    const int TOTAL_SEATS = ROWS * COLUMNS;

 void displaySeats(bool seats[ROWS][COLUMNS]) {
    cout << "\nSeat Availability:\n";
         for (int i = 0; i < ROWS; ++i) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < COLUMNS; ++j) {
            cout << setw(3) << (seats[i][j] ? "X" : "O");
        }
          cout << endl;
    }
     cout << "Legend: O = Vacant, X = Booked\n";
}

 void bookSeats(bool seats[ROWS][COLUMNS]) {
    int numSeats;
    cout << "Enter the number of seats you want to book: ";
    cin >> numSeats;

    if (numSeats <= 0 || numSeats > TOTAL_SEATS) {
         cout << "Invalid number of seats.\n";
        return;
    }

      for (int i = 0; i < numSeats; ++i) {
         int row, col;
       cout << "Enter seat " << i + 1 << " (row and column): ";
        cin >> row >> col;
 if (row < 1 || row > ROWS || col < 1 || col > COLUMNS) {
             cout << "Invalid seat position.\n";
            return;
        }

   if (seats[row - 1][col - 1]) {
           cout << "Seat at row " << row << ", column " << col << " is already booked.\n";
            return;
        }

        seats[row - 1][col - 1] = true;
    }

       cout << "Seats booked successfully.\n";
}

    int main() {
    bool seats[ROWS][COLUMNS] = {false};
    int choice;

    do {
        cout << "\n--- Railway Ticket Reservation System ---\n";
        cout << "1. View Seat Availability\n";
        cout << "2. Book Seats\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
         cin >> choice;

        switch (choice) {
            case 1:
              displaySeats(seats);
                break;
          case 2:
                bookSeats(seats);
                break;
            case 3:
                cout << "Exiting the system. Thank you!\n";
               break;
          default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
