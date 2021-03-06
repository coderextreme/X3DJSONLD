#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "gason.h"

const int SHIFT_WIDTH = 4;

void dumpString(const char *s) {
    fputc('"', stdout);
    while (*s) {
        int c = *s++;
        switch (c) {
        case '\b':
            fprintf(stdout, "\\b");
            break;
        case '\f':
            fprintf(stdout, "\\f");
            break;
        case '\n':
            fprintf(stdout, "\\n");
            break;
        case '\r':
            fprintf(stdout, "\\r");
            break;
        case '\t':
            fprintf(stdout, "\\t");
            break;
        case '\\':
            fprintf(stdout, "\\\\");
            break;
        case '"':
            fprintf(stdout, "\\\"");
            break;
        default:
            fputc(c, stdout);
        }
    }
    fprintf(stdout, "%s\"", s);
}

void dumpValue(JsonValue o, int indent) {
    switch (o.getTag()) {
    case JSON_NUMBER:
        fprintf(stdout, "%f", o.toNumber());
        break;
    case JSON_STRING:
        dumpString(o.toString());
        break;
    case JSON_ARRAY:
        // It is not necessary to use o.toNode() to check if an array or object
        // is empty before iterating over its members, we do it here to allow
        // nicer pretty printing.
        if (!o.toNode()) {
            fprintf(stdout, "[]");
            break;
        }
        fprintf(stdout, "[\n");
        for (auto i : o) {
            fprintf(stdout, "%*s", indent + SHIFT_WIDTH, "");
            dumpValue(i->value, indent + SHIFT_WIDTH);
            fprintf(stdout, i->next ? ",\n" : "\n");
        }
        fprintf(stdout, "%*s]", indent, "");
        break;
    case JSON_OBJECT:
        if (!o.toNode()) {
            fprintf(stdout, "{}");
            break;
        }
        fprintf(stdout, "{\n");
        for (auto i : o) {
            fprintf(stdout, "%*s", indent + SHIFT_WIDTH, "");
            dumpString(i->key);
            fprintf(stdout, ": ");
            dumpValue(i->value, indent + SHIFT_WIDTH);
            fprintf(stdout, i->next ? ",\n" : "\n");
        }
        fprintf(stdout, "%*s}", indent, "");
        break;
    case JSON_TRUE:
        fprintf(stdout, "true");
        break;
    case JSON_FALSE:
        fprintf(stdout, "false");
        break;
    case JSON_NULL:
        fprintf(stdout, "null");
        break;
    }
}

void printError(const char *filename, int status, char *endptr, char *source, size_t size) {
    char *s = endptr;
    while (s != source && *s != '\n')
        --s;
    if (s != endptr && s != source)
        ++s;

    int lineno = 0;
    for (char *it = s; it != source; --it) {
        if (*it == '\n') {
            ++lineno;
        }
    }

    int column = (int)(endptr - s);

    fprintf(stderr, "%s:%d:%d: %s\n", filename, lineno + 1, column + 1, jsonStrError(status));

    while (s != source + size && *s != '\n') {
        int c = *s++;
        switch (c) {
        case '\b':
            fprintf(stderr, "\\b");
            column += 1;
            break;
        case '\f':
            fprintf(stderr, "\\f");
            column += 1;
            break;
        case '\n':
            fprintf(stderr, "\\n");
            column += 1;
            break;
        case '\r':
            fprintf(stderr, "\\r");
            column += 1;
            break;
        case '\t':
            fprintf(stderr, "%*s", SHIFT_WIDTH, "");
            column += SHIFT_WIDTH - 1;
            break;
        case '\0':
            fprintf(stderr, "\"");
            break;
        default:
            fputc(c, stderr);
        }
    }

    fprintf(stderr, "\n%*s\n", column + 1, "^");
}
