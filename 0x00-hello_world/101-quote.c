#!/bin/bash
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main() {
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, strlen(message));
    return 1;
}
