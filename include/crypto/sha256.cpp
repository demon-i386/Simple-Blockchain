 /*
 * @file sha256.cpp
 * @author VitorMob
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 *
 * Description: 
 *      here is the function where the crypt of the block will be made
 */ 

#include "sha256.hpp"


string calc_hash_block(const string str)
{
        uschar hash[SHA256_DIGEST_LENGTH];
        int i;

        SHA256_CTX sha256;
        SHA256_Init(&sha256);
        SHA256_Update(&sha256, str.c_str(), str.size());
        SHA256_Final(hash, &sha256);

        stringstream ss;
        for(i=0;i<SHA256_DIGEST_LENGTH;i++)
                ss << hex << setw(2) << setfill('0') << (int)hash[i];

return ss.str();
}