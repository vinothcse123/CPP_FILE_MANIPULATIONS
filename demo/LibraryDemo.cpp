#include"LibraryInclude.h"
#include<string>
#include<vector>
#include<iostream>
int main()
{
	CppFileManipulation l_file("myFile.txt");		
	std::vector<std::string> l_fileLinesContainer = l_file.getEachLineInVector();
	
	std::cout<<l_fileLinesContainer[0];
}