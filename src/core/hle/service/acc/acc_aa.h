// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/acc/acc.h"

namespace Service::Account {

class ACC_AA final : public Module::Interface {
public:
    explicit ACC_AA(std::shared_ptr<Module> module);
};

} // namespace Service::Account
