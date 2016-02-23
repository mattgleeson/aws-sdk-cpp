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
#include <aws/route53/model/ResourceRecordSetRegion.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int us_east_1_HASH = HashingUtils::HashString("us-east-1");
static const int us_west_1_HASH = HashingUtils::HashString("us-west-1");
static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");
static const int eu_west_1_HASH = HashingUtils::HashString("eu-west-1");
static const int eu_central_1_HASH = HashingUtils::HashString("eu-central-1");
static const int ap_southeast_1_HASH = HashingUtils::HashString("ap-southeast-1");
static const int ap_southeast_2_HASH = HashingUtils::HashString("ap-southeast-2");
static const int ap_northeast_1_HASH = HashingUtils::HashString("ap-northeast-1");
static const int sa_east_1_HASH = HashingUtils::HashString("sa-east-1");
static const int cn_north_1_HASH = HashingUtils::HashString("cn-north-1");

namespace Aws
{
namespace Route53
{
namespace Model
{
namespace ResourceRecordSetRegionMapper
{


ResourceRecordSetRegion GetResourceRecordSetRegionForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == us_east_1_HASH)
  {
     return ResourceRecordSetRegion::us_east_1;
  }
  else if (hashCode == us_west_1_HASH)
  {
     return ResourceRecordSetRegion::us_west_1;
  }
  else if (hashCode == us_west_2_HASH)
  {
     return ResourceRecordSetRegion::us_west_2;
  }
  else if (hashCode == eu_west_1_HASH)
  {
     return ResourceRecordSetRegion::eu_west_1;
  }
  else if (hashCode == eu_central_1_HASH)
  {
     return ResourceRecordSetRegion::eu_central_1;
  }
  else if (hashCode == ap_southeast_1_HASH)
  {
     return ResourceRecordSetRegion::ap_southeast_1;
  }
  else if (hashCode == ap_southeast_2_HASH)
  {
     return ResourceRecordSetRegion::ap_southeast_2;
  }
  else if (hashCode == ap_northeast_1_HASH)
  {
     return ResourceRecordSetRegion::ap_northeast_1;
  }
  else if (hashCode == sa_east_1_HASH)
  {
     return ResourceRecordSetRegion::sa_east_1;
  }
  else if (hashCode == cn_north_1_HASH)
  {
     return ResourceRecordSetRegion::cn_north_1;
  }
  return ResourceRecordSetRegion::NOT_SET;
}

Aws::String GetNameForResourceRecordSetRegion(ResourceRecordSetRegion enumValue)
{
  switch(enumValue)
  {
  case ResourceRecordSetRegion::us_east_1:
    return "us-east-1";
  case ResourceRecordSetRegion::us_west_1:
    return "us-west-1";
  case ResourceRecordSetRegion::us_west_2:
    return "us-west-2";
  case ResourceRecordSetRegion::eu_west_1:
    return "eu-west-1";
  case ResourceRecordSetRegion::eu_central_1:
    return "eu-central-1";
  case ResourceRecordSetRegion::ap_southeast_1:
    return "ap-southeast-1";
  case ResourceRecordSetRegion::ap_southeast_2:
    return "ap-southeast-2";
  case ResourceRecordSetRegion::ap_northeast_1:
    return "ap-northeast-1";
  case ResourceRecordSetRegion::sa_east_1:
    return "sa-east-1";
  case ResourceRecordSetRegion::cn_north_1:
    return "cn-north-1";
  default:
    return "";
  }
}

} // namespace ResourceRecordSetRegionMapper
} // namespace Model
} // namespace Route53
} // namespace Aws