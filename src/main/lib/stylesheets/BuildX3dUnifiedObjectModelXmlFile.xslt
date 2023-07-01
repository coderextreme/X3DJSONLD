<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
		version="2.0"
        xmlns:xs="http://www.w3.org/2001/XMLSchema"
		xmlns:fn="http://www.w3.org/2005/xpath-functions"
        xmlns:saxon="http://saxon.sf.net"
        xmlns:xsd="http://www.w3.org/2001/XMLSchema-instance">
            <!--
        extension-element-prefixes="saxon xs">
                saxon:trace="true"
                xmlns:saxon="http://icl.com/saxon"
                xmlns:date="http://exslt.org/dates-and-times"
                xmlns:xeena="../content/profile.dtd"
                xmlns:x3d="../content/x3d-3.3.xsd"
            -->
  <xsl:param name="LinkDom" select="true()"/>

<!--	XSL namespaces are in transition!  Tools are slow to catch up.
    ***	Edit the topmost stylesheet tag on line 2 of this file to match the xmlns namespace URI for your XSL tool. ***
	W3C:
	Saxon:           <xsl:stylesheet xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>
	IBM XSLEditor:   <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform/1.0'>
	IE 5:            <xsl:stylesheet xmlns:xsl='http://www.w3.org/TR/WD-xsl'>
	XT:              <xsl:stylesheet xmlns:xsl='http://www.w3.org/XSL/Transform'>
-->

<!--
  <head>
   <meta name="filename"    content="BuildX3dUnifiedObjectModelXmlFile.xslt" />
   <meta name="author"      content="Roy Walmsley" />
   <meta name="created"     content="27 November 2015" />
   <meta name="modified"    content="29 December 2015" />
   <meta name="description" content="XSL stylesheet to walk X3D Schema and generate X3D Unified Object Model (X3DUOM) XML file." />
   <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/BuildX3dUnifiedObjectModelXmlFile.xslt" />
   <meta name="reference"   content="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildX3dUnifiedObjectModelXmlFile.xslt?revision=22300&view=markup" />
   <meta name="reference"   content="BuildX3dUnifiedObjectModelXmlFile.xslt" />
  </head>

Recommended tool:
-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
   Especially necessary since this stylesheet uses saxon-specific extensions for file handling
- Netbeans 7.*

-->
<!-- &nbsp; is &#160; -->

<xsl:output method="xml" encoding="UTF-8" indent="yes" version="1.0" saxon:line-length="1000"/>

<xsl:strip-space elements="*" />

<xsl:variable name="schemaFullVersionNumber">
  <xsl:value-of select="//xs:schema/@version"/>
</xsl:variable>

<xsl:variable name="schemaVersionNumber">
  <xsl:value-of select="substring-before($schemaFullVersionNumber, '.')"/>
  <xsl:text>.</xsl:text>
  <xsl:choose><xsl:when test="contains(substring-after($schemaFullVersionNumber, '.'), '.')">
      <xsl:value-of select="substring-before(substring-after($schemaFullVersionNumber, '.'), '.')"/>
  </xsl:when>
  <xsl:otherwise>
      <xsl:value-of select="substring-after($schemaFullVersionNumber, '.')"/>
  </xsl:otherwise>
  </xsl:choose>
</xsl:variable>
    
    <!-- See X3DJSAIL for original tooltip usage code -->
    <xsl:variable name="x3d.tooltips.path">
		<xsl:text>../tooltips/x3d-4.0.profile.xml</xsl:text>
	</xsl:variable>
	<xsl:variable name="x3d.tooltips.document" select="doc($x3d.tooltips.path)"/>

<!-- ****************** root:  start of file ****************** -->
<xsl:template match="/">

<xsl:message>
  <xsl:text>X3dUnifiedObjectModel:  process X3D schema version </xsl:text>
  <xsl:value-of select="//xs:schema/@version"/>
  <xsl:text> using BuildX3dUnifiedObjectModelXmlFile.xslt </xsl:text>
 </xsl:message>

<!-- ===================================================================================== -->
<!-- Intermediate XML file listing all abstract and concrete nodes -->

<!-- create XML output -->

  <xsl:variable name="nameX3dObjectModelFile">
    <xsl:text>X3dUnifiedObjectModel-</xsl:text>
    <xsl:value-of select="$schemaVersionNumber"/>
    <xsl:text>.xml</xsl:text>
  </xsl:variable>
  
