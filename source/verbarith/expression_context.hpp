#pragma once

#include <z3.h>

namespace vra
{
    class expression_context
    {
        _Z3_context* base_;

        expression_context() noexcept;

    public:

        ~expression_context() noexcept;

        expression_context(expression_context const&) = delete;
        expression_context& operator=(expression_context const&) = delete;

        expression_context(expression_context&&) = delete;
        expression_context& operator=(expression_context&&) = delete;

        static _Z3_context* instance() noexcept;
    };
}