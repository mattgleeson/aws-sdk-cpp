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
#include <aws/elasticloadbalancing/model/AdditionalAttribute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

AdditionalAttribute::AdditionalAttribute() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AdditionalAttribute::AdditionalAttribute(const XmlNode& xmlNode) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

AdditionalAttribute& AdditionalAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(!keyNode.IsNull())
    {
      m_key = StringUtils::Trim(keyNode.GetText().c_str());
      m_keyHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::Trim(valueNode.GetText().c_str());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void AdditionalAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

}

void AdditionalAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keyHasBeenSet)
  {
      oStream << location << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
