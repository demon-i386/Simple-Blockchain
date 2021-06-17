// includes in main 
#include <sha256.hpp>
#include <block.hpp>
#include <blockchain.hpp>



int main()
{        
        Blockchain blocks;
        
        TransactionData data1("elaro", "onion", 10.0);
        blocks.set_Block(data1);

        TransactionData data2("onion", "fall", 9.2);
        blocks.set_Block(data2);

        
return 0;
}