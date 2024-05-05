#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>

void compute_sha256(const char *input, unsigned char *output)
{
    SHA256(input, strlen(input), output);
}

int main()
{
    char input[100];
    unsigned char hash[SHA256_DIGEST_LENGTH];

    printf("Enter text to hash: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    compute_sha256(input, hash);

    printf("SHA-256 hash of '%s' is: ", input);
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
    {
        printf("%02x", hash[i]);
    }
    printf("\n");

    return 0;
}
