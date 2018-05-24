/*
 * Copyright (c) 2018 Nathan Osman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef QIMGUPLOAD_UPLOADER_H
#define QIMGUPLOAD_UPLOADER_H

#include <QNetworkAccessManager>
#include <QObject>

#include "qimgupload.h"

namespace qimgupload
{

class QIMGUPLOAD_EXPORT UploaderPrivate;

/**
 * @brief Base class for uploaders
 */
class QIMGUPLOAD_EXPORT Uploader : public QObject
{
    Q_OBJECT

public:

    explicit Uploader(QObject *parent = nullptr);

private:

    UploaderPrivate *const d;
};

}

#endif // QIMGUPLOAD_UPLOADER_H
