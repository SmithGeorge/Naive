#include<string>
#include<iostream>
int main(){
	std::string user_input = "";
	int opt = 0;
	double first_number = 0;
	double second_number = 0;
	int parse(double arg0,double arg1,double arg2);
	while(1 == 1){
		std::cerr << "> ";
		getline(std::cin,user_input,',');
		opt = stoi(user_input);
		if (opt < 0 || opt > 3) std::cerr << "Don't use operands except for 0,1,2,3";	
		getline(std::cin,user_input,',');
		first_number = stoi(user_input);
		getline(std::cin,user_input,'\n');
		second_number = stoi(user_input);
		std::cout << parse(opt,first_number,second_number) << std::endl;
	}
}
int parse(double arg0,double arg1,double arg2){
return arg0 == 0 ? arg1 + arg2 : arg0 == 1 ? arg1 - arg2 : arg0 == 2 ? arg1 * arg2 : arg1 / arg2;
}


