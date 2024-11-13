#include <iostream>

int fechaMayor(int pDayDate1, int pMounthDate1, int pYearDate1, int pDayDate2, int pMounthDate2, int pYearDate2);

int main(){
	int dayDateOne = 0, mounthDateOne = 0, yearDateOne = 0;
	int dayDateTwo = 0, mounthDateTwo = 0, yearDateTwo = 0;
	
	return 0;
}
int fechaMayor(int pDayDate1, int pMounthDate1, int pYearDate1, int pDayDate2, int pMounthDate2, int pYearDate2) {
	
	if ( (pYearDate1 == pYearDate2) && (pMounthDate1 == pMounthDate2) && (pYearDate1 == pYearDate2) ) {
		std::cout << "Ambas fechas son iguales" << std::endl;
		return;
	}
}