<xsl:result-document  href="{$nameX3dObjectModelFile}" method="xml" version="1.0" encoding="UTF-8" indent="yes">
    
	<!-- TODO create head/meta tags -->
    <xsl:comment>
        <xsl:text> X3D Unified Object Model (X3DUOM) </xsl:text>
        <xsl:value-of select="$nameX3dObjectModelFile"/>
        <xsl:text> </xsl:text>
    </xsl:comment>
    <xsl:text>&#10;</xsl:text>
    <xsl:comment>
        <xsl:text> Online at </xsl:text>
        <xsl:text>https://www.web3d.org/specifications/</xsl:text>
        <xsl:value-of select="$nameX3dObjectModelFile"/>
    <xsl:text> </xsl:text>
    </xsl:comment>
    <xsl:text>&#10;</xsl:text>
    <xsl:comment>
        <xsl:text> This file contains a listing of all abstract and concrete nodes in version </xsl:text>
        <xsl:value-of select="$schemaVersionNumber"/>
        <xsl:text> of X3D </xsl:text>
    </xsl:comment>
    <xsl:text>&#10;</xsl:text>
    <xsl:comment>
        <xsl:text> Generated </xsl:text>
        <xsl:value-of select="current-date()"/>
        <xsl:text> </xsl:text>
        <xsl:value-of select="current-time()"/>
        <xsl:text> </xsl:text>
    </xsl:comment>
    <xsl:text>&#10;</xsl:text>

    <xsl:element name="X3dUnifiedObjectModel">
        <xsl:attribute name="version" select="$schemaVersionNumber"/>
        <xsl:attribute name="xsd:noNamespaceSchemaLocation">X3dUnifiedObjectModel.xsd</xsl:attribute>
        
        <xsl:element name="SimpleTypeEnumerations">
            <xsl:text>&#10;</xsl:text>
            <xsl:text>      </xsl:text>
            <xsl:comment> For schema xs:simpleType with contained xs:enumeration definitions, follow naming convention of name ending in 'Type', 'Choices' (for strict enumeration set) or 'Values' (for suggested tokens). </xsl:comment>
            <xsl:text>&#10;</xsl:text>
            <xsl:for-each select="//xs:schema/xs:simpleType[not(starts-with(@name, 'SF') or starts-with(@name, 'MF'))]"><!-- [*/xs:enumeration or (@name = 'bboxSizeType')] -->
                <xsl:sort select="lower-case(@name)"/>
                <!-- debug diagnostic
                -->
                <xsl:if test="not(//xs:enumeration)">
                    <xsl:message>
                        <xsl:text>*** Warning: found xs:simpleType name='</xsl:text>
                        <xsl:value-of select="@name"/>
                        <xsl:text>' that has no enumerations, xs:restriction/@base=</xsl:text>
                        <xsl:value-of select="xs:restriction/@base"/>
                    </xsl:message>
                </xsl:if>
                <xsl:if test="(//xs:enumeration) and not(ends-with(@name,'Type') or ends-with(@name,'Choices') or ends-with(@name,'Values') or
                                                         ends-with(@name,'AccessTypes') or starts-with(@name,'containerFieldChoices'))">
                    <xsl:message>
                        <xsl:text>*** Warning: found xs:simpleType name='</xsl:text>
                        <xsl:value-of select="@name"/>
                        <xsl:text>' with contained xs:enumeration values that does not follow naming convention of name ending in 'Type', 'Choices' (for strict enumeration set) or 'Values' (for suggested tokens).</xsl:text>
                    </xsl:message>
                </xsl:if>
                    <!-- avoid XML types in X3D Unified Object Model (X3DUOM), use X3D types instead -->
                    <xsl:variable name="name" select="@name"/>
                    <xsl:variable name="derivedType">
                            <xsl:value-of select="//xs:schema/xs:simpleType[(@name=$name)]/xs:restriction/@base"/>
                    </xsl:variable>
                    <xsl:variable name="baseType">
                            <xsl:choose>
                                    <xsl:when test="($derivedType='xs:string')"> <!-- ID, IDREF, xs:token and NMTOKEN are allowed types in this context -->
                                            <xsl:text>SFString</xsl:text>
                                    </xsl:when>
                                    <xsl:otherwise>
                                            <xsl:value-of select="$derivedType"/>
                                    </xsl:otherwise>
                            </xsl:choose>
                    </xsl:variable>

                    <xsl:element name="SimpleType">
                    <xsl:variable name="simpleTypeName" select="translate(@name,'-','')"/>
                    <xsl:attribute name="name" select="$simpleTypeName"/>
					<xsl:if test="(string-length($baseType) > 0)">
						<xsl:attribute name="baseType" select="$baseType"/>
					</xsl:if>
                    <xsl:variable name="defaultValue" select="descendant::xs:attribute[@name='defaultValue']/@default"/>
                    <xsl:if test="(string-length($defaultValue) > 0)">
                        <xsl:attribute name="defaultValue" select="$defaultValue"/>
                    </xsl:if>
                    <xsl:variable name="regularExpression">
                        <xsl:choose>
                            <xsl:when test="(string-length(xs:restriction/xs:pattern/@value) > 0)">
                                <xsl:value-of select="xs:restriction/xs:pattern/@value"/>
                            </xsl:when>
                            <xsl:when test="(string-length(xs:annotation/xs:appinfo/xs:pattern/@value) > 0)">
                                <xsl:value-of select="xs:annotation/xs:appinfo/xs:pattern/@value"/>
                            </xsl:when>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:if test="(string-length($regularExpression) > 0)">
                        <xsl:attribute name="regex" select="normalize-space($regularExpression)"/>
                    </xsl:if>
                    <xsl:variable name="simpleTypeAppinfo" select="xs:annotation/xs:appinfo"/>
                    <xsl:if test="(string-length($simpleTypeAppinfo) > 0)">
                        <xsl:attribute name="appinfo" select="normalize-space($simpleTypeAppinfo)"/>
                    </xsl:if>
                    <xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                        <xsl:attribute name="documentation" select="xs:annotation/xs:documentation/@source"/>
                    </xsl:if>
                    <!-- xsl:comment>*** enumeration loop 1</xsl:comment-->
                    <xsl:for-each select="*/xs:enumeration">
                        <xsl:variable name="enumerationName" select="@value"/>
                        <xsl:variable name="priorIndex" select="preceding-sibling::*[1]//xs:attribute[@name='index']/@fixed"/>
                        <!-- xsl:comment enumeration 1  xsl:comment -->
                        <xsl:element name="enumeration">
                            <xsl:attribute name="value" select="@value"/>
                            <xsl:variable name="aliasName" select="xs:annotation/xs:appinfo/xs:attribute[@name='alias']/@default"/>
                            <xsl:if test="(string-length($aliasName) > 0)">
                                <xsl:attribute name="alias" select="$aliasName"/>
                            </xsl:if>
                            <!-- translate(@value,'-','') do not remove hyphens from enumerations in X3DUOM (e.g. H-Anim), that can happen in language bindings -->
                            <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute">
                                <xsl:variable  name="attributeName"        select="@name"/>
                                <xsl:variable  name="attributeValue"       select="@fixed"/>
                                <xsl:variable  name="attributeType"        select="@type"/>
                                <xsl:variable  name="attributeAlias"       select="@alias"/>
                                <xsl:variable  name="attributeDefault"     select="@default"/>
                                <xsl:variable  name="attributeIndex"       select="../xs:attribute[@name='index']/@fixed"/>
                                <xsl:variable  name="attributeParent"      select="../xs:attribute[@name='parent']/@fixed"/>
                                <!-- debug
                                <xsl:message>
                                    <xsl:value-of select="$simpleTypeName"/>
                                    <xsl:text> enumeration </xsl:text>
                                    <xsl:value-of select="$enumerationName"/>
                                    <xsl:text>, annotation/appinfo/attribute </xsl:text>
                                    <xsl:value-of select="$attributeName"/>
                                    <xsl:text>='</xsl:text>
                                    <xsl:value-of select="$attributeValue"/>
                                    <xsl:text>' type='</xsl:text>
                                    <xsl:value-of select="$attributeType"/>>
                                    <xsl:text>' parent='</xsl:text>
                                    <xsl:value-of select="$attributeParent"/>
                                    <xsl:text>' index#</xsl:text>
                                    <xsl:value-of select="$attributeIndex"/>
                                    <xsl:text> priorIndex#</xsl:text>
                                    <xsl:value-of select="$priorIndex"/>
                                    <xsl:text> </xsl:text>
                                </xsl:message> -->
                                <xsl:choose>
                                    <xsl:when test="($attributeName = 'alias') and (string-length(normalize-space($attributeValue)) > 0) and
                                                    (count(../xs:attribute[@name='alias']) > 1)">
                                        <!-- handle attributes with multiple values -->
                                        <xsl:if test="(count(preceding-sibling::xs:attribute[@name='alias']) = 0)">
                                            <!-- debug diagnostic
                                            <xsl:message>
                                                <xsl:text>*** found </xsl:text>
                                                <xsl:value-of select="$attributeName"/>
                                                <xsl:text> </xsl:text>
                                                <xsl:value-of select="@fixed"/>
                                                <xsl:text> with siblings </xsl:text>
                                                <xsl:for-each select="../xs:attribute[@name='alias']">
                                                    <xsl:sort select="(contains(@fixed,' '))"/>
                                                    <xsl:value-of select="@fixed"/>
                                                    <xsl:if test="not(position() = last())">
                                                        <xsl:text>,</xsl:text>
                                                    </xsl:if>
                                                </xsl:for-each>
                                            </xsl:message> -->
                                            <xsl:attribute name="{$attributeName}">
                                                <xsl:for-each select="../xs:attribute[@name='alias']">
                                                    <xsl:sort select="(contains(@fixed,' '))"/>
                                                    <xsl:value-of select="@fixed"/>
                                                    <xsl:if test="not(position() = last())">
                                                        <xsl:text>,</xsl:text>
                                                    </xsl:if>
                                                </xsl:for-each>
                                            </xsl:attribute>
                                        </xsl:if>
                                    </xsl:when>
                                    <xsl:when test="(string-length(normalize-space($attributeValue)) > 0)">
                                        <!-- handle attributes with single value -->
                                        <xsl:attribute name="{$attributeName}" select="$attributeValue"/>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                <xsl:if test="string-length($appinfo) > 0">
                                    <xsl:attribute name="appinfo">
                                        <xsl:value-of select="$appinfo"/>
                                        <xsl:if test="not(ends-with($appinfo,'.'))">
                                            <xsl:text>.</xsl:text>
                                        </xsl:if>
                                    </xsl:attribute>
                                </xsl:if>
                                <xsl:variable  name="documentationUrl"     select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                <xsl:if test="string-length($documentationUrl) > 0">
                                    <xsl:attribute name="documentation">
                                        <xsl:value-of select="$documentationUrl"/>
                                    </xsl:attribute>
                                    <!-- debug diagnostic -->
                                    <xsl:message>
                                        <xsl:text>*** documentation=</xsl:text>
                                        <xsl:value-of select="$documentationUrl"/>
                                    </xsl:message>
                                </xsl:if>
                                <!-- left/right checks -->
                                <xsl:if test="(starts-with($enumerationName,'l_') and starts-with($attributeValue,'r_')) or
                                              (starts-with($enumerationName,'r_') and starts-with($attributeValue,'l_')) or
                                              (starts-with($enumerationName,'l_') and starts-with($attributeAlias,'r_')) or
                                              (starts-with($enumerationName,'r_') and starts-with($attributeAlias,'l_'))">
                                    <xsl:message>
                                        <xsl:text>*** error in </xsl:text>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> enumeration </xsl:text>
                                        <xsl:value-of select="$enumerationName"/>
                                        <xsl:text>, attributeName </xsl:text>
                                        <xsl:value-of select="$attributeName"/>
                                        <xsl:if test="(string-length($attributeValue) > 0)">
                                                <xsl:text>, attributeValue </xsl:text>
                                                <xsl:value-of select="$attributeValue"/>
                                        </xsl:if>
                                        <xsl:if test="(string-length($attributeAlias) > 0)">
                                                <xsl:text>, attributeAlias </xsl:text>
                                                <xsl:value-of select="$attributeAlias"/>
                                        </xsl:if>
                                        <xsl:if test="(string-length(normalize-space($attributeIndex)) > 0)">
                                            <xsl:text>, </xsl:text>
                                            <xsl:text>index#</xsl:text>
                                            <xsl:value-of select="normalize-space($attributeIndex)"/>
                                            <xsl:text> </xsl:text>
                                        </xsl:if>
                                        <xsl:text>: left/right (l_/r_) prefix mismatch</xsl:text>
                                    </xsl:message>
                                </xsl:if>
                                <!-- debug diagnostic for duplicates
                                <xsl:if test="((@name = 'alias') or (@value = 'alias')) and starts-with(@fixed,'r_carpometacarpal')">
                                    <xsl:message>
                                        <xsl:text>!!! duplicate diagnostic: local-name()=</xsl:text>
                                        <xsl:value-of select="local-name(../../..)"/>
                                        <xsl:text> name='</xsl:text>
                                        <xsl:value-of select="../../../@name"/>
                                        <xsl:text> value='</xsl:text>
                                        <xsl:value-of select="../../../@value"/>
                                        <xsl:text>'/xs:annotation/xs:appinfo/</xsl:text>
                                        <xsl:value-of select="local-name()"/>
                                        <xsl:text> name='</xsl:text>
                                        <xsl:value-of select="@name"/>
                                        <xsl:text> value='</xsl:text>
                                        <xsl:value-of select="@value"/>
                                        <xsl:text>', fixed='</xsl:text>
                                        <xsl:value-of select="@fixed"/>
                                        <xsl:text>' </xsl:text>
                                    </xsl:message>
                                </xsl:if> -->
                                <xsl:if test="(@name = 'alias') and //xs:enumeration[@value = $attributeValue]">
                                    <!-- feature point names must have suffix _tip _view or _pt, and so duplication with those aliases might be allowed, but then DEF names collide -->
                                    <xsl:message>
                                        <xsl:text>*** warning </xsl:text>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> xs:enumeration value='</xsl:text>
                                        <xsl:value-of select="../../../@value"/>
                                        <xsl:text>' name='alias' fixed='</xsl:text>
                                        <xsl:value-of select="@fixed"/>
                                        <xsl:text>' has duplicate xs:enumeration value='</xsl:text>
                                        <xsl:value-of select="$attributeValue"/>
                                        <xsl:text>' defined in xs:simpleType name='</xsl:text>
                                        <xsl:value-of select="//xs:enumeration[@value = $attributeValue]/../../@name"/>
                                        <xsl:text>'</xsl:text>
                                    </xsl:message>
                                </xsl:if>
                                <xsl:if test="preceding::*[local-name() = 'attribute'][(@name = 'alias') and (@fixed = $attributeValue)]">
                                    <!-- feature point names must have suffix _tip _view or _pt, and so duplication with those aliases might be allowed, but then DEF names collide -->
                                    <xsl:message>
                                        <xsl:choose>
                                            <xsl:when test="($simpleTypeName = 'hanimFeaturePointNameValues') or 
                                                            (preceding::*[local-name() = 'attribute'][(@name = 'alias') and (@fixed = $attributeValue)]/../../../../../@name = 'hanimFeaturePointNameValues')">
                                                <xsl:text>*** info  </xsl:text>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:text>*** error </xsl:text>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> </xsl:text>
                                        <xsl:value-of select="$enumerationName"/>
                                        <xsl:text> alias </xsl:text>
                                        <xsl:value-of select="$attributeValue"/>
                                        
                                        <xsl:text> is duplicated in xs:simpleType name='</xsl:text>
                                        <xsl:value-of select="preceding::*[local-name() = 'attribute'][(@name = 'alias') and (@fixed = $attributeValue)]/../../../../../@name"/>
                                        <xsl:text>' enumeration value='</xsl:text>
                                        <xsl:value-of select="preceding::*[local-name() = 'attribute'][(@name = 'alias') and (@fixed = $attributeValue)]/../../../@value"/>
                                        <xsl:text>'</xsl:text>
                                        <!--
                                        <xsl:text> xs:attribute name='</xsl:text>
                                        <xsl:value-of select="preceding::*[local-name() = 'attribute'][(@name = 'alias') and (@fixed = $attributeValue)]/@name"/>
                                        <xsl:text>' fixed='</xsl:text>
                                        <xsl:value-of select="preceding::*[local-name() = 'attribute'][(@name = 'alias') and (@fixed = $attributeValue)]/@fixed"/>
                                        <xsl:text>'</xsl:text>
                                                -->
                                    </xsl:message>
                                </xsl:if>
                                <!-- sequential index check; note segments 98 99 100 (prior to l_carpal_distal_phalanx_1) are unused -->
                                <xsl:if test="starts-with($schemaFullVersionNumber,'4') and 
                                              ($attributeName='index') and 
										       not(($enumerationName = 'humanoid_root') or ($enumerationName = 'sacrum') or ($enumerationName = 'skull_vertex')) and
                                               not($enumerationName = 'l_carpal_distal_phalanx_1') and
                                               not(number($attributeIndex) = number($priorIndex) + 1)">
                                    <xsl:message>
                                        <xsl:text>*** error in </xsl:text>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> enumeration </xsl:text>
										<xsl:value-of select="$enumerationName"/>
                                        <xsl:if test="(string-length(normalize-space($attributeIndex)) > 0)">
                                            <xsl:text>, </xsl:text>
                                            <xsl:text>index#</xsl:text>
                                            <xsl:value-of select="normalize-space($attributeIndex)"/>
                                            <xsl:text> </xsl:text>
                                        </xsl:if>
                                        <xsl:value-of select="$enumerationName"/>
                                        <xsl:text>: $priorIndex=</xsl:text>
                                        <xsl:value-of select="$priorIndex"/>
                                        <xsl:text> is not sequential</xsl:text>
                                    </xsl:message>
                                </xsl:if>
                                <!-- referential consistency checks; note annotation values apparently not checked by typing in XML Spy -->
                                <xsl:if test="starts-with($schemaFullVersionNumber,'4') and 
                                              (($attributeType='loaType') and ((number($attributeValue) lt -1) or (number($attributeValue) gt 4) or (string-length(normalize-space($attributeValue)) = 0))) or
                                              (($attributeType=  'jointNameValues') and not(//xs:simpleType[@name=  'jointNameValues']/xs:restriction/xs:enumeration[@value = $attributeValue])) or
                                              (($attributeType='segmentNameValues') and not(//xs:simpleType[@name='segmentNameValues']/xs:restriction/xs:enumeration[@value = $attributeValue]))">
                                    <xsl:message>
                                        <xsl:text>*** error in </xsl:text>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> enumeration </xsl:text>
                                        <xsl:if test="(string-length(normalize-space($attributeIndex)) > 0)">
                                            <xsl:text>index#</xsl:text>
                                            <xsl:value-of select="normalize-space($attributeIndex)"/>
                                            <xsl:text> </xsl:text>
                                        </xsl:if>
                                        <xsl:value-of select="enumerationName"/>
                                        <xsl:text>: </xsl:text>
                                        <xsl:value-of select="$attributeName"/>
                                        <xsl:text>='</xsl:text>
                                        <xsl:value-of select="$attributeValue"/>
                                        <xsl:text>' type='</xsl:text>
                                        <xsl:value-of select="$attributeType"/>
                                        <xsl:text>' has illegal value</xsl:text>
                                    </xsl:message>
                                </xsl:if>
                                <!-- LOA consistency check for segments and joints -->
                                <xsl:variable name="matchingJointLoaValue"   select="//xs:simpleType[@name=  'jointNameValues']/xs:restriction/xs:enumeration[@value = $attributeParent]//xs:attribute[@name = 'loa']/@fixed"/>
                                <xsl:variable name="matchingSegmentLoaValue" select="//xs:simpleType[@name='segmentNameValues']/xs:restriction/xs:enumeration[@value = $attributeParent]//xs:attribute[@name = 'loa']/@fixed"/>
                                <xsl:if test="starts-with($schemaFullVersionNumber,'4') and
								              not(($attributeParent= 'humanoid_root')        and ($attributeName='loa') and    ($attributeValue = '1')) and
                                              ((($simpleTypeName = 'segmentNameValues')      and ($attributeName='loa') and not($attributeValue = $matchingJointLoaValue)) or
                                               (($simpleTypeName = 'featurePointNameValues') and ($attributeName='loa') and not($attributeValue = $matchingSegmentLoaValue)))">
                                    <xsl:message>
                                        <xsl:text>*** error in </xsl:text>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> enumeration </xsl:text>
                                        <xsl:if test="(string-length(normalize-space($attributeIndex)) > 0)">
                                            <xsl:text>index#</xsl:text>
                                            <xsl:value-of select="normalize-space($attributeIndex)"/>
                                            <xsl:text> </xsl:text>
                                        </xsl:if>
                                        <xsl:value-of select="$enumerationName"/>
                                        <xsl:text>: </xsl:text>
                                        <xsl:value-of select="$attributeName"/>
                                        <xsl:text>='</xsl:text>
                                        <xsl:value-of select="$attributeValue"/>
                                        <xsl:text>' parent='</xsl:text>
                                        <xsl:value-of select="$attributeParent"/>
                                        <xsl:text>' has mismatched loa='</xsl:text>
                                        <xsl:value-of select="$matchingJointLoaValue"/>
										<!-- or -->
                                        <xsl:value-of select="$matchingSegmentLoaValue"/>
                                        <xsl:text>'</xsl:text>
                                    </xsl:message>
                                </xsl:if>
                                <xsl:variable name="aliasErrorMessageHeader">
                                        <xsl:text>*** error in </xsl:text>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> enumeration </xsl:text>
                                        <xsl:if test="(string-length(normalize-space($attributeIndex)) > 0)">
                                            <xsl:text>index#</xsl:text>
                                            <xsl:value-of select="normalize-space($attributeIndex)"/>
                                            <xsl:text> </xsl:text>
                                        </xsl:if>
                                        <xsl:value-of select="$enumerationName"/>
                                        <xsl:text>: </xsl:text>
                                        <xsl:value-of select="$attributeName"/>
                                        <xsl:text>='</xsl:text>
                                        <xsl:value-of select="$attributeValue"/>
                                        <xsl:text>' parent='</xsl:text>
                                        <xsl:value-of select="$attributeParent"/>
                                        <xsl:text>' alias='</xsl:text>
                                        <xsl:value-of select="$attributeAlias"/>
                                        <xsl:text>'</xsl:text>
                                </xsl:variable>
                                <!-- duplicate alias check -->
                                <!-- TODO fix warning -->
                                <xsl:variable name="matchingJointAliasValue"   select="//xs:simpleType[@name=       'jointNameValues']/xs:restriction/xs:enumeration[@name != $enumerationName]//xs:attribute[@name = 'alias'][@fixed = $attributeAlias]/@fixed"/>
                                <xsl:variable name="matchingSegmentAliasValue" select="//xs:simpleType[@name=     'segmentNameValues']/xs:restriction/xs:enumeration[@name != $enumerationName]//xs:attribute[@name = 'alias'][@fixed = $attributeAlias]/@fixed"/>
                                <xsl:variable name="matchingFeatureAliasValue" select="//xs:simpleType[@name='featurePointNameValues']/xs:restriction/xs:enumeration[@name != $enumerationName]//xs:attribute[@name = 'alias'][@fixed = $attributeAlias]/@fixed"/>
                                <xsl:if test="(starts-with($schemaFullVersionNumber,'4') and 
                                              (string-length($attributeAlias) > 0) and
                                              ((string-length($matchingJointAliasValue)   > 0) or
                                               (string-length($matchingSegmentAliasValue) > 0) or
                                               (string-length($matchingFeatureAliasValue) > 0)))">
                                    <xsl:message>
                                        <xsl:value-of select="$aliasErrorMessageHeader"/>
                                        <xsl:text> has matching alias value</xsl:text>
                                        <xsl:if test="(string-length($matchingJointAliasValue) > 0)">
                                                <xsl:text>, joint </xsl:text>
                                                <xsl:value-of select="$matchingJointAliasValue"/>
                                        </xsl:if>
                                        <xsl:if test="(string-length($matchingSegmentAliasValue) > 0)">
                                                <xsl:text>, segment </xsl:text>
                                                <xsl:value-of select="$matchingSegmentAliasValue"/>
                                        </xsl:if>
                                        <xsl:if test="(string-length($matchingFeatureAliasValue) > 0)">
                                                <xsl:text>, feature point </xsl:text>
                                                <xsl:value-of select="$matchingFeatureAliasValue"/>
                                        </xsl:if>
                                    </xsl:message>
                                </xsl:if>
                            </xsl:for-each>
                            <xsl:if test="(string-length(normalize-space(xs:annotation/xs:appinfo)) > 0)">
                                <xsl:attribute name="appinfo" select="normalize-space(xs:annotation/xs:appinfo)"/>
                            </xsl:if>
                            <xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                                    <xsl:attribute name="documentation" select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                    <!-- debug diagnostic
                                    <xsl:message>
                                        <xsl:text>*** xs:documentation/@source=</xsl:text>
                                        <xsl:value-of select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                    </xsl:message> -->
                            </xsl:if>
                            <xsl:variable name="enumerationAppinfo" select="xs:annotation/xs:appinfo"/>
                            <xsl:if test="(string-length(normalize-space($enumerationAppinfo)) > 0)">
                                    <xsl:attribute name="appinfo" select="normalize-space($enumerationAppinfo)"/>
                            </xsl:if>
                            <xsl:variable name="enumerationDocumentation" select="xs:annotation/xs:documentation/@source"/>
                            <xsl:choose>
                                    <xsl:when test="(string-length(normalize-space($enumerationDocumentation)) > 0)">
                                            <xsl:attribute name="documentation" select="normalize-space($enumerationDocumentation)"/>
                                            <!-- debug diagnostic
                                            <xsl:message>
                                                <xsl:text>*** $enumerationDocumentation=</xsl:text>
                                                <xsl:value-of select="normalize-space($enumerationDocumentation)"/>
                                            </xsl:message> -->
                                    </xsl:when>
                                    <xsl:when test="starts-with($schemaFullVersionNumber,'4') and 
                                                    (($simpleTypeName = 'featurePointNameValues') or ($simpleTypeName = 'jointNameValues') or ($simpleTypeName = 'segmentNameValues'))">
                                            <xsl:message>
                                        <xsl:text>*** error in </xsl:text>
                                        <xsl:value-of select="$simpleTypeName"/>
                                        <xsl:text> enumeration </xsl:text>
                                        <xsl:value-of select="$enumerationName"/>
                                        <xsl:text>: missing documentation url </xsl:text>
                                    </xsl:message>
                                    </xsl:when>
                            </xsl:choose>
                            <xsl:if test="($name='profileNames')">
								<xsl:variable name="nodeList" select="translate(normalize-space(substring-after($enumerationAppinfo,'Allowed X3D nodes for this profile are:')),'.','')"/>
								<!-- get statementList from Core profile enumeration appinfo within profileNames -->
								<xsl:variable name="statementList">
									<xsl:choose>
										<xsl:when test="(@value='Core')">
											<xsl:value-of select="translate(normalize-space(substring-before(substring-after(                    xs:annotation/xs:appinfo,'Allowed X3D statements for all profiles are:'),'Allowed X3D nodes for this profile are:')),'.','')"/>
										</xsl:when>
										<xsl:otherwise>
											<xsl:value-of select="translate(normalize-space(substring-before(substring-after(../*[@value='Core']/xs:annotation/xs:appinfo,'Allowed X3D statements for all profiles are:'),'Allowed X3D nodes for this profile are:')),'.','')"/>
										</xsl:otherwise>
									</xsl:choose>
								</xsl:variable>
								<xsl:for-each select="tokenize($nodeList,' ')">
									<xsl:element name="allowedElement">
										<xsl:value-of select="."/>
									</xsl:element>
								</xsl:for-each>
								<xsl:for-each select="tokenize($statementList,' ')">
									<xsl:element name="allowedElement">
										<xsl:value-of select="."/>
									</xsl:element>
								</xsl:for-each>
							</xsl:if>
						</xsl:element>
					</xsl:for-each>
                        </xsl:element>
                </xsl:for-each>
        </xsl:element>
        
        <!-- check for duplicated field name within accessType enumeration lists -->
        <xsl:for-each select="//xs:simpleType[ends-with(@name,'AccessTypes')]//xs:enumeration">
            <xsl:sort select="@value"/>
            <xsl:variable name="accessType" select="substring-before(../../@name,'AccessTypes')"/>
            <xsl:variable name="fieldName" select="@value"/>
                <!-- <xsl:message>
                    <xsl:text>*** </xsl:text>
                    <xsl:value-of select="$fieldName"/>
                </xsl:message>
                 and  (count(following-sibling::*[@value=$fieldName]) > 0) -->
            <xsl:if test="(count(//xs:simpleType[ends-with(@name,'AccessTypes')]//xs:enumeration[@value=$fieldName]) > 1)">
                <xsl:message>
                    <xsl:text>*** field '</xsl:text>
                    <xsl:value-of select="$fieldName"/>
                    <xsl:text>' has multiple accessType values including '</xsl:text>
                    <xsl:value-of select="$accessType"/>
                    <xsl:text>'</xsl:text>
                    <xsl:text> for (</xsl:text>
                    <xsl:for-each select="//xs:element//xs:appinfo        /xs:attribute[(@name=$fieldName) and not(@name='field')][(substring-before(@fixed,'Field')=$accessType)]
                                        | //xs:element//xs:appinfo        /xs:element  [(@name=$fieldName) and not(@name='field')][(substring-before(@fixed,'Field')=$accessType)]
                                        | //xs:element//xs:complexContent//xs:attribute[(@name=$fieldName) and not(@name='field')][($accessType = 'inputOutput') or (string-length($accessType) = 0)]">
                        <xsl:if test="(position() > 1)">
                            <xsl:text> </xsl:text>
                        </xsl:if>
                        <xsl:value-of select="ancestor::xs:element/@name"/>
                    </xsl:for-each>
                    <xsl:text>)</xsl:text>
                    <!-- schema diagnostic -->
                    <xsl:if test="(count(//xs:element//xs:appinfo        /xs:attribute[(@name=$fieldName) and not(@name='field')][(substring-before(@fixed,'Field')=$accessType)]
                                        | //xs:element//xs:appinfo        /xs:element  [(@name=$fieldName) and not(@name='field')][(substring-before(@fixed,'Field')=$accessType)]
                                        | //xs:element//xs:complexContent//xs:attribute[(@name=$fieldName) and not(@name='field')][($accessType = 'inputOutput') or (string-length($accessType) = 0)]) = 0)">
                        <xsl:text> *** none found, check correctness of list </xsl:text>
                        <xsl:value-of select="$accessType"/>
                        <xsl:text>AccessTypes</xsl:text>
                    </xsl:if>
                </xsl:message>
            </xsl:if>
        </xsl:for-each>

        <xsl:element name="FieldTypes">
            <xsl:for-each select="//xs:schema/xs:simpleType[starts-with(@name, 'SF') or starts-with(@name, 'MF')]">
                <xsl:sort select="substring(@name, 3)"/>
                <xsl:sort select="substring(@name, 1, 2)" order="descending"/><!-- SF MF -->
                <xsl:variable name="fieldType" select="@name"/>
				<!--
	<xs:simpleType name="SFBool">
		<xs:annotation>
			<xs:appinfo>
				<xs:attribute name="defaultValue" type="SFBool" default="true"/>
				-->
				<xsl:if test="not(xs:annotation/xs:appinfo/xs:attribute[@name = 'defaultValue']/@type = $fieldType)">
					<xsl:message>
						<xsl:text>*** Error, X3D XML schema simpleType </xsl:text>
						<xsl:value-of select="$fieldType"/>
						<xsl:text> has mistaken type='</xsl:text>
						<xsl:value-of select="xs:annotation/xs:appinfo/xs:attribute[@name = 'defaultValue']/@type"/>
						<xsl:text>'</xsl:text>
					</xsl:message>
				</xsl:if>
                <xsl:variable name="defaultValue" select="descendant::xs:attribute[@name='defaultValue']/@default"/>
                <xsl:variable name="regularExpression">
					<xsl:choose>
						<xsl:when test="(string-length(xs:restriction/xs:pattern/@value) > 0)">
							<xsl:value-of select="xs:restriction/xs:pattern/@value"/>
						</xsl:when>
						<xsl:when test="(string-length(xs:annotation/xs:appinfo/xs:pattern/@value) > 0)">
							<xsl:value-of select="xs:annotation/xs:appinfo/xs:pattern/@value"/>
						</xsl:when>
						<xsl:when test="($fieldType = 'SFNode') or ($fieldType = 'MFNode')">
							<!-- ignore -->
						</xsl:when>
						<xsl:otherwise>
							<xsl:message>
								<xsl:text>*** No regular expression pattern found for </xsl:text>
								<xsl:value-of select="$fieldType"/>
							</xsl:message>
						</xsl:otherwise>
					</xsl:choose>
				</xsl:variable>
                <xsl:element name="FieldType">
                    <xsl:attribute name="type" select="$fieldType"/>
                    <xsl:attribute name="tupleSize">
                        <xsl:choose>
                            <xsl:when test="contains($fieldType,'Matrix4')">
                                <xsl:text>16</xsl:text>
                            </xsl:when>
                            <xsl:when test="contains($fieldType,'Matrix3')">
                                <xsl:text>9</xsl:text>
                            </xsl:when>
                            <xsl:when test="contains($fieldType,'Int32')">
                                <xsl:text>1</xsl:text>
                            </xsl:when>
                            <xsl:when test="contains($fieldType,'4') or contains($fieldType,'ColorRGBA') or contains($fieldType,'Rotation')">
                                <xsl:text>4</xsl:text>
                            </xsl:when>
                            <xsl:when test="contains($fieldType,'3') or contains($fieldType,'Color')">
                                <xsl:text>3</xsl:text>
                            </xsl:when>
                            <xsl:when test="contains($fieldType,'2')">
                                <xsl:text>2</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>1</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:attribute>
                    <xsl:attribute name="isArray">
                        <xsl:choose>
                            <xsl:when test="starts-with($fieldType,'MF')">
                                <xsl:text>true</xsl:text>
                            </xsl:when>
                            <xsl:when test="starts-with($fieldType,'SF')">
                                <xsl:text>false</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text></xsl:text>
								<xsl:message>
									<xsl:text>*** unexpected fieldType </xsl:text>
									<xsl:value-of select="$fieldType"/>
									<xsl:text>, isArray remains undefined</xsl:text>
								</xsl:message>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:attribute>
					<!-- always define FieldType defaultValue even if empty -->
					<xsl:attribute name="defaultValue" select="$defaultValue"/>
                    <xsl:if test="(string-length($regularExpression) > 0)">
						<xsl:attribute name="regex" select="$regularExpression"/>
                    </xsl:if>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:documentation/text())) > 0">
                            <xsl:attribute name="specificationSection" select="normalize-space(xs:annotation/xs:documentation/text())"/>
                        </xsl:if>
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                        <xsl:if test="string-length($appinfo) > 0">
                                    <xsl:attribute name="appinfo">
                                        <xsl:value-of select="$appinfo"/>
                                        <xsl:if test="not(ends-with($appinfo,'.'))">
                                            <xsl:text>.</xsl:text>
                                        </xsl:if>
                                    </xsl:attribute>
                        </xsl:if>
                        <xsl:variable name="baseType" select="normalize-space(xs:restriction/@base)"/>
                        <xsl:if test="(string-length($baseType) > 0)"> <!--  and ($baseType != 'xs:string') -->
                            <xsl:element name="Inheritance">
                                <xsl:attribute name="baseType" select="$baseType"/>
                                <xsl:choose>
                                    <xsl:when test="starts-with($fieldType,'MF')">
                                        <xsl:attribute name="x3dType"><xsl:text>X3DArrayField</xsl:text></xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="starts-with($fieldType,'SF')">
                                        <xsl:attribute name="x3dType"><xsl:text>X3DField</xsl:text></xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                            </xsl:element>
                        </xsl:if>
                    </xsl:element>
                </xsl:element>
            </xsl:for-each>
        </xsl:element>
        
        <xsl:element name="AbstractObjectTypes">
            <xsl:for-each select="//xs:schema/xs:complexType[ends-with(@name,'Object')]">
                <xsl:sort select="lower-case(@name)"/>
                <xsl:variable name="abstractObjectName" select="@name"/>
                <xsl:element name="AbstractObjectType">
                    <xsl:attribute name="name" select="$abstractObjectName"/>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:documentation/text())) > 0">
                            <xsl:attribute name="specificationSection" select="normalize-space(xs:annotation/xs:documentation/text())"/>
                        </xsl:if>
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                        <xsl:if test="string-length($appinfo) > 0">
                                    <xsl:attribute name="appinfo">
                                        <xsl:value-of select="$appinfo"/>
                                        <xsl:if test="not(ends-with($appinfo,'.'))">
                                            <xsl:text>.</xsl:text>
                                        </xsl:if>
                                    </xsl:attribute>
                        </xsl:if>
                        <xsl:if test="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']">
                            <xsl:element name="componentInfo">
                                <xsl:attribute name="name" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']/@fixed"/>
                                <xsl:attribute name="level" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentLevel']/@fixed"/>
                            </xsl:element>
                        </xsl:if>
                        <xsl:for-each select="xs:attributeGroup">
                            <xsl:variable name="attributeGroupRef" select="@ref"/>
							<!-- create field for each attribute in this attributeGroup -->
							<xsl:for-each select="/xs:schema/xs:attributeGroup[@name = $attributeGroupRef]/xs:attribute">
								<!-- debug diagnostic
								<xsl:message>
									<xsl:text>*** Node </xsl:text>
									<xsl:value-of select="$abstractObjectName"/>
									<xsl:text> has xs:attributeGroup/@ref=</xsl:text>
									<xsl:value-of select="$attributeGroupRef"/>
									<xsl:text>, creating field for xs:attribute/@name=</xsl:text>
									<xsl:value-of select="@name"/>
								</xsl:message>
								 -->
								<xsl:call-template name="doField">
									<xsl:with-param name="containerName" select="$abstractObjectName"/>
								</xsl:call-template>
							</xsl:for-each>
                        </xsl:for-each>
                        <xsl:for-each select="xs:attribute | xs:complexContent/xs:extension/xs:attribute[(@name!='containerField') and (@name!='componentName') and (@name!='componentLevel')]">
                            <xsl:sort select="lower-case(@name)"/>
                            <xsl:call-template name="doField">
                                <xsl:with-param name="containerName" select="$abstractObjectName"/>
                            </xsl:call-template>
                        </xsl:for-each>
                    </xsl:element>
                </xsl:element>
            </xsl:for-each>           
        </xsl:element>
        
        <xsl:element name="AbstractNodeTypes">
            <xsl:for-each select="//xs:schema/xs:complexType[not(@name='X3DNodeMixedContent') and not(ends-with(@name,'Object'))]">
                <xsl:sort select="lower-case(@name)"/>
                <xsl:variable name="abstractNodeTypeName" select="@name"/>
                <xsl:element name="AbstractNodeType">
                    <xsl:attribute name="name" select="$abstractNodeTypeName"/>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:documentation/text())) > 0">
                            <xsl:attribute name="specificationSection" select="normalize-space(xs:annotation/xs:documentation/text())"/>
                        </xsl:if>
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:documentation/text())) > 0">
                            <xsl:attribute name="specificationSection" select="normalize-space(xs:annotation/xs:documentation/text())"/>
                        </xsl:if>
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:choose>
                            <xsl:when test="string-length(normalize-space(xs:annotation/xs:appinfo/text())) > 0">
                                <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                <xsl:if test="string-length($appinfo) > 0">
                                    <xsl:attribute name="appinfo">
                                        <xsl:value-of select="$appinfo"/>
                                        <xsl:if test="not(ends-with($appinfo,'.'))">
                                            <xsl:text>.</xsl:text>
                                            <xsl:message>
                                                <xsl:text>*** Warning: AbstractNodeType name='</xsl:text>
                                                <xsl:value-of select="@name"/><xsl:text>' inconsistency in XML Schema appinfo prose does not end with a period.</xsl:text>
                                            </xsl:message>
                                            <xsl:message>
                                                <xsl:text>    "</xsl:text>
                                                <xsl:value-of select="$appinfo"/>
                                                <xsl:text>"</xsl:text>
                                            </xsl:message>
                                        </xsl:if>
                                    </xsl:attribute>
                                </xsl:if>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:message>
                                    <xsl:text>*** Warning: AbstractNodeType name='</xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text>' has no appinfo description in XML Schema.</xsl:text>
                                </xsl:message>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:if test="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']">
                            <xsl:element name="componentInfo">
                                <xsl:attribute name="name" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']/@fixed"/>
                                <xsl:attribute name="level" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentLevel']/@fixed"/>
                            </xsl:element>
                        </xsl:if>
                        <xsl:choose>
                            <xsl:when test="xs:complexContent/xs:extension[@base]">
                                <xsl:element name="Inheritance">
                                    <xsl:attribute name="baseType" select="xs:complexContent/xs:extension/@base"/>
                                </xsl:element>
                                <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface']">
                                    <xsl:element name="AdditionalInheritance">
                                        <xsl:attribute name="baseType" select="@default"/>
                                    </xsl:element>
                                </xsl:for-each>
                            </xsl:when>
                            <xsl:when test="xs:annotation/xs:appinfo/xs:attribute[(@name='additionalInterface') and (ends-with(@default, 'Node'))]">
                                <xsl:element name="Inheritance">
                                    <xsl:attribute name="baseType" select="xs:annotation/xs:appinfo/xs:attribute[ends-with(@default, 'Node')]/@default"/>
                                </xsl:element>
                                <xsl:if test="xs:annotation/xs:appinfo/xs:attribute[(@name='additionalInterface') and (ends-with(@default, 'Object'))]">
                                    <xsl:element name="AdditionalInheritance">
                                        <xsl:attribute name="baseType" select="xs:annotation/xs:appinfo/xs:attribute[ends-with(@default, 'Object')]/@default"/>
                                    </xsl:element>
                                </xsl:if>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:variable name="baseType">
                            <xsl:value-of select="xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="parentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$baseType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="grandParentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="greatGrandParentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="greatGreatGrandParentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="nonNodeFieldList" select="
    //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attribute
  | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
  | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:complexContent/xs:extension/xs:attribute
  | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attribute
  | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
  | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/xs:extension/xs:attribute
  | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attribute
  | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
  | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/xs:extension/xs:attribute
  | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attribute
  | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:attribute
  | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/xs:extension/xs:attribute
  | //xs:schema/xs:complexType[@name=$baseType]/xs:attribute
  | //xs:schema/xs:complexType[@name=$baseType]/xs:annotation/xs:appinfo/xs:attribute
  | //xs:schema/xs:complexType[@name=$baseType]/xs:complexContent/xs:extension/xs:attribute
  | xs:complexContent/xs:extension/xs:attribute
  | xs:annotation/xs:appinfo/xs:attribute
  | xs:complexType/xs:attribute
  | xs:attribute"/>
                        <xsl:variable name="nodeFieldList" select="
                              //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$baseType]/xs:annotation/xs:appinfo/xs:element
                            | xs:annotation/xs:appinfo/xs:appinfo/xs:element
                            | xs:annotation/xs:appinfo/xs:element"/>
                        <xsl:variable name="allFieldList" select="$nonNodeFieldList[(@name!='containerField') and (@name!='additionalInterface') and (@name!='componentName') and (@name!='componentLevel')] | $nodeFieldList"/>
                        <xsl:for-each select="$allFieldList">
                            <xsl:sort select="lower-case(@name)"/>
							<!-- debug diagnostic
							<xsl:if test="($abstractNodeTypeName='X3DViewpointNode') and (@name='description')">
								<xsl:message>
									<xsl:text>*** found X3DViewpointNode description in XML schema...</xsl:text>
								</xsl:message>
							</xsl:if> -->
                                <xsl:call-template name="doField">
                                    <xsl:with-param name="containerName" select="$abstractNodeTypeName"/>
                                </xsl:call-template>
                        </xsl:for-each>
                        <xsl:for-each select="
                              //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$baseType]/xs:attributeGroup
							| xs:attributeGroup">
                            <xsl:variable name="attributeGroupRef" select="@ref"/>
							<!-- create field for each attribute in this attributeGroup -->
							<xsl:for-each select="/xs:schema/xs:attributeGroup[@name = $attributeGroupRef]/xs:attribute">
								<!-- debug diagnostic
								<xsl:message>
									<xsl:text>*** Abstract node type </xsl:text>
									<xsl:value-of select="$abstractNodeTypeName"/>
									<xsl:text> has xs:attributeGroup/@ref=</xsl:text>
									<xsl:value-of select="$attributeGroupRef"/>
									<xsl:text>, creating field for xs:attribute/@name=</xsl:text>
									<xsl:value-of select="@name"/>
								</xsl:message>
								 -->
								<xsl:call-template name="doField">
									<xsl:with-param name="containerName" select="$abstractNodeTypeName"/>
								</xsl:call-template>
							</xsl:for-each>
                        </xsl:for-each>
                        <xsl:if test="xs:complexContent/xs:extension/xs:attribute[@name='containerField']">
                            <xsl:element name="containerField">
                                <xsl:attribute name="default" select="xs:complexContent/xs:extension/xs:attribute[@name='containerField']/@default"/>
                                <xsl:attribute name="type" select="xs:complexContent/xs:extension/xs:attribute[@name='containerField']/@type"/>
                            </xsl:element>
                        </xsl:if>
                        <xsl:variable name="contentModelGroups" select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | //xs:schema/xs:complexType[@name=$baseType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | .//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]"/>
                        <xsl:variable name="contentModelElements" select="xs:complexContent//xs:element[(@ref!='IS')]
                                              | //xs:schema/xs:complexType[@name=$baseType]//xs:element[(@ref!='IS')]
                                        | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:element[(@ref!='IS')]
                                   | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:element[(@ref!='IS')]
                              | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:element[(@ref!='IS')]"/>
                        <xsl:variable name="hasContentModel" select="((count($contentModelGroups) + count($contentModelElements)) gt 0)"/>
                        <xsl:if test="$hasContentModel">
                            <xsl:element name="ContentModel">
                                <!-- TODO: Need to handle cases where minOccurs or maxOccurs is present on xs:choice or xs:sequence, e.g. X3DTexture2DNode -->
                                <xsl:for-each select="$contentModelGroups">
                                    <!-- warning - don't sort, or else the repeat check doesn't work properly -->
                                    <xsl:variable name="contentModelGroupName" select="@ref"/>
                                    <!-- avoid repeats -->
                                    <xsl:variable name="currentPosition" select="position()"/>
                                    <xsl:variable name="indexPositions" select="index-of($contentModelGroups/@ref,$contentModelGroupName)"/>
                                    <xsl:if test="$indexPositions[1]=$currentPosition">
                                        <xsl:element name="GroupContentModel">
                                            <xsl:attribute name="name" select="@ref"/>
                                            <xsl:if test="@minOccurs">
                                                <xsl:attribute name="minOccurs" select="@minOccurs"/>
                                            </xsl:if>
                                            <xsl:if test="@maxOccurs">
                                                <xsl:attribute name="maxOccurs" select="@maxOccurs"/>
                                            </xsl:if>
                                        </xsl:element>
                                    </xsl:if>
                                </xsl:for-each>
                                <xsl:for-each select="$contentModelElements">
                                    <!-- warning - don't sort, or else the repeat check doesn't work properly -->
                                    <xsl:variable name="contentModelElementName" select="@ref"/>
                                    <!-- avoid repeats -->
                                    <xsl:variable name="currentPosition" select="position()"/>
                                    <xsl:variable name="indexPositions" select="index-of($contentModelElements/@ref,$contentModelElementName)"/>
                                    <xsl:if test="$indexPositions[1]=$currentPosition">
                                        <xsl:element name="NodeContentModel">
                                            <xsl:attribute name="name" select="@ref"/>
                                            <xsl:if test="@minOccurs">
                                                <xsl:attribute name="minOccurs" select="@minOccurs"/>
                                            </xsl:if>
                                            <xsl:if test="@maxOccurs">
                                                <xsl:attribute name="maxOccurs" select="@maxOccurs"/>
                                            </xsl:if>
                                        </xsl:element>
                                    </xsl:if>
                                </xsl:for-each>
                            </xsl:element>
                        </xsl:if>
                        <xsl:if test="($abstractNodeTypeName = 'X3DArrayField')">
                            <xsl:element name="Inheritance">
                                <xsl:attribute name="x3dType">
                                    <xsl:text>X3DField</xsl:text>
                                </xsl:attribute>
                            </xsl:element>
                        </xsl:if>
                    </xsl:element>
                </xsl:element>
            </xsl:for-each>
        </xsl:element>
        
        <xsl:element name="ConcreteNodes">
            <xsl:for-each select="//xs:schema/xs:element[(*//xs:extension/@base!='X3DStatement') or (not(*//xs:extension/@base))]">
                <xsl:sort select="lower-case(@name)"/>
                <xsl:variable name="concreteNodeName"  select="@name"/>
                <xsl:variable name="initialX3dVersion" select="@initialX3dVersion"/>
                <xsl:element name="ConcreteNode">
                    <xsl:attribute name="name"         select="$concreteNodeName"/>
                    <xsl:if test="(string-length($initialX3dVersion) > 0)">
                        <xsl:attribute name="initialX3dVersion">
                            <xsl:value-of select="$initialX3dVersion"/>
                        </xsl:attribute>
                    </xsl:if>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:variable name="appinfo">
                            <xsl:choose>
                                <xsl:when test="(string-length(normalize-space(xs:annotation/xs:appinfo/text())) > 0)">
                                    <xsl:value-of select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:variable name="tooltipText"><!-- /attribute[@name = $fieldName] -->
                                        <xsl:value-of select="$x3d.tooltips.document//element[@name = $concreteNodeName]/@tooltip" disable-output-escaping="yes"/>
                                    </xsl:variable>
                                    <xsl:variable name="nodeTooltip">
                                        <xsl:if test="(string-length(normalize-space($tooltipText)) > 0)"><!-- doc-available($x3d.tooltips.path) -->
                                            <xsl:value-of select="replace(replace($tooltipText,'&#8734;','infinity'),'&#960;','pi')" disable-output-escaping="yes"/>
                                            <!-- consistent javadoc punctuation -->
                                            <xsl:if test="not(ends-with(normalize-space($tooltipText),'.')) and not(contains($tooltipText,'http')) and not(contains($tooltipText,'mailto')) and not(contains($tooltipText,'ftp'))">
                                                <xsl:text>.</xsl:text>
                                            </xsl:if>
                                        </xsl:if>
                                    </xsl:variable>
                                    <!-- first sentence is topic sentence -->
                                    <xsl:value-of select="normalize-space(substring-before(substring-after($nodeTooltip,']'),'.'))"/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:variable>
                        <!-- debug diagnostic
                        <xsl:message>
                            <xsl:text>*** note: ConcreteNode name='</xsl:text>
                            <xsl:value-of select="@name"/>
                            <xsl:text>' appinfo=</xsl:text>
                            <xsl:value-of select="$appinfo"/>
                        </xsl:message> -->
                        <xsl:choose>
                            <xsl:when test="string-length($appinfo) > 0">
                                <xsl:attribute name="appinfo">
                                    <xsl:value-of select="$appinfo"/>
                                    <xsl:if test="not(ends-with($appinfo,'.'))">
                                        <xsl:text>.</xsl:text>
                                    </xsl:if>
                                </xsl:attribute>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:message>
                                    <xsl:text>*** tooltip note: ConcreteNode name='</xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text>' has no appinfo description in XML Schema or X3D Tooltips.</xsl:text>
                                </xsl:message>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:if test="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']">
                            <xsl:element name="componentInfo">
                                <xsl:attribute name="name" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']/@fixed"/>
                                <xsl:attribute name="level" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentLevel']/@fixed"/>
                            </xsl:element>
                        </xsl:if>
                        <xsl:choose>
                            <xsl:when test="xs:complexType/xs:complexContent/xs:extension[@base]">
                                <xsl:element name="Inheritance">
                                    <xsl:choose>
                                        <xsl:when test="xs:complexType/xs:complexContent/xs:extension[@base = 'X3DNodeMixedContent']">
                                            <xsl:attribute name="baseType">X3DNode</xsl:attribute>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:attribute name="baseType" select="xs:complexType/xs:complexContent/xs:extension/@base"/>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:element>
                                <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute[@name='additionalInterface']">
                                    <xsl:element name="AdditionalInheritance">
                                        <xsl:attribute name="baseType" select="@default"/>
                                    </xsl:element>
                                </xsl:for-each>
                            </xsl:when>
                            <xsl:when test="xs:annotation/xs:appinfo/xs:attribute[(@name='additionalInterface') and (ends-with(@default, 'Node'))]">
                                <xsl:element name="Inheritance">
                                    <xsl:attribute name="baseType" select="xs:annotation/xs:appinfo/xs:attribute[ends-with(@default, 'Node')]/@default"/>
                                </xsl:element>
                                <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute[(@name='additionalInterface') and (ends-with(@default, 'Object'))]">
                                    <xsl:element name="AdditionalInheritance">
                                        <xsl:attribute name="baseType" select="@default"/>
                                    </xsl:element>
                                </xsl:for-each>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:variable name="baseType">
                            <xsl:value-of select="xs:complexType/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="parentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$baseType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="grandParentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="greatGrandParentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="greatGreatGrandParentNodeType">
                            <xsl:value-of select="//xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/xs:extension/@base"/>
                        </xsl:variable>
                        <xsl:variable name="nonNodeFieldList" select="
			      //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attribute
                            | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:complexContent/xs:extension/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attribute
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
			    | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:complexContent/xs:extension/xs:attribute
			    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attribute
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:attribute
			    | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:complexContent/xs:extension/xs:attribute
			    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attribute
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:attribute
			    | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:complexContent/xs:extension/xs:attribute
			    | //xs:schema/xs:complexType[@name=$baseType]/xs:attribute
                            | //xs:schema/xs:complexType[@name=$baseType]/xs:annotation/xs:appinfo/xs:attribute
			    | //xs:schema/xs:complexType[@name=$baseType]/xs:complexContent/xs:extension/xs:attribute
			    | xs:complexType/xs:complexContent/xs:extension/xs:attribute
                            | xs:annotation/xs:appinfo/xs:attribute
			    | xs:complexType/xs:attribute
			    | xs:attribute"/>
                        <xsl:variable name="nodeFieldList" select="
                              //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:annotation/xs:appinfo/xs:element
                            | //xs:schema/xs:complexType[@name=$baseType]/xs:annotation/xs:appinfo/xs:element
                            | xs:annotation/xs:appinfo/xs:element"/>
                        <xsl:variable name="allFieldList" select="$nonNodeFieldList[(@name!='containerField') and (@name!='additionalInterface') and (@name!='componentName') and (@name!='componentLevel')] | $nodeFieldList"/>
                        <xsl:for-each select="$allFieldList">
                            <xsl:sort select="lower-case(@name)"/>
                            
                            <!-- attempting to avoid duplicates -->
                            <!-- debug diagnostic 
                            <xsl:if test="($concreteNodeName = 'ParticleSystem') and ($fieldName = 'geometry')">
                                <xsl:message>
                                    <xsl:text>*** </xsl:text>
                                    <xsl:value-of select="$concreteNodeName"/>
                                    <xsl:text> $fieldName=</xsl:text>
                                    <xsl:value-of select="$fieldName"/>
                                    <xsl:text>, count(preceding::*[@name = $fieldName][@type = 'SFNode'])=</xsl:text>
                                    <xsl:value-of select="count(preceding::*[@name = $fieldName][@type = 'SFNode'])"/>
                                    <xsl:text>, position()=</xsl:text>
                                    <xsl:value-of select="position()"/>
                                    <xsl:text>, prior geometry=</xsl:text>
                                    <xsl:value-of select="preceding::*[@name = $fieldName][@type = 'SFNode']/@name"/>
                                </xsl:message>
                            </xsl:if>
                            <xsl:if test="(count(preceding::*[@name = $fieldName][@type = 'SFNode']) > 0)">
                                <xsl:message>
                                    <xsl:text>*** </xsl:text>
                                    <xsl:value-of select="$concreteNodeName"/>
                                    <xsl:text> $fieldName=</xsl:text>
                                    <xsl:value-of select="$fieldName"/>
                                    <xsl:text>, count(preceding::*[@name = $fieldName][@type = 'SFNode'])=</xsl:text>
                                    <xsl:value-of select="count(preceding::*[@name = $fieldName][@type = 'SFNode'])"/>
                                </xsl:message>
                            </xsl:if>
                            
                            -->
                            <xsl:variable name="fieldName" select="@name"/>
                            <xsl:if test="($concreteNodeName = 'UnlitMaterial') and (@name = 'emissiveColor')">
                                <xsl:message>
                                        <xsl:text>****** found UnlitMaterial emissiveColor, $concreteNodeName=</xsl:text>
                                        <xsl:value-of select="$concreteNodeName"/>
                                        <xsl:text>, @name=</xsl:text>
                                        <xsl:value-of select="@name"/>
                                        <xsl:text>, $fieldName=</xsl:text>
                                        <xsl:value-of select="$fieldName"/>
                                        <xsl:text>, @default=</xsl:text>
                                        <xsl:value-of select="@default"/>
                                        <xsl:text>, position()=</xsl:text>
                                        <xsl:value-of select="position()"/>
                                        <xsl:text>, count(following-sibling::*[@name = $fieldName])=</xsl:text>
                                        <xsl:value-of select="count(following-sibling::*[@name = $fieldName])"/>
                                        <xsl:for-each select="../*">
                                            <xsl:text> </xsl:text>
                                            <xsl:value-of select="@name"/>
                                        </xsl:for-each>
                                </xsl:message>
                            </xsl:if>
                            
                            <!-- avoid duplicating overrides (e.g. UnlitMaterial emissiveColor) -->
                            <xsl:choose>
                                <xsl:when test="($concreteNodeName = 'UnlitMaterial') and (@name = 'emissiveColor') and (@default = '0 0 0')">
                                <xsl:message>
                                    <!-- hack filter -->
                                    <xsl:text>****** skipping overridded UnlitMaterial emissiveColor '0 0 0' </xsl:text>
                                </xsl:message>
                                <xsl:text>&#10;</xsl:text>
                                <xsl:text disable-output-escaping="yes">&lt;!--</xsl:text>
                                <xsl:text>&#10;</xsl:text>
                                    <xsl:call-template name="doField">
                                        <xsl:with-param name="containerName" select="$concreteNodeName"/>
                                    </xsl:call-template>
                                <xsl:text>&#10;</xsl:text>
                                <xsl:text disable-output-escaping="yes">--&gt;</xsl:text>
                                <xsl:text>&#10;</xsl:text>
                                </xsl:when>
                                <xsl:when test="(count(preceding-sibling::*[@name = $fieldName]) = 0)">
                                    <xsl:call-template name="doField">
                                        <xsl:with-param name="containerName" select="$concreteNodeName"/>
                                    </xsl:call-template>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:message>
                                            <xsl:text>****** duplication in $allFieldList </xsl:text>
                                            <xsl:value-of select="$fieldName"/>
                                    </xsl:message>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:for-each>
			<!-- now add attributeGroup attributes -->
                        <xsl:for-each select="
                              //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$grandParentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$parentNodeType]/xs:attributeGroup
                            | //xs:schema/xs:complexType[@name=$baseType]/xs:attributeGroup
							| xs:complexType//xs:attributeGroup">
                            <xsl:variable name="attributeGroupRef" select="@ref"/>
							<!-- create field for each attribute in this attributeGroup -->
							<xsl:for-each select="/xs:schema/xs:attributeGroup[@name = $attributeGroupRef]/xs:attribute">
								<!-- debug diagnostic
								<xsl:message>
									<xsl:text>*** Node </xsl:text>
									<xsl:value-of select="$concreteNodeName"/>
									<xsl:text> has xs:attributeGroup/@ref=</xsl:text>
									<xsl:value-of select="$attributeGroupRef"/>
									<xsl:text>, creating field for xs:attribute/@name=</xsl:text>
									<xsl:value-of select="@name"/>
								</xsl:message>
								 -->
								<xsl:call-template name="doField">
									<xsl:with-param name="containerName" select="$concreteNodeName"/>
								</xsl:call-template>
							</xsl:for-each>
                        </xsl:for-each>
                        <xsl:if test="xs:complexType//xs:attribute[@name='containerField']">
                            <xsl:element name="containerField">
                                <xsl:choose>
                                    <xsl:when test="xs:complexType//xs:attribute[@name='containerField']/@default">
                                        <xsl:attribute name="default" select="xs:complexType//xs:attribute[@name='containerField']/@default"/>
										<xsl:attribute name="type">
											<xsl:choose>
												<xsl:when test="(string-length(xs:complexType//xs:attribute[@name='containerField']/@type) > 0)">
													<xsl:value-of select="xs:complexType//xs:attribute[@name='containerField']/@type"/>
												</xsl:when>
												<xsl:when test="(string-length(xs:complexType//xs:attribute[@name='containerField']/xs:simpleType/xs:restriction/@base) > 0)">
													<xsl:value-of select="xs:complexType//xs:attribute[@name='containerField']/xs:simpleType/xs:restriction/@base"/>
												</xsl:when>
												<xsl:otherwise>
													<xsl:message>
														<xsl:text>*** containerField </xsl:text>
														<xsl:value-of select="xs:complexType//xs:attribute[@name='containerField']/@name"/>
														<xsl:text> missing type definition</xsl:text>
													</xsl:message>
												</xsl:otherwise>
											</xsl:choose>
										</xsl:attribute>
                                        <!-- xsl:comment>*** enumeration loop 2</xsl:comment-->
                                        <xsl:for-each select="xs:complexType//xs:attribute[@name='containerField']/xs:simpleType/xs:restriction/xs:enumeration">
                                            <xsl:sort select="xs:complexType//xs:attribute[@name='containerField']/@default"/>
                                            <!-- xsl:comment enumeration 2  xsl:comment -->
                                            <xsl:element name="enumeration">
                                                <xsl:attribute name="value" select="@value"/>
                                                <xsl:variable name="aliasName" select="xs:annotation/xs:appinfo/xs:attribute[@name='alias']/@default"/>
                                                <xsl:if test="(../@base='SFInt32') and (string-length($aliasName) > 0)">
                                                    <xsl:attribute name="alias" select="$aliasName"/>
                                                </xsl:if>
												<xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute">
													<xsl:if test="(string-length(normalize-space(@fixed)) > 0)">
														<xsl:attribute name="{@name}" select="normalize-space(@fixed)"/>
													</xsl:if>
												</xsl:for-each>
                                                <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                                <xsl:if test="string-length($appinfo) > 0">
                                                    <xsl:attribute name="appinfo">
                                                        <xsl:value-of select="$appinfo"/>
                                                        <xsl:if test="not(ends-with($appinfo,'.'))">
                                                            <xsl:text>.</xsl:text>
                                                        </xsl:if>
                                                    </xsl:attribute>
                                                </xsl:if>
                                            	<xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                                                    <xsl:attribute name="documentation" select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                                </xsl:if>
                                            </xsl:element>
                                        </xsl:for-each>
                                    </xsl:when>
                                    <xsl:when test="xs:complexType//xs:attribute[@name='containerField']/@fixed">
                                        <xsl:attribute name="name" select="xs:complexType//xs:attribute[@name='containerField']/@fixed"/>
                                        <!-- xsl:comment enumeration 3  xsl:comment -->
                                        <xsl:element name="enumeration">
                                            <xsl:attribute name="value" select="xs:complexType//xs:attribute[@name='containerField']/@fixed"/>
                                            <xsl:variable name="aliasName" select="xs:annotation/xs:appinfo/xs:attribute[@name='alias']/@default"/>
                                            <xsl:if test="(../@base='SFInt32') and (string-length($aliasName) > 0)">
                                                <xsl:attribute name="alias" select="$aliasName"/>
                                            </xsl:if>
											<xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute">
												<xsl:if test="(string-length(normalize-space(@fixed)) > 0)">
													<xsl:attribute name="{@name}" select="normalize-space(@fixed)"/>
												</xsl:if>
											</xsl:for-each>
                                            <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                            <xsl:if test="string-length($appinfo) > 0">
                                                <xsl:attribute name="appinfo">
                                                    <xsl:value-of select="$appinfo"/>
                                                    <xsl:if test="not(ends-with($appinfo,'.'))">
                                                        <xsl:text>.</xsl:text>
                                                    </xsl:if>
                                                </xsl:attribute>
                                            </xsl:if>
                                            <xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                                                <xsl:attribute name="documentation" select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                            </xsl:if>
                                        </xsl:element>
                                    </xsl:when>
                                </xsl:choose>
                            </xsl:element>
                        </xsl:if>
                        <xsl:variable name="contentModelGroups" select="//xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | //xs:schema/xs:complexType[@name=$baseType]//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]
                                                                      | .//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]"/>
                        <!-- Can't include /xs:complexContent in the first part of the test because of nodes that are defined with no inheritance, e.g. ComposedShader -->
                        <xsl:variable name="contentModelElements" select="xs:complexType//xs:element[(@ref!='IS')]
                                              | //xs:schema/xs:complexType[@name=$baseType]//xs:element[(@ref!='IS')]
                                        | //xs:schema/xs:complexType[@name=$parentNodeType]//xs:element[(@ref!='IS')]
                                   | //xs:schema/xs:complexType[@name=$grandParentNodeType]//xs:element[(@ref!='IS')]
                              | //xs:schema/xs:complexType[@name=$greatGrandParentNodeType]//xs:element[(@ref!='IS')]
                         | //xs:schema/xs:complexType[@name=$greatGreatGrandParentNodeType]//xs:element[(@ref!='IS')]"/>
                        <xsl:variable name="hasSourceText" select="xs:complexType[@mixed='true']"/>
                        <xsl:variable name="hasContentModel" select="((count($contentModelGroups) + count($contentModelElements)) gt 0) or ($hasSourceText)"/>
                        <xsl:if test="$hasContentModel">
                            <xsl:element name="ContentModel">
                                <xsl:for-each select="$contentModelElements">
                                    <!-- warning - don't sort, or else the repeat check doesn't work properly -->
                                    <xsl:variable name="contentModelElementName" select="@ref"/>
                                    <!-- avoid repeats -->
                                    <xsl:variable name="currentPosition" select="position()"/>
                                    <xsl:variable name="indexPositions" select="index-of($contentModelElements/@ref,$contentModelElementName)"/>
                                    <xsl:if test="$indexPositions[1]=$currentPosition">
                                        <xsl:choose>
                                            <xsl:when test="@ref = 'field'">
                                                <xsl:element name="FieldDeclaration">
                                                    <xsl:if test="@minOccurs">
                                                        <xsl:attribute name="minOccurs" select="@minOccurs"/>
                                                    </xsl:if>
                                                    <xsl:if test="@maxOccurs">
                                                        <xsl:attribute name="maxOccurs" select="@maxOccurs"/>
                                                    </xsl:if>
                                                </xsl:element>
                                            </xsl:when>
                                        </xsl:choose>
                                    </xsl:if>
                                </xsl:for-each>
                                <!-- TODO: Need to handle cases where minOccurs or maxOccurs is present on xs:choice or xs:sequence, e.g. X3DTexture2DNode -->
                                <xsl:for-each select="$contentModelGroups">
                                    <!-- warning - don't sort, or else the repeat check doesn't work properly -->
                                    <xsl:variable name="contentModelGroupName" select="@ref"/>
                                    <!-- avoid repeats -->
                                    <xsl:variable name="currentPosition" select="position()"/>
                                    <xsl:variable name="indexPositions" select="index-of($contentModelGroups/@ref,$contentModelGroupName)"/>
                                    <xsl:if test="$indexPositions[1]=$currentPosition">
                                        <xsl:element name="GroupContentModel">
                                            <xsl:attribute name="name" select="@ref"/>
                                            <xsl:if test="@minOccurs">
                                                <xsl:attribute name="minOccurs" select="@minOccurs"/>
                                            </xsl:if>
                                            <xsl:if test="@maxOccurs">
                                                <xsl:attribute name="maxOccurs" select="@maxOccurs"/>
                                            </xsl:if>
                                        </xsl:element>
                                    </xsl:if>
                                </xsl:for-each>
                                <xsl:for-each select="$contentModelElements">
                                    <!-- warning - don't sort, or else the repeat check doesn't work properly -->
                                    <xsl:variable name="contentModelElementName" select="@ref"/>
                                    <!-- avoid repeats -->
                                    <xsl:variable name="currentPosition" select="position()"/>
                                    <xsl:variable name="indexPositions" select="index-of($contentModelElements/@ref,$contentModelElementName)"/>
                                    <xsl:if test="$indexPositions[1]=$currentPosition">
                                        <xsl:choose>
                                            <xsl:when test="@ref != 'field'">
                                                <xsl:element name="NodeContentModel">
                                                    <xsl:attribute name="name" select="@ref"/>
                                                    <xsl:if test="@minOccurs">
                                                        <xsl:attribute name="minOccurs" select="@minOccurs"/>
                                                    </xsl:if>
                                                    <xsl:if test="@maxOccurs">
                                                        <xsl:attribute name="maxOccurs" select="@maxOccurs"/>
                                                    </xsl:if>
                                                </xsl:element>
                                            </xsl:when>
                                        </xsl:choose>
                                    </xsl:if>
                                </xsl:for-each>
                                <xsl:if test="$hasSourceText">
                                    <xsl:element name="SourceText"/>
                                </xsl:if>
                            </xsl:element>
                        </xsl:if>
                    </xsl:element>
                </xsl:element>
            </xsl:for-each>            
        </xsl:element>

        <xsl:element name="Statements">
            <xsl:for-each select="//xs:schema/xs:element[*//xs:extension/@base='X3DStatement']">
                <xsl:sort select="lower-case(@name)"/>
                <xsl:variable name="statementName" select="@name"/>
                <xsl:element name="Statement">
                    <xsl:attribute name="name" select="$statementName"/>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                        <xsl:if test="string-length($appinfo) > 0">
                                    <xsl:attribute name="appinfo">
                                        <xsl:value-of select="$appinfo"/>
                                        <xsl:if test="not(ends-with($appinfo,'.'))">
                                            <xsl:text>.</xsl:text>
                                        </xsl:if>
                                    </xsl:attribute>
                        </xsl:if>
                        <xsl:if test="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']">
                            <xsl:element name="componentInfo">
                                <xsl:attribute name="name" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']/@fixed"/>
                                <xsl:attribute name="level" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentLevel']/@fixed"/>
                            </xsl:element>
                        </xsl:if>
                        <xsl:variable name="nonNodeFieldList" select="
							  xs:complexType/xs:complexContent/xs:extension/xs:attribute |
                              xs:annotation/xs:appinfo/xs:attribute | 
                              /xs:schema/xs:attributeGroup[@name = 'globalAttributes']/xs:attribute"/>
                        <xsl:variable name="nodeFieldList" select="xs:annotation/xs:appinfo/xs:element"/>
                        <xsl:variable name="allFieldList" select="$nonNodeFieldList[(@name!='containerField') and (@name!='additionalInterface') and (@name!='componentName') and (@name!='componentLevel')] | $nodeFieldList"/>
						
                        <xsl:for-each select="$allFieldList">
                            <xsl:sort select="lower-case(@name)"/>
							<!-- debug diagnostic
							<xsl:if test="($statementName = 'X3D')">
								<xsl:message>
									<xsl:text>*** statement=</xsl:text>
									<xsl:value-of select="$statementName"/>
									<xsl:text>, field=</xsl:text>
									<xsl:value-of select="@name"/>
								</xsl:message>
							</xsl:if> -->

                            <xsl:call-template name="doField">
                                <xsl:with-param name="containerName" select="$statementName"/>
                                <xsl:with-param name="isStatement">true</xsl:with-param>
                            </xsl:call-template>
                        </xsl:for-each>
                            <!-- debug diagnostic
                        <xsl:for-each select="/xs:schema/xs:attributeGroup[@name = 'globalAttributes']/xs:attribute">
                            <xsl:message>
                                <xsl:text>*** Node </xsl:text>
                                <xsl:value-of select="$statementName"/>
                                <xsl:text> has xs:attributeGroup/@ref=</xsl:text>
                                <xsl:value-of select="$attributeGroupRef"/>
                                <xsl:text>, creating field for xs:attribute/@name=</xsl:text>
                                <xsl:value-of select="@name"/>
                            </xsl:message>
                            <xsl:call-template name="doField">
                                <xsl:with-param name="containerName" select="$statementName"/>
                                <xsl:with-param name="isStatement">true</xsl:with-param>
                            </xsl:call-template>
                        </xsl:for-each>
                             -->
                        <xsl:variable name="contentModelGroups" select=".//xs:group[(@ref != 'ChildContentModelSceneGraphStructure')]"/>
                        <xsl:variable name="contentModelElements" select="xs:complexType//xs:element[(@ref!='IS')]"/>
                        <xsl:variable name="hasContentModel" select="((count($contentModelGroups) + count($contentModelElements)) gt 0)"/>
                        <xsl:if test="$hasContentModel">
                            <xsl:element name="ContentModel">
                                <xsl:for-each select="$contentModelGroups">
                                    <!-- warning - don't sort, or else the repeat check doesn't work properly -->
                                    <xsl:variable name="contentModelGroupName" select="@ref"/>
                                    <!-- avoid repeats -->
                                    <xsl:variable name="currentPosition" select="position()"/>
                                    <xsl:variable name="indexPositions" select="index-of($contentModelGroups/@ref,$contentModelGroupName)"/>
                                    <xsl:if test="$indexPositions[1]=$currentPosition">
                                        <xsl:element name="GroupContentModel">
                                            <xsl:attribute name="name" select="@ref"/>
                                            <xsl:if test="@minOccurs">
                                                <xsl:attribute name="minOccurs" select="@minOccurs"/>
                                            </xsl:if>
                                            <xsl:if test="@maxOccurs">
                                                <xsl:attribute name="maxOccurs" select="@maxOccurs"/>
                                            </xsl:if>
                                        </xsl:element>
                                    </xsl:if>
                                </xsl:for-each>
                                <xsl:for-each select="$contentModelElements">
                                    <!-- warning - don't sort, or else the repeat check doesn't work properly -->
                                    <xsl:variable name="contentModelElementName" select="@ref"/>
                                    <!-- avoid repeats -->
                                    <xsl:variable name="currentPosition" select="position()"/>
                                    <xsl:variable name="indexPositions" select="index-of($contentModelElements/@ref,$contentModelElementName)"/>
                                    <xsl:if test="$indexPositions[1]=$currentPosition">
                                        <xsl:element name="StatementContentModel">
                                            <xsl:attribute name="name" select="@ref"/>
                                            <xsl:if test="@minOccurs">
                                                <xsl:attribute name="minOccurs" select="@minOccurs"/>
                                            </xsl:if>
                                            <xsl:if test="@maxOccurs">
                                                <xsl:attribute name="maxOccurs" select="@maxOccurs"/>
                                            </xsl:if>
                                        </xsl:element>
                                    </xsl:if>
                                </xsl:for-each>
                             </xsl:element>
                        </xsl:if>
                    </xsl:element>
                </xsl:element>
            </xsl:for-each>            
        </xsl:element>
    </xsl:element>
            
