#ifndef DOCKERREMOTEAPI_H
#define DOCKERREMOTEAPI_H

#include <arpa/inet.h>
#include <set>
#include <string>
#include <vector>

#include "../cjson/cJSON.h"

using std::set;
using std::string;
using std::vector;

set<string> listContainerSet(bool all = false);
vector<string> listContainer(bool all = false);
vector<cJSON*> getResponse(vector<string>& request, bool isMultiJson = false, bool ignoreResponse = false, unsigned int addressFamily = AF_UNIX, string ip = "" , unsigned int port = 0);
vector<string> getContainerLogs(string& request);
string getDockerHostName();
cJSON* parseJson(string& );

#endif
