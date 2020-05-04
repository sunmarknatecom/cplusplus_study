//
//  main.cpp
//  CPParray
//
//  Created by 홍선표 on 2020/04/16.
//  Copyright © 2020 Mark S. Hong. All rights reserved.
//
//
// #include <iostream>

// int main()
// {
//    int c = 0;

//    int cpparr[] = {0, 1, 2, 3, 4, 5, };
//    int cpparr2[] = {0, 1, 2,};

//    c = sizeof(cpparr) / sizeof(int);

//    std::cout << "Number of Elements = " << c << std::endl;
//    std::cout << cpparr[0] << std::endl;
//    std::cout << cpparr[1] << std::endl;
//    std::cout << cpparr[2] << std::endl;
//    std::cout << cpparr[3] << std::endl;
//    std::cout << cpparr[4] << std::endl;
//    std::cout << cpparr2[2] << std::endl;

//    return 0;
// }

//#include <stdio.h>
//
//int main(void)
//{
//    int i = 0, j = 0;
//
//    for (i = 0; i < 5; ++i)
//    {
//        for (j = 0; j < 5+i; ++j)
//        {
//            if (i+j >= 4) printf("*\t");
//            else putchar('\t');
//        }
//
//        putchar('\n');
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    int aList[5] = { 10, 20, 30, 40, 50};
//
//    int i = 0;
//
//    for (i = 0; i < 5; ++i)
//        printf("%d\t", aList[i]);
//    putchar('\n');
//
//    aList[0] = 100;
//    aList[3] = 200;
//
//    for (i = 0; i < 5; ++i)
//        printf("%d\t", aList[i]);
//    putchar('\n');
//
//    return 0;
//}


//#include <stdio.h>
//
//int GetMax(int a, int b, int c)
//{
//    int nMax = a;
//
//    if(b > nMax) nMax = b;
//    if(c > nMax) nMax = c;
//
//    return nMax;
//}
//
//int main(void)
//{
//    int nResult = 0;
//
//    printf("Max: %d\n", GetMax(1, 2, 3));
//    printf("Max: %d\n", GetMax(2, 3, 1)*2);
//    printf("Max: %d\n", nResult = GetMax(3, 1, 2));
//
//    return 0;
//}


//#include <stdio.h>
//
//int GetFactorial(int nParam)
//{
//    int nResult = 1, i = 0;
//    if (nParam < 1 || nParam > 10)
//    {
//        puts("ERORR: 1-10 input integer.");
//        return 0;
//    }
//
//    for (i = 1; i <= nParam; ++i)
//        nResult *= i;
//    return nResult;
//}
//
//int main(void)
//
//{
//    printf("MAX: %d\n", GetFactorial(1));
//    printf("MAX: %d\n", GetFactorial(5));
//    printf("MAX: %d\n", GetFactorial(11));
//    printf("MAX: %d\n", GetFactorial(10));
//
//    return 0;
//
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout.precision(5);
//
//    cout << 121.3253 << endl;
//
//    cout << 12 << endl;
//
//    cout.setf(ios :: left);
//    cout.fill('0');
//    cout.width(10);
//    cout << 112.5 << endl;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    float i = 12530.323;
//
//    cout.setf(ios :: right);
//    cout.fill('0');
//    cout.width(10);
//    cout << i << endl;
//
//    return 0;
//}
