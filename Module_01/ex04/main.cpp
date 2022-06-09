/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:59:04 by bbaatar           #+#    #+#             */
/*   Updated: 2022/06/06 20:59:06 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

void    err_put(std::string error_msg)
{
    std::cout << error_msg << std::endl;
    std::exit(EXIT_FAILURE);
}

void    read_from_file(std::string& file_name, std::string& str)
{
    std::ifstream fin(file_name.c_str());
    char ch;

    if (!fin)
        err_put("Couldn't open input file!");
    while (fin >> std::noskipws >> ch) {
        str += ch;
    }
    fin.close();
}

std::string    ft_replace(std::string find_w, std::string replace_w, std::string& str)
{
    std::string out_str;
    std::size_t len = find_w.length();
    if (len == 0)
        err_put("Can't search empty string!");
    std::size_t prev_pos = 0;
    std::size_t pos = str.find(find_w);
    while (pos != std::string::npos)
    {
        out_str += str.substr (prev_pos, pos - prev_pos);
        out_str += replace_w;
        prev_pos = pos + len;
        pos = str.find(find_w, prev_pos);
    }
    out_str += str.substr(prev_pos);
    return out_str;
}

void    output_to_file(std::string& file_name, std::string& str)
{
    std::ofstream fout (file_name.c_str());

    if (!fout)
        err_put("Couldn't open output file!");
    if (fout.is_open())
    {
        fout << str;
        fout.close();
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Insert input file name, word to find, word to replace: " << std::endl;
        return 0;
    }
    if (argv[1][0] == '\0')
    {
        err_put("Empty file!");
    }
    std::string file_name;
    std::string str;
    file_name = argv[1];
    read_from_file(file_name, str);
    str = ft_replace(argv[2], argv[3], str);
    file_name += ".replace";
    output_to_file(file_name, str);

    return 0;
}
