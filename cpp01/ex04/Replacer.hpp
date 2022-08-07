/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:24:41 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/03 12:05:14 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Replacer
{
	private:
		std::string 	search;
		std::string 	replace;
		std::string		filename;
		std::ifstream	in_file;
		std::fstream	out_file;

	public:
		Replacer(void);
		Replacer(std::string const search, std::string const replace, std::string const filename);
		~Replacer();

		std::ifstream	&get_infile(void);
		std::fstream	&get_out_file(void);
		std::string		&get_filename(void);
		std::string		&get_replace(void);
		std::string		&get_search(void);
		bool			set_infile(std::string filename);
		bool			set_outfile(std::string filename);
};

Replacer::Replacer(void)
{
	this->search =  "";
	this->replace = "";
	this->filename = "";
}

Replacer::Replacer(std::string const filename, std::string const search, std::string const replace)
{
	this->search = search;
	this->replace = replace;
	this->filename = filename;
}

Replacer::~Replacer()
{
	this->out_file.close();
	this->in_file.close();
}

std::string		&Replacer::get_filename(void)
{
	return (this->filename);
}

std::string		&Replacer::get_search(void)
{
	return (this->search);
}

std::string		&Replacer::get_replace(void)
{
	return (this->replace);
}

std::ifstream	&Replacer::get_infile(void)
{
	return (this->in_file);
}

std::fstream	&Replacer::get_out_file(void)
{
	return (this->out_file);
}

bool			Replacer::set_infile(std::string filename)
{
	this->in_file.open(filename.c_str(), std::ios_base::in);
	if (!this->in_file)
	{
		std::cerr << "Error while opening in_file" << std::endl;
		return (false);
	}
	return  (true);
}

bool			Replacer::set_outfile(std::string filename)
{
	this->out_file.open(filename.c_str(), std::ios_base::out);
	if (!this->out_file)
	{
		std::cerr << "Error while opening out_file" << std::endl;
		return (false);
	}
	return  (true);
}
