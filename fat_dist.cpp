#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
	
	struct fat_local{
		char lugar[7]; // increase size to hold "Outros"
		float fatur;
	};
	
	fat_local estado[5];
	fat_local pctg[5];
	float total;
	int unid;
	
	strcpy(estado[0].lugar, "SP");
	strcpy(estado[1].lugar, "RJ");
	strcpy(estado[2].lugar, "MG");
	strcpy(estado[3].lugar, "ES");
	strcpy(estado[4].lugar, "Outros");
	
	estado[0].fatur=67836.43; 
	estado[1].fatur=36678.66;
	estado[2].fatur=29229.88;
	estado[3].fatur=27165.48;
	estado[4].fatur=19849.53;
	
	for(int i=0;i<5;i++){ // loop through all elements of estado
		total=total + estado[i].fatur;
	}
	
	std::cout << "Total faturado: R$" << std::fixed << std::setprecision(2) << total << " | 100%" << std::endl;
	
	unid=total/100;
	
	strcpy(pctg[0].lugar, "SP");
	strcpy(pctg[1].lugar, "RJ");
	strcpy(pctg[2].lugar, "MG");
	strcpy(pctg[3].lugar, "ES");
	strcpy(pctg[4].lugar, "Outros");
	
	
	std::cout << pctg[0].lugar << " " << estado[0].fatur << " | " << estado[0].fatur/unid << "%" << std::endl;
	std::cout << pctg[1].lugar << " " << estado[0].fatur << " | " << estado[1].fatur/unid << "%" << std::endl;
	std::cout << pctg[2].lugar << " " << estado[0].fatur << " | " << estado[2].fatur/unid << "%" << std::endl;
	std::cout << pctg[3].lugar << " " << estado[0].fatur << " | " << estado[3].fatur/unid << "%" << std::endl;
	std::cout << pctg[4].lugar << " " << estado[0].fatur << " | " << estado[4].fatur/unid << "%" << std::endl;

	
	
	return 0;
}
