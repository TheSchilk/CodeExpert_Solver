#### THIS TEMPLATE WILL NOT COMPILE UNTIL POPULATED BY ETHCodeExpert_Solver.py ! ####
/*
 * Automatically Generated CodeExpert Solution
 * Script by Philipp Schilk, 2020
 * https://github.com/TheSchilk/CodeExpert_Solver
 *
 * Are you really going to submit this?
 * I wrote this as a fun programming challenge.
 * Submitting this kind of code, while it will fool the auto-grader,
 * will not be accepted as a solution. 
 */

#include <iostream>
#include <algorithm>

int case_count = $COUNT$;

std::string input_pattern[] = {
$INPUTS$
};

std::string output[] = {
$OUTPUTS$
};

int main(){
  //Get input
  std::string input = "";
  std::cin >> std::noskipws;

  char inchar;
  while(std::cin >> inchar){
    input += inchar;
  }
  
	//We always end up with a trailing newline, get rid of that.
  input.pop_back();
  
  //Replace all newlines within string with spaces
  replace(input.begin(), input.end(), '\n', ' ');
	
  //Lookup and output
  for(int i = 0; i < case_count; i++){
    if(input_pattern[i] == input){
      std::cout << output[i] << std::endl;  
      return 0;
    }
  }
  
  //No input matched?
  std::cout << "No pattern matched!?" << std::endl;
  std::cout << "Seems like you might have to bust out your coding chops after all! :(" << std::endl;
  return -1;
}