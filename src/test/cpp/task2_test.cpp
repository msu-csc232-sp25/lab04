/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task2_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 2 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"

namespace csc232
{
    class Task2TestFixture : public CSC232BaseTestFixture
    {
    public:
        Task2TestFixture( ) = default;

        ~Task2TestFixture( ) override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK2
    TEST_F( Task2TestFixture, Bootstrap )
    {
        std::cerr << "Task 2 is not ready for evaluation; please toggle the TEST_TASK2 macro to TRUE\n";
        SUCCEED( ); // Just to keep spirits up out of the box ;-)
    }

#else
    TEST_F( Task2TestFixture, ItDefinedTheFunctionCorrectly )
    {
        ASSERT_TRUE(hasFunctionWithSignature("./csc232.h", "void", "handle_exception", "value", "int"));
    }

    TEST_F(Task2TestFixture, ItHandlesThrownException) {
        // Arrange
        const std::string expected{ "An exception was thrown!" };
        testing::internal::CaptureStderr();

        // Act
        handle_exception(-1);

        // Assert
        const std::string actual = testing::internal::GetCapturedStderr();
        ASSERT_STREQ(expected.c_str(), actual.c_str());
    }

    TEST_F(Task2TestFixture, ItProceedsAsExpectedWhenNoExceptionThrown) {
        // Arrange
        const std::string expected{ "1" };

        // Act
        handle_exception(1);

        // Assert
        const std::string actual{ buffer.str() };
        ASSERT_STREQ(expected.c_str(), actual.c_str());
    }
#endif

} // end namespace csc232
