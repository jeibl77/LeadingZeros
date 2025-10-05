// LeadingZeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

static void RemoveLeadingZerosFromIPAddress(char* address)
{
    // example: "092.001.000.0" -> "92.1.0.0"

    char* src = address;
    char* dst = address;
    while (*src)
    {
        // Skip leading zeros but leave at least one digit per segment
        while (*src == '0' && *(src + 1) != '\0' && *(src + 1) != '.')
        {
            src++;
        }

        // Copy the digits of the current segment
        while (*src != '.' && *src != '\0')
        {
            *dst++ = *src++;
        }

        // Copy the dot
        if (*src == '.')
        {
            *dst++ = *src++;
        }
    }
    *dst = '\0';
}

int main()
{
    std::string s = u8"€";
    std::cout << "size=" << s.size() << " length=" << s.length() << " content=" << s << std::endl;
    for (size_t i = 0; i < s.size(); i++)
        std::cout << s[i] << " ";
    std::cout << std::endl;

    for (unsigned char c : s)
        std::cout << std::hex << (int)c << " ";
    std::cout << std::endl;

    char address[40] = "192.001.012.0";
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    // on main 111 committed
    char address[40] = "192.001.012.0";
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "00.000.0.000");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "100.000.0.000");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "1.010.10.01");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "000.000.000.000");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "001.001.001.001");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "002.002.002.002");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "003.003.003.003");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

    strcpy_s(address, "004.004.004.004");
    std::cout << address << " -> ";
    RemoveLeadingZerosFromIPAddress(address);
    std::cout << address << std::endl;

}

