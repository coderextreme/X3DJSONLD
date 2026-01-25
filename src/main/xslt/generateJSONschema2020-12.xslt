<?xml version="1.0" encoding="UTF-8"?>
<!--
Web3D Consortium Open-Source License for Models and Software
Copyright (c) 2025 held by the author(s). All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
Neither the names of the Web3D Consortium nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
-->
<xsl:stylesheet version="2.0" 
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:xs="http://www.w3.org/2001/XMLSchema"
    exclude-result-prefixes="xs">
    
    <xsl:output method="text" encoding="UTF-8" indent="no"/>
    <xsl:strip-space elements="*"/>
    
    <!-- Root template -->
    <xsl:template match="/">
        <xsl:text>{&#10;</xsl:text>
        <xsl:text>	"$schema": "https://json-schema.org/draft/2020-12/schema",&#10;</xsl:text>
        <xsl:text>	"$id": "https://www.web3d.org/specifications/X3dSchemaJSON4.0.schema.json",&#10;</xsl:text>
        <xsl:text>	"title": "X3D V4.0 X3D JSON Schema",&#10;</xsl:text>
        <xsl:text>	"type": "object",&#10;</xsl:text>
        <xsl:text>	"properties": {&#10;</xsl:text>
        <xsl:text>		"X3D" : {&#10;</xsl:text>
        <xsl:text>			"$ref":"#/$defs/X3D"&#10;</xsl:text>
        <xsl:text>		}&#10;</xsl:text>
        <xsl:text>	},&#10;</xsl:text>
        <xsl:text>	"$defs": {&#10;</xsl:text>
        
        <!-- Process all node types -->
        <xsl:apply-templates select="//AbstractNodeType"/>
        <xsl:apply-templates select="//AbstractObjectType"/>
        <xsl:apply-templates select="//ConcreteNode"/>
        <xsl:apply-templates select="//Statement"/>
        
        <!-- Add hardcoded geoSystem definition -->
        <xsl:call-template name="geoSystemDef"/>
        
        <xsl:text>	}&#10;</xsl:text>
        <xsl:text>}&#10;</xsl:text>
    </xsl:template>
    
    <!-- Template for AbstractNodeType -->
    <xsl:template match="AbstractNodeType">
        <xsl:variable name="nodeName" select="@name"/>
        <xsl:text>		"</xsl:text>
        <xsl:value-of select="$nodeName"/>
        <xsl:text>" : {&#10;</xsl:text>
        <xsl:text>			"type": "object",&#10;</xsl:text>
        
        <!-- Handle inheritance -->
        <xsl:if test="Inheritance or AdditionalInheritance">
            <xsl:text>			"allOf": [&#10;</xsl:text>
            <xsl:for-each select="Inheritance | AdditionalInheritance">
                <xsl:text>				{&#10;</xsl:text>
                <xsl:text>					"$ref": "#/$defs/</xsl:text>
                <xsl:value-of select="@baseType"/>
                <xsl:text>"&#10;</xsl:text>
                <xsl:text>				}</xsl:text>
                <xsl:if test="position() != last()">
                    <xsl:text>,</xsl:text>
                </xsl:if>
                <xsl:text>&#10;</xsl:text>
            </xsl:for-each>
            <xsl:text>			],&#10;</xsl:text>
        </xsl:if>
        
        <!-- Properties -->
        <xsl:text>			"properties": {&#10;</xsl:text>
        <xsl:apply-templates select=".//field[@accessType != 'inputOnly' and @accessType != 'outputOnly']" mode="property"/>
        
        <!-- Handle children nodes -->
        <xsl:call-template name="childrenProperty">
            <xsl:with-param name="context" select="."/>
        </xsl:call-template>
        
        <xsl:text>			}&#10;</xsl:text>
        <xsl:text>		},&#10;</xsl:text>
    </xsl:template>
    
    <!-- Template for AbstractObjectType -->
    <xsl:template match="AbstractObjectType">
        <xsl:variable name="nodeName" select="@name"/>
        <xsl:text>		"</xsl:text>
        <xsl:value-of select="$nodeName"/>
        <xsl:text>" : {&#10;</xsl:text>
        <xsl:text>			"type": "object",&#10;</xsl:text>
        
        <!-- Handle inheritance -->
        <xsl:if test="Inheritance or AdditionalInheritance">
            <xsl:text>			"allOf": [&#10;</xsl:text>
            <xsl:for-each select="Inheritance | AdditionalInheritance">
                <xsl:text>				{&#10;</xsl:text>
                <xsl:text>					"$ref": "#/$defs/</xsl:text>
                <xsl:value-of select="@baseType"/>
                <xsl:text>"&#10;</xsl:text>
                <xsl:text>				}</xsl:text>
                <xsl:if test="position() != last()">
                    <xsl:text>,</xsl:text>
                </xsl:if>
                <xsl:text>&#10;</xsl:text>
            </xsl:for-each>
            <xsl:text>			],&#10;</xsl:text>
        </xsl:if>
        
        <!-- Properties -->
        <xsl:text>			"properties": {&#10;</xsl:text>
        <xsl:apply-templates select=".//field[@accessType != 'inputOnly' and @accessType != 'outputOnly']" mode="property"/>
        <xsl:text>			}&#10;</xsl:text>
        <xsl:text>		},&#10;</xsl:text>
    </xsl:template>
    
    <!-- Template for ConcreteNode -->
    <xsl:template match="ConcreteNode">
        <xsl:variable name="nodeName" select="@name"/>
        <xsl:text>		"</xsl:text>
        <xsl:value-of select="$nodeName"/>
        <xsl:text>" : {&#10;</xsl:text>
        <xsl:text>			"type": "object",&#10;</xsl:text>
        
        <!-- Handle inheritance -->
        <xsl:text>			"allOf": [&#10;</xsl:text>
        <xsl:text>				{&#10;</xsl:text>
        <xsl:text>					"$ref": "#/$defs/X3DConcreteNode"&#10;</xsl:text>
        <xsl:text>				}</xsl:text>
        <xsl:for-each select="Inheritance | AdditionalInheritance">
            <xsl:text>,&#10;</xsl:text>
            <xsl:text>				{&#10;</xsl:text>
            <xsl:text>					"$ref": "#/$defs/</xsl:text>
            <xsl:value-of select="@baseType"/>
            <xsl:text>"&#10;</xsl:text>
            <xsl:text>				}</xsl:text>
        </xsl:for-each>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>			],&#10;</xsl:text>
        
        <!-- Properties -->
        <xsl:text>			"properties": {&#10;</xsl:text>
        <xsl:apply-templates select=".//field[@accessType != 'inputOnly' and @accessType != 'outputOnly']" mode="property"/>
        
        <!-- Handle children nodes -->
        <xsl:call-template name="childrenProperty">
            <xsl:with-param name="context" select="."/>
        </xsl:call-template>
        
        <xsl:text>			}&#10;</xsl:text>
        <xsl:text>		},&#10;</xsl:text>
    </xsl:template>
    
    <!-- Template for Statement -->
    <xsl:template match="Statement">
        <xsl:variable name="nodeName" select="@name"/>
        <xsl:text>		"</xsl:text>
        <xsl:value-of select="$nodeName"/>
        <xsl:text>" : {&#10;</xsl:text>
        <xsl:text>			"type": "object",&#10;</xsl:text>
        
        <!-- Handle inheritance -->
        <xsl:text>			"allOf": [&#10;</xsl:text>
        <xsl:text>				{&#10;</xsl:text>
        <xsl:text>					"$ref": "#/$defs/X3DConcreteStatement"&#10;</xsl:text>
        <xsl:text>				}</xsl:text>
        
        <!-- Special handling for specific statements -->
        <xsl:if test="@name = 'ExternProtoDeclare' or @name = 'ProtoDeclare' or @name = 'IMPORT' or @name = 'EXPORT' or @name = 'ROUTE'">
            <xsl:text>,&#10;</xsl:text>
            <xsl:text>				{&#10;</xsl:text>
            <xsl:text>					"$ref": "#/$defs/X3DChildNode"&#10;</xsl:text>
            <xsl:text>				}</xsl:text>
        </xsl:if>
        
        <xsl:for-each select="Inheritance | AdditionalInheritance">
            <xsl:text>,&#10;</xsl:text>
            <xsl:text>				{&#10;</xsl:text>
            <xsl:text>					"$ref": "#/$defs/</xsl:text>
            <xsl:value-of select="@baseType"/>
            <xsl:text>"&#10;</xsl:text>
            <xsl:text>				}</xsl:text>
        </xsl:for-each>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>			],&#10;</xsl:text>
        
        <!-- Properties -->
        <xsl:text>			"properties": {&#10;</xsl:text>
        <xsl:apply-templates select=".//field[@accessType != 'inputOnly' and @accessType != 'outputOnly']" mode="property"/>
        
        <!-- Handle children nodes -->
        <xsl:call-template name="childrenProperty">
            <xsl:with-param name="context" select="."/>
        </xsl:call-template>
        
        <xsl:text>			}&#10;</xsl:text>
        <xsl:text>		},&#10;</xsl:text>
    </xsl:template>
    
    <!-- Template for field properties -->
    <xsl:template match="field" mode="property">
        <xsl:variable name="fieldName" select="@name"/>
        <xsl:variable name="fieldType" select="@type"/>
        
        <!-- Skip inputOnly and outputOnly fields -->
        <xsl:if test="@accessType != 'inputOnly' and @accessType != 'outputOnly'">
            <!-- Special handling for geoSystem -->
            <xsl:choose>
                <xsl:when test="$fieldName = 'geoSystem'">
                    <xsl:text>				"@geoSystem": {&#10;</xsl:text>
                    <xsl:text>					"$ref": "#/$defs/@geoSystem"&#10;</xsl:text>
                    <xsl:text>				}</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>				"@</xsl:text>
                    <xsl:value-of select="$fieldName"/>
                    <xsl:text>" : {&#10;</xsl:text>
                    
                    <!-- Handle min/max constraints for non-MF types -->
                    <xsl:if test="not(starts-with($fieldType, 'MF'))">
                        <xsl:if test="@maxExclusive">
                            <xsl:text>					"exclusiveMaximum" : </xsl:text>
                            <xsl:value-of select="@maxExclusive"/>
                            <xsl:text>,&#10;</xsl:text>
                        </xsl:if>
                        <xsl:if test="@maxInclusive">
                            <xsl:text>					"maximum" : </xsl:text>
                            <xsl:value-of select="@maxInclusive"/>
                            <xsl:text>,&#10;</xsl:text>
                        </xsl:if>
                        <xsl:if test="@minExclusive">
                            <xsl:text>					"exclusiveMinimum" : </xsl:text>
                            <xsl:value-of select="@minExclusive"/>
                            <xsl:text>,&#10;</xsl:text>
                        </xsl:if>
                        <xsl:if test="@minInclusive">
                            <xsl:text>					"minimum" : </xsl:text>
                            <xsl:value-of select="@minInclusive"/>
                            <xsl:text>,&#10;</xsl:text>
                        </xsl:if>
                        
                        <!-- Handle enumerations -->
                        <xsl:if test="enumeration">
                            <xsl:variable name="additionalAllowed" select="@additionalEnumerationValuesAllowed = 'true'"/>
                            <xsl:if test="$additionalAllowed">
                                <xsl:text>					"anyOf" : [ {&#10;</xsl:text>
                            </xsl:if>
                            <xsl:text>					"enum": [&#10;</xsl:text>
                            <xsl:for-each select="enumeration">
                                <xsl:text>						</xsl:text>
                                <xsl:choose>
                                    <xsl:when test="contains(@value, ' ')">
                                        <xsl:text>"</xsl:text>
                                        <xsl:call-template name="escape-json">
                                            <xsl:with-param name="text" select="@value"/>
                                        </xsl:call-template>
                                        <xsl:text>"</xsl:text>
                                    </xsl:when>
                                    <xsl:when test="contains(../@type, 'Int32')">
                                        <xsl:value-of select="@value"/>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:text>"</xsl:text>
                                        <xsl:value-of select="@value"/>
                                        <xsl:text>"</xsl:text>
                                    </xsl:otherwise>
                                </xsl:choose>
                                <xsl:if test="position() != last()">
                                    <xsl:text>,</xsl:text>
                                </xsl:if>
                                <xsl:text>&#10;</xsl:text>
                            </xsl:for-each>
                            <xsl:text>					]</xsl:text>
                            <xsl:if test="$additionalAllowed">
                                <xsl:text>					},&#10;</xsl:text>
                                <xsl:text>					{ "type" : "string" }&#10;</xsl:text>
                                <xsl:text>					],&#10;</xsl:text>
                            </xsl:if>
                            <xsl:if test="not($additionalAllowed)">
                                <xsl:text>,&#10;</xsl:text>
                            </xsl:if>
                        </xsl:if>
                        
                        <!-- Handle default values -->
                        <xsl:if test="@default and not(ancestor::*[@name = 'field' or @name = 'fieldValue'] and $fieldName = 'value')">
                            <xsl:text>					"default": </xsl:text>
                            <xsl:choose>
                                <xsl:when test="$fieldType = 'SFString'">
                                    <xsl:text>"</xsl:text>
                                    <xsl:call-template name="escape-json">
                                        <xsl:with-param name="text" select="@default"/>
                                    </xsl:call-template>
                                    <xsl:text>"</xsl:text>
                                </xsl:when>
                                <xsl:when test="$fieldType = 'SFImage' or $fieldType = 'SFRotation' or $fieldType = 'SFMatrix4f' or $fieldType = 'SFMatrix3f' or $fieldType = 'SFVec2f' or $fieldType = 'SFVec3d' or $fieldType = 'SFVec3f' or $fieldType = 'SFVec4f' or $fieldType = 'SFColor' or $fieldType = 'SFColorRGBA'">
                                    <xsl:text>[ </xsl:text>
            				<xsl:value-of select="translate(normalize-space(@default), ' ', ',')"/>
                                    <xsl:text> ]</xsl:text>
                                </xsl:when>
                                <xsl:when test="$fieldType = 'SFNode'">
                            		<xsl:choose>
        					<xsl:when test="@default = 'NULL'">null</xsl:when>
						<xsl:otherwise>
						    <xsl:value-of select="@default"/>
						</xsl:otherwise>
					</xsl:choose>
                                </xsl:when>
                                <xsl:when test="$fieldType = 'SFBool'">
                                    <xsl:choose>
                                        <xsl:when test="@default = 'true' or @default = 'TRUE'">
                                            <xsl:text>true</xsl:text>
                                        </xsl:when>
                                        <xsl:when test="@default = 'false' or @default = 'FALSE'">
                                            <xsl:text>false</xsl:text>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:value-of select="@default"/>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:value-of select="@default"/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:if>
			<xsl:if test="
			              not($fieldName = 'language' and local-name() = 'PackagedShader' and not(@default)) and
			              not($fieldName = 'language' and local-name() = 'ProgramShader'  and not(@default)) and
			              not($fieldName = 'language' and local-name() = 'X3DShaderNode'  and not(@default)) and
			              not($fieldName = 'name'     and local-name() = 'meta'           and not(@default)) and
			              not($fieldName = 'name'     and local-name() = 'HAnimDisplacer' and not(@default)) and
			              not($fieldName = 'name'     and local-name() = 'HAnimJoint'     and not(@default)) and
			              not($fieldName = 'name'     and local-name() = 'HAnimSegment'   and not(@default)) and
			              not($fieldName = 'name'     and local-name() = 'HAnimSite'      and not(@default)) and
				(
				$fieldType = 'SFColor' or
				$fieldType = 'SFColorRGBA' or
				$fieldType = 'SFDouble' or
				$fieldType = 'SFFloat' or
				$fieldType = 'SFImage' or
				$fieldType = 'SFInt32' or
				$fieldType = 'SFMatrix3f' or
				$fieldType = 'SFMatrix4f' or
				$fieldType = 'SFRotation' or
				$fieldType = 'SFTime' or
				$fieldType = 'SFVec2f' or
				$fieldType = 'SFVec3d' or
				$fieldType = 'SFVec3f' or
				$fieldType = 'SFVec4f' or
				@default = 'NULL' or
				@default = '-1' or
				@default = '0' or
				@default = '1' or
				@default = '2.0' or
				@default = '3' or
				@default = '4.0' or
				@default = 'false' or
				@default = 'true' or
				@default = 'AUTO' or
				@default = 'BASIC' or
				@default = 'CONSTANT' or
				@default = 'FASTEST' or
				@default = 'Full' or
				@default = 'INVERSE' or
				@default = 'LINEAR' or
				@default = 'LOWPASS' or
				@default = 'MATCH_ANY' or
				@default = 'MAX' or
				@default = 'NONE' or
				@default = 'PIE' or
				@default = 'PLAIN' or
				@default = 'REPEAT' or
				@default = 'SPEAKERS' or
				@default = 'SPHERE' or
				@default = 'SQUARE' or
				@default = 'localhost' or
				@default = 'standAlone' or
				(@default != 'BOUNDS' and @default != 'CLOSEST' and not(@default)))">
			    <xsl:text>,&#10;</xsl:text>
                        </xsl:if>
                    </xsl:if>
                    
                    <!-- Add comment and type -->
                    <xsl:if test="not(@additionalEnumerationValuesAllowed = 'true')">
                        <xsl:text>					"$comment":"</xsl:text>
                        <xsl:value-of select="$fieldType"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="@accessType"/>
                        <xsl:text>",&#10;</xsl:text>
                        <xsl:text>					"type":"</xsl:text>
                        <xsl:call-template name="getJSONType">
                            <xsl:with-param name="x3dType" select="$fieldType"/>
                        </xsl:call-template>
                        <xsl:text>"&#10;</xsl:text>
                    </xsl:if>
                    
                    <xsl:text>				}</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            
            <xsl:if test="position() != last() or following-sibling::*[local-name() = 'StatementContentModel' or local-name() = 'NodeContentModel' or local-name() = 'GroupContentModel']">
                <xsl:text>,</xsl:text>
            </xsl:if>
            <xsl:text>&#10;</xsl:text>
        </xsl:if>
    </xsl:template>
    
    <!-- Template for handling children nodes -->
    <xsl:template name="childrenProperty">
        <xsl:param name="context"/>
        
        <xsl:if test="$context//StatementContentModel or $context//NodeContentModel or $context//GroupContentModel">
	    <xsl:text>,&#10;</xsl:text>
            <xsl:text>				"-children" : {&#10;</xsl:text>
            <xsl:text>					"type": "array",&#10;</xsl:text>
            <xsl:text>					"items": {&#10;</xsl:text>
            <xsl:text>						"type": "object",&#10;</xsl:text>
            <xsl:text>						"oneOf": [&#10;</xsl:text>
            
            <!-- Collect all allowed child node types -->
            <xsl:variable name="childNodes">
                <xsl:for-each select="$context//StatementContentModel | $context//NodeContentModel | $context//GroupContentModel">
                    <xsl:for-each select="tokenize(@groupValues, '\|')">
                        <xsl:if test="normalize-space(.) != '' and not(starts-with(., 'X3D'))">
                            <child><xsl:value-of select="normalize-space(.)"/></child>
                        </xsl:if>
                    </xsl:for-each>
                </xsl:for-each>
            </xsl:variable>
            
            <xsl:for-each select="distinct-values($childNodes/child)">
                <xsl:sort select="."/>
                <xsl:text>							{&#10;</xsl:text>
                <xsl:text>								"$ref":"#/$defs/</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>"&#10;</xsl:text>
                <xsl:text>							}</xsl:text>
                <xsl:if test="position() != last()">
                    <xsl:text>,</xsl:text>
                </xsl:if>
                <xsl:text>&#10;</xsl:text>
            </xsl:for-each>
            
            <xsl:text>						]&#10;</xsl:text>
            <xsl:text>					}&#10;</xsl:text>
            <xsl:text>				}&#10;</xsl:text>
        </xsl:if>
    </xsl:template>
    
    <!-- Map X3D types to JSON types -->
    <xsl:template name="getJSONType">
        <xsl:param name="x3dType"/>
        <xsl:choose>
            <xsl:when test="$x3dType = 'SFBool' or $x3dType = 'MFBool'">boolean</xsl:when>
            <xsl:when test="$x3dType = 'SFInt32' or $x3dType = 'MFInt32'">integer</xsl:when>
            <xsl:when test="$x3dType = 'SFNode' or $x3dType = 'MFNode'">object</xsl:when>
            <xsl:when test="$x3dType = 'SFString' or $x3dType = 'MFString'">string</xsl:when>
            <xsl:otherwise>number</xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <!-- JSON string escaping -->
    <xsl:template name="escape-json">
        <xsl:param name="text"/>
        <xsl:choose>
        <xsl:when test="$text = 'NULL'">null</xsl:when>
        <xsl:otherwise><xsl:value-of select="replace(replace($text, '\\', '\\\\'), '&quot;', '\\&quot;')"/></xsl:otherwise>
	</xsl:choose>
    </xsl:template>
    
    <!-- Hardcoded geoSystem definition -->
    <xsl:template name="geoSystemDef">
        <xsl:text>		"@geoSystem": {&#10;</xsl:text>
        <xsl:text>			"$comment": "MFString geoSystem (initializeOnly), default [\"GD\" \"WE\"] - spatial reference system",&#10;</xsl:text>
        <xsl:text>			"default": [&#10;</xsl:text>
        <xsl:text>				"GD",&#10;</xsl:text>
        <xsl:text>				"WE"&#10;</xsl:text>
        <xsl:text>			],&#10;</xsl:text>
        <xsl:text>			"type": "array",&#10;</xsl:text>
        <xsl:text>			"minItems": 1,&#10;</xsl:text>
        <xsl:text>			"maxItems": 5,&#10;</xsl:text>
        <xsl:text>			"oneOf": [&#10;</xsl:text>
        <xsl:text>				{&#10;</xsl:text>
        <xsl:text>					"type": "array",&#10;</xsl:text>
        <xsl:text>					"minItems": 2,&#10;</xsl:text>
        <xsl:text>					"maxItems": 2,&#10;</xsl:text>
        <xsl:text>					"prefixItems": [&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"GD",&#10;</xsl:text>
        <xsl:text>								"GDC"&#10;</xsl:text>
        <xsl:text>							],&#10;</xsl:text>
        <xsl:text>							"default": "GD"&#10;</xsl:text>
        <xsl:text>						},&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"AM",&#10;</xsl:text>
        <xsl:text>								"AN",&#10;</xsl:text>
        <xsl:text>								"BN",&#10;</xsl:text>
        <xsl:text>								"BR",&#10;</xsl:text>
        <xsl:text>								"CC",&#10;</xsl:text>
        <xsl:text>								"CD",&#10;</xsl:text>
        <xsl:text>								"EA",&#10;</xsl:text>
        <xsl:text>								"EB",&#10;</xsl:text>
        <xsl:text>								"EC",&#10;</xsl:text>
        <xsl:text>								"ED",&#10;</xsl:text>
        <xsl:text>								"EE",&#10;</xsl:text>
        <xsl:text>								"EF",&#10;</xsl:text>
        <xsl:text>								"FA",&#10;</xsl:text>
        <xsl:text>								"HE",&#10;</xsl:text>
        <xsl:text>								"HO",&#10;</xsl:text>
        <xsl:text>								"ID",&#10;</xsl:text>
        <xsl:text>								"IN",&#10;</xsl:text>
        <xsl:text>								"KA",&#10;</xsl:text>
        <xsl:text>								"RF",&#10;</xsl:text>
        <xsl:text>								"SA",&#10;</xsl:text>
        <xsl:text>								"WD",&#10;</xsl:text>
        <xsl:text>								"WE"&#10;</xsl:text>
        <xsl:text>							],&#10;</xsl:text>
        <xsl:text>							"default": "WE"&#10;</xsl:text>
        <xsl:text>						}&#10;</xsl:text>
        <xsl:text>					],&#10;</xsl:text>
        <xsl:text>					"items": false&#10;</xsl:text>
        <xsl:text>				},&#10;</xsl:text>
        <xsl:text>				{&#10;</xsl:text>
        <xsl:text>					"type": "array",&#10;</xsl:text>
        <xsl:text>					"minItems": 3,&#10;</xsl:text>
        <xsl:text>					"maxItems": 5,&#10;</xsl:text>
        <xsl:text>					"prefixItems": [&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"GD",&#10;</xsl:text>
        <xsl:text>								"GDC"&#10;</xsl:text>
        <xsl:text>							],&#10;</xsl:text>
        <xsl:text>							"default": "GD"&#10;</xsl:text>
        <xsl:text>						},&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"S",&#10;</xsl:text>
        <xsl:text>								"N"&#10;</xsl:text>
        <xsl:text>							]&#10;</xsl:text>
        <xsl:text>						},&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"WGS84"&#10;</xsl:text>
        <xsl:text>							]&#10;</xsl:text>
        <xsl:text>						}&#10;</xsl:text>
        <xsl:text>					],&#10;</xsl:text>
        <xsl:text>					"items": {&#10;</xsl:text>
        <xsl:text>						"type": "string",&#10;</xsl:text>
        <xsl:text>						"enum": [&#10;</xsl:text>
        <xsl:text>							"AM",&#10;</xsl:text>
        <xsl:text>							"AN",&#10;</xsl:text>
        <xsl:text>							"BN",&#10;</xsl:text>
        <xsl:text>							"BR",&#10;</xsl:text>
        <xsl:text>							"CC",&#10;</xsl:text>
        <xsl:text>							"CD",&#10;</xsl:text>
        <xsl:text>							"EA",&#10;</xsl:text>
        <xsl:text>							"EB",&#10;</xsl:text>
        <xsl:text>							"EC",&#10;</xsl:text>
        <xsl:text>							"ED",&#10;</xsl:text>
        <xsl:text>							"EE",&#10;</xsl:text>
        <xsl:text>							"EF",&#10;</xsl:text>
        <xsl:text>							"FA",&#10;</xsl:text>
        <xsl:text>							"HE",&#10;</xsl:text>
        <xsl:text>							"HO",&#10;</xsl:text>
        <xsl:text>							"ID",&#10;</xsl:text>
        <xsl:text>							"IN",&#10;</xsl:text>
        <xsl:text>							"KA",&#10;</xsl:text>
        <xsl:text>							"RF",&#10;</xsl:text>
        <xsl:text>							"SA",&#10;</xsl:text>
        <xsl:text>							"WD",&#10;</xsl:text>
        <xsl:text>							"WE"&#10;</xsl:text>
        <xsl:text>						]&#10;</xsl:text>
        <xsl:text>					}&#10;</xsl:text>
        <xsl:text>				},&#10;</xsl:text>
        <xsl:text>				{&#10;</xsl:text>
        <xsl:text>					"type": "array",&#10;</xsl:text>
        <xsl:text>					"minItems": 2,&#10;</xsl:text>
        <xsl:text>					"maxItems": 5,&#10;</xsl:text>
        <xsl:text>					"prefixItems": [&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"UTM"&#10;</xsl:text>
        <xsl:text>							],&#10;</xsl:text>
        <xsl:text>							"default": "GD"&#10;</xsl:text>
        <xsl:text>						},&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"Z01", "Z1", "Z02", "Z2", "Z03", "Z3", "Z04", "Z4", "Z05", "Z5",&#10;</xsl:text>
        <xsl:text>								"Z06", "Z6", "Z07", "Z7", "Z08", "Z8", "Z09", "Z9", "Z10",&#10;</xsl:text>
        <xsl:text>								"Z11", "Z12", "Z13", "Z14", "Z15", "Z16", "Z17", "Z18", "Z19", "Z20",&#10;</xsl:text>
        <xsl:text>								"Z21", "Z22", "Z23", "Z24", "Z25", "Z26", "Z27", "Z28", "Z29", "Z30",&#10;</xsl:text>
        <xsl:text>								"Z31", "Z32", "Z33", "Z34", "Z35", "Z36", "Z37", "Z38", "Z39", "Z40",&#10;</xsl:text>
        <xsl:text>								"Z41", "Z42", "Z43", "Z44", "Z45", "Z46", "Z47", "Z48", "Z49", "Z50",&#10;</xsl:text>
        <xsl:text>								"Z51", "Z52", "Z53", "Z54", "Z55", "Z56", "Z57", "Z58", "Z59", "Z60"&#10;</xsl:text>
        <xsl:text>							],&#10;</xsl:text>
        <xsl:text>							"default": "WE"&#10;</xsl:text>
        <xsl:text>						},&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"S",&#10;</xsl:text>
        <xsl:text>								"N"&#10;</xsl:text>
        <xsl:text>							]&#10;</xsl:text>
        <xsl:text>						},&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"AM", "AN", "BN", "BR", "CC", "CD", "EA", "EB", "EC", "ED",&#10;</xsl:text>
        <xsl:text>								"EE", "EF", "FA", "HE", "HO", "ID", "IN", "KA", "RF", "SA",&#10;</xsl:text>
        <xsl:text>								"WD", "WE"&#10;</xsl:text>
        <xsl:text>							]&#10;</xsl:text>
        <xsl:text>						}&#10;</xsl:text>
        <xsl:text>					],&#10;</xsl:text>
        <xsl:text>					"items": {&#10;</xsl:text>
        <xsl:text>						"type": "string",&#10;</xsl:text>
        <xsl:text>						"enum": [&#10;</xsl:text>
        <xsl:text>							"WGS84"&#10;</xsl:text>
        <xsl:text>						]&#10;</xsl:text>
        <xsl:text>					}&#10;</xsl:text>
        <xsl:text>				},&#10;</xsl:text>
        <xsl:text>				{&#10;</xsl:text>
        <xsl:text>					"type": "array",&#10;</xsl:text>
        <xsl:text>					"minItems": 1,&#10;</xsl:text>
        <xsl:text>					"maxItems": 1,&#10;</xsl:text>
        <xsl:text>					"prefixItems": [&#10;</xsl:text>
        <xsl:text>						{&#10;</xsl:text>
        <xsl:text>							"type": "string",&#10;</xsl:text>
        <xsl:text>							"enum": [&#10;</xsl:text>
        <xsl:text>								"GC",&#10;</xsl:text>
        <xsl:text>								"GCC"&#10;</xsl:text>
        <xsl:text>							],&#10;</xsl:text>
        <xsl:text>							"default": "GD"&#10;</xsl:text>
        <xsl:text>						}&#10;</xsl:text>
        <xsl:text>					],&#10;</xsl:text>
        <xsl:text>					"items": false&#10;</xsl:text>
        <xsl:text>				}&#10;</xsl:text>
        <xsl:text>			]&#10;</xsl:text>
        <xsl:text>		}&#10;</xsl:text>
    </xsl:template>
    
</xsl:stylesheet>
