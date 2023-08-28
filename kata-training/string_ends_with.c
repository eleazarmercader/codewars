/* INSTRUCTIONS
 * 
 * Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).
 *
 * Examples:
 * solution('abc', 'bc') // returns true
 * solution('abc', 'd') // returns false
 */

// SOLUTION

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    size_t string_len = strlen(string);
    size_t ending_len = strlen(ending);

    if (ending_len > string_len) {
        return false; // El final es más largo que la cadena, no puede coincidir.
    }

    const char *string_end = string + (string_len - ending_len);
    return strcmp(string_end, ending) == 0;
}

/* SAMPLE TESTS
 *
 * #include <criterion/criterion.h>
 * 
 * bool solution(const char *string, const char *ending);
 *
 * Test(solution, should_pass_all_the_tests_provided
 *
 * {
 * 	cr_assert_eq(solution("abc", "bc"), true);
 * 	cr_assert_eq(solution("abc", "d"), false);
 * 	cr_assert_eq(solution("abc", ""), true);
 * }
