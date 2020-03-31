#include <stdexcept>
#include <algorithm>

#include "median.h"

double median(sequence vec)
{
	typedef sequence::size_type vec_sz;
	vec_sz size = vec.size();
	if(size == 0){
		throw std::domain_error("median of an empty vector");
	}
	
	std::sort(vec.begin(),vec.end());
	vec_sz mid = size/2;
	double result = (size % 2==0)?(vec[mid]+vec[mid+1])/2:vec[mid];
	
	return result;
}