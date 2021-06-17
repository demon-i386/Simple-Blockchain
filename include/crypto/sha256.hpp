 /*
 * @file sha256.hpp
 * @author VitorMob
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 *
 * Description:
 * 	    here is the encryption part of the sha256 hash 
 *      of the block where it will make a signature for 
 *      the encrypting block with the function calc_hash_block()
 */ 

#ifndef LIB_SHA256_H 
#define LIB_SHA256_H

#include <sstream>
#include <openssl/sha.h>
#include <string>
#include <iomanip>
#include <iostream>

#include "../blockchain/block.hpp"

typedef unsigned char uschar;
using namespace std;

string calc_hash_block(const string str);

#endif //LIB_SHA256_H