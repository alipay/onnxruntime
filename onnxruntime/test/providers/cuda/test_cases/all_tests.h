// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
namespace onnxruntime {
namespace cuda {
namespace test {

// Test header provides function declarations in EP-side bridge.
void TestDeferredRelease();
void TestDeferredReleaseWithoutArena();
void TestBeamSearchTopK();
void TestGreedySearchTopOne();

void CudaGemmOptions_TestDefaultOptions();
void CudaGemmOptions_TestCompute16F();
void CudaGemmOptions_NoReducedPrecision();
void CudaGemmOptions_Pedantic();
void CudaGemmOptions_Compute16F_Pedantic();
void CudaGemmOptions_Compute16F_NoReducedPrecision();

void ReductionFunctionsTest_ReduceRowToScalar();
void ReductionFunctionsTest_ReduceRowsToRow();
void ReductionFunctionsTest_ReduceColumnsToColumn();
void ReductionFunctionsTest_BufferOffsets();
void ReductionFunctionsTest_InvalidBufferSize();
void ReductionFunctionsTest_GetApplicableMatrixReduction();

}  // namespace test
}  // namespace cuda
}  // namespace onnxruntime