</xsl:result-document>
    
</xsl:template>

<xsl:template name="doField">
    <xsl:param name="containerName"/>
    <xsl:param name="isStatement">false</xsl:param>
	<!-- debug diagnostic
	<xsl:if test="(@name='style') and ($containerName='ROUTE')">
		<xsl:message>
			<xsl:text>*** doField name=</xsl:text>
			<xsl:value-of select="@name"/>
			<xsl:text> (containerName=</xsl:text>
			<xsl:value-of select="$containerName"/>
			<xsl:text>) found! @type=</xsl:text>
			<xsl:value-of select="@type"/>
		</xsl:message>
	</xsl:if>
	 -->
    <xsl:variable name="fieldName" select="@name"/>
    <xsl:variable name="givenType">
        <xsl:choose>
            <xsl:when test="(string-length(xs:simpleType/xs:restriction/@base) > 0)">
                <xsl:value-of      select="xs:simpleType/xs:restriction/@base"/>
            </xsl:when>
            <xsl:when test="(string-length(xs:simpleType/xs:extension/@base) > 0)">
                <xsl:value-of      select="xs:simpleType/xs:extension/@base"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="@type"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    <xsl:variable name="constrainedTypeParent"      select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/@base"/>
    <xsl:variable name="constrainedTypeGrandParent" select="//xs:schema/xs:simpleType[@name=$constrainedTypeParent]/xs:restriction/@base"/>
    <xsl:variable name="baseType">
        <xsl:choose>
                <!-- ignore built-in types, no baseType needed -->
                <xsl:when test="starts-with($givenType,'SF') or starts-with($givenType,'MF')">
                    <xsl:text></xsl:text>
                </xsl:when>
                <xsl:when test="starts-with($givenType,'xs:')">
                    <xsl:value-of select="$givenType"/>
                </xsl:when>
                <xsl:when test="//xs:schema/xs:simpleType[(@name=$givenType) and not(starts-with(@name,'SF')) and not(starts-with(@name,'MF'))]/xs:restriction[not(@base = @type)]/@base">
                    <!-- baseType is some other schema-defined simpleType -->
                    <xsl:value-of select="@type"/>
                </xsl:when>
                <!-- optional SFString/MFString enumeration list, referenced as part of an element -->
                <xsl:when test="(parent::xs:appinfo) and (ancestor::xs:element//xs:complexContent//xs:attribute[@name = $fieldName])">
                    <!-- optional enumerations are defined here within appinfo, so get baseType MFString/SFString from corresponding validation definition of attribute -->
                    <xsl:value-of select="@type"/>
                </xsl:when>
                <!-- optional SFString/MFString enumeration list , referenced as part of a complexType -->
                <xsl:when test="(parent::xs:appinfo) and (ancestor::xs:complexType//xs:complexContent//xs:attribute[@name = $fieldName])">
                    <!-- optional enumerations are defined here within appinfo, so get baseType MFString/SFString from corresponding validation definition of attribute -->
                    <xsl:value-of select="@type"/>
                </xsl:when>
                <!-- required SFString/MFString enumeration list -->
                <xsl:when test="ends-with(//xs:simpleType[@name = $givenType]/xs:restriction/@base,'FString')">
                    <!-- required enumerations are defined here within field, so get baseType of enumeration type directly from local schema entry -->
                    <xsl:value-of select="@type"/>
                </xsl:when>
            </xsl:choose>
	</xsl:variable>
                
    <xsl:variable name="additionalInterfaces">
        <xsl:variable name="intermediateResult">
            <xsl:for-each select="ancestor::xs:element/xs:annotation/xs:appinfo/xs:attribute[@name = 'additionalInterface']/@default
                                | ancestor::xs:element/xs:complexType/xs:complexContent/*/@base">
                <xsl:sort select="local-name(.)"/>
                
                <xsl:variable name="thisAdditionalInterface" select="."/>
                <!-- filter out thisAdditionalInterface if it does not include current field -->
                <xsl:variable           name="parentNodeType" select="ancestor::xs:schema/xs:complexType[@name = $thisAdditionalInterface]/xs:complexContent/xs:extension/@base"/>
                <xsl:variable      name="grandparentNodeType" select="ancestor::xs:schema/xs:complexType[@name = $parentNodeType         ]/xs:complexContent/xs:extension/@base"/>
                <xsl:variable name="greatgrandparentNodeType" select="ancestor::xs:schema/xs:complexType[@name = $grandparentNodeType    ]/xs:complexContent/xs:extension/@base"/>
                    
                    <!-- debug diagnostic  -->
                    <xsl:if test="($containerName='AudioClip') and ($fieldName='description')">
                        <xsl:message>
                            <xsl:text>*** </xsl:text>
                            <xsl:value-of select="$containerName"/>
                            <xsl:text> </xsl:text>
                            <xsl:value-of select="$fieldName"/>
                            <xsl:text> additionalInterface computation:</xsl:text>
                            <xsl:text> computation: $thisAdditionalInterface=</xsl:text>
                            <xsl:value-of select="$thisAdditionalInterface"/>
                            <xsl:text>, $parentNodeType=</xsl:text>
                            <xsl:value-of select="$parentNodeType"/>
                            <xsl:text>, $grandparentNodeType=</xsl:text>
                            <xsl:value-of select="$grandparentNodeType"/>
                            <xsl:text>, $greatgrandparentNodeType=</xsl:text>
                            <xsl:value-of select="$greatgrandparentNodeType"/>
                        </xsl:message>
                    </xsl:if>
                
                <xsl:if test="(count(ancestor::xs:schema/xs:complexType[@name = $thisAdditionalInterface ]//xs:attribute[@name = $fieldName]) > 0) or
                              (count(ancestor::xs:schema/xs:complexType[@name = $parentNodeType          ]//xs:attribute[@name = $fieldName]) > 0) or
                              (count(ancestor::xs:schema/xs:complexType[@name = $grandparentNodeType     ]//xs:attribute[@name = $fieldName]) > 0) or
                              (count(ancestor::xs:schema/xs:complexType[@name = $greatgrandparentNodeType]//xs:attribute[@name = $fieldName]) > 0)">
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="$thisAdditionalInterface"/>
                </xsl:if>
            </xsl:for-each>
        </xsl:variable>
        <xsl:value-of select="translate(normalize-space($intermediateResult), ' ', ',')"/>
    </xsl:variable>
    <xsl:variable name="additionalInterfaceMatch">
        <xsl:for-each select="ancestor::xs:element/xs:annotation/xs:appinfo/xs:attribute[@name = 'additionalInterface']/@default">
            <xsl:variable name="thisAdditionalInterface" select="."/>
            <!-- xs:complexType may (or may not) have intervening xs:complexContent etc. before xs:attribute definitions, e.g. MovieTexture/@repeatS -->
            <xsl:if test="ancestor::xs:schema/xs:complexType[@name = $thisAdditionalInterface]//xs:attribute[@name=$fieldName]">
                <xsl:value-of select="$thisAdditionalInterface"/>
            </xsl:if>
        </xsl:for-each>
    </xsl:variable>
    <xsl:variable name="originInheritedFrom">
        <xsl:choose>
            <xsl:when test="(string-length($additionalInterfaceMatch) > 0)">
                <xsl:value-of select="$additionalInterfaceMatch"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="ancestor::*/@name"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
	
    <xsl:variable name="fieldType">
            <xsl:choose>
                <xsl:when test="starts-with(@type,'SF') or starts-with(@type,'MF')">
                    <xsl:value-of select="@type"/>
                </xsl:when>
                <xsl:when test="starts-with($givenType, 'SF') or starts-with($givenType, 'MF')">
                    <xsl:value-of select="$givenType"/>
                </xsl:when>
                <xsl:when test="//xs:schema/xs:simpleType[(@name=$givenType) and not(starts-with(@name,'SF')) and not(starts-with(@name,'MF'))]/xs:restriction[not(@base = @type)]/@base">
                        <!-- fieldType is found in some other schema-defined simpleType -->
                        <!-- avoid XML types in X3D Unified Object Model (X3DUOM), use X3D types instead -->
                        <xsl:variable name="derivedType">
                            <xsl:value-of select="//xs:schema/xs:simpleType[(@name=$givenType)]/xs:restriction/@base"/>
                        </xsl:variable>
                        <xsl:choose>
                            <xsl:when test="($derivedType = 'xs:string')"><!-- ID, IDREF, xs:token and NMTOKEN are allowed types in this context -->
                                <xsl:text>SFString</xsl:text>
                            </xsl:when>
                            <xsl:when test="($derivedType = 'xs:token') or starts-with($derivedType, 'xs:NMTOKEN') or starts-with($derivedType, 'xs:ID')"><!-- ID, IDREF, xs:token and NMTOKEN are allowed types in this context -->
                                <xsl:text>SFString</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$derivedType"/>
                            </xsl:otherwise>
                        </xsl:choose>
                </xsl:when>
                <xsl:when test="(parent::xs:appinfo) and (ancestor::xs:element//xs:complexContent//xs:attribute[@name = $fieldName])">
                    <!-- optional enumerations defined here, so get MFString/SFString from corresponding validation definition of attribute -->
                    <xsl:value-of select="ancestor::xs:element//xs:complexContent//xs:attribute[@name = $fieldName]/@type"/>
                </xsl:when>
                <xsl:when test="(parent::xs:appinfo) and (ancestor::xs:complexType//xs:complexContent//xs:attribute[@name = $fieldName])">
                    <!-- optional enumerations defined here, so get MFString/SFString from corresponding validation definition of attribute -->
                    <xsl:value-of select="ancestor::xs:complexType//xs:complexContent//xs:attribute[@name = $fieldName]/@type"/>
                </xsl:when>
                <xsl:when test="starts-with($constrainedTypeParent,'SF') or starts-with($constrainedTypeParent,'MF')">
                    <xsl:value-of select="$constrainedTypeParent"/>
                </xsl:when>
                <xsl:when test="($givenType='xs:NMTOKEN') or ($givenType='xs:NMTOKENS') or ($givenType='xs:token') or ($givenType='xs:ID') or ($givenType='xs:IDREF')">
                    <xsl:text>SFString</xsl:text>
                </xsl:when>
                <xsl:when test="($givenType='xs:string')">
                    <!-- used by sourceCode -->
                    <xsl:text>SFString</xsl:text>
                </xsl:when>
                <xsl:when test="($constrainedTypeParent='xs:token' or $constrainedTypeParent='xs:string')">SFString</xsl:when>
                <xsl:when test="($constrainedTypeGrandParent='xs:token' or $constrainedTypeParent='xs:string')">SFString</xsl:when>
                <xsl:otherwise>
                    <xsl:text>TODO-fieldType-error,$givenType=</xsl:text>
                    <xsl:value-of select="$givenType"/>
                </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    <xsl:variable name="fieldAccessType">
        <xsl:choose>
            <xsl:when test="@fixed">
                <xsl:value-of select="substring-before(@fixed, 'Field')" />
            </xsl:when>
            <!-- First choose instances where the Schema defined value does not match the specification.  Be explicit in these cases, avoid defaults. -->
            <xsl:when test="(($containerName='ConeEmitter')           and ($fieldName='angle'))" >inputOutput</xsl:when>
            <xsl:when test="(($containerName='SingleAxisHingeJoint')  and ($fieldName='angle'))" >outputOnly</xsl:when>
            <xsl:when test="(($containerName='NavigationInfo')        and ($fieldName='type'))"  >inputOutput</xsl:when>
            <xsl:when test="(($containerName='ProjectionVolumeStyle') and ($fieldName='type'))"  >inputOutput</xsl:when>
            <xsl:when test="(($containerName='ShaderPart')            and ($fieldName='type'))"  >initializeOnly</xsl:when><!-- TODO Mantis 1306 -->
            <xsl:when test="(($containerName='ShaderProgram')         and ($fieldName='type'))"  >initializeOnly</xsl:when><!-- TODO Mantis 1306 -->
            <xsl:when test="(($containerName='HAnimSegment')          and ($fieldName='mass'))"  >inputOutput</xsl:when>   <!-- TODO Mantis 1307 -->
            <xsl:when test="(($containerName='RigidBody')             and ($fieldName='mass'))"  >inputOutput</xsl:when>   <!-- TODO Mantis 1307 -->
            <!-- TODO if there is an xs:annotation/xs:appinfo/attribute specifying the accessType use that preferentially -->
            <xsl:when test="xs:annotation/xs:appinfo/xs:attribute[@name='accessType']">
                <xsl:value-of select="xs:annotation/xs:appinfo/xs:attribute[@name='accessType']/@fixed"/>
                <xsl:message>
                    <xsl:text>*** found preferential accessType</xsl:text>
                </xsl:message>
            </xsl:when>
            <!-- Now we can choose the Schema-defined value for all the rest -->
            <xsl:when test="//xs:simpleType[@name='inputOnlyAccessTypes']//xs:enumeration[@value=$fieldName]">inputOnly</xsl:when>
            <xsl:when test="//xs:simpleType[@name='outputOnlyAccessTypes']//xs:enumeration[@value=$fieldName]">outputOnly</xsl:when>
            <xsl:when test="//xs:simpleType[@name='inputOutputAccessTypes']//xs:enumeration[@value=$fieldName]">inputOutput</xsl:when>
            <xsl:when test="//xs:simpleType[@name='initializeOnlyAccessTypes']//xs:enumeration[@value=$fieldName]">initializeOnly</xsl:when>
            <xsl:when test="($isStatement='true')">inputOutput</xsl:when>
            <xsl:otherwise>inputOutput</xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    <!-- synonyms are used for field name changes X3D3 to X3D4, and are different than enumeration name alias values -->
	<xsl:variable name="synonym">
        <xsl:value-of select="xs:annotation/xs:appinfo/xs:attribute[@name='synonym']/@fixed"/>
    </xsl:variable>
	<!-- doField debug diagnostic ((($containerName='MetadataSet') or ($containerName='MetadataString')) and (@name='name')) 
    -->
    <xsl:if test="(string-length($synonym) > 0) or (($containerName = 'ParticleSystem') and (($fieldName = 'color') or ($fieldName = 'texCoord')))">
		<xsl:message>
			<xsl:text>*** found </xsl:text>
			<xsl:value-of select="$containerName"/>
			<xsl:text> field name=</xsl:text>
			<xsl:value-of select="@name"/>
			<xsl:text> with</xsl:text>
            <xsl:if test="(string-length($synonym) > 0)">
                <xsl:text> synonym=</xsl:text>
                <xsl:value-of select="$synonym"/>
            </xsl:if>
		</xsl:message>
	    <!-- debug diagnostic 
		<xsl:message>
			<xsl:text>    $givenType=</xsl:text><xsl:value-of select="$givenType"/>
			<xsl:text>, $fieldName=</xsl:text><xsl:value-of select="$fieldName"/>
			<xsl:text>, $baseType=</xsl:text><xsl:value-of select="$baseType"/>
			<xsl:text>, $fieldType=</xsl:text><xsl:value-of select="$fieldType"/>
			<xsl:text>, $fieldAccessType=</xsl:text><xsl:value-of select="$fieldAccessType"/>
			<xsl:text>, $synonym=</xsl:text><xsl:value-of select="$synonym"/>
			<xsl:text>, @default=</xsl:text><xsl:value-of select="@default"/>
			<xsl:text>, parent=</xsl:text><xsl:value-of select="local-name(..)"/>
            <xsl:text>, additionalInterfaceMatch=</xsl:text><xsl:value-of select="$additionalInterfaceMatch"/>
            <xsl:text>, originInheritedFrom=</xsl:text><xsl:value-of select="$originInheritedFrom"/>
		</xsl:message>
        -->
	</xsl:if>
	<!-- debug diagnostic to determine MF types with default values (used for Mantis 1113)
    <xsl:if test="starts-with($fieldType, 'MF') and (string-length(@default) > 0) and not(ends-with($fieldType, 'Node')) and not(ends-with($fieldType, 'String'))">
		<xsl:message>
			<xsl:text>*** found </xsl:text>
			<xsl:value-of select="$containerName"/>
			<xsl:text> field name=</xsl:text>
			<xsl:value-of select="$fieldName"/>
			<xsl:text> type=</xsl:text>
			<xsl:value-of select="$fieldType"/>
			<xsl:text> with non-empty default=</xsl:text>
			<xsl:value-of select="@default"/>
		</xsl:message>
	</xsl:if>
        -->
	
	<!-- some schema field definitions include optional enumerations in the xs:annotation/xs:appinfo section, 
	     let those take precedence over validation definitions in order to avoid duplicate field definitions here -->
	<!-- also be careful when checking relative paths because they vary, thus use of ancestor:: preferred -->
	<xsl:if test="(parent::xs:appinfo) or (not(parent::xs:appinfo) and 
                                           not(ancestor::xs:complexType//xs:annotation/xs:appinfo/xs:attribute[@name = $fieldName]) and
                                           not(    ancestor::xs:element//xs:annotation/xs:appinfo/xs:attribute[@name = $fieldName]) and
                                           not(    ancestor::xs:element//xs:annotation/xs:appinfo/xs:attribute[@name = $fieldName]))">
        <xsl:choose>
            <xsl:when test="((($containerName='ParticleSystem')) and ($fieldName='geometry') and ($originInheritedFrom ='X3DShapeNode'))">
                <!-- avoid duplicate fields when provided by multiple inheritance/interface combinations or annotation documentation -->
                <xsl:message>
                    <xsl:text>*** </xsl:text>
                    <xsl:value-of select="$containerName"/>
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="$fieldName"/>
                    <xsl:text> $originInheritedFrom=</xsl:text>
                    <xsl:value-of select="$originInheritedFrom"/>
                    <xsl:text> has duplicate field, defined by schema annotation and also by </xsl:text>
                    <xsl:value-of select="//xs:element[@name = $containerName]//xs:extension/@base"/>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>    (overrides original annotation to instead require Shape component level 3)</xsl:text>
                </xsl:message>
                <!-- and so avoid adding that duplication here... -->
            </xsl:when>
            <xsl:otherwise>
                <!-- debug diagnostic
                <xsl:if test="($containerName='AudioClip') and (@name='description')">
                    <xsl:message>
                        <xsl:text>    ... made it inside the if... </xsl:text>
                        <xsl:text> $containerName=</xsl:text>
                                        <xsl:value-of select="$containerName"/>
                        <xsl:text>, local-name()=</xsl:text>
                                        <xsl:value-of select="local-name()"/>
                        <xsl:text>, @name=</xsl:text>
                                        <xsl:value-of select="@name"/>
                        <xsl:text>, $fieldName=</xsl:text>
                                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>, @use=</xsl:text>
                                        <xsl:value-of select="@use"/>
                        <xsl:text>, $givenType=</xsl:text>
                                        <xsl:value-of select="$givenType"/>
                        <xsl:text>, $baseType=</xsl:text>
                                        <xsl:value-of select="$baseType"/>
                        <xsl:text>, $fieldAccessType=</xsl:text>
                                        <xsl:value-of select="$fieldAccessType"/>
                        <xsl:text>, $additionalInterfaces=</xsl:text>
                                        <xsl:value-of select="$additionalInterfaces"/>
                        <xsl:text>, $additionalInterfaceMatch=</xsl:text>
                                        <xsl:value-of select="$additionalInterfaceMatch"/>
                        <xsl:text>, xs:simpleType/xs:restriction/@base=</xsl:text>
                                        <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
                        <xsl:text>, ../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/@base=</xsl:text>
                                        <xsl:value-of select="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/@base"/>
                    </xsl:message>
                </xsl:if> -->
                <xsl:element name="field">
                    <xsl:attribute name="name" select="$fieldName"/>
                    <xsl:if test="(string-length($synonym) > 0)">
                        <xsl:attribute name="synonym" select="$synonym"/>
                    </xsl:if>
                    <xsl:attribute name="type" select="$fieldType"/>
                    <xsl:attribute name="accessType" select="$fieldAccessType"/>
                    <!-- default -->
                    <xsl:choose>
                            <xsl:when test="$givenType='SFNode'">
                                <xsl:attribute name="default">NULL</xsl:attribute>
                            </xsl:when>
                            <!-- avoid applying specification-syntax [square brackets] to default values -->
                            <xsl:when test="$givenType='MFNode'">
                                <!-- Don't specify a default value -->
                            </xsl:when>
                            <xsl:when test="(starts-with($fieldType, 'MF')) and (string-length(@default) > 0) and not(starts-with(@default,'X3D'))">
                                <xsl:attribute name="default" select="@default"/>
                            </xsl:when>
                            <xsl:when test="(parent::xs:appinfo) and (string-length(@default) > 0) and not(starts-with(@default,'X3D'))">
                                <xsl:attribute name="default" select="@default"/>
                            </xsl:when>
                            <xsl:when test="(parent::xs:appinfo) and  (string-length(ancestor::xs:element//xs:complexContent//xs:attribute[@name = $fieldName]/@default) > 0)">
                                <xsl:attribute name="default"><xsl:value-of select="(ancestor::xs:element//xs:complexContent//xs:attribute[@name = $fieldName]/@default)"/></xsl:attribute>
                            </xsl:when>
                            <xsl:when test="(parent::xs:appinfo) and  (string-length(ancestor::xs:complexType//xs:complexContent//xs:attribute[@name = $fieldName]/@default) > 0)">
                                <xsl:attribute name="default"><xsl:value-of select="(ancestor::xs:complexType//xs:complexContent//xs:attribute[@name = $fieldName]/@default)"/></xsl:attribute>
                            </xsl:when>
                            <!-- only output the default attribute if a default value is present, otherwise empty -->
                            <xsl:when test="(string-length(@default) > 0) and not(starts-with(@default,'X3D'))">
                                <xsl:attribute name="default" select="@default"/>
                            </xsl:when>
                    </xsl:choose>
                    <!-- min/max -->
                    <xsl:if test="true()">
                        <xsl:choose>
                            <xsl:when test="xs:simpleType/xs:restriction/xs:minInclusive">
                                <xsl:attribute name="minInclusive" select="xs:simpleType/xs:restriction/xs:minInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="xs:simpleType/xs:restriction/xs:minExclusive">
                                <xsl:attribute name="minExclusive" select="xs:simpleType/xs:restriction/xs:minExclusive/@value"/>
                            </xsl:when>
                            <!-- currently in xs:annotation that provides default value for restrictions that follow -->
                            <xsl:when test="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:minInclusive">
                                <xsl:attribute name="minInclusive" select="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:minInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:minExclusive">
                                <xsl:attribute name="minExclusive" select="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:minExclusive/@value"/>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:choose>
                            <xsl:when test="xs:simpleType/xs:restriction/xs:maxInclusive">
                                <xsl:attribute name="maxInclusive" select="xs:simpleType/xs:restriction/xs:maxInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="xs:simpleType/xs:restriction/xs:maxExclusive">
                                <xsl:attribute name="maxExclusive" select="xs:simpleType/xs:restriction/xs:maxExclusive/@value"/>
                            </xsl:when>
                            <!-- currently in xs:annotation that provides default value for restrictions that follow -->
                            <xsl:when test="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:maxInclusive">
                                <xsl:attribute name="maxInclusive" select="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:maxInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:maxExclusive">
                                <xsl:attribute name="maxExclusive" select="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/xs:maxExclusive/@value"/>
                            </xsl:when>
                        </xsl:choose>
                    </xsl:if>
                    <xsl:if test="(starts-with($givenType, 'SF')) or (starts-with($givenType, 'MF'))">
                        <xsl:choose>
                            <xsl:when test="xs:annotation/xs:appinfo/xs:minInclusive">
                                <xsl:attribute name="minInclusive" select="xs:annotation/xs:appinfo/xs:minInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="xs:annotation/xs:appinfo/xs:minExclusive">
                                <xsl:attribute name="minExclusive" select="xs:annotation/xs:appinfo/xs:minExclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="(ends-with($fieldType, 'FColor')) or (ends-with($fieldType, 'FColorRGBA'))">
                                <xsl:attribute name="minInclusive">0</xsl:attribute>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:choose>
                            <xsl:when test="xs:annotation/xs:appinfo/xs:maxInclusive">
                                <xsl:attribute name="maxInclusive" select="xs:annotation/xs:appinfo/xs:maxInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="xs:annotation/xs:appinfo/xs:maxExclusive">
                                <xsl:attribute name="maxExclusive" select="xs:annotation/xs:appinfo/xs:maxExclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="(ends-with($fieldType, 'FColor')) or (ends-with($fieldType, 'FColorRGBA'))">
                                <xsl:attribute name="maxInclusive">1</xsl:attribute>
                            </xsl:when>
                        </xsl:choose>
                    </xsl:if>
                    <xsl:if test="(not(starts-with($givenType, 'SF'))) and (not(starts-with($givenType, 'MF')))">
                        <xsl:choose>
                            <xsl:when test="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:minInclusive">
                                <xsl:attribute name="minInclusive" select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:minInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:minExclusive">
                                <xsl:attribute name="minExclusive" select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:minExclusive/@value"/>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:choose>
                            <xsl:when test="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:maxInclusive">
                                <xsl:attribute name="maxInclusive" select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:maxInclusive/@value"/>
                            </xsl:when>
                            <xsl:when test="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:maxExclusive">
                                <xsl:attribute name="maxExclusive" select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:maxExclusive/@value"/>
                            </xsl:when>
                        </xsl:choose>
                    </xsl:if>
                    <!-- TODO: Decide if we want to keep acceptable types for node fields which are inputOnly or outputOnly -->
                    <xsl:if test="(($givenType='SFNode') or ($givenType='MFNode')) and (string-length(normalize-space(@default)) > 0)">
                        <xsl:variable name="root" select="/"/>
                        <xsl:variable name="accessType" select="@fixed"/>
                        <xsl:variable name="acceptableNodeTypes" select="@default"/>
                        <!-- debug diagnostic
                        <xsl:if test="($acceptableNodeTypes = 'FogCoordinate')">
                            <xsl:message>
                                <xsl:text>*** found field </xsl:text>
                                <xsl:value-of select="$fieldName"/>
                                <xsl:text> default='FogCoordinate' </xsl:text>
                            </xsl:message>
                        </xsl:if>
                        -->
                        <xsl:for-each select="tokenize($acceptableNodeTypes,'\|\s*')">
                            <xsl:variable name="acceptableNodeType" select="string(.)"/>
                            <xsl:if test="not($root//xs:complexType[@name=$acceptableNodeType]) and not($root//xs:element[@name=$acceptableNodeType])">
                                <xsl:message>
                                    <xsl:text>*** </xsl:text>
                                    <xsl:value-of select="$containerName"/>
                                    <xsl:text> refers to unknown acceptableNodeType </xsl:text>
                                    <xsl:value-of select="$acceptableNodeType"/>
                                    <xsl:text> in xs:element name='</xsl:text>
                                    <xsl:value-of select="$fieldName"/>
                                    <xsl:text>' type='</xsl:text>
                                    <xsl:value-of select="$givenType"/>
                                    <xsl:text>' fixed='</xsl:text>
                                    <xsl:value-of select="$accessType"/>
                                    <xsl:text>' default='</xsl:text>
                                    <xsl:value-of select="$acceptableNodeTypes"/>
                                    <xsl:text>' - check and fix X3D Schema</xsl:text>
                                </xsl:message>
                            </xsl:if>
                        </xsl:for-each>
                        <xsl:attribute name="acceptableNodeTypes" select="@default"/>
                    </xsl:if>
                    <xsl:choose>
                        <xsl:when test="(string-length(@use) > 0)">
                            <xsl:attribute name="use" select="@use"/>
                        </xsl:when>
                        <xsl:when test="ancestor::xs:element/xs:complexType//xs:attribute[@name=$fieldName][@use]">
                            <xsl:attribute name="use" select="ancestor::xs:element/xs:complexType//xs:attribute[@name=$fieldName]/@use"/>
                        </xsl:when>
                    </xsl:choose>
                    <!-- inheritedFrom attribute -->
                    <xsl:if test="($originInheritedFrom != $containerName) and not($containerName = 'X3DNode') "><!-- avoid DEF, USE, class -->
                        <xsl:choose>
                            <xsl:when test="(//xs:element[@name = $containerName]//xs:extension[@base='X3DStatement']) and
                                            (($fieldName = 'class') or ($fieldName = 'id') or ($fieldName = 'style'))">
                                <!-- debug diagnostic
                                    <xsl:message>
                                        <xsl:text>*** found statement </xsl:text>
                                        <xsl:value-of select="$containerName"/>
                                        <xsl:text> </xsl:text>
                                        <xsl:value-of select="$fieldName"/>
                                        <xsl:text> inheritedFrom=X3DStatement </xsl:text>
                                    </xsl:message>
                                -->
                                <xsl:attribute name="inheritedFrom">
                                    <xsl:text>X3DStatement</xsl:text>
                                </xsl:attribute>
                            </xsl:when>
                            <xsl:when test="($originInheritedFrom = 'X3DNodeMixedContent') or ($fieldName = 'DEF') or ($fieldName = 'USE') or
                                            ($fieldName = 'class') or ($fieldName = 'id') or ($fieldName = 'style') or ($fieldName = 'IS')  or ($fieldName = 'metadata')">
                                <xsl:attribute name="inheritedFrom">
                                    <xsl:text>X3DNode</xsl:text>
                                </xsl:attribute>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:attribute name="inheritedFrom">
                                    <xsl:value-of select="$originInheritedFrom"/>
                                    <xsl:if test="(string-length($additionalInterfaces) > 0) and not($additionalInterfaces = $originInheritedFrom)">
                                        <xsl:if test="not(contains($additionalInterfaces, $originInheritedFrom))">
                                            <xsl:message>
                                                <xsl:text>*** unexpected mismatch, $additionalInterfaces does not contain $originInheritedFrom=</xsl:text>
                                                <xsl:value-of select="$originInheritedFrom"/>
                                            </xsl:message>
                                        </xsl:if>
                                        <xsl:message>
                                            <xsl:text>*** </xsl:text>
                                            <xsl:value-of select="$containerName"/>
                                            <xsl:text> </xsl:text>
                                            <xsl:value-of select="$fieldName"/>
                                            <xsl:text> field has</xsl:text>
                                            <xsl:if test="contains($additionalInterfaces,',')">
                                                <xsl:text> multiple derivations,</xsl:text>
                                            </xsl:if>
                                            <xsl:text> $additionalInterfaces=</xsl:text>
                                            <xsl:value-of select="$additionalInterfaces"/>
                                        </xsl:message>
                                        <xsl:text>,</xsl:text>
                                        <xsl:value-of select="$additionalInterfaces"/>
                                    </xsl:if>
                                </xsl:attribute>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:if>
                    <xsl:variable name="hasEnumerations" select="ends-with(@type,'Choices') or ends-with(@type,'AccessTypes') or ends-with(@type,'Values') or ends-with(@type,'Type')"/>
                    <xsl:if test="$hasEnumerations and (contains($fieldType,'FString') or starts-with(@type,'xs:')) and (string-length($baseType) > 0)">
                        <xsl:variable name="additionalEnumerationValuesAllowed">
                            <xsl:choose>
                                <!-- TODO make this test less cryptic
                                if simpleType name of allowed types also appears within an appInfo, it is informational and not a requirement -->
                                <xsl:when test="ends-with(@type,'Choices') or ends-with(@type,'AccessTypes')">
                                    <xsl:text>false</xsl:text>
                                </xsl:when>
                                <xsl:when test="ends-with(@type,'Values') or ends-with(@type,'Type')">
                                    <xsl:text>true</xsl:text>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text>enumerationsError</xsl:text>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:variable>
                        <xsl:attribute name="additionalEnumerationValuesAllowed" select="$additionalEnumerationValuesAllowed"/>
                        <!-- debug diagnostic
                        <xsl:message>
                            <xsl:text>local-name()=</xsl:text>
                                            <xsl:value-of select="local-name()"/>
                            <xsl:text>, @name=</xsl:text>
                                            <xsl:value-of select="@name"/>
                            <xsl:text>, $fieldName=</xsl:text>
                                            <xsl:value-of select="$fieldName"/>
                            <xsl:text>, @type=</xsl:text>
                                            <xsl:value-of select="@type"/>
                            <xsl:text>, $fieldType=</xsl:text>
                                            <xsl:value-of select="$fieldType"/>
                            <xsl:text>, $baseType=</xsl:text>
                                            <xsl:value-of select="$baseType"/>
                            <xsl:text>, $additionalEnumerationValuesAllowed=</xsl:text>
                                            <xsl:value-of select="$additionalEnumerationValuesAllowed"/>
                        </xsl:message> -->
                    </xsl:if>
                    <xsl:choose>
                        <xsl:when test="starts-with($baseType,'SF') or starts-with($baseType,'MF')">
                            <xsl:attribute name="simpleType">
                                <xsl:value-of select="$baseType"/>
                            </xsl:attribute>
                            <xsl:attribute name="baseType">
                                <xsl:value-of select="//xs:simpleType[@name = $baseType]/xs:restriction/@base"/>
                            </xsl:attribute>
                        </xsl:when>
                        <xsl:when test="ends-with($baseType,'Choices') or ends-with($baseType,'Values')">
                            <xsl:attribute name="simpleType">
                                <xsl:value-of select="$baseType"/>
                            </xsl:attribute>
                            <xsl:attribute name="baseType">
                                <xsl:value-of select="//xs:simpleType[@name = $baseType]/xs:restriction/@base"/>
                            </xsl:attribute>
                        </xsl:when>
                        <xsl:when test="(string-length($baseType) > 0)">
                            <!-- no simpleType -->
                            <xsl:attribute name="baseType">
                                <xsl:value-of select="$baseType"/>
                            </xsl:attribute>
                        </xsl:when>
                        <xsl:when test="(@type = 'xs:NMTOKEN') or (@type = 'xs:NMTOKENS') or (@type = 'xs:token') or (@type = 'xs:ID') or (@type = 'xs:IDREF')">
                            <!-- no simpleType -->
                            <xsl:attribute name="baseType">
                                <xsl:value-of select="@type"/>
                            </xsl:attribute>
                        </xsl:when>
                    </xsl:choose>
                    <!-- TODO verify -->
                    <xsl:variable name="initialX3dVersion" select="@initialX3dVersion"/>
                    <xsl:if test="(string-length($initialX3dVersion) > 0)">
                        <xsl:attribute name="initialX3dVersion">
                            <xsl:value-of select="$initialX3dVersion"/>
                        </xsl:attribute>
                    </xsl:if>
                    <!-- description -->
                    <xsl:choose>
                        <xsl:when test="($containerName = 'X3DNode') and (//xs:attributeGroup/xs:attribute[@name = $fieldName]/xs:annotation/xs:appinfo[string-length(normalize-space(.)) > 0])">
                            <!-- DEF, USE, class -->
                            <xsl:attribute name="description" select="normalize-space(//xs:attributeGroup/xs:attribute[@name = $fieldName]/xs:annotation/xs:appinfo/.)"/>
                        </xsl:when>
                        <xsl:when test="($containerName = 'X3DNode') and (($fieldName = 'IS') or ($fieldName = 'metadata'))">
                            <!-- IS, metadata -->
                            <xsl:attribute name="description" select="normalize-space(//xs:complexType[@name='X3DNode']/xs:annotation/xs:appinfo/xs:element[@name = $fieldName]/xs:annotation/xs:appinfo/.)"/>
                        </xsl:when>
                        <xsl:when test="($fieldName = 'sourceCode')">
                            <!-- CDATA -->
                            <xsl:attribute name="description">
                            <xsl:text>Embedded scripting source code can be contained within the parent node as a plain-text CDATA block, without requiring escaping of special characters.</xsl:text>
                            </xsl:attribute>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- description from tooltip -->
                            <xsl:variable name="tooltipText"><!-- /attribute[@name = $fieldName] -->
                                <xsl:choose>
                                    <xsl:when test="($fieldName = 'DEF') or ($fieldName = 'USE') or ($fieldName = 'class') or ($fieldName = 'id') or (($fieldName = 'style') and not(ends-with($containerName,'FontStyle')))">
                                        <xsl:value-of select="$x3d.tooltips.document//element[@name = 'Anchor']/attribute[@name = $fieldName]/@tooltip" disable-output-escaping="yes"/>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:value-of select="$x3d.tooltips.document//element[@name = $containerName]/attribute[@name = $fieldName]/@tooltip" disable-output-escaping="yes"/>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:variable>
                            <xsl:variable name="fieldTooltip">
                                <xsl:if test="(string-length(normalize-space($tooltipText)) > 0)"><!-- doc-available($x3d.tooltips.path) -->
                                    <xsl:value-of select="substring-after(replace(replace($tooltipText,'&#8734;','infinity'),'&#960;','pi'),']')" disable-output-escaping="yes"/>
                                    <!-- consistent javadoc punctuation -->
                                    <xsl:if test="not(ends-with(normalize-space($tooltipText),'.'))">
                                        <xsl:text>.</xsl:text>
                                    </xsl:if>
                                </xsl:if>
                            </xsl:variable>
                            <xsl:variable name="fieldTooltip2">
                                <xsl:choose>
                                    <xsl:when test="contains($fieldTooltip,'infinity)')">
                                        <xsl:value-of select="substring-after($fieldTooltip,'infinity)')"/>
                                    </xsl:when>
                                    <xsl:when test="starts-with(normalize-space($fieldTooltip),'(') or starts-with(normalize-space($fieldTooltip),'[')">
                                        <!-- remove bounds information -->
                                        <xsl:choose>
                                            <xsl:when test="contains($fieldTooltip,']')">
                                                <xsl:value-of select="substring-after($fieldTooltip,']')"/>
                                            </xsl:when>
                                            <xsl:when test="contains($fieldTooltip,')')">
                                                <xsl:value-of select="substring-after($fieldTooltip,')')"/>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:value-of select="$fieldTooltip"/>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:value-of select="normalize-space($fieldTooltip)"/>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:variable>
                            <xsl:if test="(string-length(normalize-space($fieldTooltip2)) > 0)">
                                <xsl:attribute name="description">
                                    <!-- first sentence is topic sentence -->
                                    <xsl:value-of select="normalize-space(substring-before($fieldTooltip2,'.'))"/>
                                    <xsl:text>.</xsl:text>
                                </xsl:attribute>
                            </xsl:if>
                        </xsl:otherwise>
                    </xsl:choose>
                    <!--xsl:message>test found...</xsl:message-->
                    <xsl:if test="($fieldAccessType='inputOutput') or ($fieldAccessType='initializeOnly') or ($isStatement='no')">
                        <!-- TODO: Improve this code -->
                        <xsl:if test="xs:simpleType/xs:restriction[@base='SFString']">
                            <!-- xsl:comment>*** enumeration loop 3</xsl:comment-->
                            <xsl:for-each select="xs:simpleType/xs:restriction/xs:enumeration">
                                <!-- xsl:comment enumeration 4  xsl:comment -->
                                <xsl:element name="enumeration">
                                    <xsl:attribute name="value" select="@value"/>
                                    <xsl:variable name="aliasName" select="xs:annotation/xs:appinfo/xs:attribute[@name='alias']/@default"/>
                                    <xsl:if test="(../@base='SFInt32') and (string-length($aliasName) > 0)">
                                        <xsl:attribute name="alias" select="$aliasName"/>
                                    </xsl:if>
                                    <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute">
                                        <xsl:if test="(string-length(normalize-space(@fixed)) > 0)">
                                            <xsl:attribute name="{@name}" select="normalize-space(@fixed)"/>
                                        </xsl:if>
                                    </xsl:for-each>
                                    <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                    <xsl:if test="string-length($appinfo) > 0">
                                        <xsl:attribute name="appinfo">
                                            <xsl:value-of select="$appinfo"/>
                                            <xsl:if test="not(ends-with($appinfo,'.'))">
                                                <xsl:text>.</xsl:text>
                                            </xsl:if>
                                        </xsl:attribute>
                                    </xsl:if>
                                    <xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                                        <xsl:attribute name="documentation" select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                    </xsl:if>
                                </xsl:element>
                            </xsl:for-each>
                        </xsl:if>
                        <xsl:if test="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:enumeration">
                            <!-- xsl:comment>*** enumeration loop 4</xsl:comment-->
                            <xsl:for-each select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:enumeration">
                                <!-- xsl:comment enumeration 5  xsl:comment -->
                                <xsl:element name="enumeration">
                                    <xsl:attribute name="value" select="@value"/>
                                    <xsl:variable name="aliasName" select="xs:annotation/xs:appinfo/xs:attribute[@name='alias']/@default"/>
                                    <xsl:if test="(string-length($aliasName) > 0)">
                                        <xsl:attribute name="alias" select="$aliasName"/>
                                    </xsl:if>
                                    <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute">
                                        <xsl:variable  name="attributeName"        select="@name"/>
                                        <xsl:variable  name="attributeValue"       select="@fixed"/>
                                        <xsl:choose>
                                            <xsl:when test="($attributeName = 'alias') and (string-length(normalize-space($attributeValue)) > 0) and
                                                            (count(../xs:attribute[@name='alias']) > 1)">
                                                <!-- handle attributes with multiple values -->
                                                <xsl:if test="(count(preceding-sibling::xs:attribute[@name='alias']) = 0)">
                                                    <!-- debug diagnostic
                                                    <xsl:message>
                                                        <xsl:text>*** found </xsl:text>
                                                        <xsl:value-of select="$attributeName"/>
                                                        <xsl:text> </xsl:text>
                                                        <xsl:value-of select="@fixed"/>
                                                        <xsl:text> with siblings </xsl:text>
                                                        <xsl:for-each select="../xs:attribute[@name='alias']">
                                                            <xsl:sort select="(contains(@fixed,' '))"/>
                                                            <xsl:value-of select="@fixed"/>
                                                            <xsl:if test="not(position() = last())">
                                                                <xsl:text>,</xsl:text>
                                                            </xsl:if>
                                                        </xsl:for-each>
                                                    </xsl:message> -->
                                                    <xsl:attribute name="{$attributeName}">
                                                        <xsl:for-each select="../xs:attribute[@name='alias']">
                                                            <xsl:sort select="(contains(@fixed,' '))"/>
                                                            <xsl:value-of select="@fixed"/>
                                                            <xsl:if test="not(position() = last())">
                                                                <xsl:text>,</xsl:text>
                                                            </xsl:if>
                                                        </xsl:for-each>
                                                    </xsl:attribute>
                                                </xsl:if>
                                            </xsl:when>
                                            <xsl:when test="(string-length(normalize-space($attributeValue)) > 0)">
                                                <!-- handle attributes with single value -->
                                                <xsl:attribute name="{$attributeName}" select="$attributeValue"/>
                                            </xsl:when>
                                        </xsl:choose>
                                    </xsl:for-each>
                                    <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                    <xsl:if test="string-length($appinfo) > 0">
                                        <xsl:attribute name="appinfo">
                                            <xsl:value-of select="$appinfo"/>
                                            <xsl:if test="not(ends-with($appinfo,'.'))">
                                                <xsl:text>.</xsl:text>
                                            </xsl:if>
                                        </xsl:attribute>
                                    </xsl:if>
                                    <xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                                        <xsl:attribute name="documentation" select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                    </xsl:if>
                                </xsl:element>
                            </xsl:for-each>
                        </xsl:if>
                        <xsl:if test="xs:annotation/xs:appinfo/xs:enumeration/@value">
                            <!-- xsl:comment enumeration 6  xsl:comment -->
                            <xsl:element name="enumeration">
                                    <xsl:attribute name="value" select="xs:annotation/xs:appinfo/xs:enumeration/@value"/>
                                    <xsl:variable name="aliasName" select="xs:annotation/xs:appinfo/xs:attribute[@name='alias']/@default"/>
                                    <xsl:if test="(../@base='SFInt32') and (string-length($aliasName) > 0)">
                                        <xsl:attribute name="alias" select="$aliasName"/>
                                    </xsl:if>
                                    <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute">
                                        <xsl:if test="(string-length(normalize-space(@fixed)) > 0)">
                                            <xsl:attribute name="{@name}" select="normalize-space(@fixed)"/>
                                        </xsl:if>
                                    </xsl:for-each>
                                    <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                    <xsl:if test="string-length($appinfo) > 0">
                                        <xsl:attribute name="appinfo">
                                            <xsl:value-of select="$appinfo"/>
                                            <xsl:if test="not(ends-with($appinfo,'.'))">
                                                <xsl:text>.</xsl:text>
                                            </xsl:if>
                                        </xsl:attribute>
                                    </xsl:if>
                                    <xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                                        <xsl:attribute name="documentation" select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                    </xsl:if>
                            </xsl:element>
                        </xsl:if>
                        <xsl:if test="xs:annotation/xs:appinfo/xs:list">
                            <xsl:variable name="enumerationValuesType" select="xs:annotation/xs:appinfo/xs:list/@itemType"/>
                            <!-- xsl:comment>*** enumeration loop 5</xsl:comment-->
                            <xsl:for-each select="//xs:schema/xs:simpleType[@name=$enumerationValuesType]/xs:restriction/xs:enumeration">
                                <!-- xsl:comment enumeration 7  xsl:comment -->
                                <xsl:element name="enumeration">
                                    <xsl:attribute name="value" select="@value"/>
                                    <xsl:variable name="aliasName" select="xs:annotation/xs:appinfo/xs:attribute[@name='alias']/@default"/>
                                    <xsl:if test="(../@base='SFInt32') and (string-length($aliasName) > 0)">
                                        <xsl:attribute name="alias" select="$aliasName"/>
                                    </xsl:if>
                                    <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute">
                                        <xsl:if test="(string-length(normalize-space(@fixed)) > 0)">
                                            <xsl:attribute name="{@name}" select="normalize-space(@fixed)"/>
                                        </xsl:if>
                                    </xsl:for-each>
                                    <xsl:variable name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                                    <xsl:if test="string-length($appinfo) > 0">
                                        <xsl:attribute name="appinfo">
                                            <xsl:value-of select="$appinfo"/>
                                            <xsl:if test="not(ends-with($appinfo,'.'))">
                                                <xsl:text>.</xsl:text>
                                            </xsl:if>
                                        </xsl:attribute>
                                    </xsl:if>
                                    <xsl:if test="(string-length(normalize-space(xs:annotation/xs:documentation/@source)) > 0)">
                                        <xsl:attribute name="documentation" select="normalize-space(xs:annotation/xs:documentation/@source)"/>
                                    </xsl:if>
                                </xsl:element>
                            </xsl:for-each>
                        </xsl:if>
                    </xsl:if>
                    <xsl:for-each select="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']">
                        <xsl:element name="componentInfo">
                            <xsl:attribute name="name" select="@fixed"/>
                            <xsl:attribute name="level" select="following-sibling::*[1]/@fixed"/>
                        </xsl:element>
                    </xsl:for-each>
                </xsl:element>
            </xsl:otherwise>
        </xsl:choose>
	</xsl:if>
</xsl:template>

</xsl:stylesheet>
