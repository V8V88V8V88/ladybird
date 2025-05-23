/*
 * Copyright (c) 2024, Jelle Raaijmakers <jelle@ladybird.org>
 * Copyright (c) 2024, Aliaksandr Kalenik <kalenik.aliaksandr@gmail.com>
 * Copyright (c) 2024, Luke Wilde <luke@ladybird.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibJS/Runtime/Realm.h>
#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/Bindings/WebGLBufferPrototype.h>
#include <LibWeb/WebGL/WebGLBuffer.h>

namespace Web::WebGL {

GC_DEFINE_ALLOCATOR(WebGLBuffer);

GC::Ref<WebGLBuffer> WebGLBuffer::create(JS::Realm& realm, WebGLRenderingContextBase& context, GLuint handle)
{
    return realm.create<WebGLBuffer>(realm, context, handle);
}

WebGLBuffer::WebGLBuffer(JS::Realm& realm, WebGLRenderingContextBase& context, GLuint handle)
    : WebGLObject(realm, context, handle)
{
}

WebGLBuffer::~WebGLBuffer() = default;

void WebGLBuffer::initialize(JS::Realm& realm)
{
    WEB_SET_PROTOTYPE_FOR_INTERFACE(WebGLBuffer);
    Base::initialize(realm);
}

}
