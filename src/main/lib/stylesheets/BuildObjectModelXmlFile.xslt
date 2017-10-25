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
   <meta name="filename"    content="BuildObjectModelXmlFile.xslt" />
   <meta name="author"      content="Roy Walmsley" />
   <meta name="created"     content="27 November 2015" />
   <meta name="modified"    content="29 December 2015" />
   <meta name="description" content="XSL stylesheet to walk X3D Schema and generate X3D object model XML file." />
   <meta name="identifier"  content="http://www.web3d.org/x3d/stylesheets/BuildObjectModelXmlFile.xslt" />
   <meta name="reference"   content="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildObjectModelXmlFile.xslt?revision=22300&view=markup" />
   <meta name="reference"   content="BuildObjectModelXmlFile.xslt" />
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

<!-- ****************** root:  start of file ****************** -->
<xsl:template match="/">

<xsl:message>
  <xsl:text>X3DObjectModel.xml:  process X3D schema version </xsl:text>
  <xsl:value-of select="//xs:schema/@version"/>
  <xsl:text> using BuildObjectModelXmlFile.xslt </xsl:text>
 </xsl:message>

<!-- ===================================================================================== -->
<!-- Intermediate XML file listing all abstract and concrete nodes -->

<!-- create XML output -->

  <xsl:variable name="nameX3dObjectModelFile">
    <xsl:text>X3DObjectModel-</xsl:text>
    <xsl:value-of select="$schemaVersionNumber"/>
    <xsl:text>.xml</xsl:text>
  </xsl:variable>
  
