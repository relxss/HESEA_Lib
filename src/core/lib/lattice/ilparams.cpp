// @file ilparams.cpp - parameters for generalized integer lattices.
// @author TPOC: 
//
// @copyright Copyright (c) 2019, New Jersey Institute of Technology (NJIT)
// All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and/or other materials provided with the distribution. THIS SOFTWARE IS
// PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
// EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "lattice/ilparams.h"

CEREAL_CLASS_VERSION(lbcrypto::ILParamsImpl<M2Integer>,
                     lbcrypto::ILParamsImpl<M2Integer>::SerializedVersion());
CEREAL_CLASS_VERSION(lbcrypto::ILParamsImpl<M4Integer>,
                     lbcrypto::ILParamsImpl<M4Integer>::SerializedVersion());
#ifdef WITH_NTL
CEREAL_CLASS_VERSION(lbcrypto::ILParamsImpl<M6Integer>,
                     lbcrypto::ILParamsImpl<M6Integer>::SerializedVersion());
#endif
CEREAL_CLASS_VERSION(
    lbcrypto::ILParamsImpl<NativeInteger>,
    lbcrypto::ILParamsImpl<NativeInteger>::SerializedVersion());
