// Copyright (C) 2018-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "transparent_base_transformation.hpp"

namespace ngraph {
namespace pass {
namespace low_precision {

class LP_TRANSFORMATIONS_API DepthToSpaceTransformation : public TransparentBaseTransformation {
public:
    NGRAPH_RTTI_DECLARATION;
    DepthToSpaceTransformation(const Params& params = Params());
    bool canBeTransformed(const TransformationContext& context, std::shared_ptr<Node> layer) const override;
};

}  // namespace low_precision
}  // namespace pass
}  // namespace ngraph
