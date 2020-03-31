#include <cctype>

#include "split.h"

bool space(char c)
{
	return std::isspace(static_cast<unsigned char>(c));
}

bool not_space(char c)
{
	return !space(c);
}

std::vector<std::string> split(const std::string& s){
	std::vector<std::string> ret;
	typedef std::string::size_type sz_type;
	sz_type i = 0;
	
	while(i!=s.size()){
		
		while(i != s.size() && space(s[i])) 
			++i;
		
		sz_type j= i;
		while(j != s.size() && not_space(s[j]))
			++j;
		
		if(i!=j){
			ret.push_back(s.substr(i,j-i));
			i=j;
		}
	}
	
	return ret;
}
