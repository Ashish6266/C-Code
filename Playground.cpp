#include <iostream>

class String{
public:
    String(const char* string){
        m_Size = strlng(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }
private:
    char* m_Data;
    uint32_t m_Size;
};