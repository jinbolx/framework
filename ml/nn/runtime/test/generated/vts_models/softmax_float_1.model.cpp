// Generated code. Do not edit
// Create the model
Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1, 4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1, 4},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::SOFTMAX,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      189, 55, 134, 53
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}
