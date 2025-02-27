/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#ifndef MSU_CSC232_H
#define MSU_CSC232_H

#define FALSE 0
#define TRUE 1

#define EXECUTE_PREAMBLE TRUE

#define TEST_TASK1 TRUE
#define TEST_TASK2 TRUE
#define TEST_TASK3 TRUE
#define TEST_TASK4 FALSE
#define TEST_TASK5 FALSE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{
    // Add any user-defined functions prescribed in your assignment below

#if TEST_TASK1
    // TODO: Task 1 - Define the function prescribed below
    //@brief throw exception if value is negative
    //@param value
    //@throw if value is less than 0
    inline void throw_exception(int value){
        if(value < 0){
            throw std::runtime_error("An exception was thrown!");
        }
        std::cout << value;
    }


    // Do not write below this line within this block for Task 1
#endif

#if TEST_TASK2
    // TODO: Task 2 - Define the function prescribed below
    //@brief handles exceptions that have been thrown
    //@param value
    void handle_exception(int value){
        try{
            throw_exception(value);
        }
        catch(const std::runtime_error& e){
            std::cerr << e.what();
        }
    }
    // Do not write below this line within this block for Task 2
#endif

#if TEST_TASK3
    // TODO: Task 3 - Define the class prescribed below
    class NegativeValueException: public std::runtime_error{
        public:
        //constructor that passes message to base class
        NegativeValueException(const std::string& message)
        : std::runtime_error(message){
        }; // end constructor
    };


    // Do not write below this line within this block for Task 3
#endif

    // DO NOT Modify anything below this line

    int preamble( int argc, char * argv[] );

    /**
     * @brief Generate a quasi-random UUID.
     * @return A string representation of a quasi-random UUID.
     */
    std::string generate_uuid( )
    {
        static std::random_device random_device;
        static std::mt19937 random_number_generator( random_device( ) );

        std::uniform_int_distribution< int > dist( 0, 15 );

        const char * uuid_alphabet = "0123456789abcdef";
        const bool dash[] = { false, false, false, false, true, false, true, false,
                              true, false, true, false, false, false, false, false };

        std::string uuid;
        for ( bool dash_location: dash )
        {
            if ( dash_location )
                uuid += "-";
            uuid += uuid_alphabet[ dist( random_number_generator ) ];
            uuid += uuid_alphabet[ dist( random_number_generator ) ];
        }
        return uuid;
    }
} // namespace csc232

#endif // MSU_CSC232_H
