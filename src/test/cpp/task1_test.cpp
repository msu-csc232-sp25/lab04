/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task1_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 1 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include "csc232_test_utils.h"


namespace csc232
{
    class Task1TestFixture : public CSC232BaseTestFixture
    {
    public:
        Task1TestFixture( ) = default;

        ~Task1TestFixture( ) override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK1
    TEST_F( Task1TestFixture, Bootstrap )
    {
        std::cerr << "Task 1 is not ready for evaluation; please toggle the TEST_TASK1 macro to TRUE\n";
        SUCCEED( ); // Just to keep spirits up out of the box ;-)
    }

#else
    TEST_F( Task1TestFixture, ItDefinedTheFunctionCorrectly )
    {
        ASSERT_TRUE(hasFunctionWithSignature("./csc232.h", "void", "throw_exception", "value", "int"));
    }

    TEST_F( Task1TestFixture, ItThrowsAnExceptionForNegativeInput )
    {
        EXPECT_THROW( throw_exception( -1 ), std::runtime_error );
    }

    TEST_F( Task1TestFixture, ItDoesNotThrowAnExceptionForPositiveInput )
    {
        // Arrange
        const std::string expected{ "1" };

        // Act
        throw_exception( 1 );

        // Assert
        const std::string actual{ buffer.str( ) };
        ASSERT_STREQ( expected.c_str( ), actual.c_str( ) );
    }

#endif

} // end namespace csc232
