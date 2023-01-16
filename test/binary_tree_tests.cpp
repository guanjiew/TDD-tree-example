#include <gtest/gtest.h>
#include "../include/binary_tree.h"

class BinaryTreeTest : public ::testing::Test
{
protected:
    BinaryTree tree;

    virtual void SetUp()
    {
        tree.Insert(5);
        tree.Insert(3);
        tree.Insert(7);
        tree.Insert(2);
        tree.Insert(4);
        tree.Insert(6);
        tree.Insert(8);
    }
};

TEST_F(BinaryTreeTest, InsertTest)
{
    EXPECT_EQ(5, tree.root->data);
    EXPECT_EQ(3, tree.root->left->data);
    EXPECT_EQ(7, tree.root->right->data);
    EXPECT_EQ(2, tree.root->left->left->data);
    EXPECT_EQ(4, tree.root->left->right->data);
    EXPECT_EQ(6, tree.root->right->left->data);
    EXPECT_EQ(8, tree.root->right->right->data);
};

TEST_F(BinaryTreeTest, FindTest)
{
    EXPECT_TRUE(tree.Find(5));
    EXPECT_TRUE(tree.Find(3));
    EXPECT_TRUE(tree.Find(7));
    EXPECT_TRUE(tree.Find(2));
    EXPECT_TRUE(tree.Find(4));
    EXPECT_TRUE(tree.Find(6));
    EXPECT_TRUE(tree.Find(8));
    EXPECT_FALSE(tree.Find(1));
};

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
