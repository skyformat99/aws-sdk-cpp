/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codepipeline/CodePipelineErrors.h>

using namespace Aws::Client;
using namespace Aws::CodePipeline;
using namespace Aws::Utils;

static const int JOB_NOT_FOUND_HASH = HashingUtils::HashString("JobNotFoundException");
static const int ACTION_TYPE_NOT_FOUND_HASH = HashingUtils::HashString("ActionTypeNotFoundException");
static const int ACTION_NOT_FOUND_HASH = HashingUtils::HashString("ActionNotFoundException");
static const int PIPELINE_NOT_FOUND_HASH = HashingUtils::HashString("PipelineNotFoundException");
static const int INVALID_ACTION_DECLARATION_HASH = HashingUtils::HashString("InvalidActionDeclarationException");
static const int INVALID_BLOCKER_DECLARATION_HASH = HashingUtils::HashString("InvalidBlockerDeclarationException");
static const int STAGE_NOT_FOUND_HASH = HashingUtils::HashString("StageNotFoundException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int PIPELINE_VERSION_NOT_FOUND_HASH = HashingUtils::HashString("PipelineVersionNotFoundException");
static const int INVALID_CLIENT_TOKEN_HASH = HashingUtils::HashString("InvalidClientTokenException");
static const int PIPELINE_NAME_IN_USE_HASH = HashingUtils::HashString("PipelineNameInUseException");
static const int INVALID_STRUCTURE_HASH = HashingUtils::HashString("InvalidStructureException");
static const int INVALID_JOB_HASH = HashingUtils::HashString("InvalidJobException");
static const int INVALID_STAGE_DECLARATION_HASH = HashingUtils::HashString("InvalidStageDeclarationException");
static const int INVALID_JOB_STATE_HASH = HashingUtils::HashString("InvalidJobStateException");
static const int INVALID_NONCE_HASH = HashingUtils::HashString("InvalidNonceException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");

namespace Aws
{
namespace CodePipeline
{
namespace CodePipelineErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == JOB_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::JOB_NOT_FOUND), false);
  }
  else if (hashCode == ACTION_TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::ACTION_TYPE_NOT_FOUND), false);
  }
  else if (hashCode == ACTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::ACTION_NOT_FOUND), false);
  }
  else if (hashCode == PIPELINE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_ACTION_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_ACTION_DECLARATION), false);
  }
  else if (hashCode == INVALID_BLOCKER_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_BLOCKER_DECLARATION), false);
  }
  else if (hashCode == STAGE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::STAGE_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == PIPELINE_VERSION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_VERSION_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_CLIENT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_CLIENT_TOKEN), false);
  }
  else if (hashCode == PIPELINE_NAME_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::PIPELINE_NAME_IN_USE), false);
  }
  else if (hashCode == INVALID_STRUCTURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_STRUCTURE), false);
  }
  else if (hashCode == INVALID_JOB_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_JOB), false);
  }
  else if (hashCode == INVALID_STAGE_DECLARATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_STAGE_DECLARATION), false);
  }
  else if (hashCode == INVALID_JOB_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_JOB_STATE), false);
  }
  else if (hashCode == INVALID_NONCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::INVALID_NONCE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodePipelineErrors::LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodePipelineErrorMapper
} // namespace CodePipeline
} // namespace Aws
