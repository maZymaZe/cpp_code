#pragma once
#include <vector>
#include <string>
#include <iostream>

using sequence = std::vector<double>;

struct Student_info{
	std::string name;
	double midterm,final;
	sequence homework;
	double f_grade;
};

std::istream& read(std::istream& in, std::vector<Student_info>& students);
std::istream& read(std::istream& in, Student_info& s);
std::istream& read_hw(std::istream& in, sequence& hw);
bool compare(const Student_info& x, Student_info& y);