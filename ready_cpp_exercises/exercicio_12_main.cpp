#include <iostream>
#include <locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	int comparison_vector[32], count_vector = 0;
	int sector_a[4][4] = {
	2,4,6,8,
	10,12,14,16,
	18,20,22,24,
	26,28,30,32,
	};
	int sector_b[4][4] = {
	1,3,5,7,
	9,11,13,15,
	17,19,21,23,
	25,27,29,31,
	};
	int sector_c[4][4];
	
	for (int count_rows = 0; count_rows < 32; count_rows++){
		if (count_rows >= 0 or count_rows < 16){
			comparison_vector[count_rows] = sector_a[count_rows/4][count_rows%4];
		}else if(count_rows >= 16 or count_rows < 32){
			comparison_vector[count_rows] = sector_b[count_rows/4][count_rows%4];
	}
}

	for (int count_one = 0; count_one < 32; count_one++) {
    	for (int count_two = count_one; count_two < 32; count_two++){
	        if (comparison_vector[count_one] < comparison_vector[count_two]) {
	            swap(comparison_vector[count_one], comparison_vector[count_two]);
        }
    }
}

	for (int count_rows = 0; count_rows < 4; count_rows++){
		for (int count_columns = 0; count_columns < 4; count_columns++, count_vector++){
			sector_c[count_rows][count_columns] = comparison_vector[count_vector];	
	}
}

	wcout << endl << L"Os maiores valores entre A X B são: " << endl;
	for (int count_rows = 0; count_rows < 16; count_rows++){
		wcout << sector_c[count_rows/4][count_rows%4] << L"|";
}

	return 0;
}
	