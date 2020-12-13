#include<string>
#include<iostream>
int main(){
	std::string user_input = "";
	int opt = 0;
	double first_number = 0;
	double second_number = 0;
	float parse(float arg0,float arg1,float arg2);
	while(1 == 1){
		std::cerr << "> ";
		getline(std::cin,user_input,',');
		opt = stof(user_input);
		if (opt < 0 || opt > 3) std::cerr << "Don't use operands except for 0,1,2,3";	
		getline(std::cin,user_input,',');
		first_number = stof(user_input);
		getline(std::cin,user_input,'\n');
		second_number = stof(user_input);
		std::cout << parse(opt,first_number,second_number) << std::endl;
	}
}
float parse(float arg0,float arg1,float arg2){
return arg0 == 0 ? arg1 + arg2 : arg0 == 1 ? arg1 - arg2 : arg0 == 2 ? arg1 * arg2 : arg1 / arg2;
}


