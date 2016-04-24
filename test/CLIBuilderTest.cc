/*
 * TelnetServer_test.cc
 *
 *  Created on: 22 de abr de 2016
 *      Author: lucas
 */
#include <iostream>

#include "gtest/gtest.h"
#include "CLI/Builder/CLIBuilder.h"

using ldk::CLIBuilder;

TEST(CLIBuilder, instantiation)
{
    CLIBuilder* builder;
    ASSERT_NO_THROW(builder = new CLIBuilder());
    ASSERT_NO_THROW(delete builder);
}

TEST(CLIBuilder, generate)
{
    CLIBuilder* builder = new CLIBuilder();
    builder->Generate("../test/test.cli", "../test/test.cc");
}

