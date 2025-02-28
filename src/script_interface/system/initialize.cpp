/*
 * Copyright (C) 2022 The ESPResSo project
 *
 * This file is part of ESPResSo.
 *
 * ESPResSo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ESPResSo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "initialize.hpp"

#include "CudaInitHandle.hpp"
#include "Globals.hpp"
#include "System.hpp"

namespace ScriptInterface {
namespace System {

void initialize(Utils::Factory<ObjectHandle> *om) {
  om->register_new<CudaInitHandle>("System::CudaInitHandle");
  om->register_new<Globals>("System::Globals");
  om->register_new<System>("System::System");
}

} // namespace System
} // namespace ScriptInterface
