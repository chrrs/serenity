/*
 * Copyright (c) 2021, Jesse Buhagiar <jooster669@gmail.com>
 * Copyright (c) 2022, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Vector.h>
#include <LibGPU/Vertex.h>
#include <LibGfx/Vector4.h>

namespace SoftGPU {

class Clipper final {
public:
    enum class ClipPlane : u8 {
        LEFT = 0,
        RIGHT,
        TOP,
        BOTTOM,
        NEAR,
        FAR
    };

    Clipper() = default;

    void clip_triangle_against_frustum(Vector<GPU::Vertex>& input_vecs);

private:
    Vector<GPU::Vertex> list_a;
    Vector<GPU::Vertex> list_b;
};

}
