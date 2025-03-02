#include <iostream>
#include <vector>

using namespace std;

// Перший код
void Code1() {
        int N;

        std::cout << "Enter the size of array A: ";
        std::cin >> N;

        std::vector<int> A(N);

        std::cout << "Enter the elements of array A:\n";
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        std::vector<int> B;

        for (int i = 0; i < N; ++i) {
            if (A[i] > 0) {
                B.push_back(A[i]);
            }
        }

        std::cout << "Array B with positive elements:\n";
        for (int i = 0; i < B.size(); ++i) {
            std::cout << B[i] << " ";
        }
        std::cout << std::endl;
}

// Другий код
void Code2() {
        int N;
        double T;

        std::cout << "Enter the size of the array: ";
        std::cin >> N;

        if (N <= 0) {
            std::cout << "Array size must be greater than 0." << std::endl;
            return;
        }

        std::vector<double> A(N);

        std::cout << "Enter the elements of the array:\n";
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        std::cout << "Enter the number T: ";
        std::cin >> T;

        int lastIndex = -1;
        double maxElement = -1;

        for (int i = 0; i < N; ++i) {
            if (A[i] > T && A[i] > 0) {
                if (A[i] > maxElement) {
                    maxElement = A[i];
                    lastIndex = i;
                } else if (A[i] == maxElement) {
                    lastIndex = i;
                }
            }
        }

        if (lastIndex != -1) {
            std::cout << "The index of the last maximum positive element greater than T: " << lastIndex << std::endl;
        } else {
            std::cout << "No positive elements greater than T were found." << std::endl;
        }
}

// Функція для відображення меню
void ShowMenu() {
    cout << "=== Main menu ===\n";
    cout << "1. Compile first code\n";
    cout << "2. Compile second code\n";
    cout << "3. Exit\n";
    cout << "Your choise: ";
}

int main() {
    int choice;

    do {
        ShowMenu();
        cin >> choice;

        switch (choice) {
            case 1: Code1(); break;
            case 2: Code2(); break;
            case 3: cout << "Exiting...\n"; return 0;
            default: cout << "Wrong choice! Try again.\n";
        }

        cout << "\n";

    } while (choice != 4);

    return 0;
}