<xsl:result-document  href="{$nameX3dObjectModelFile}" method="xml" version="1.0" encoding="UTF-8" indent="yes">
    
	<!-- TODO create head/meta tags -->
    <xsl:comment>
        <xsl:text> X3D Object Model </xsl:text>
        <xsl:value-of select="$nameX3dObjectModelFile"/>
    </xsl:comment>
    <xsl:text>&#10;</xsl:text>
    <xsl:comment>
        <xsl:text> Online at </xsl:text>
        <xsl:text>http://www.web3d.org/specifications/</xsl:text>
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

    <xsl:element name="X3DObjectModel">
        <xsl:attribute name="version" select="$schemaVersionNumber"/>
        <xsl:attribute name="xsd:noNamespaceSchemaLocation">x3dObjectModel.xsd</xsl:attribute>
        
        <xsl:element name="SimpleTypeEnumerations">
            <xsl:for-each select="//xs:schema/xs:simpleType[not(starts-with(@name, 'SF') or starts-with(@name, 'MF'))][*/xs:enumeration]">
                
				<!-- avoid XML types in X3D object model, use X3D types instead -->
				<xsl:variable name="name" select="@name"/>
				<xsl:variable name="derivedType">
					<xsl:value-of select="//xs:schema/xs:simpleType[(@name=$name)]/xs:restriction/@base"/>
				</xsl:variable>
				<xsl:variable name="baseType">
					<xsl:choose>
						<xsl:when test="($derivedType='xs:string') or ($derivedType='xs:token')">
							<xsl:text>SFString</xsl:text>
						</xsl:when>
						<xsl:otherwise>
							<xsl:value-of select="$derivedType"/>
						</xsl:otherwise>
					</xsl:choose>
				</xsl:variable>
				
				<xsl:element name="SimpleType">
                    <xsl:attribute name="name" select="translate(@name,'-','')"/>
					<xsl:if test="(string-length($baseType) > 0)">
						<xsl:attribute name="baseType" select="$baseType"/>
					</xsl:if>
					<xsl:variable name="simpleTypeAppinfo" select="xs:annotation/xs:appinfo"/>
					<xsl:if test="(string-length($simpleTypeAppinfo) > 0)">
						<xsl:attribute name="appinfo" select="normalize-space($simpleTypeAppinfo)"/>
					</xsl:if>
                    <xsl:attribute name="documentation" select="xs:annotation/xs:documentation/@source"/>
					<xsl:for-each select="*/xs:enumeration">
						<xsl:element name="enumeration">
							<xsl:attribute name="value" select="translate(@value,'-','')"/>
							<xsl:variable name="enumerationAppinfo" select="xs:annotation/xs:appinfo"/>
							<xsl:if test="(string-length($enumerationAppinfo) > 0)">
								<xsl:attribute name="appinfo" select="normalize-space($enumerationAppinfo)"/>
							</xsl:if>
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
        
        <xsl:element name="FieldTypes">
            <xsl:for-each select="//xs:schema/xs:simpleType[starts-with(@name, 'SF') or starts-with(@name, 'MF')]">
                <xsl:sort select="substring(@name, 3)"/>
                <xsl:sort select="substring(@name, 1, 2)" order="descending"/>
                <xsl:variable name="fieldType" select="@name"/>
                <xsl:element name="FieldType">
                    <xsl:attribute name="type" select="$fieldType"/>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:documentation/text())) > 0">
                            <xsl:attribute name="specificationSection" select="normalize-space(xs:annotation/xs:documentation/text())"/>
                        </xsl:if>
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:appinfo/text())) > 0">
                            <xsl:attribute name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
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
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:appinfo/text())) > 0">
                            <xsl:attribute name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
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
            <xsl:for-each select="//xs:schema/xs:complexType[ends-with(@name,'Node') or (@name='X3DPrototypeInstance')]">
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
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:appinfo/text())) > 0">
                            <xsl:attribute name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                        </xsl:if>
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
									<xsl:text>*** Found X3DViewpointNode description in XML schema...</xsl:text>
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
                            <xsl:element name="containerFieldDefault">
                                <xsl:attribute name="name" select="xs:complexContent/xs:extension/xs:attribute[@name='containerField']/@default"/>
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
                    </xsl:element>
                </xsl:element>
            </xsl:for-each>           
        </xsl:element>
        
        <xsl:element name="ConcreteNodes">
            <xsl:for-each select="//xs:schema/xs:element[(*//xs:extension/@base!='SceneGraphStructureStatement') or (not (*//xs:extension/@base))]">
                <xsl:sort select="lower-case(@name)"/>
                <xsl:variable name="concreteNodeName" select="@name"/>
                <xsl:element name="ConcreteNode">
                    <xsl:attribute name="name" select="$concreteNodeName"/>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:appinfo/text())) > 0">
                            <xsl:attribute name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                        </xsl:if>
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
                            <xsl:call-template name="doField">
                                <xsl:with-param name="containerName" select="$concreteNodeName"/>
                            </xsl:call-template>
                        </xsl:for-each>
						<!-- add attributeGroup attributes -->
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
                            <xsl:element name="containerFieldDefault">
                                <xsl:choose>
                                    <xsl:when test="xs:complexType//xs:attribute[@name='containerField']/@default">
                                        <xsl:attribute name="name" select="xs:complexType//xs:attribute[@name='containerField']/@default"/>
                                        <xsl:for-each select="xs:complexType//xs:attribute[@name='containerField']/xs:simpleType/xs:restriction/xs:enumeration">
                                            <xsl:sort select="xs:complexType//xs:attribute[@name='containerField']/@default"/>
                                            <xsl:element name="enumeration">
                                                <xsl:attribute name="value" select="@value"/>
                                            </xsl:element>
                                        </xsl:for-each>
                                    </xsl:when>
                                    <xsl:when test="xs:complexType//xs:attribute[@name='containerField']/@fixed">
                                        <xsl:attribute name="name" select="xs:complexType//xs:attribute[@name='containerField']/@fixed"/>
                                        <xsl:element name="enumeration">
                                            <xsl:attribute name="value" select="xs:complexType//xs:attribute[@name='containerField']/@fixed"/>
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
            <xsl:for-each select="//xs:schema/xs:element[*//xs:extension/@base='SceneGraphStructureStatement']">
                <xsl:sort select="lower-case(@name)"/>
                <xsl:variable name="statementName" select="@name"/>
                <xsl:element name="Statement">
                    <xsl:attribute name="name" select="$statementName"/>
                    <xsl:element name="InterfaceDefinition">
                        <xsl:attribute name="specificationUrl" select="xs:annotation/xs:documentation/@source"/>
                        <xsl:if test="string-length(normalize-space(xs:annotation/xs:appinfo/text())) > 0">
                            <xsl:attribute name="appinfo" select="normalize-space(xs:annotation/xs:appinfo/text())"/>
                        </xsl:if>
                        <xsl:if test="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']">
                            <xsl:element name="componentInfo">
                                <xsl:attribute name="name" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentName']/@fixed"/>
                                <xsl:attribute name="level" select="xs:annotation/xs:appinfo/xs:attribute[@name='componentLevel']/@fixed"/>
                            </xsl:element>
                        </xsl:if>
                        <xsl:variable name="nonNodeFieldList" select="
							  xs:complexType/xs:complexContent/xs:extension/xs:attribute
                            | xs:annotation/xs:appinfo/xs:attribute"/>
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
	<xsl:if test="(@name='profile')">
		<xsl:message>
			<xsl:text>*** doField name=</xsl:text>
			<xsl:value-of select="@name"/>
			<xsl:text> (containerName=</xsl:text>
			<xsl:value-of select="$containerName"/>
			<xsl:text>) found!</xsl:text>
		</xsl:message>
	</xsl:if> -->
	
    <xsl:variable name="fieldName" select="@name"/>
    <xsl:variable name="givenType">
        <xsl:choose>
            <xsl:when test="(string-length(xs:simpleType/xs:restriction/@base) > 0)">
                <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="@type"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    <xsl:variable name="constrainedTypeParent" select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/@base"/>
    <xsl:variable name="constrainedTypeGrandParent" select="//xs:schema/xs:simpleType[@name=$constrainedTypeParent]/xs:restriction/@base"/>
    <xsl:variable name="baseType">
        <xsl:choose>
                <!-- ignore built-in types, no baseType needed -->
                <xsl:when test="starts-with($givenType,'xs:') or starts-with($givenType,'SF') or starts-with($givenType,'MF')">
                        <xsl:text></xsl:text>
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
                        <!-- avoid XML types in X3D object model, use X3D types instead -->
                        <xsl:variable name="derivedType">
                                <xsl:value-of select="//xs:schema/xs:simpleType[(@name=$givenType)]/xs:restriction/@base"/>
                        </xsl:variable>
                        <xsl:choose>
                                <xsl:when test="($derivedType='xs:string') or ($derivedType='xs:token')">
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
                <xsl:when test="($givenType='xs:NMTOKEN') or ($givenType='xs:NMTOKENS') or ($givenType='xs:IDREF') or ($givenType='xs:ID')">SFString</xsl:when>
                <xsl:when test="($constrainedTypeParent='xs:token' or $constrainedTypeParent='xs:string')">SFString</xsl:when>
                <xsl:when test="($constrainedTypeGrandParent='xs:token' or $constrainedTypeParent='xs:string')">SFString</xsl:when>
                <xsl:otherwise>TODO-fieldType</xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    <xsl:variable name="fieldAccessType">
        <xsl:choose>
            <xsl:when test="@fixed">
                <xsl:value-of select="substring-before(@fixed, 'Field')" />
            </xsl:when>
            <!-- First choose instances where the Schema defined value does not match the specification -->
            <xsl:when test="(($containerName='Cone') and ($fieldName='bottom'))">initializeOnly</xsl:when>
            <xsl:when test="(($containerName='ConeEmitter') and ($fieldName='angle'))">inputOutput</xsl:when>
            <xsl:when test="(($containerName='Cylinder') and ($fieldName='bottom'))">initializeOnly</xsl:when>
            <xsl:when test="(($containerName='HAnimSegment') and ($fieldName='mass'))">inputOutput</xsl:when>
            <xsl:when test="(($containerName='RigidBody') and ($fieldName='mass'))">inputOutput</xsl:when>
            <!-- If there is an annotation/appinfo/atribute specifying the accessType use that preferentially -->
            <xsl:when test="xs:annotation/xs:appinfo/xs:attribute[@name='accessType']">
                <xsl:value-of select="xs:annotation/xs:appinfo/xs:attribute[@name='accessType']/@fixed"/>
            </xsl:when>
            <!-- Now we can choose the Schema defined value for all the rest -->
            <xsl:when test="//xs:simpleType[@name='inputOnlyAccessTypes']//xs:enumeration[@value=$fieldName]">inputOnly</xsl:when>
            <xsl:when test="//xs:simpleType[@name='outputOnlyAccessTypes']//xs:enumeration[@value=$fieldName]">outputOnly</xsl:when>
            <xsl:when test="//xs:simpleType[@name='inputOutputAccessTypes']//xs:enumeration[@value=$fieldName]">inputOutput</xsl:when>
            <xsl:when test="//xs:simpleType[@name='initializeOnlyAccessTypes']//xs:enumeration[@value=$fieldName]">initializeOnly</xsl:when>
            <xsl:when test="($isStatement='true')">inputOutput</xsl:when>
            <xsl:otherwise>inputOutput</xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
	<!-- debug diagnostic
	<xsl:if test="($containerName='X3D') and (@name='profile')">
		<xsl:message>
			<xsl:text>*** doField found </xsl:text>
			<xsl:value-of select="$containerName"/>
			<xsl:text> field name=</xsl:text>
			<xsl:value-of select="@name"/>
			<xsl:text> with</xsl:text>
		</xsl:message>
		<xsl:message>
			<xsl:text>    $givenType=</xsl:text><xsl:value-of select="$givenType"/>
			<xsl:text>, $baseType=</xsl:text><xsl:value-of select="$baseType"/>
			<xsl:text>, $fieldType=</xsl:text><xsl:value-of select="$fieldType"/>
			<xsl:text>, $fieldAccessType=</xsl:text><xsl:value-of select="$fieldAccessType"/>
			<xsl:text>, parent=</xsl:text><xsl:value-of select="local-name(..)"/>
		</xsl:message>
	</xsl:if> -->
	
	<!-- some schema field definitions include optional enumerations in the annotation/appinfo section, 
	     let those take precedence over validation definitions in order to avoid duplicate field definitions here -->
	<!-- also be careful when checking relative paths because they vary, thus use of ancestor:: preferred -->
	<xsl:if test="(parent::xs:appinfo) or (not(parent::xs:appinfo) and 
                                           not(ancestor::xs:complexType//xs:annotation/xs:appinfo/xs:attribute[@name = $fieldName]) and
                                           not(    ancestor::xs:element//xs:annotation/xs:appinfo/xs:attribute[@name = $fieldName]))">
		
		<!-- debug diagnostic
		<xsl:if test="($containerName='component') and (@name='level')">
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
				<xsl:text>, $fieldAccessType=</xsl:text>
                                <xsl:value-of select="$fieldAccessType"/>
				<xsl:text>, xs:simpleType/xs:restriction/@base=</xsl:text>
                                <xsl:value-of select="xs:simpleType/xs:restriction/@base"/>
				<xsl:text>, ../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/@base=</xsl:text>
                                <xsl:value-of select="../../../xs:complexType//xs:attribute[@name=$fieldName]/xs:simpleType/xs:restriction/@base"/>
			</xsl:message>
		</xsl:if> -->
		<xsl:element name="field">
			<xsl:attribute name="type" select="$fieldType"/>
			<xsl:attribute name="accessType" select="$fieldAccessType"/>
			<xsl:attribute name="name" select="$fieldName"/>
			<xsl:if test="($fieldAccessType='inputOutput') or ($fieldAccessType='initializeOnly')">
				<xsl:choose>
					<xsl:when test="$givenType='SFNode'">
						<xsl:attribute name="default">NULL</xsl:attribute>
					</xsl:when>
					<!-- avoid applying specification-syntax [square brackets] to default values -->
					<xsl:when test="$givenType='MFNode'">
						<!-- Don't specify a default value -->
					</xsl:when>
					<xsl:when test="(starts-with($fieldType, 'MF')) and (string-length(@default) > 0)">
						<xsl:attribute name="default" select="@default"/>
					</xsl:when>
					<xsl:when test="(parent::xs:appinfo) and (string-length(@default) > 0)">
						<xsl:attribute name="default" select="@default"/>
					</xsl:when>
					<xsl:when test="(parent::xs:appinfo) and  (string-length(ancestor::xs:element//xs:complexContent//xs:attribute[@name = $fieldName]/@default) > 0)">
						<xsl:attribute name="default"><xsl:value-of select="(ancestor::xs:element//xs:complexContent//xs:attribute[@name = $fieldName]/@default)"/></xsl:attribute>
					</xsl:when>
					<xsl:when test="(parent::xs:appinfo) and  (string-length(ancestor::xs:complexType//xs:complexContent//xs:attribute[@name = $fieldName]/@default) > 0)">
						<xsl:attribute name="default"><xsl:value-of select="(ancestor::xs:complexType//xs:complexContent//xs:attribute[@name = $fieldName]/@default)"/></xsl:attribute>
					</xsl:when>
					<!-- otherwise only output the default attribute if a default value is present -->
					<xsl:when test="(string-length(@default) > 0)">
						<xsl:attribute name="default" select="@default"/>
					</xsl:when>
				</xsl:choose>
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
				<xsl:if test="(not (starts-with($givenType, 'SF'))) and (not (starts-with($givenType, 'MF')))">
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
			</xsl:if>
			<!-- TODO: Decide if we want to keep acceptable types for node fields which are inputOnly or outputOnly -->
			<xsl:if test="(($givenType='SFNode') or ($givenType='MFNode')) and @default">
				<xsl:attribute name="acceptableNodeTypes" select="@default"/>
			</xsl:if>
			<xsl:choose>
				<xsl:when test=".[@use]">
					<xsl:attribute name="use" select="@use"/>
				</xsl:when>
				<xsl:when test="ancestor::xs:element/xs:complexType//xs:attribute[@name=$fieldName][@use]">
					<xsl:attribute name="use" select="ancestor::xs:element/xs:complexType//xs:attribute[@name=$fieldName]/@use"/>
				</xsl:when>
			</xsl:choose>
			<xsl:variable name="origin" select="ancestor::*/@name"/>
			<xsl:if test="$origin != $containerName">
				<xsl:choose>
					<xsl:when test="($origin = 'X3DNodeMixedContent')">
						<xsl:attribute name="inheritedFrom">
							<xsl:text>X3DNode</xsl:text>
						</xsl:attribute>
					</xsl:when>
					<xsl:otherwise>
						<xsl:attribute name="inheritedFrom" select="$origin"/>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:if>
			<xsl:if test="ancestor::xs:appinfo and (ends-with(@type,'Values'))">
				<xsl:attribute name="additionalEnumerationValuesAllowed">
					<xsl:text>true</xsl:text>
				</xsl:attribute>
			</xsl:if>
			<xsl:if test="(string-length($baseType) > 0)">
				<xsl:attribute name="baseType">
					<xsl:value-of select="$baseType"/>
				</xsl:attribute>
			</xsl:if>
			<!--xsl:message>test found...</xsl:message-->
			<xsl:if test="($fieldAccessType='inputOutput') or ($fieldAccessType='initializeOnly') or ($isStatement='no')">
				<!-- TODO: Improve this code -->
				<xsl:if test="xs:simpleType/xs:restriction[@base='SFString']">
					<xsl:for-each select="xs:simpleType/xs:restriction/xs:enumeration">
						<xsl:element name="enumeration">
							<xsl:attribute name="value" select="@value"/>
						</xsl:element>
					</xsl:for-each>
				</xsl:if>
				<xsl:if test="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:enumeration">
					<xsl:for-each select="//xs:schema/xs:simpleType[@name=$givenType]/xs:restriction/xs:enumeration">
						<xsl:element name="enumeration">
							<xsl:attribute name="value" select="@value"/>
						</xsl:element>
					</xsl:for-each>
				</xsl:if>
				<xsl:if test="contains(xs:annotation/xs:appinfo/text(), 'enumeration values')">
					<xsl:attribute name="enumerationValues" select="normalize-space(substring-after(xs:annotation/xs:appinfo/text(), substring-before(xs:annotation/xs:appinfo/text(), '&#34;')))"/>
				</xsl:if>
				<xsl:if test="xs:annotation/xs:appinfo/xs:enumeration/@value">
					<xsl:element name="enumeration">
						<xsl:attribute name="value" select="xs:annotation/xs:appinfo/xs:enumeration/@value"/>
					</xsl:element>
				</xsl:if>
				<xsl:if test="xs:annotation/xs:appinfo/xs:list">
					<xsl:variable name="enumerationValuesType" select="xs:annotation/xs:appinfo/xs:list/@itemType"/>
					<xsl:for-each select="//xs:schema/xs:simpleType[@name=$enumerationValuesType]/xs:restriction/xs:enumeration">
						<xsl:element name="enumeration">
							<xsl:attribute name="value" select="@value"/>
							<xsl:if test="xs:annotation/xs:appinfo/text()">
								<xsl:attribute name="tooltip" select="xs:annotation/xs:appinfo/text()"/>
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
	</xsl:if>
</xsl:template>

</xsl:stylesheet>
