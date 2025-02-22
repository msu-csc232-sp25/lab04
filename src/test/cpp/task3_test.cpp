/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task3_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 3 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"

namespace csc232 {
    class Task3TestFixture : public CSC232BaseTestFixture {
    public:
        Task3TestFixture() = default;

        ~Task3TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK3
    TEST_F(Task3TestFixture, Bootstrap) {
        std::cerr << "Task 3 is not ready for evaluation; please toggle the TEST_TASK3 macro to TRUE\n";
        SUCCEED();
    }

#else
    // TODO: Add unit tests as needed for task 3
    TEST_F(Task3TestFixture, ItDefinedCustomExceptionClass) {
        ASSERT_TRUE( isClassInNamespaceDeclared("./csc232.h", "csc232", "NegativeValueException"))  ;
        ASSERT_TRUE( isClassDerivedFromBase("./csc232.h", "csc232", "NegativeValueException", "std::runtime_error"));
    }

    TEST_F(Task3TestFixture, ItThrowsNegativeValueException) {
        // Arrange
        const std::string expected{ "An exception was thrown by none other than, Jim Daehn!" };
        testing::internal::CaptureStderr();

        // Act
        try {
            throw NegativeValueException(expected);
        }
        catch (const NegativeValueException& e) {
            std::cerr << e.what();
        }

        // Assert
        const std::string actual = testing::internal::GetCapturedStderr();
        ASSERT_STREQ(expected.c_str(), actual.c_str());
    }

#endif

} // end namespace csc232
