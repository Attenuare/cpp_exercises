#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int delimitation;
	wcout << L"Entre com a quantidade de números desejados da sequência Fibonacci:" << endl;
	cin >> delimitation;
	double fibonacci_sequency[delimitation];
	fibonacci_sequency[0] = 0;
	fibonacci_sequency[1] = 1;
	fibonacci_sequency[2]=  1;
		
	for(int limiter=0; limiter <= delimitation; limiter++){
		fibonacci_sequency[limiter + 3] = 
		fibonacci_sequency[limiter + 1] + fibonacci_sequency[limiter + 2];
		cout << "|" << fibonacci_sequency[limiter] << "|"<< endl;
	}
	return 0;
}