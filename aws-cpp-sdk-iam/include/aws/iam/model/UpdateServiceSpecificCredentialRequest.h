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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/StatusType.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UpdateServiceSpecificCredentialRequest : public IAMRequest
  {
  public:
    UpdateServiceSpecificCredentialRequest();
    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * you do not specify this value, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * you do not specify this value, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * you do not specify this value, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * you do not specify this value, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * you do not specify this value, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * you do not specify this value, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * you do not specify this value, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The unique identifier of the service-specific credential.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that can consist of any upper or lowercased
     * letter or digit.</p>
     */
    inline const Aws::String& GetServiceSpecificCredentialId() const{ return m_serviceSpecificCredentialId; }

    /**
     * <p>The unique identifier of the service-specific credential.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that can consist of any upper or lowercased
     * letter or digit.</p>
     */
    inline void SetServiceSpecificCredentialId(const Aws::String& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = value; }

    /**
     * <p>The unique identifier of the service-specific credential.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that can consist of any upper or lowercased
     * letter or digit.</p>
     */
    inline void SetServiceSpecificCredentialId(Aws::String&& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = std::move(value); }

    /**
     * <p>The unique identifier of the service-specific credential.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that can consist of any upper or lowercased
     * letter or digit.</p>
     */
    inline void SetServiceSpecificCredentialId(const char* value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId.assign(value); }

    /**
     * <p>The unique identifier of the service-specific credential.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that can consist of any upper or lowercased
     * letter or digit.</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithServiceSpecificCredentialId(const Aws::String& value) { SetServiceSpecificCredentialId(value); return *this;}

    /**
     * <p>The unique identifier of the service-specific credential.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that can consist of any upper or lowercased
     * letter or digit.</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithServiceSpecificCredentialId(Aws::String&& value) { SetServiceSpecificCredentialId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the service-specific credential.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that can consist of any upper or lowercased
     * letter or digit.</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithServiceSpecificCredentialId(const char* value) { SetServiceSpecificCredentialId(value); return *this;}


    /**
     * <p>The status to be assigned to the service-specific credential.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status to be assigned to the service-specific credential.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status to be assigned to the service-specific credential.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status to be assigned to the service-specific credential.</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status to be assigned to the service-specific credential.</p>
     */
    inline UpdateServiceSpecificCredentialRequest& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_serviceSpecificCredentialId;
    bool m_serviceSpecificCredentialIdHasBeenSet;

    StatusType m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
