//
// Created by Sergei on 4/6/2024.
//

#pragma once

#include <string>
#include <vector>

class IModel {
public:
    virtual ~IModel() = default;
    virtual void LoadModel() = 0;
    virtual void UnloadModel() = 0;
    virtual std::vector<std::vector<float_t>> Embeddings(const std::vector<std::string> &prompts) = 0;
};