#include<fstream>
#include<vector>
#include<string>

class CppFileManipulation
{
	private:
		std::ifstream m_fileStream_;
	public:
		CppFileManipulation(std::string p_fileName);
		~CppFileManipulation();
		
		std::string readSingleLine();
		std::vector<std::string> getEachLineInVector();
};