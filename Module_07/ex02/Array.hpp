/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:44:20 by bbaatar           #+#    #+#             */
/*   Updated: 2022/07/07 12:44:22 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <stdexcept>

template <typename T>
class    Array
{
    private:
        T *             _array;
        unsigned int    _n;

    public:
        //Construction with no parameter
        Array () : _n(0) {
            try {
                _array = new T[0];
            }
            catch (const std::bad_alloc& e) {
                std::cout << "Memory allocation's failed: " << e.what() << std::endl;
            }
        };

        //Construction with an unsigned int n as a parameter
        Array (const unsigned int n) : _n(n) {
            try {
                _array = new T[n];
            }
            catch (const std::bad_alloc& e) {
                std::cout << "Memory allocation's failed: " << e.what() << std::endl;
            }
        };

        //Destructor
        ~Array () {
            delete [] _array;
        };

        //Construction by copy
        Array (const Array<T>& obj) {

            _array = new T[obj.size()];
            if (!_array)
            {
                throw std::runtime_error("Memory allocation's failed");
            }
            for (unsigned int i = 0; i < obj.size(); i++){
                _array[i] = obj[i];
            }
            _n = obj.size();
        };

        //Construction by copy assignment operator
        Array & operator=(const Array<T>& obj) {
            T* temp = new T[obj.size()];
            if (!temp)
            {
                throw std::runtime_error("Memory allocation's failed");
            }
            for (unsigned int i = 0; i < obj.size(); i++){
                temp[i] = obj[i];
            }
            delete [] _array;
            _array = temp;
            _n = obj.size();
            return *this;
        };

        //Elements can be accessed through the subscript operator: [ ]
        T& operator[](unsigned int index) const {
            if(index >= _n) {
               throw std::exception ();
            }
            return _array[index];
        };

        unsigned int size(void) const {
            return _n;
        };
};

#endif