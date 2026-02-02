#include <iostream>
using namespace std;

// Counter global untuk menandai urutan eksekusi
int step = 0;

// Fungsi Fibonacci dengan debugging
int fib(int n, int depth = 0) {

    step++;

    // Indent sesuai kedalaman stack
    for (int i = 0; i < depth; i++)
        cout << "  ";

    cout << step << ". Masuk fib(" << n << ")\n";

    // Base case
    if (n == 1 || n == 2) {

        step++;

        for (int i = 0; i < depth; i++)
            cout << "  ";

        cout << step << ". Return fib(" << n << ") = 1\n";

        return 1;
    }

    // Rekursi
    int a = fib(n - 1, depth + 1);
    int b = fib(n - 2, depth + 1);

    int result = a + b;

    step++;

    for (int i = 0; i < depth; i++)
        cout << "  ";

    cout << step << ". Return fib(" << n << ") = "
         << result << "\n";

    return result;
}

int main() {

    int n;
    cin >> n;

    cout << "\n=== PROSES REKURSI ===\n\n";

    int result = fib(n);

    cout << "\n=== HASIL ===\n";
    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}
