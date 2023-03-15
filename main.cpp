#include <iostream>
#include <string>

int main()
{
    /*
    int value1 {10};
    int value2  {-300};

    std::cout<<"Value 1 :" << value1 << std::endl;
    std::cout<<"Value 2 :" << value2 << std::endl;
    std::cout << "Size of value1 :" << sizeof(value1) << std::endl;
    std::cout << "Size of value2 : " << sizeof(value2) << std::endl;
    */
    /**
    signed int value1 {20};
    signed int value2  {-300};
    std::cout << "Value 1 :" << value1 << std::endl;
    std::cout << "Value 2 :" << value2 << std::endl;
    std::cout << "Size of value1 :" << sizeof(value1) << std::endl;
    std::cout << "Size of value2 : " << sizeof(value2) << std::endl;
    */
    unsigned int value1{10};
    // unsigned int value2{-300};  Compile error
    std::cout << "Value 1 :" << value1 << std::endl;
    // std::cout << "Value 2 :" << value2 << std::endl;
    std::cout << "Size of value1 :" << sizeof(value1) << std::endl;
    // std::cout << "Size of value2 : " << sizeof(value2) << std::endl;

    // Short and long
    short short_var{-32333};        // 2 bytes
    short int short_int{455};       //
    signed short signed_short{122}; //
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    int int_var{55};       // 4 bytes
    signed signed_var{66}; //
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    long long_var{88};                       // 4 or 8 bytes
    long int long_int{33};                   //
    signed long signed_long{44};             //
    signed long int signed_long_int{44};     //
    unsigned long int unsigned_long_int{44}; //

    long long long_long{888}; // 8 bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    std::cout << "Short variable : " << short_var << " size :" << sizeof(short) << " bytes" << std::endl;
    std::cout << "Short integer : " << short_int << " size :" << sizeof(short int) << "bytes" << std::endl;
    std::cout << "Signed Short : " << signed_short << " size :" << sizeof(signed short) << " bytes" << std::endl;
    std::cout << "Signed Short int :" << signed_short_int << " size : " << sizeof(signed short int) << " bytes" << std::endl;
    std::cout << "Unsigned Short int :" << unsigned_short_int << " size :" << sizeof(unsigned short int) << " bytes" << std::endl;
    std::cout << "*******************************" << std::endl;
    std::cout << "Integer : " << int_var << " size :" << sizeof(int) << " bytes" << std::endl;
    std::cout << "Signed : " << signed_var << " size :" << sizeof(signed) << " bytes" << std::endl;
    std::cout << "Signed int : " << signed_int << " size : " << sizeof(signed int) << " bytes" << std::endl;
    std::cout << "Unsigned int" << unsigned_int << " size : " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "**************************************" << std::endl;
    std::cout << "Long :" << long_var << " size : " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Long int :" << long_int << " size :" << sizeof(long int) << " bytes " << std::endl;
    std::cout << "Signed Long : " << signed_long << "size :" << sizeof(signed long) << " bytes" << std::endl;
    std::cout << "Signed Long int : " << signed_long_int << " size :" << sizeof(signed long int) << " bytes" << std::endl;
    std::cout << "Unsigned Long int : " << unsigned_long_int << " size : " << sizeof(unsigned long int) << " bytes" << std::endl;
    std::cout << "******************************" << std::endl;
    std::cout << "Long Long : " << long_long << " size : " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "Long Long int : " << long_long_int << " size : " << sizeof(long long int) << " bytes" << std::endl;
    std::cout << "Signed long long : " << signed_long_long << " size : " << sizeof(signed long long) << " bytes" << std::endl;
    std::cout << "Signed long long int : " << signed_long_long_int << " size : " << sizeof(signed long long int) << " bytes" << std::endl;
    std::cout << "Unsigned Long long int : " << unsigned_long_long_int << " size : " << sizeof(unsigned long long int) << " bytes" << std::endl;

    return 0;
}