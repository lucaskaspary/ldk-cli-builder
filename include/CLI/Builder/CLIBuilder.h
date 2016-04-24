/*
 * CLIBuilder.h
 *
 *  Created on: 23 de abr de 2016
 *      Author: lucas
 */

#ifndef INCLUDE_CLI_BUILDER_CLIBUILDER_H_
#define INCLUDE_CLI_BUILDER_CLIBUILDER_H_

#include <string>

#include "Common/Types/CommonTypes.h"

namespace ldk {

class CLIBuilder {
public:
    CLIBuilder();
    ~CLIBuilder();
    ErrorCode_t Generate(std::string file_in, std::string file_out);
};

} /* namespace ldk */

#endif /* INCLUDE_CLI_BUILDER_CLIBUILDER_H_ */
