#include <iostream>
using namespace std;

/*
21. Определить количество положительных элементов каждого столбца матрицы A(n,m), заданной целыми числами.
 */

int main()
{
    int n,m;
    cout<<"Enter the dimension of the matrix NxM:"<<endl;
    cin>>n; cin>>m;

    double **matrix = new double*[n];
    for(int k = 0; k < n; k++)
        matrix[k] = new double[m];

    // ввод матрицы
    cout << "Enter Matrix Elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Source matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }


    // Определяем количество положительных элементов каждого столбца
    for (int j = 0; j < m; j++) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (matrix[i][j] > 0) {
                count++;
            }
        }

        cout << "Number of positive elements in a column " << j+1 << " = " << count << endl;
    }

    return 0;
}
