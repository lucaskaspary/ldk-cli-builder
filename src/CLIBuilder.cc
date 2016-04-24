/*
 * CLIBuilder.cc
 *
 *  Created on: 23 de abr de 2016
 *      Author: lucas
 */
#include <iostream>
#include "CLI/Builder/CLIBuilder.h"

namespace ldk {

CLIBuilder::CLIBuilder() {
    // TODO Auto-generated constructor stub

}

CLIBuilder::~CLIBuilder() {

}

ErrorCode_t CLIBuilder::Generate(std::string file_in, std::string file_out){
    FILE file_in;
    file_in = ffopen(file_in.c_str(),"R");
    char buffer[1024];
    fread((void*)&buffer, 1024,0, file_in);

    return 0;
}

} /* namespace ldk */
