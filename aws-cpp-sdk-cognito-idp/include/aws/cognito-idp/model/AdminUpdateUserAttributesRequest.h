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
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AttributeType.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update the user's attributes as an
   * administrator.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminUpdateUserAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminUpdateUserAttributesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& AddUserAttributes(const AttributeType& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& AddUserAttributes(AttributeType&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

  private:
    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
    Aws::String m_username;
    bool m_usernameHasBeenSet;
    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
