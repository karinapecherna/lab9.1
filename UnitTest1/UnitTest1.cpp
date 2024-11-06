#include "pch.h"
#include "CppUnitTest.h"
#include "..//lab9.1//dod.h"
#include "..//lab9.1//sum.h"
#include "..//lab9.1//var.h"     

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;  // Use namespaces defined in your code
using namespace nsSum;

namespace SumTests
{
    TEST_CLASS(SumTests)
    {
    public:

        TEST_METHOD(TestSumFunction)
        {
            // Ініціалізація вхідних значень
            x = 2.0;      // Значення, при якому будемо тестувати
            eps = 0.0001; // Точність

            // Викликаємо функцію sum() для обчислення
            sum();

            // Перевірка значення s
            double expectedValue = 0.5; // Очікуване значення залежить від реалізації
            Assert::AreEqual(expectedValue, s, 0.0001, L"Result does not match expected value.");
        }
    };
}

