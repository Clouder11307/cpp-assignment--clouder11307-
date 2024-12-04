#include <hw05.h>
#include <gtest/gtest.h>

TEST(Hw05Tests, Test1)
{
    VecOfStr input{"madam", "radar", "anagram", "rotor"};
    auto expected = VecOfStr{"madam", "radar", "rotor"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test2)
{
    VecOfStr input{"Madam, in Eden, I'm Adam"};
    auto expected = VecOfStr{"Madam, in Eden, I'm Adam"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test3)
{
    VecOfStr input{"Red roses run no risk, sir, on Nurse's order"};
    auto expected = VecOfStr{"Red roses run no risk, sir, on Nurse's order"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test4)
{
    VecOfStr input{"Won't lovers revolt now?"};
    auto expected = VecOfStr{"Won't lovers revolt now?"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test5)
{
    VecOfStr input{"A man, a plan, a canal, Panama!", "SIMPLETEXT"};
    auto expected = VecOfStr{"A man, a plan, a canal, Panama!"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test6)
{
    VecOfStr input{"Race fast, safe car","Pull up if I pull up","Kendrick Lamar"};
    auto expected = VecOfStr{"Race fast, safe car","Pull up if I pull up"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test7)
{
    VecOfStr input{"", "   ", "No lemon, no melon"};
    auto expected = VecOfStr{"No lemon, no melon"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test8)
{
    VecOfStr input{"Eva, can I see bees in a cave?", "Not a palindrome"};
    auto expected = VecOfStr{"Eva, can I see bees in a cave?"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test9)
{
    VecOfStr input{"Was it a car or a cat I saw?", "123454321", "apple"};
    auto expected = VecOfStr{"Was it a car or a cat I saw?", "123454321"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test10)
{
    VecOfStr input{"Able was I, I saw elba", "never odd or even", "hello world"};
    auto expected = VecOfStr{"Able was I, I saw elba", "never odd or even"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}