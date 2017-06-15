// Copyright (c) 2011-2014 The Starwels developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STARWELSADDRESSVALIDATOR_H
#define STARWELSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class StarwelsAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StarwelsAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Starwels address widget validator, checks for a valid starwels address.
 */
class StarwelsAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StarwelsAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // STARWELSADDRESSVALIDATOR_H
