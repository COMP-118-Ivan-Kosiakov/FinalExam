/** \file UnitTestFinalExam.cpp
 * \brief Unit test for the source code.
 * \details This unit test is used to test some functions from source code.
 * \author Ivan Kosiakov
 * \version 1.1
 * \date 2022-2022
 */

#include "pch.h"
#include "CppUnitTest.h"
#include "../FinalExam/FinalExam.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestFinalExam
{
	TEST_CLASS(UnitTestFinalExam)
	{
	public:
		
		//Unit test for function negateMatrix
		TEST_METHOD(negateMatrixTest)
		{
			//Arrange
			int const COLUMNS = 4, ROWS = 3;
			double matrix[ROWS][COLUMNS] = { 2.5 };
			double result;

			//Act
			negateMatrix(matrix, ROWS);
			result = matrix[0][0];

			//Assert
			Assert::AreEqual(result, -2.5);
		}
	};
}
