/**
 * Copyright (c) 2014-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

/**
 * @Generated by gentest/gentest.sh with the following input
 *
<div id="align_content_flex_start" style="width: 100px; height: 100px; flex-wrap: wrap; flex-direction: column; align-content: flex-start;">
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
</div>

<div id="align_content_flex_end" style="width: 100px; height: 100px; flex-wrap: wrap; flex-direction: column; align-content: flex-end;">
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
</div>

<div id="align_content_center" style="width: 100px; height: 100px; flex-wrap: wrap; flex-direction: column; align-content: center;">
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
  <div style="width: 50px; height: 10px;"></div>
</div>

<div id="align_content_stretch" style="width: 100px; height: 100px; flex-wrap: wrap; flex-direction: column; align-content: stretch;">
  <div style="width: 50px;"></div>
  <div style="width: 50px;"></div>
  <div style="width: 50px;"></div>
  <div style="width: 50px;"></div>
  <div style="width: 50px;"></div>
</div>
 *
 */

#include <CSSLayout/CSSLayout.h>
#include <gtest/gtest.h>

TEST(CSSLayoutTest, align_content_flex_start) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexWrap(root, CSSWrapTypeWrap);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 50);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 50);
  CSSNodeStyleSetHeight(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 50);
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);

  const CSSNodeRef root_child3 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child3, 50);
  CSSNodeStyleSetHeight(root_child3, 10);
  CSSNodeInsertChild(root, root_child3, 3);

  const CSSNodeRef root_child4 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child4, 50);
  CSSNodeStyleSetHeight(root_child4, 10);
  CSSNodeInsertChild(root, root_child4, 4);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(20, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(30, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(40, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(20, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(30, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(40, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, align_content_flex_end) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetAlignContent(root, CSSAlignFlexEnd);
  CSSNodeStyleSetFlexWrap(root, CSSWrapTypeWrap);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 50);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 50);
  CSSNodeStyleSetHeight(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 50);
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);

  const CSSNodeRef root_child3 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child3, 50);
  CSSNodeStyleSetHeight(root_child3, 10);
  CSSNodeInsertChild(root, root_child3, 3);

  const CSSNodeRef root_child4 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child4, 50);
  CSSNodeStyleSetHeight(root_child4, 10);
  CSSNodeInsertChild(root, root_child4, 4);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(20, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(30, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(40, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(20, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(30, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(40, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, align_content_center) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetAlignContent(root, CSSAlignCenter);
  CSSNodeStyleSetFlexWrap(root, CSSWrapTypeWrap);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 50);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 50);
  CSSNodeStyleSetHeight(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 50);
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);

  const CSSNodeRef root_child3 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child3, 50);
  CSSNodeStyleSetHeight(root_child3, 10);
  CSSNodeInsertChild(root, root_child3, 3);

  const CSSNodeRef root_child4 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child4, 50);
  CSSNodeStyleSetHeight(root_child4, 10);
  CSSNodeInsertChild(root, root_child4, 4);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(20, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(30, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(40, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(20, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(30, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(40, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, align_content_stretch) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetAlignContent(root, CSSAlignStretch);
  CSSNodeStyleSetFlexWrap(root, CSSWrapTypeWrap);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 50);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 50);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 50);
  CSSNodeInsertChild(root, root_child2, 2);

  const CSSNodeRef root_child3 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child3, 50);
  CSSNodeInsertChild(root, root_child3, 3);

  const CSSNodeRef root_child4 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child4, 50);
  CSSNodeInsertChild(root, root_child4, 4);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child2));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child3));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child3));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child3));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child3));

  ASSERT_EQ(50, CSSNodeLayoutGetLeft(root_child4));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child4));
  ASSERT_EQ(50, CSSNodeLayoutGetWidth(root_child4));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child4));

  CSSNodeFreeRecursive(root);
}
