#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void) {
    time_t t = time(NULL);
    cout << "t = " << t << endl;
    srand(t);

    int n, mx = -1000, sum = 0;
    cin >> n;

    int** matrix = new int*[n];
    for (int i = 0; i < n; ++ i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++ j) {
            matrix[i][j] = rand() % 100;
            cout << setw(4) << matrix[i][j] << " ";
            if (matrix[i][j] > mx)
                mx = matrix[i][j];
            if (i == j)
                sum += matrix[i][j];
        }
        cout << "\n";
    }
    cout << "\n\n";
    if (n != 0)
        cout << mx * sum << endl;
    else
        cout << "No result" << endl;
    return 0;
}
