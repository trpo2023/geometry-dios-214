#pragma once
#ifndef PARSER_H
#define PARSER_H


int area_check(char* input);
int check_input(const char* input);
int check_circle(char* input);
void handle_error(const char* error_msg, const char* input, int pos);
int area(int x);

#endif
