#include"LibraryInclude.h"
#include<string>
#include<vector>
#include<iostream>

CppFileManipulation::CppFileManipulation(std::string p_fileName)
{
	m_fileStream_.open(p_fileName.c_str());	
	
	if(!m_fileStream_.is_open())
	std::cout<<"Error: Cannot open the file "<<p_fileName<<std::endl;
	else
	std::cout<<"File "<<p_fileName<<" has been opened! "<<p_fileName<<std::endl;
}


CppFileManipulation::~CppFileManipulation()
{
	if(m_fileStream_.is_open())
	m_fileStream_.close();	
}

std::string CppFileManipulation::readSingleLine()
{
	std::string l_line;
	std::getline(m_fileStream_,l_line);
	return l_line;
}


std::vector<std::string> CppFileManipulation::getEachLineInVector()
{
	std::vector<std::string> l_fileLinesContainer;
	
	if(m_fileStream_.is_open())
	{
		std::string l_line;
		
		 while(std::getline(m_fileStream_,l_line))	
		{
			l_fileLinesContainer.push_back(l_line);
		}
	}
	return l_fileLinesContainer;
}