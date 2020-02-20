// Copyright (c) 2014-2019 The Llamacoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LLAMACOIN_ZMQ_ZMQCONFIG_H
#define LLAMACOIN_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
#include <config/llamacoin-config.h>
#endif

#include <stdarg.h>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include <primitives/transaction.h>

void zmqError(const char *str);

#endif // LLAMACOIN_ZMQ_ZMQCONFIG_H
