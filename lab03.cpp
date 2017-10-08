#include <cstdlib>
#include <iostream>
#include <string>

int main()
{  // 5
    std::string str;
    std::cout << "Enter the name of the city" << std::endl;
    std::cin >> str;
    std::size_t length = str.size();
    if (length % 2 == 0)
    {
        std::cout << "An even number of characters" << std::endl;
    }
    else
    {
        std::cout << "Odd number of characters" << std::endl;
    }
    // 6
    std::string f1;
    std::string f2;
    std::cout << "Enter last names" << std::endl;
    std::cin >> f1;
    std::cin >> f2;
    std::size_t l1 = f1.size();
    std::size_t l2 = f2.size();
    if (l1 > l2)
    {
        std::cout << "First name is longer" << std::endl;
    }
    else if (l1 < l2)
    {
        std::cout << "Second name is longer" << std::endl;
    }
    else
    {
        std::cout << "The same" << std::endl;
    }
    // 7
    std::string g1;
    std::string g2;
    std::string g3;
    std::cout << "Enter the names of the cities" << std::endl;
    std::cin >> g1;
    std::cin >> g2;
    std::cin >> g3;
    std::size_t n1 = g1.size();
    std::size_t n2 = g2.size();
    std::size_t n3 = g3.size();
    if ((n1 > n2) && (n1 > n3))
    {
        if (n2 < n3)
        {
            std::cout << g1 << " " << g2 << std::endl;
        }
        else
        {
            std::cout << g1 << " " << g3 << std::endl;
        }
    }
    else if ((n2 > n1) && (n2 > n3))
    {
        if (n1 < n3)
        {
            std::cout << g2 << " " << g1 << std::endl;
        }
        else
        {
            std::cout << g2 << " " << g3 << std::endl;
        }
    }
    else if (n1 < n2)
    {
        std::cout << g3 << " " << g1 << std::endl;
    }
    else
    {
        std::cout << g3 << " " << g2 << std::endl;
    }
    // 8
    std::string a;
    std::cout << "Enter the word" << std::endl;
    std::cin >> a;
    int n = 0;
    int m = 0;
    std::cout << "Enter m and n, m < n" << std::endl;
    std::cin >> m;
    std::cin >> n;
    std::cout << a.substr(m, n + 1) << std::endl;
    // 9
    std::string b;
    std::cout << "Enter the word" << std::endl;
    std::cin >> b;
    char s[b.length()];
    for (int i = 0; i < b.length(); ++i)
    {
        s[i]='*';
    }
    std::string result;
    std::string symbol;
    symbol = s;
    result = symbol + b + symbol;
    std::cout << result << std::endl;
    // 10
    std::string phrase;
    std::cout << "Enter the sentence" << std::endl;
    std::cin >> phrase;
    std::size_t k = phrase.size();
    int j = 0;
    for (int i = 0; i < phrase.length(); ++i)
    {
        if (phrase[i] == 'a')
        {
            j += 1;
        }
    }
    std::cout << (static_cast<float>(j) / k) * 100 << "%" << std::endl;
    return 0;
}
