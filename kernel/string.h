#pragma once
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

void *memcpy(void *dest, const void *src, size_t n);

void *memset(void *s, int c, size_t n);

size_t strlen(const char *s);

char *strcpy(char *dest, const char *src);

int sprintf(char *str, const char *format, ...);