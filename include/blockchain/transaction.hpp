 /*
 * @file transaction.hpp
 * @author VitorMob
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 *
 * Description: 
 *		in the transaction library are the necessary 
 *		parameters to be able to add the 
 *		components to be cryptogafed within the blockchain thus generating a sha256 hash
 */

#ifndef LIB_TRANSACTION_H
#define LIB_TRANSACTION_H

#include <string>
#include <time.h>
#include <iostream>

using namespace std;

struct TransactionData
{
    string recvkey;
    string sendkey;
    string timestamp;
    double amount;    

    TransactionData(){};
    TransactionData(string cvkey, string endkey, double amnt)
    { 
            time_t result = time(NULL);
            timestamp = asctime(localtime(&result));
            recvkey=cvkey;
            sendkey=endkey;
            amount=amnt;
    }
};


#endif // LIB_TRANSACTION_H