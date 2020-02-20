// Copyright (c) 2011-2014 The Llamacoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LLAMACOIN_QT_LLAMACOINADDRESSVALIDATOR_H
#define LLAMACOIN_QT_LLAMACOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class LlamacoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LlamacoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Llamacoin address widget validator, checks for a valid llamacoin address.
 */
class LlamacoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LlamacoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // LLAMACOIN_QT_LLAMACOINADDRESSVALIDATOR_H
