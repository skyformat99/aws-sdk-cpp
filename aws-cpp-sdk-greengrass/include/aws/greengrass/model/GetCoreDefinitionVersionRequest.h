﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetCoreDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetCoreDefinitionVersionRequest();
    Aws::String SerializePayload() const override;


    /**
     * core definition Id
     */
    inline const Aws::String& GetCoreDefinitionId() const{ return m_coreDefinitionId; }

    /**
     * core definition Id
     */
    inline void SetCoreDefinitionId(const Aws::String& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = value; }

    /**
     * core definition Id
     */
    inline void SetCoreDefinitionId(Aws::String&& value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId = std::move(value); }

    /**
     * core definition Id
     */
    inline void SetCoreDefinitionId(const char* value) { m_coreDefinitionIdHasBeenSet = true; m_coreDefinitionId.assign(value); }

    /**
     * core definition Id
     */
    inline GetCoreDefinitionVersionRequest& WithCoreDefinitionId(const Aws::String& value) { SetCoreDefinitionId(value); return *this;}

    /**
     * core definition Id
     */
    inline GetCoreDefinitionVersionRequest& WithCoreDefinitionId(Aws::String&& value) { SetCoreDefinitionId(std::move(value)); return *this;}

    /**
     * core definition Id
     */
    inline GetCoreDefinitionVersionRequest& WithCoreDefinitionId(const char* value) { SetCoreDefinitionId(value); return *this;}


    /**
     * core definition version Id
     */
    inline const Aws::String& GetCoreDefinitionVersionId() const{ return m_coreDefinitionVersionId; }

    /**
     * core definition version Id
     */
    inline void SetCoreDefinitionVersionId(const Aws::String& value) { m_coreDefinitionVersionIdHasBeenSet = true; m_coreDefinitionVersionId = value; }

    /**
     * core definition version Id
     */
    inline void SetCoreDefinitionVersionId(Aws::String&& value) { m_coreDefinitionVersionIdHasBeenSet = true; m_coreDefinitionVersionId = std::move(value); }

    /**
     * core definition version Id
     */
    inline void SetCoreDefinitionVersionId(const char* value) { m_coreDefinitionVersionIdHasBeenSet = true; m_coreDefinitionVersionId.assign(value); }

    /**
     * core definition version Id
     */
    inline GetCoreDefinitionVersionRequest& WithCoreDefinitionVersionId(const Aws::String& value) { SetCoreDefinitionVersionId(value); return *this;}

    /**
     * core definition version Id
     */
    inline GetCoreDefinitionVersionRequest& WithCoreDefinitionVersionId(Aws::String&& value) { SetCoreDefinitionVersionId(std::move(value)); return *this;}

    /**
     * core definition version Id
     */
    inline GetCoreDefinitionVersionRequest& WithCoreDefinitionVersionId(const char* value) { SetCoreDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_coreDefinitionId;
    bool m_coreDefinitionIdHasBeenSet;

    Aws::String m_coreDefinitionVersionId;
    bool m_coreDefinitionVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
