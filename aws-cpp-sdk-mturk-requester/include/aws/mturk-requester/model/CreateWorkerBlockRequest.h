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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API CreateWorkerBlockRequest : public MTurkRequest
  {
  public:
    CreateWorkerBlockRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline CreateWorkerBlockRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline CreateWorkerBlockRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Worker to block.</p>
     */
    inline CreateWorkerBlockRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline CreateWorkerBlockRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline CreateWorkerBlockRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A message explaining the reason for blocking the Worker. This parameter
     * enables you to keep track of your Workers. The Worker does not see this
     * message.</p>
     */
    inline CreateWorkerBlockRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
