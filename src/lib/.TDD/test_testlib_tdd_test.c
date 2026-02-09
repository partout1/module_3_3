#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// External function declaration from testlib.c
extern int tdd_test(void);

// Test function for tdd_test
void test_testlib_tdd_test(void)
{
    printf("Running test_testlib_tdd_test...\n");

    // Redirect stdout to capture output
    FILE *original_stdout = stdout;
    FILE *capture = tmpfile();
    if (capture == NULL) {
        printf("FAIL: Could not create temporary file\n");
        return;
    }

    // Redirect stdout
    stdout = capture;

    // Call the function
    int result = tdd_test();

    // Restore stdout
    fflush(capture);
    stdout = original_stdout;

    // Read captured output
    rewind(capture);
    char buffer[256] = {0};
    fgets(buffer, sizeof(buffer), capture);
    fclose(capture);

    // Verify results
    assert(result == 0);
    assert(strstr(buffer, "tdd_test") != NULL);

    printf("PASS: test_testlib_tdd_test\n");
    printf("    Expected return value: 0, Got: %d\n", result);
    printf("    Expected output contains: 'tdd_test', Got: '%s'\n", buffer);
}

int main(void)
{
    printf("=== Starting TDD Tests ===\n\n");

    test_testlib_tdd_test();

    printf("\n=== All Tests Completed ===\n");
    return 0;
}
