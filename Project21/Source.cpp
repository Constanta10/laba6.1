#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const int M = 10, N = 10;
    int D, K,L;
    int matrix[M][N];
    cout << "������� D � K � L: ";
    cin >> D >> K >> L;
    if (!(1 <= K && K <= M && 1 <= L && L <= N)) {
        cerr << "������" << endl;
        return 1;
    }
    cout << "������� ����� �� " << K << " �����: ";
    for (int i = 0; i < K; i++) {
        cin >>  matrix[i][0]; // ���������� ������� �������
    }

    // ���������� ��������� ��������
    for (int j = 1; j < L; j++) {
        for (int i = 0; i < K; i++) {
            matrix[i][j] = matrix[i][j - 1] + D;
        }
    }

    // ����� ������������ �������
    cout << "������������ �������:\n";
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < L; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}