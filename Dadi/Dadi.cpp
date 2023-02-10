#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
    srand(time(NULL));

    uint64_t vda, lc, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;

    float v1, v2, v3, v4, v5, v6;

    std::cout << "Verfica randomizzazione dado" << std::endl 
              << "quante volte vuoi provare:";
    std::cin >> lc;

    for (uint64_t i = 1; i <= lc; i++)
    {
        vda = (uint64_t)(rand() % 6) + 1;
        if (vda == 1)
            c1++;
        if (vda == 2)
            c2++;
        if (vda == 3)
            c3++;
        if (vda == 4)
            c4++;
        if (vda == 5)
            c5++;
        if (vda == 6)
            c6++;
    }
   
    v1 = (float)c1 / (float)lc;
    v2 = (float)c2 / (float)lc;
    v3 = (float)c3 / (float)lc;
    v4 = (float)c4 / (float)lc;
    v5 = (float)c5 / (float)lc;
    v6 = (float)c6 / (float)lc;

    std::cout << "Se il numero e 1/6 vuol dire che il programma randomizza bene i numeri" << std::endl
              << "Prima faccia: "   << v1 << std::endl
              << "Seconda faccia: " << v2 << std::endl
              << "Terza faccia: "   << v3 << std::endl
              << "Quarta faccia: "  << v4 << std::endl
              << "Quinta faccia: "  << v5 << std::endl
              << "Sesta faccia: "   << v6 << std::endl;
    return 0;
}

