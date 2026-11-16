#pragma once
#include <string>

int openDB();
int createTable();
int checkAuth(const std::string& username, const std::string& password, std::string& response);
