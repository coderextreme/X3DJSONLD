<?xml version="1.0" encoding="UTF-8"?>
<!--
Copyright (c) 2001-2022 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the names of the Naval Postgraduate School (NPS)
      Modeling Virtual Environments and Simulation (MOVES) Institute
      (https://www.nps.edu and https://www.MovesInstitute.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
-->
<!--
  <head>
   <meta name="title"       content="X3dToJson.xslt"/>
   <meta name="author"      content="Don Brutzman"/>
   <meta name="contributor" content="John Carlson provided lots of design guidance and co-development support"/>
   <meta name="contributor" content="Roy Walmsley fixed recursive array overflows through tokenization and also helped with encoding development"/>
   <meta name="created"     content="8 October 2014"/>
   <meta name="description" content="XSLT stylesheet to convert X3D source into JSON syntax."/>
   <meta name="reference"   content="https://www.web3d.org/x3d/stylesheets/X3dToJson.html"/>
   <meta name="reference"   content="https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"/>
   <meta name="reference"   content="https://www.freeformatter.com/xml-to-json-converter.html"/>
   <meta name="reference"   content="https://json.org"/>
   <meta name="reference"   content="https://www.ecma-international.org/publications/files/ECMA-ST/ECMA-404.pdf"/>
   <meta name="reference"   content="https://www.w3.org/TR/xslt"/>
   <meta name="reference"   content="XML Spy, https://www.xmlspy.com"/>
   <meta name="reference"   content="SAXON XML Toolkit, https://saxon.sourceforge.net"/>
   <meta name="generator"   content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"/>
   <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/X3dToJson.xslt"/>
   <meta name="reference"   content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJson.xslt"/>
   <meta name="license"     content="license.html"/>
  </head>
--> 
<!--
=======================================================================
  X3D JSON Design Considerations and X3dToJson.xslt Converter Status

  https://www.web3d.org/x3d/stylesheets/X3dToJson.html
=======================================================================
-->

<xsl:stylesheet version="2.0" exclude-result-prefixes="ds saxon"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#"
				xmlns:saxon="http://saxon.sf.net/">
    <!--
                xmlns="http://www.w3.org/TR/xhtml1/strict"
                xmlns:fn="http://www.w3.org/2005/xpath-functions" -->

    <xsl:param name="stripComments"><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="stripDefaultAttributes"><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="indentEnabled"><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="normalizeCommentWhitespace"><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="sourceTextMode"><xsl:text>strings</xsl:text></xsl:param> <!-- escaped | strings | plaintext -->
    <xsl:param name="traceEnabled" ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="traceScripts" ><xsl:text>false</xsl:text></xsl:param>
    <!-- TODO future feature: whether to apply changes to meta references, url file extensions, etc. -->
    <xsl:param name="updateContent" ><xsl:text>false</xsl:text></xsl:param>
        
    <xsl:variable name="x3dVersion" select="normalize-space(//X3D/@version)"/>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersion,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersion,'4')"/>
    
    <!-- saxon9he problem: fails due to line length, licensing issue: saxon:line-length="10000" -->
    <!-- https://stackoverflow.com/questions/23084785/xslt-avoid-new-line-added-between-element-attributes/43301327#43301327 -->
    <xsl:output method="text" encoding="UTF-8"/> <!-- output methods: xml html text -->
    
    <!-- encodings references -->
    <!-- https://www.sagehill.net/docbookxsl/SpecialChars.html -->
    <!-- https://stackoverflow.com/questions/9328882/encoding-special-chars-in-xslt-output -->
    <!-- https://stackoverflow.com/questions/4901133/json-and-escaping-characters -->
    
    <!-- global variables -->
	
    <!-- Identification of unit-test scenes rule is used in X3D Schematron and X3dToJson.xslt -->
    <xsl:variable name="isTestScene" 
                  select="(//meta[(@name='error') or (@name='warning') or (@name='hint') or (@name='info') or (@name='TODO')][starts-with(lower-case(@content),'test')]) or
                          (//meta[(@name='title')][starts-with(lower-case(@content),'test') or ends-with(lower-case(@content),'test.x3d')])"/>

    <xsl:template match="/"> <!-- process root of input document -->
        
        <xsl:apply-templates select="X3D | AllX3dElementsAttributes"> <!-- process top-level X3D element. DOCTYPE dropped, external comments handled next. -->
            <xsl:with-param name="indent"><xsl:text>0</xsl:text></xsl:with-param>
        </xsl:apply-templates>
        
        <!-- report if comments encountered outside of the X3D document, do not convert/move them into the JSON object -->
		<!-- note preceding:: and following:: constraints refer to the position of the X3D element with respect to the comment, hence logic appears reversed -->
        <xsl:if test="comment()[following::X3D]">
            <xsl:message>
                <xsl:text>Warning: comments preceding the top-level X3D element are not translated as part of the X3D JSON object file.</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:for-each select="comment()[following::X3D]">
                    <xsl:text>&lt;!--</xsl:text>
                    <xsl:value-of select="."/>
                    <xsl:text>--&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:for-each>
            </xsl:message>
        </xsl:if>
        <xsl:if test="comment()[preceding::X3D]">
            <xsl:message>
                <xsl:text>Warning: comments following the X3D element are not translated as part of the X3D JSON object file.</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:for-each select="comment()[preceding::X3D]">
                    <xsl:text>&lt;!--</xsl:text>
                    <xsl:value-of select="."/>
                    <xsl:text>--&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:for-each>
            </xsl:message>
        </xsl:if>
        
    </xsl:template>

    <xsl:template name="comments-elements-ROUTEs"> <!-- rule to process all child comments, elements and ROUTEs (X3D nodes and scene-graph structure statements) -->
        <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
		<!-- debug: fieldValue trace
		<xsl:if test="(local-name() = 'fieldValue')">
				<xsl:text> with contained nodes found: </xsl:text>
				<xsl:text>@name=</xsl:text>
				<xsl:value-of select="@name"/>
				<xsl:text>, $parentName=</xsl:text>
				<xsl:value-of select="local-name(..)"/>
				<xsl:text> @name=</xsl:text>
				<xsl:value-of select="../@name"/>
		</xsl:if>
		-->
        <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
        <xsl:if test="$debugTrace">
            <xsl:message>
                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                <xsl:text>* comments-elements-ROUTEs: </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> with </xsl:text>
                <xsl:value-of select="count(*)"/>
                <xsl:text> child nodes found:</xsl:text>
                <xsl:for-each select="*">
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
                </xsl:for-each>
            </xsl:message>
        </xsl:if>

        <!-- No commenting mechanism proved in JSON specification.  Nevertheless comments are included in X3D JSON encoding
             in order to support round-trip interoperability among X3D encodings. -->

        <!-- each child element is represented in a JSON array of JSON objects -->
        
        <!-- process entire set of immediate-child peers in an ordered fashion:  comments first, field/fieldValue next, IS next, elements next, ROUTEs last -->
        <xsl:variable name="allContainedCommentsElements">
            <!-- order gets shuffled a bit due to JSON unique-key requirements
            <xsl:apply-templates select="comment()">
                <xsl:with-param name="indent" select="$indent"/>
            </xsl:apply-templates> -->
            <xsl:apply-templates select="* | comment()">
                <!-- listed in reverse order -->
                <!-- sorting does not appear to be necessary (and makes comment sorting problematic), so skip it
                <xsl:sort select="not((local-name() = 'IS') or (local-name() = 'field') or (local-name() = 'fieldValue'))"/>
                <xsl:sort select="    (local-name() = 'IS')"/>
                <xsl:sort select="    (local-name() = 'field')"/>
                <xsl:sort select="    (local-name() = 'fieldValue')"/> -->
                <xsl:with-param name="indent" select="$indent"/>
            </xsl:apply-templates>
        </xsl:variable>
		<!-- string results provides source output for the converted nodes -->
        
        <!-- remove final comma from preceding construct to match JSON syntax: no comma at end of an array -->
        <xsl:value-of select="substring($allContainedCommentsElements,1,string-length($allContainedCommentsElements)-1)"/>
        
    </xsl:template>

    <xsl:template match="* | comment()"> <!-- rule to process each element (X3D nodes and scene-graph structure statements) -->
        <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
        <xsl:call-template name="trace">
            <xsl:with-param name="message"><xsl:text></xsl:text></xsl:with-param>
            <xsl:with-param name="element" select="local-name()"/>
            <xsl:with-param name="name"    select="@name"/>
            <xsl:with-param name="DEF"     select="@DEF"/>
            <xsl:with-param name="USE"     select="@USE"/>
            <xsl:with-param name="indent" select="$indent"/>
        </xsl:call-template>
        
        <xsl:variable name="elementName" select="local-name()"/>
        <xsl:variable name= "parentName" select="local-name(..)"/>
        
        <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
        <xsl:if test="$debugTrace">
          <xsl:message>
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
            <xsl:text>** xsl:template match="* | comment()" #</xsl:text>
            <xsl:value-of select="position()"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:if test="(string-length(@DEF) > 0)">
                <xsl:text>, DEF=</xsl:text>
                <xsl:value-of select="@DEF"/>
            </xsl:if>
            <xsl:if test="(string-length(@USE) > 0)">
                <xsl:text>, USE=</xsl:text>
                <xsl:value-of select="@USE"/>
            </xsl:if>
            <xsl:if test="(string-length(@name) > 0)">
                <xsl:text>, name=</xsl:text>
                <xsl:value-of select="@name"/>
            </xsl:if>
          </xsl:message>
        </xsl:if>
        
        <xsl:choose>
            <xsl:when test="($elementName = 'div') or ($elementName = 'span') or ($elementName = 'ui') or ($elementName = 'li') or ($elementName = 'canvas')">
                <xsl:if test="$debugTrace">
                    <!-- Drop the X3DOM elements (thanks to John Carlson) -->
                    <xsl:message>
                        <xsl:text>*** (drop)</xsl:text>
                    </xsl:message>
                </xsl:if>
            </xsl:when>

            <!-- ============================================================================================ -->
            <!-- scene-graph structure statements -->
            <xsl:when test="($elementName = 'X3D')       or ($elementName = 'head')       or ($elementName = 'Scene')     or
                            ($elementName = 'component') or ($elementName = 'meta')       or ($elementName = 'unit')      or 
                            ($elementName = 'IS')        or ($elementName = 'connect')    or
                            ($elementName = 'field')     or ($elementName = 'fieldValue') or ($elementName = 'ProtoInterface') or
                            ($elementName = 'ProtoBody') or
                            ($elementName = 'AllX3dElementsAttributes')"> <!-- for scene graph code-coverage testing -->
                <!-- special statements: scene-graph structure element may have attributes, contains arrays, but NOT surrounded by {squiggly brackets} -->

                <xsl:if test="$debugTrace">
                    <xsl:message>
                        <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                        <xsl:text>*** (scene-graph structure statements)</xsl:text>
                    </xsl:message>
                </xsl:if>
                <!-- if first of multiple siblings, process all at once -->
                <xsl:if test="not(preceding-sibling::*[local-name() = $elementName])">
                    <!-- first peer of its kind, found no preceding siblings with same name.  process all similar-sibling elements of this type at once. -->

                    <xsl:if test="$debugTrace">
                        <xsl:message>
                            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                            <xsl:text>*** first peer of its kind: #</xsl:text>
                            <xsl:value-of select="position()"/>
                            <xsl:text> </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:if test="(string-length(@DEF) > 0)">
                                <xsl:text>, DEF=</xsl:text>
                                <xsl:value-of select="@DEF"/>
                            </xsl:if>
                            <xsl:if test="(string-length(@USE) > 0)">
                                <xsl:text>, USE=</xsl:text>
                                <xsl:value-of select="@USE"/>
                            </xsl:if>
                            <xsl:if test="(string-length(@name) > 0)">
                                <xsl:text>, name=</xsl:text>
                                <xsl:value-of select="@name"/>
                            </xsl:if>
                        </xsl:message>
                    </xsl:if>

                    <!-- special case: scene-graph top-level structure elements, pre-fix -->
                    <xsl:choose>
                        <xsl:when test="(($elementName='X3D') and not($parentName='AllX3dElementsAttributes')) or ($elementName='AllX3dElementsAttributes')">
                            <xsl:text>{ </xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                        </xsl:otherwise>
                    </xsl:choose>

                    <xsl:text>"</xsl:text>
                    <xsl:value-of select="$elementName"/>
                    <xsl:text>"</xsl:text>
                    <xsl:text>:</xsl:text><!-- [scene-graph structure element contains keys -->
						
                    <!-- special case: scene-graph structure elements, pre-fix -->
                    <xsl:choose>
                        <xsl:when test="($elementName='X3D')">
                            <xsl:text> {</xsl:text><!-- attributes + follow-on nodes in scene-graph structure array -->
                            <xsl:if test="not($parentName='AllX3dElementsAttributes')">
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:text>    </xsl:text><!-- indent -->
                                    <xsl:text>"encoding":"UTF-8",</xsl:text> <!-- also allowed UTF-16 UTF-32 -->
                            </xsl:if>
                        </xsl:when>
                        <xsl:when test="($elementName='head') or ($elementName='Scene') or ($elementName='ProtoInterface') or ($elementName='ProtoBody') or ($elementName='IS') or ($elementName='AllX3dElementsAttributes')">
                            <xsl:if test="(count(@*) = 0)">
                                <xsl:text> {</xsl:text>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text> [</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
						
                    <xsl:for-each select="(self::* | following-sibling::*[local-name() = $elementName])">
                            <!-- process all sibling elements of this type at once -->
                            
                            <xsl:if test="$debugTrace">
                                <xsl:message>
                                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                                    <xsl:text>**** process all sibling elements of this type at once: #</xsl:text>
                                    <xsl:value-of select="position()"/>
                                    <xsl:text> </xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:if test="(string-length(@DEF) > 0)">
                                        <xsl:text>, DEF=</xsl:text>
                                        <xsl:value-of select="@DEF"/>
                                    </xsl:if>
                                    <xsl:if test="(string-length(@USE) > 0)">
                                        <xsl:text>, USE=</xsl:text>
                                        <xsl:value-of select="@USE"/>
                                    </xsl:if>
                                    <xsl:if test="(string-length(@name) > 0)">
                                        <xsl:text>, name=</xsl:text>
                                        <xsl:value-of select="@name"/>
                                    </xsl:if>
                                </xsl:message>
                            </xsl:if>

                            <!-- process attributes for this element, if any -->
                            <xsl:if test="@* and not($elementName='X3D') and not($elementName='AllX3dElementsAttributes')">
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                    <xsl:text>{</xsl:text><!-- attributes + follow-on nodes in scene-graph structure array -->
                            </xsl:if>

                            <xsl:if test="@*">
                                    <xsl:call-template name="attributes">
                                            <xsl:with-param name="indent"><xsl:value-of select="$indent+2"/></xsl:with-param>
                                    </xsl:call-template>
                            </xsl:if>

                            <xsl:if test="($elementName='X3D') and not($parentName='AllX3dElementsAttributes')">
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                    <!-- TODO no guidance yet on how to properly mark the governing schema within a JSON file at https://json-schema.org -->
                                    <xsl:text>"JSON schema":"https://www.web3d.org/specifications/x3d-4.0-JSONSchema.autogenerated.json"</xsl:text>
                                    <xsl:text>,</xsl:text>
                            </xsl:if>

                            <xsl:call-template name="comments-elements-ROUTEs"> <!-- contained content -->
                                    <xsl:with-param name="indent"><xsl:value-of select="$indent+4"/></xsl:with-param>
                            </xsl:call-template>

                            <!-- process attributes for this element, post-fix -->
                            <xsl:if test="@* or ($elementName='X3D')">
                                <xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                <xsl:text>}</xsl:text><!-- attributes + follow-on nodes in scene-graph structure array -->
                            </xsl:if>

                            <!-- special case: add meta tags for conversion, if others exist.  TODO handle if no head element provided. -->
                            <xsl:if test="(local-name() = 'meta') and (last() = position()) and not($parentName='AllX3dElementsAttributes')">
                                <xsl:text>,</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                <xsl:text>{</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                <xsl:text>"@name":"translated",</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                <xsl:text>"@content":"</xsl:text>
                                <xsl:value-of select="format-date(current-date(), '[D01] [MNn] [Y0001]')"/><xsl:text>"</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                <xsl:text>},</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                <xsl:text>{</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                <xsl:text>"@name":"generator",</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                <xsl:text>"@content":"X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                <!-- TODO omit warning when encoding is finished and stable -->
                                <xsl:text>},</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                <xsl:text>{</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                <xsl:text>"@name":"reference",</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                <xsl:text>"@content":"X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"</xsl:text><xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                                <xsl:text>}</xsl:text>
                            </xsl:if>

                            <!-- commas separate objects in this array.  do not terminate with comma. -->
                            <xsl:if test="(last() > position())"> 
                                <xsl:text>,</xsl:text>
                            </xsl:if>
                    </xsl:for-each>

                    <!-- special case: scene-graph structure elements, post-fix -->
                    <xsl:choose>
                        <xsl:when test="(($elementName='X3D') and not($parentName='AllX3dElementsAttributes'))">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text>}</xsl:text>
                        </xsl:when>
                        <xsl:when test="($elementName='AllX3dElementsAttributes')"> <!-- testing complete -->
                            <xsl:text>}</xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text>}</xsl:text>
                        </xsl:when>
                        <xsl:when test="($elementName='head') or ($elementName='Scene') or ($elementName = 'ProtoInterface') or ($elementName='ProtoBody') or ($elementName='IS')">
                            <xsl:if test="(count(@*) = 0)">
                                <xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                                <xsl:text>}</xsl:text>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                            <xsl:text>]</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    
                    <!-- add comma after array elements, lingering final comma is stripped later -->
                    <xsl:if test="not($elementName='X3D') and not($elementName='AllX3dElementsAttributes')">
                        <xsl:text>,</xsl:text>
                    </xsl:if>
                </xsl:if> <!-- initial sibling -->
            </xsl:when>
            <xsl:when test="($elementName = 'Signature')"><!-- ds:Signature -->

                <xsl:message>
                    <xsl:text>Warning: XML Digital Signature not supported in X3D JSON encoding, &lt;ds:Signature/&gt; authentication block ignored. </xsl:text>
                </xsl:message>

            </xsl:when>
            <!-- ============================================================================================ -->
            <xsl:otherwise>
                <!-- base case: simple element, optional attributes, accessed by containerField (or overriding fieldName) -->
                <!-- includes ROUTE and ProtoInstance -->
                
                <xsl:variable name="fieldName">
                    <xsl:choose>
			<!-- special test case for full coverage of scene-graph elements, attributes and default values -->
                        <xsl:when test="($parentName = 'AllX3dElementsAttributes') and ($elementName = 'X3D')">
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <!-- ProtoDeclare and ExternProtoDeclare names are encoded with children nodes -->
                        <xsl:when test="($elementName = 'ProtoDeclare') or ($elementName = 'ExternProtoDeclare')">
                            <!-- <xsl:value-of select="$elementName"/>  similarly to containerField names, each contains an array-->
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <!-- comments and ROUTE elements are treated as objects under -children field, regardless of parent node -->
                        <xsl:when test="self::comment()">
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="($elementName = 'ROUTE')">
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="($elementName = 'IMPORT') or ($elementName = 'EXPORT')">
                            <!-- IMPORT and EXPORT names are encoded with children nodes -->
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="($parentName = 'Scene')">
                            <!-- Metadata* nodes are allowed as children -->
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="($parentName = 'ProtoBody')">
                            <!-- note that all children of ProtoBody go into "-children" field; first node is node type for that prototype declaration -->
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="($parentName = 'field') or ($parentName = 'fieldValue')">
                            <!-- parent ProtoInterface handled separately -->
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="($parentName = 'Scene') and starts-with($elementName, 'Metadata')">
                            <!-- Metadata* nodes as root nodes at top level of Scene are special case, treated as children.  TODO confirm mantis spec tooltips and webpage are reviewed/approved/updated. -->
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="string-length(@containerField) > 0">
                            <!-- following depends on schema being properly read and providing containerField values -->
                            <xsl:value-of select="@containerField"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- Note that this error condition occurs if DTD default attribute values are suppressed before invocation -->
                            <xsl:text>IllegalChildNodeFieldNameNotFound</xsl:text>
                            <xsl:message>
                                <xsl:text>Error: IllegalChildNodeFieldNameNotFound no containerField or field name found for the X3D JSON object. Check spelling of node.</xsl:text>
                                <xsl:text>&#10;</xsl:text>
                                <xsl:text>  $elementName=</xsl:text>
                                <xsl:value-of select="$elementName"/>
                                <xsl:if test="(string-length(@DEF) > 0)">
                                        <xsl:text>, DEF=</xsl:text>
                                        <xsl:value-of select="@DEF"/>
                                </xsl:if>
                                <xsl:if test="(string-length(@USE) > 0)">
                                        <xsl:text>, USE=</xsl:text>
                                        <xsl:value-of select="@USE"/>
                                </xsl:if>
                                <xsl:text>, $parentName=</xsl:text>
                                <xsl:value-of select="$parentName"/>
                                <xsl:text>&#10;</xsl:text>
                                <xsl:choose>
                                        <xsl:when test="not($isTestScene)">
                                                <xsl:text>  Please report this error to x3d-public@web3d.org - thanks for your help improving X3D Quality Assurance (QA).</xsl:text>
                                        </xsl:when>
                                        <xsl:when test="(string-length(//meta[(@name='title')]/@content) > 0)">
                                                <xsl:text>  </xsl:text>
                                                <xsl:value-of select="//meta[(@name='title')]/@content"/>
                                                <xsl:text> is a test scene supporting X3D Quality Assurance (QA).</xsl:text>
                                        </xsl:when>
                                </xsl:choose>
                            </xsl:message>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                
            <!-- check some special cases that are unambiguously fixable -->
                <xsl:variable name="expectedContainerField">
                    <xsl:choose>
                        <xsl:when test="(local-name(..) = 'GeoLOD') and not(local-name() = 'GeoOrigin') and not(starts-with(local-name(), 'Metadata'))">
                            <xsl:text>rootNode</xsl:text>
                        </xsl:when>
                        <xsl:when test="(local-name(..) = 'HAnimHumanoid') and (local-name() = 'HAnimSegment')">
                            <xsl:text>segments</xsl:text>
                        </xsl:when>
                        <!-- HAnimHumanoid can contain HAnimJoint with containerField = joints or skeleton -->
                        <!-- HAnimHumanoid can contain HAnimSite  with containerField = sites, skeleton or viewpoints -->
                        <!-- HAnimHumanoid can contain X3DCoordinateNode with containerField = skinCoord or skinBindingCoords -->
                        <!-- HAnimHumanoid can contain X3DNormalNode with containerField = skinNormal or skinBindingNormals -->
                    </xsl:choose>
                </xsl:variable>
                <xsl:if test="(string-length($expectedContainerField) > 0) and not(@containerField = $expectedContainerField)">
                    <xsl:message>
                        <xsl:text>... containerField mismatch for </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="@DEF"/>
                        <xsl:text>', found containerField='</xsl:text>
                        <xsl:value-of select="@containerField"/>
                        <xsl:text>' but expected containerField='</xsl:text>
                        <xsl:value-of select="$expectedContainerField"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:if>

                <!-- Metadata nodes are allowed at top level of scene, but have different default containerField and thus require special attention -->
                <xsl:variable name="isSceneMetadata"
                              select="($parentName = 'Scene') and starts-with($elementName,'Metadata')"/>

                <xsl:variable name="hasPriorSibling"
                              select="preceding-sibling::*[@containerField = $fieldName] or 
                                      (($fieldName = 'children') and
                                       (preceding-sibling::*[$parentName = 'field']       or 
                                        preceding-sibling::*[$parentName = 'fieldValue']  or 
                                        preceding-sibling::*[$parentName = 'ProtoBody']   or 
                                        preceding-sibling::ProtoDeclare                   or  
                                        preceding-sibling::ExternProtoDeclare             or  
                                        preceding-sibling::ROUTE                          or  
                                        preceding-sibling::IMPORT                         or  
                                        preceding-sibling::EXPORT                         or  
                                        preceding-sibling::comment()                      or 
                                        preceding-sibling::*[$parentName = 'Scene'][starts-with($elementName,'Metadata')]))"/>
                <xsl:choose>
                    <!-- if first of multiple siblings, process all at once -->
                    <xsl:when test="not($hasPriorSibling)">
                        <!-- first peer of its kind, found no preceding siblings with same name -->
                        <xsl:if test="$debugTrace">
                            <xsl:message>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                                <xsl:text>*** (base case, first of multiple siblings)</xsl:text>
                            </xsl:message>
                        </xsl:if>

                        <xsl:text>&#10;</xsl:text>
                        <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>

                        <xsl:variable name="SFNodeType" select="
                            ($fieldName = 'back')               or ($fieldName = 'bottom')             or ($fieldName = 'front')              or 
                            ($fieldName = 'left')               or ($fieldName = 'right')              or ($fieldName = 'top')                or 
                            ($fieldName = 'backTexture')        or ($fieldName = 'bottomTexture')      or ($fieldName = 'frontTexture')       or 
                            ($fieldName = 'leftTexture')        or ($fieldName = 'rightTexture')       or ($fieldName = 'topTexture')         or 
                            ($fieldName = 'appearance')         or ($fieldName = 'body1')              or ($fieldName = 'body2')              or
                            ($fieldName = 'collidable')         or ($fieldName = 'collider')           or
                            ($fieldName = 'color')              or ($fieldName = 'colorRamp')          or ($fieldName = 'coord')              or 
                            ($fieldName = 'controlPoint')       or ($fieldName = 'controlPoints')      or ($fieldName = 'crossSectionCurve')  or
                            ($fieldName = 'emitter')            or ($fieldName = 'fillProperties')     or
                            ($fieldName = 'fogCoord')           or ($fieldName = 'fontStyle')          or ($fieldName = 'geoOrigin')          or
                            ($fieldName = 'geometry')           or ($fieldName = 'geometry1')          or ($fieldName = 'geometry2')          or
                            ($fieldName = 'gradients')          or ($fieldName = 'layout')             or ($fieldName = 'lineProperties')     or
                            ($fieldName = 'massDensityModel')   or ($fieldName = 'material')           or
                            ($fieldName = 'metadata')           or ($fieldName = 'normal')             or ($fieldName = 'pickingGeometry')    or
                            ($fieldName = 'profileCurve')       or ($fieldName = 'proxy')              or 
                            ($fieldName = 'segmentIdentifiers') or ($fieldName = 'skinCoord')          or ($fieldName = 'skinNormal')         or
                            ($fieldName = 'surface')            or ($fieldName = 'surfaceNormals')     or
                            ($fieldName = 'targetObject')       or ($fieldName = 'texCoordRamp')       or ($fieldName = 'textureProperties')  or
                            ($fieldName = 'trajectoryCurve')    or ($fieldName = 'transferFunction')   or
                            ($fieldName = 'viewpoint')          or ($fieldName = 'voxels')             or
                            ($fieldName = 'weightTransferFunction1') or
                            ($fieldName = 'weightTransferFunction2') or
                            (($fieldName = 'renderStyle')       and (($parentName='BlendedVolumeStyle') or ($parentName='VolumeData')))     or
                            (($fieldName = 'source')            and ($parentName='Sound'))                                                  or
                            (($fieldName = 'texCoord')          and not($parentName='MultiTextureCoordinate'))                              or 
                            (($fieldName = 'texture')           and not(($parentName='ComposedTexture3D') or ($parentName='MultiTexture'))) or
                            (($fieldName = 'textureTransform')  and not($parentName='MultiTextureTransform'))                               or
                            (($fieldName = 'shape')             and (($parentName='CADFace') or ($parentName='CollidableShape')))" />

                        <!-- contained node containerField -->
                        <xsl:if test="not(local-name() = 'ProtoInterface') and not(local-name() = 'ProtoBody')">
                            <xsl:text>"</xsl:text>
                            <xsl:text>-</xsl:text><!-- visual assist, TODO determine if part of final pattern -->
                            <xsl:value-of select="$fieldName"/>
                            <xsl:text>"</xsl:text>
                            <xsl:text>:</xsl:text>
                            <!-- SFNode tests -->
                            <xsl:if test="not($SFNodeType) or //AllX3dElementsAttributes">
                                    <xsl:text>[</xsl:text>
                            </xsl:if>
                        </xsl:if>
                        <!-- select node() list, note use of | operator rather than "or" -->
                        <xsl:for-each select="
                                (self::* | 
                                self::comment() |
                                following-sibling::*[@containerField = $fieldName] | 
                                following-sibling::*[$parentName = 'field']      [$fieldName = 'children'] |
                                following-sibling::*[$parentName = 'fieldValue'] [$fieldName = 'children'] |
                                following-sibling::*[$parentName = 'ProtoBody']  [$fieldName = 'children'] |
                                following-sibling::ProtoDeclare                  [$fieldName = 'children'] | 
                                following-sibling::ExternProtoDeclare            [$fieldName = 'children'] | 
                                following-sibling::ROUTE                         [$fieldName = 'children'] | 
                                following-sibling::IMPORT                        [$fieldName = 'children'] | 
                                following-sibling::EXPORT                        [$fieldName = 'children'] | 
                                following-sibling::comment()                     [$fieldName = 'children'] | 
                                following-sibling::*[$parentName = 'Scene'][starts-with(local-name(),'Metadata')][$fieldName = 'children'])">
                            <!-- greedy algorithm to process all elements of this field type at once -->
                            <!-- base case: simple element, optional attributes, accessed by containerField -->
                            <xsl:text>&#10;</xsl:text>
                            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                            <xsl:text>{</xsl:text><!-- base case: simple element inside containerField -->
                            <xsl:choose>
                                <xsl:when test="self::comment()">
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                    <xsl:text>"</xsl:text>
                                    <xsl:text>#comment</xsl:text>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text> "</xsl:text>
                                    <xsl:value-of select="local-name()"/> <!-- $elementName not working?? -->
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:text>"</xsl:text>
                            <xsl:text>:</xsl:text>

                            <!-- process attributes for this element, if any -->
                            <xsl:if test="@*">
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                    <xsl:text>{</xsl:text><!-- attributes array for otherwise case (followed by additional contained nodes, if any) -->
                                    <xsl:call-template name="attributes">
                                            <xsl:with-param name="indent" select="$indent+4"/>
                                    </xsl:call-template>
                            </xsl:if>
                            <!-- comment prose -->
                            <xsl:if test="self::comment()"> 
                                <xsl:text>"</xsl:text>
                                <!--  escaped quote requires preceding backslash in JSON encoding -->
                                <xsl:call-template name="escape-comment-recurse">
									<xsl:with-param name="inputValue">
										<xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
									</xsl:with-param>
                                </xsl:call-template>
                                <xsl:text>"</xsl:text>
                            </xsl:if>

                            <xsl:if test="* | comment()"> <!-- node() includes CDATA text -->
                                <!-- recurse; each child element is represented in a JSON array of JSON objects -->
                                <xsl:call-template name="comments-elements-ROUTEs"> <!-- contained content -->
                                    <xsl:with-param name="indent"><xsl:value-of select="$indent+6"/></xsl:with-param>
                                </xsl:call-template>
                            </xsl:if>

                            <!-- process contained child text(), looking for source code -->
                            <xsl:if test="(string-length(normalize-space(string(.))) > 0) and not(normalize-space(string(.)) = ' ')">
                                <!-- add comma separator if field/IS/connect definitions are preceding and this is indeed the node containing source code (rather than a descendant) -->
                                <xsl:if test="((local-name() = 'Script') or (local-name() = 'ShaderPart') or (local-name() = 'ShaderProgram'))">

                                    <xsl:call-template name="trace">
                                            <xsl:with-param name="message">
                                                    <xsl:text>trace: count(*)=</xsl:text>
                                                    <xsl:value-of select="count(*)"/>
                                                    <xsl:text>, count(@*)=</xsl:text>
                                                    <xsl:value-of select="count(@*)"/>
                                                    <xsl:text>, attribute value(s)=</xsl:text>
                                                    <xsl:value-of select="@*[(string-length(normalize-space(string(.))) > 0) and not(local-name()='containerField')]"/>
                                            </xsl:with-param>
                                            <xsl:with-param name="element"><xsl:value-of select="local-name()"/></xsl:with-param>
                                            <xsl:with-param name="traceEnabled"><xsl:text>false</xsl:text></xsl:with-param>
                                    </xsl:call-template>
                                    <!-- only output comma prior to #sourceTextMode if preceded by a child node or (non-containerField) attribute value. watch out for default values! -->
                                    <xsl:if test="(count(*) > 0) or (count(@*[(string-length(normalize-space(string(.))) > 0) and not(local-name()='containerField')]) > 0)">
                                        <xsl:if test="(count(*) > 0) or not((local-name() = 'Script') and (@directOutput = 'false') and (@mustEvaluate = 'false') and (string-length(normalize-space(@DEF)) = 0) and (string-length(normalize-space(@url)) = 0))">
                                            <xsl:text>,</xsl:text>
                                        </xsl:if>
                                    </xsl:if>
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+6"/></xsl:call-template>
                                    <xsl:apply-templates select="text()"/> <!-- Script/ShaderPart/ShaderProgram #sourceCode -->
                                </xsl:if>
                            </xsl:if>

                            <xsl:if test="@*">
                                <xsl:text>&#10;</xsl:text>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+4"/></xsl:call-template>
                                <xsl:text>}</xsl:text><!-- attributes array for otherwise case (followed by additional contained nodes, if any) -->
                            </xsl:if>

                            <xsl:text>&#10;</xsl:text>
                            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                            <xsl:text>}</xsl:text><!-- base case: simple element inside containerField -->

                            <!-- commas separate objects in this array.  do not terminate with comma. -->
                            <xsl:if test="(last() > position())"> 
                                <xsl:text>,</xsl:text>
                            </xsl:if>
                        </xsl:for-each>

                        <!-- contained node containerField -->
                        <xsl:if test="not(local-name() = 'ProtoInterface') and not(local-name() = 'ProtoBody')">
                            <!-- SFNode tests -->
                            <xsl:if test="not($SFNodeType) or //AllX3dElementsAttributes">
                                    <xsl:text>&#10;</xsl:text>
                                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                                    <xsl:text>]</xsl:text>
                            </xsl:if>
                        </xsl:if>

                        <!-- <xsl:if test="parent::Scene or parent::ProtoBody or (not(../@*) and not(../preceding-sibling::comment()))">
                        <xsl:text>&#10;</xsl:text>
                        <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                            <xsl:text>}</xsl:text>base case: brackets outside containerField
                        </xsl:if> -->

                        <xsl:text>,</xsl:text>
                    </xsl:when> <!-- initial sibling -->
                    <xsl:otherwise>
                        <xsl:if test="$debugTrace or not($hasPriorSibling)">
                            <!-- no match on first of multiple siblings -->
                            <xsl:message>
                                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                                <xsl:text>*** Warning: (base case element processing, no match on first of multiple siblings, was it handled?) </xsl:text>
                                <xsl:text> $hasPriorSibling=</xsl:text>
                                <xsl:value-of select="$hasPriorSibling"/>
                                <xsl:text>, $isSceneMetadata=</xsl:text>
                                <xsl:value-of select="$isSceneMetadata"/>
                            </xsl:message>
                        </xsl:if>
                    </xsl:otherwise>
                </xsl:choose>

            </xsl:otherwise>
            <!-- ============================================================================================ -->
        </xsl:choose>
        
    </xsl:template> <!-- end match="*" -->

    <xsl:template match="hide/comment()">
        <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
        <xsl:param name="stripComments"><xsl:value-of select="$stripComments"/></xsl:param>

        <xsl:call-template name="trace">
            <xsl:with-param name="message">
                <xsl:text>$stripComments=</xsl:text>
                <xsl:value-of select="$stripComments"/>
                <xsl:text>, </xsl:text>
                <xsl:value-of select="normalize-space(string(.))"/>
            </xsl:with-param>
            <xsl:with-param name="element"><xsl:text>#comment</xsl:text></xsl:with-param>
            <xsl:with-param name="indent" select="$indent"/>
            <xsl:with-param name="traceEnabled"><xsl:text>false</xsl:text></xsl:with-param>
        </xsl:call-template>
        
        <xsl:if test="not($stripComments = 'true') and (count(preceding-sibling::comment()) = 0)">

            <!-- "#comment" is used as key for this JSON object, similar to ROUTE or other containerField values, which collects an array of JSON strings -->

            <xsl:text>&#10;</xsl:text>
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
            <!-- <xsl:if test="parent::Scene or parent::ProtoBody or not(../@*)">
                <xsl:text>{ </xsl:text>base case: brackets outside comment
            </xsl:if> -->
            <xsl:text>"</xsl:text>
            <xsl:text>#comment</xsl:text> <!-- comment prefix -->
            <xsl:value-of select="name()"/>
            <xsl:text>"</xsl:text>
            <xsl:text>:[</xsl:text>
            
            <xsl:variable name="allCommentsStringArray">
                <!-- greedily put all peer comments in this array of strings -->
                <xsl:for-each select="self::comment() | following-sibling::comment()">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent+2"/></xsl:call-template>
                    <xsl:text>"</xsl:text>
                    <!--  escaped quote requires preceding backslash in JSON encoding -->
                    <xsl:call-template name="escape-comment-recurse">
                        <xsl:with-param name="inputValue" select="normalize-space(string(.))"/>
                    </xsl:call-template>
                    <xsl:text>"</xsl:text>
                    <xsl:text>,</xsl:text>
                </xsl:for-each>
            </xsl:variable>
            <!-- strip trailing comma -->
            <xsl:value-of select="substring($allCommentsStringArray,1,string-length($allCommentsStringArray)-1)"/>
            
            <xsl:text>&#10;</xsl:text>
            <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
            <xsl:text>]</xsl:text>
            <!-- <xsl:if test="parent::Scene or parent::ProtoBody or not(../@*)">
                <xsl:text>&#10;</xsl:text>
                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>
                <xsl:text>}</xsl:text>base case: brackets outside comment
            </xsl:if> -->
            <xsl:text>,</xsl:text>
        </xsl:if>
    </xsl:template> <!-- match="comment()" -->

    <xsl:template name="attributes"> <!-- rule to process all attributes -->
        <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>

        <xsl:variable name="allAttributesString">
            <xsl:apply-templates select="@*">
                <xsl:sort select="not(local-name() = 'name')"/>
                <xsl:sort select="   (local-name() = 'name')"/>
                <xsl:with-param name="indent" select="$indent+2"/>
            </xsl:apply-templates>
        </xsl:variable>
        <!-- strip final comma, when follow-on element(s) or comment(s) are contained -->
        <xsl:choose>
            <xsl:when test="* | comment()"> <!-- node() includes CDATA text -->
                <xsl:value-of select="$allAttributesString"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="substring($allAttributesString,1,string-length($allAttributesString)-1)"/>
            </xsl:otherwise>
        </xsl:choose>
        
    </xsl:template> <!-- end match="attributes" -->

    <xsl:template match="@*"> <!-- rule to process each @attribute -->
        <xsl:param name="isComment"><xsl:text>false</xsl:text></xsl:param>
        <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>

        <!-- an attribute is handled as a JSON "@name":_value_ pair with appropriate type matching -->
 
        <xsl:variable name="normalizedValue" select="normalize-space(string(.))"/>
        
        <!-- Detect and suppress default attribute values -->
        
        <xsl:variable name="notDefaultAttributeValue">
            <xsl:call-template name="not-default-attribute-value">
            </xsl:call-template>
        </xsl:variable>
        
        <!-- eliminate default attribute values (based on parameter setting) otherwise they will all appear in output  -->
        <xsl:if test="((local-name()='DEF') or (local-name()='USE') or (local-name()='name') or
                       ((string-length($notDefaultAttributeValue) > 0) and not(local-name() = 'containerField'))
                      and not(/AllX3dElementsAttributes))">

            <xsl:variable name="attributeName"     select="local-name()"/>
            <xsl:variable name="fieldValueName"    select="../@name"/>
            <xsl:variable name="protoInstanceName" select="(../../@name)"/>
            <xsl:variable name="fieldValueType1"   select="      //ProtoDeclare[@name = $protoInstanceName][1]/ProtoInterface/field[@name=$fieldValueName][1]/@type"/>
            <xsl:variable name="fieldValueType2"   select="//ExternProtoDeclare[@name = $protoInstanceName][1]               /field[@name=$fieldValueName][1]/@type"/>
            <!-- only one of these should be available -->
            <xsl:variable name="fieldValueType"    select="concat($fieldValueType1[1],$fieldValueType2[1])"/>
            <!-- debug ProtoInstance
            <xsl:if test="(string-length($protoInstanceName) > 0) and ($attributeName = 'value')">
                <xsl:message>
                    <xsl:text>$protoInstanceName=</xsl:text>
                    <xsl:value-of select="$protoInstanceName"/>
                    <xsl:text>, fieldValue $attributeName=</xsl:text>
                    <xsl:value-of select="$attributeName"/>
                    <xsl:text>, $fieldValueName=</xsl:text>
                    <xsl:value-of select="$fieldValueName"/>
                    <xsl:text>, $normalizedValue=</xsl:text>
                    <xsl:value-of select="$normalizedValue"/>
                    <xsl:text>, @name=</xsl:text>
                    <xsl:value-of select="local-name(//*[contains(local-name(),'ProtoDeclare')][@name = $protoInstanceName])"/>
                    <xsl:text>, @type=</xsl:text>
                    <xsl:value-of select="//*[contains(local-name(),'ProtoDeclare')][@name = $protoInstanceName]//field[@name=$fieldValueName]/@type"/>
                    <xsl:text>, $fieldValueType=</xsl:text>
                    <xsl:value-of select="$fieldValueType"/>
                </xsl:message>
            </xsl:if>
            -->
            <!-- debug field, fieldValue
            <xsl:if test="starts-with(local-name(..),'field') and (local-name()='name')">
                <xsl:message>
                    <xsl:text>&gt;</xsl:text>
                    <xsl:value-of select="local-name(..)"/>
                    <xsl:text> name='</xsl:text>
                    <xsl:value-of select="."/>
					<xsl:if test="(string-length(normalize-space(../@type)) > 0)">
						<xsl:text>' type='</xsl:text>
						<xsl:value-of select="../@type"/>
					</xsl:if>
					<xsl:if test="(string-length(normalize-space(../@accessType)) > 0)">
						<xsl:text>' accessType='</xsl:text>
						<xsl:value-of select="../@accessType"/>
					</xsl:if>
                    <xsl:text>' value='</xsl:text>
                    <xsl:value-of select="../@value"/>
                    <xsl:text>'/&lt;</xsl:text>
                </xsl:message>
            </xsl:if>
            -->
            
            <!-- common processing for each attribute -->
            <!--  escaped quote requires preceding backslash in JSON encoding
            <xsl:variable name="normalizedSFStringEmbeddedQuotes">
                <xsl:call-template name="escape-special-characters-quotes-recurse">
                  <xsl:with-param name="inputValue" select="normalize-space(string(.))"/>
                  <xsl:with-param name="inputType"><xsl:text>SFString</xsl:text></xsl:with-param>
                </xsl:call-template>
            </xsl:variable> -->
            <xsl:variable name="containsQuote"        select="contains($normalizedValue, '&quot;')"/>
            <xsl:variable name="containsEscapedQuote" select="contains($normalizedValue,'\&quot;')"/>
            
            <!-- now process attribute value.  if this attribute is part of a USE node, then only output USE, containerField, class attributes. -->
            <xsl:if test="((string-length(../@USE) = 0) or (local-name()='USE') or (local-name()='name') or 
                           (local-name()='containerField') or (local-name()='class') or
                           (local-name(..)='X3D') and ((local-name()='profile') or (local-name()='version')))
							and not(/AllX3dElementsAttributes)
							and not((local-name(..) = 'X3D') and (local-name() = 'width' or local-name() = 'height' or local-name() = 'backend' or local-name() = 'showStat' or local-name() = 'showLog')) and not(local-name() = 'skyTransparency') and not(local-name() = 'groundTransparency') and not(local-name() = 'id') and not(local-name() = 'subdivision')"> <!-- This line are X3DOM attributes -->
                <xsl:text>&#10;</xsl:text>
                <xsl:call-template name="print-indent"><xsl:with-param name="indent" select="$indent"/></xsl:call-template>

                <xsl:text>"</xsl:text>
                <xsl:text>@</xsl:text> <!-- attribute prefix -->
                <xsl:value-of select="name()"/>
                <xsl:text>"</xsl:text>
                <xsl:text>:</xsl:text>
                <!-- output attribute values according to data type ========================================================================== -->
                <xsl:variable name="attributeType">
                    <xsl:call-template name="attribute-type"/>
                </xsl:variable>
                <!-- debug -->
                <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
                <xsl:if test="$debugTrace">
                    <xsl:message>
                        <xsl:text>[@* choose type handling] $attributeType=</xsl:text>
                        <xsl:value-of select="$attributeType"/>
                        <xsl:text>, $normalizedValue=</xsl:text>
                        <xsl:value-of select="$normalizedValue"/>
                    </xsl:message>
                </xsl:if>
				
                <xsl:choose>
                    <!-- TODO optimize duplication of type checking which is present due to integration of rule attribute-type with original rules -->
                    <!-- deterministic rules first: use type information for normalizing text or numbers or booleans ========================= -->
                    <!-- single boolean -->
                    <xsl:when test="not($attributeType = 'MFBool') and
                                    (($attributeType = 'SFBool') or
                                     ($normalizedValue='true') or ($normalizedValue='false') or 
                                     ((local-name()='value') and ((../@type='SFBool') or (contains(local-name(../..),'Proto') and ($fieldValueType='SFBool')))))">
                        <xsl:value-of select="$normalizedValue"/>
                    </xsl:when>
                    <!-- boolean array -->
                    <xsl:when test="($attributeType = 'MFBool') or
                                    ((local-name()='value') and ((../@type='MFBool') or (contains(local-name(../..),'Proto') and ($fieldValueType='MFBool')))) or
                                    ((local-name(..)='BooleanSequencer')    and (local-name()='keyValue')) or
                                    ((local-name(..)='MetadataBoolean')     and (local-name()='value')) or
                                    ((local-name(..)='CADLayer')            and ($attributeName='visible') and starts-with(//X3D/@version,'3')) or
                                    ((local-name(..)='SegmentedVolumeData') and (local-name()='segmentEnabled'))">
                        <xsl:text>[</xsl:text>
                        <!--  array values require comma between values in JSON encoding -->
                        <xsl:call-template name="insert-commas-recurse">
                          <xsl:with-param name="inputValue" select="$normalizedValue"/>
                          <xsl:with-param name="inputType"><xsl:text>MFBool</xsl:text></xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>]</xsl:text>
                    </xsl:when>
                    <!-- no xs:string type handling for X3D statements, rather SFString according to Object Model for X3D (OM4X3D) -->
                    <!-- comments handled separately -->
                    <xsl:when test="(local-name(..)='meta')  or
                                    (local-name()='appinfo') or (local-name()='documentation')">
                        <!-- debug -->
                        <xsl:if test="$debugTrace">
                            <xsl:message>
                                <xsl:text>[@* statement SFString handling]</xsl:text>
                            </xsl:message>
                        </xsl:if>
                        <xsl:text>"</xsl:text>
                        <xsl:call-template name="escape-special-characters-quotes-recurse">
                                <xsl:with-param name="inputValue" select="."/>
                                <xsl:with-param name="inputType"><xsl:text>SFString</xsl:text></xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>"</xsl:text>
                    </xsl:when>
                    <!-- single string -->
                    <xsl:when test="($attributeType = 'SFString') or 
                                    not(local-name() ='url') and not(ends-with(local-name(),'Url')) and
                                       ((local-name()='value') and 
                                       ((contains(local-name(../..),'Proto') or contains(local-name(../../..),'Proto')) and
                                       ((../@type='SFString') or ($fieldValueType='SFString'))) or
                                        (local-name()='DEF')        or (local-name()='USE')         or (local-name()='class')      or (local-name()='containerField') or
                                        (local-name()='fromField')  or (local-name()='fromNode')    or (local-name()='toField')    or (local-name()='toNode')         or
                                        (local-name()='name')       or (local-name()='description') or (local-name()='accessType') or 
                                        (local-name()='marking')    or (local-name()='description') or
					(local-name()='nodeField')  or (local-name()='protoField')  or
                                        ((local-name()='type') and not(local-name(..)='NavigationInfo')))
                                     ">
                        <!-- debug -->
                        <xsl:if test="$debugTrace">
                            <xsl:message>
                                <xsl:text>[@* SFString handling]</xsl:text>
                            </xsl:message>
                        </xsl:if>
                        <xsl:text>"</xsl:text>
                        <!--  escaped quote requires preceding backslash in JSON encoding, actually matching X3D encoding -->
                        <xsl:call-template name="escape-special-characters-quotes-recurse">
                          <xsl:with-param name="inputValue" select="$normalizedValue"/>
                          <xsl:with-param name="inputType"><xsl:text>SFString</xsl:text></xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>"</xsl:text>
                    </xsl:when>
					<!-- string array -->
                    <xsl:when test="($attributeType = 'MFString') or
                                    ((local-name()='value') and ((../@type='MFString') or (contains(local-name(../..),'Proto') and ($fieldValueType='MFString')))) or
                                     (local-name()='url') or ends-with(local-name(),'Url') or
                                     (  ../@name = 'url') or ends-with(  ../@name,  'Url') or (local-name()='geoSystem') or
                                    ((local-name(..)='Text')                and (local-name()='string')) or
                                    ((local-name(..)='Anchor')              and (local-name()='parameter')) or
                            (contains(local-name(..),'FontStyle')           and ((local-name()='family') or (local-name()='justify'))) or
                                    ((local-name(..)='MetadataString')      and (local-name()='value')) or
                                    ((local-name(..)='MultiTexture')        and ((local-name()='function') or (local-name()='mode') or (local-name()='source'))) or
                                    ((local-name(..)='NavigationInfo')      and ((local-name()='type') or (local-name()='transitionType'))) or
                                    ((local-name(..)='WorldInfo')           and (local-name()='info')) or
                                    ((local-name(..)='GeoMetadata')         and (local-name()='summary')) or
                                    ((local-name(..)='HAnimHumanoid')       and (local-name()='info')) or
                                    ((local-name(..)='Layout')              and ((local-name()='align') or (local-name()='offsetUnits') or (local-name()='scaleMode') or (local-name()='sizeUnits'))) or
                                    ((local-name(..)='CollisionCollection') and (local-name()='appliedParameters')) or
                                    ((local-name(..)='GeoViewpoint')        and (local-name()='navType')) or
                                     (local-name()='objectType')">
                    <!-- debug fieldValue, Text -->
                    <xsl:if test="$debugTrace">
                            <xsl:if test="(local-name(..) = 'fieldValue') and (local-name() = 'value')">
                                <xsl:message>
                                    <xsl:text>[@* MFString handling] </xsl:text>
                                    <xsl:value-of select="local-name(..)"/>
                                    <xsl:text>, local-name()=</xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text>, (../@name/.)=</xsl:text>
                                    <xsl:value-of select="(../@name/.)"/>
                                </xsl:message>
                            </xsl:if>
                            <xsl:if test="(local-name(..) = 'Text') and (local-name() = 'string')">
                                <xsl:message>
                                    <xsl:text>[@* MFString handling]</xsl:text>
                                    <xsl:value-of select="local-name(..)"/>
                                    <xsl:text> string=</xsl:text>
                                    <xsl:value-of select="$normalizedValue"/>
                                    <xsl:text> type MFString, $attributeType=</xsl:text>
                                    <xsl:value-of select="$attributeType"/>
                                    <xsl:text>, $normalizedValue=</xsl:text>
                                    <xsl:value-of select="$normalizedValue"/>
                                </xsl:message>
                            </xsl:if>
                    </xsl:if>
                        <xsl:text>[</xsl:text>
                        
                        <xsl:variable name="escape-special-characters-quotes-recurse-result">
                            <xsl:call-template name="escape-special-characters-quotes-recurse">
                                <xsl:with-param name="inputValue" select="$normalizedValue"/>
                                <xsl:with-param name="inputType"><xsl:text>MFString</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:variable>
                        <!-- debug-->
                        <xsl:if test="$debugTrace">
                            <xsl:message>
                                <xsl:text>[@* confirming] $escape-special-characters-quotes-recurse-result=</xsl:text>
                                <xsl:value-of select="$escape-special-characters-quotes-recurse-result"/>
                            </xsl:message>
                        </xsl:if>
                        
                        <xsl:variable name="insert-commas-recurse-result">
                            <xsl:call-template name="insert-commas-recurse">
                                <xsl:with-param name="inputValue" select="$escape-special-characters-quotes-recurse-result"/>
                                <xsl:with-param name="inputType"><xsl:text>MFString</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:variable>
                        <!-- debug-->
                        <xsl:if test="$debugTrace">
                            <xsl:message>
                                <xsl:text>[@* confirming] $insert-commas-recurse-result=</xsl:text>
                                <xsl:value-of select="$insert-commas-recurse-result"/>
                            </xsl:message>
                        </xsl:if>
                        
                        <xsl:choose>
                            <xsl:when test="not(starts-with($normalizedValue,'&quot;')) and not(ends-with($normalizedValue,'&quot;'))">
                                <xsl:text>&quot;</xsl:text>
                                <xsl:value-of select="$escape-special-characters-quotes-recurse-result"/>
                                <xsl:text>&quot;</xsl:text>     
                                <xsl:call-template name="trace">
                                    <xsl:with-param name="message">
                                        <xsl:text> warning: wrapped missing &quot;quote marks&quot; around single-string value for MFString @</xsl:text>
                                        <xsl:value-of select="local-name()"/>
                                        <xsl:text>='</xsl:text>
                                        <xsl:value-of select="."/>
                                        <xsl:text>' and be sure to fix source file!</xsl:text>
                                        <xsl:if test="($traceScripts = 'true')">
                                            <xsl:text>&#10;</xsl:text>
                                            <xsl:value-of select="."/>
                                        </xsl:if>
                                    </xsl:with-param>
                                    <xsl:with-param name="element" select="local-name(..)"/>
                                    <xsl:with-param name="name"    select="../@name"/>
                                    <xsl:with-param name="DEF"     select="../@DEF"/>
                                    <xsl:with-param name="USE"     select="../@USE"/>
                                    <xsl:with-param name="traceEnabled"><xsl:text>true</xsl:text></xsl:with-param><!-- override -->
                                </xsl:call-template>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$insert-commas-recurse-result"/>
                            </xsl:otherwise>
                        </xsl:choose>

                        <xsl:text>]</xsl:text>
                    </xsl:when>
                   <!-- single integer number -->
                    <xsl:when test="($attributeType = 'SFInt32') or
                                    ((local-name()='value') and (../@type='SFInt32')) or
                                    (contains(local-name(../..),'Proto') and ($fieldValueType='SFInt32'))">
                        <xsl:call-template name="output-integers">
                            <xsl:with-param name="inputValue" select="normalize-space(translate($normalizedValue, ',', ' '))"/>
                        </xsl:call-template>
                    </xsl:when>
                   <!-- single real number -->
                    <xsl:when test="($attributeType = 'SFFloat') or ($attributeType = 'SFDouble') or ($attributeType = 'SFTime') or
                                    ((local-name()='value') and ((../@type='SFFloat') or (../@type='SFDouble') or (../@type='SFTime'))) or
                                    (contains(local-name(../..),'Proto') and (($fieldValueType='SFFloat') or ($fieldValueType='SFDouble') or ($fieldValueType='SFTime')))">
                        <xsl:call-template name="output-reals">
                            <xsl:with-param name="inputValue" select="normalize-space(translate($normalizedValue, ',', ' '))"/>
                        </xsl:call-template>
                    </xsl:when>
                    <!-- integer number array -->
                    <xsl:when test="($attributeType = 'MFInt32') or contains($attributeType, 'Image') or
                                    ((local-name()='value') and 
                                        (          (../@type='MFInt32')    or               (../@type='SFImage')))   or
                                    (contains(local-name(../..),'Proto') and 
                                        (  ($fieldValueType='MFInt32')     or        ($fieldValueType='SFImage')))">
                        <xsl:text>[</xsl:text>
                        <xsl:call-template name="output-integers">
                            <xsl:with-param name="inputValue" select="normalize-space(translate($normalizedValue, ',', ' '))"/>
                        </xsl:call-template>
                        <xsl:text>]</xsl:text>
                    </xsl:when>
                    <!-- real number array -->
                    <xsl:when test="($attributeType = 'MFFloat') or ($attributeType = 'MFDouble') or ($attributeType = 'MFTime') or
                                        starts-with($attributeType,'SFVec') or starts-with($attributeType,'MFVec') or contains($attributeType,'Matrix') or 
                                    ((local-name()='value') and 
                                        starts-with($attributeType, 'SFVec') or starts-with($attributeType, 'MFVec')   or
                                        contains($attributeType, 'Color')  or    contains($attributeType, 'Rotation')) or
                                    contains($attributeType, 'Matrix')  or
                                    ((local-name()='value') and 
                                        (          (../@type='MFFloat')    or  
                                                   (../@type='MFDouble')   or            (../@type='MFTime')         or
                                                   (../@type='SFRotation') or            (../@type='MFRotation')     or
                                        starts-with(../@type,'SFVec')      or starts-with(../@type,'MFVec')          or
                                           contains(../@type,'Color')      or    contains(../@type,'Matrix')))       or
                                    (contains(local-name(../..),'Proto') and 
                                        (  ($fieldValueType='MFFloat')     or
                                           ($fieldValueType='MFDouble')    or        ($fieldValueType='MFTime')      or
                                           ($fieldValueType='SFRotation')  or        ($fieldValueType='MFRotation')  or
                                starts-with($fieldValueType,'SFVec')       or starts-with($fieldValueType,'MFVec')   or
                                   contains($fieldValueType,'Color')       or    contains($fieldValueType,'Matrix')))">
                        <xsl:text>[</xsl:text>
                        <!--  array values require comma between values in JSON encoding -->
                        <xsl:call-template name="output-reals">
                            <xsl:with-param name="inputValue" select="normalize-space(translate($normalizedValue, ',', ' '))"/>
                        </xsl:call-template>
                        <xsl:text>]</xsl:text>
                    </xsl:when>
                    <!-- heuristic rules next ========================================================================== -->
                    <!-- string for IP address -->
                    <xsl:when test="(local-name()='address') or 
                                    (local-name()='multicastRelayHost') or
                                    ((string-length(translate($normalizedValue,'.','')) + 3 = (string-length($normalizedValue))) and not(contains($normalizedValue,' ')))">
                        <xsl:text>"</xsl:text>
                        <xsl:value-of select="$normalizedValue"/>
                        <xsl:text>"</xsl:text>
                    </xsl:when>
                    <!-- single number -->
                    <xsl:when test="not(contains($normalizedValue,' ')) and (string-length(normalize-space(translate($normalizedValue,'0123456789+-Ee.,',''))) = 0)">
                        <xsl:call-template name="output-reals">
                            <xsl:with-param name="inputValue" select="normalize-space(translate($normalizedValue, ',', ' '))"/>
                        </xsl:call-template>
                    </xsl:when>
                    <!-- number array -->
                    <xsl:when test="(string-length(normalize-space(translate($normalizedValue,'0123456789+-Ee.,',''))) = 0)">
                        <xsl:text>[</xsl:text>
                        <!--  array values require comma between values in JSON encoding -->
                        <xsl:variable name="normalizedFloats">
                            <xsl:call-template name="insert-leading-trailing-zeroes-recurse">
                              <xsl:with-param name="inputValue" select="normalize-space(translate($normalizedValue, ',', ' '))"/>
                            </xsl:call-template>
                        </xsl:variable>
                        <xsl:call-template name="insert-commas-recurse">
                            <xsl:with-param name="inputValue" select="$normalizedFloats"/>
                            <xsl:with-param name="inputType"><xsl:text>[number]</xsl:text></xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>]</xsl:text>
                    </xsl:when>
                    <!-- string array -->
                    <xsl:when test="($containsQuote and not($containsEscapedQuote)) and 
                                     not((local-name(..)='meta') or (local-name()='description'))">
                                    <!-- TODO list SFString values that might contain a quote mark -->
                        <xsl:text>[</xsl:text>
                        <xsl:call-template name="insert-commas-recurse">
                            <xsl:with-param name="inputValue">
                                <xsl:call-template name="escape-less-than-characters-recurse">
									<xsl:with-param name="inputValue">
										<xsl:call-template name="escape-backslash-characters-recurse">
											<xsl:with-param name="inputValue" select="$normalizedValue"/>
										</xsl:call-template>
									</xsl:with-param>
                                </xsl:call-template>
                            </xsl:with-param>
                            <xsl:with-param name="inputType"><xsl:text>MFString</xsl:text></xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>]</xsl:text>
                    </xsl:when>
                    <!-- unknown, use single string  TODO add trace? -->
                    <xsl:otherwise>
                        <xsl:text>"</xsl:text>
                        <!--  escaped quote requires preceding backslash in JSON encoding -->
                        <xsl:call-template name="escape-special-characters-quotes-recurse">
                            <xsl:with-param name="inputValue" select="$normalizedValue"/>
                            <xsl:with-param name="inputType"><xsl:text>SFString</xsl:text></xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>"</xsl:text>
                        <!-- TODO terser test, check coverage -->
                        <xsl:if test="not((local-name(..)='field') or (local-name(..)='fieldValue') or contains(local-name(..),'Proto') or (local-name(..)='meta'))">
                            <xsl:message>
                                <xsl:text>Error: X3dToJson.xslt converter not finding element-attribute type for </xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                            </xsl:message>
                        </xsl:if>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- end attribute:value pairs ========================================================================== -->

                <xsl:text>,</xsl:text>
            </xsl:if>
        </xsl:if>
        
    </xsl:template> <!-- end match="@*" -->

    <xsl:template match="text()"> <!-- rule to isolate stray text -->
    
        <xsl:choose>
            <xsl:when test="(string-length(normalize-space(string(.))) > 0) and not(normalize-space(string(.)) = ' ')">
                <xsl:variable name="elementName" select="local-name(..)"/>
                <!-- TODO also look for namespace of parent element so that XML Security and other compound-document elements get reported -->
                <xsl:variable name="traceMessage">
                    <xsl:choose>
                        <xsl:when test="($elementName = 'Script') or ($elementName = 'ShaderPart') or ($elementName = 'ShaderProgram')">
                            <xsl:text> contains CDATA source-code text, copied as "#sourceCode" using &quot;</xsl:text>
                            <xsl:value-of select="$sourceTextMode"/>
                            <xsl:text>&quot; mode</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text> contains stray text characters: &quot;</xsl:text>
                            <xsl:value-of select="."/>
                            <xsl:text>&quot;</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
        
                <xsl:call-template name="trace">
                    <xsl:with-param name="message">
                        <xsl:value-of select="$traceMessage"/>
                        <xsl:if test="($traceScripts = 'true')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="."/>
                        </xsl:if>
                    </xsl:with-param>
                    <xsl:with-param name="element" select="$elementName"/>
                    <xsl:with-param name="DEF"     select="../@DEF"/>
                    <xsl:with-param name="USE"     select="../@USE"/>
                    <xsl:with-param name="traceEnabled"><xsl:text>true</xsl:text></xsl:with-param><!-- override -->
                </xsl:call-template>
                
                <!-- "#sourceCode" is used as key for this JSON object, similar to #comment, but note that there is no array of source JSON strings -->
                
                <xsl:text>"</xsl:text>
                <xsl:text>#sourceCode</xsl:text> <!-- comment prefix -->
                <xsl:value-of select="name()"/>
                <xsl:text>"</xsl:text>
                <xsl:text>:</xsl:text>
                
                <xsl:variable name="sourceStringText">
					<!-- be careful not to omit newline characters!
					<xsl:value-of select="."/> -->
                    <xsl:call-template name="escape-quote-characters-recurse">
                        <xsl:with-param name="inputText">
							<xsl:call-template name="escape-backslash-characters-recurse">
								<xsl:with-param name="inputValue" select="."/>
							</xsl:call-template>
                        </xsl:with-param>
                    </xsl:call-template>
                </xsl:variable>

				<!-- debug (also use trace messages below) -->
				<xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
				<xsl:variable name="debugMessage">
						<xsl:text>parameter $sourceCode=</xsl:text>
						<xsl:value-of select="$sourceTextMode" disable-output-escaping="yes"/>
						<xsl:text>&#10;</xsl:text>
						<xsl:text>$sourceStringText=</xsl:text>
						<xsl:value-of select="$sourceStringText" disable-output-escaping="yes"/>
				</xsl:variable>
				<xsl:if test="$debugTrace"><xsl:message><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>

                <!-- json, jslint insist on \n instead of newline characters, since humans are apparently less important than language dogma. -->
                <!-- output options for embedded source:  escaped | strings | plaintext -->
                <xsl:choose>
                    <xsl:when test="($sourceTextMode = 'escaped')">
                        <xsl:text>[</xsl:text>
                        <xsl:text>"</xsl:text>
                        <xsl:call-template name="replace-newlines-recurse">
                            <xsl:with-param name="inputValue">
                                <xsl:call-template name="replace-tabs-recurse">
                                    <xsl:with-param name="inputValue" select="$sourceStringText"/>
                                </xsl:call-template>
                            </xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>"</xsl:text>
                        <xsl:text>]</xsl:text>
                    </xsl:when>
                    <xsl:when test="($sourceTextMode = 'plaintext')">
                        <xsl:text>[</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>"</xsl:text>
                        <xsl:value-of select="$sourceStringText"/> <!-- newline and tab characters unmodified -->
                        <xsl:text>"</xsl:text>
                        <xsl:text>]</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:if test="not($sourceTextMode = 'strings')">
                            <xsl:message>
                                <xsl:text>illegal value for $sourceTextMode=</xsl:text>
                                <xsl:value-of select="$sourceTextMode"/>
                                <xsl:text>, allowed values are escaped | strings | plaintext.  Using default $sourceTextMode=strings</xsl:text>
                            </xsl:message>
                        </xsl:if>
                        <xsl:text>[</xsl:text>
                        <xsl:call-template name="split-text-block-into-string-array-recurse">
                            <xsl:with-param name="inputValue">
                                <xsl:call-template name="replace-tabs-recurse">
                                    <xsl:with-param name="inputValue" select="$sourceStringText"/>
                                </xsl:call-template>
                            </xsl:with-param>
                        </xsl:call-template>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>]</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:when>
            <xsl:otherwise>
                <!-- ignore whitespace -->
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- print-indent keeps track of indenting level -->
    <xsl:template name="print-indent">
      <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
      <xsl:if test="($indentEnabled = 'true') and ($indent > 0)">
        <xsl:text> </xsl:text>
        <xsl:call-template name="print-indent">
          <xsl:with-param name="indent" select="$indent - 1"/>
        </xsl:call-template>
      </xsl:if>
    </xsl:template>
    
    <xsl:template name="escape-comment-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>

        <!-- debug (also use trace messages below) -->
        <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
        <xsl:variable name="debugMessage">
                <xsl:text>[e-c-r input][local-name()=comment]</xsl:text>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
        </xsl:variable>
        <xsl:if test="$debugTrace"><xsl:message><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
		
		<xsl:choose>
		  <xsl:when test="(string-length($inputString) = 0)">
			<!-- empty, all done -->
		  </xsl:when>
		  <xsl:when test="not(contains($inputString,'\')) and not(contains($inputString,'&quot;'))">
				<!-- all done -->
				<xsl:value-of select="$inputString"/>
		  </xsl:when>
		  <xsl:when test="starts-with($inputString,'\&quot;')">
			<!-- starts with quote, escape it -->
			<xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-c-r][1]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
			<xsl:text>\\\"</xsl:text>
			<xsl:call-template name="escape-comment-recurse">
				<xsl:with-param name="inputValue" select="substring($inputString,2)"/><!-- initial character index is 1 -->
			</xsl:call-template>
		  </xsl:when>
		  <xsl:when test="starts-with($inputString,'\\')">
			<!-- starts with backslash, escape it -->
			<xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-c-r][2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
			<xsl:text>\\\\</xsl:text>
			<xsl:call-template name="escape-comment-recurse">
				<xsl:with-param name="inputValue" select="substring($inputString,2)"/><!-- initial character index is 1 -->
			</xsl:call-template>
		  </xsl:when>
		  <xsl:when test="starts-with($inputString,'&quot;')">
			<!-- starts with backslash, escape it -->
			<xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-c-r][2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
			<xsl:text>\"</xsl:text>
			<xsl:call-template name="escape-comment-recurse">
				<xsl:with-param name="inputValue" select="substring($inputString,2)"/><!-- initial character index is 1 -->
			</xsl:call-template>
		  </xsl:when>
		  <xsl:when test="starts-with($inputString,'\')">
			<!-- starts with backslash, escape it -->
			<xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-c-r][2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
			<xsl:text>\\</xsl:text>
			<xsl:call-template name="escape-comment-recurse">
				<xsl:with-param name="inputValue" select="substring($inputString,2)"/><!-- initial character index is 1 -->
			</xsl:call-template>
		  </xsl:when>
		  <xsl:otherwise>
			<!-- pass first character, tail recurse to continue -->
			<xsl:value-of select="substring($inputString,1,1)"/>
			<xsl:call-template name="escape-comment-recurse">
				<xsl:with-param name="inputValue" select="substring($inputString,2)"/><!-- initial character index is 1 -->
			</xsl:call-template>
		  </xsl:otherwise>
		</xsl:choose>
        
    </xsl:template>
    
    <xsl:template name="escape-special-characters-quotes-recurse">
        <xsl:param name="inputType"><xsl:text>unknown</xsl:text></xsl:param>
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>

        <!-- debug (also use trace messages below) -->
        <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
        <xsl:variable name="debugMessage">
                <xsl:text>[e-s-c-q-r input][local-name()=</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:if test="self::comment()">
                  <xsl:text>comment</xsl:text>
                </xsl:if>
                <xsl:text>]</xsl:text>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
                <xsl:text>[inputType=</xsl:text>
                <xsl:value-of select="$inputType"/>
                <xsl:text>]</xsl:text>
        </xsl:variable>
        <xsl:if test="$debugTrace"><xsl:message><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
        
        <xsl:call-template name="escape-quote-characters-recurse">
            <xsl:with-param name="inputType"><xsl:value-of select="$inputType"/></xsl:with-param>
            <xsl:with-param name="inputText">
                <xsl:call-template name="escape-less-than-characters-recurse">
                    <xsl:with-param name="inputValue">
                        <xsl:call-template name="escape-greater-than-characters-recurse">
                            <xsl:with-param name="inputValue">
                                <xsl:call-template name="escape-backslash-characters-recurse">
                                    <xsl:with-param name="inputValue" select="$inputString"/>
                                </xsl:call-template>
                            </xsl:with-param>
                        </xsl:call-template>
                    </xsl:with-param>
                </xsl:call-template>
            </xsl:with-param>
        </xsl:call-template>
    </xsl:template>

    <xsl:template name="escape-quote-characters-recurse">
      <xsl:param name="inputText"><xsl:text></xsl:text></xsl:param> <!-- possibly normalized white space -->
      <xsl:param name="inputType"><xsl:text>unknown</xsl:text></xsl:param>
      <xsl:param name="firstPass"><xsl:value-of select="true()"/></xsl:param>
	  
      <xsl:variable name="inputString">
		  <xsl:value-of select="$inputText"/>
		<!--
          <xsl:choose>
              <xsl:when test="($normalizeCommentWhitespace = 'true')">
                  <xsl:value-of select="normalize-space($inputText)"/>
              </xsl:when>
              <xsl:otherwise>
                  <xsl:value-of select="$inputText"/>
              </xsl:otherwise>
          </xsl:choose>
		-->
      </xsl:variable>

      <!-- debug (also use trace messages below) -->
      <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
      <xsl:variable name="debugMessage">
          <xsl:text>[e-q-c-r input][local-name()=</xsl:text>
          <xsl:value-of select="local-name()"/>
		  <xsl:if test="self::comment()">
			<xsl:text>comment</xsl:text>
		  </xsl:if>
          <xsl:text>]</xsl:text>
          <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
          <xsl:text>[inputType=</xsl:text>
          <xsl:value-of select="$inputType"/>
          <xsl:text>]</xsl:text>
      </xsl:variable>
    <!-- <xsl:if test="$debugTrace"><xsl:message><xsl:text>[0]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if> -->

    <xsl:variable name="doubleBackslash"><xsl:text>\</xsl:text><xsl:text>\</xsl:text></xsl:variable>
    <!-- <xsl:message><xsl:text>$doubleBackslash=</xsl:text><xsl:value-of select="$doubleBackslash"/></xsl:message> -->
	  
      <!--  escaped quote " within an SFString value requires a preceding backslash \ in JSON encoding. -->
      <!--  must be careful not to escape "delimiting" "quotes" in MFString array. -->
      <xsl:choose>
        <!-- starts with space, pass it along -->
        <xsl:when test="starts-with($inputString,' ')">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.0a]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:text> </xsl:text><!-- pass initial whitespace -->
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring($inputString,2)"/><!-- initial character index is 1 -->
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <xsl:when test="starts-with($inputString,'\&quot;')">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.0b]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:text>\&quot;</xsl:text><!-- pass initial \" string as \\\" (note that one \ was passed already) -->
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring($inputString,3)"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <xsl:when test="starts-with($inputString,'&quot;&quot; ')">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.0c]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:if test="not($firstPass)">
              <xsl:text>,</xsl:text><!-- separate values -->
          </xsl:if>
          <xsl:text>"",</xsl:text><!-- pass initial (intermediate) "" empty string -->
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring($inputString,4)"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <xsl:when test="starts-with($inputString,'&quot;&quot;')">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.0c]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:if test="not($firstPass)">
              <xsl:text>,</xsl:text><!-- separate values -->
          </xsl:if>
          <xsl:text>""</xsl:text><!-- pass through "" empty string -->
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring($inputString,3)"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <xsl:when test="not(contains($inputString,'&quot;')) and not(contains($inputString,'\'))">
		  <!-- all done, no further processing -->
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.0d]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <!-- comment: \ literal is same for X3D and JSON, read by XPath as \ and needs to be re-escaped as \\ -->
        <xsl:when test="self::comment() and contains($inputString,'\') and
                        not(contains(substring-before($inputString,'\'),'&quot;'))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'\')"/>
          <xsl:text>\</xsl:text><!-- JSON escaped backslash is same as X3D escaped backslash -->
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring-after($inputString,'\')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <!-- comment: XML-escaped \&amp;quot; (before regular \&quot;) needs to be handled
        <xsl:when test="self::comment() and contains($inputString,'\&amp;quot;') and 
                       (string-length(substring-before($inputString,'&quot;')) > string-length(substring-before($inputString,'\&amp;quot;')))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.5]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'\&amp;quot;')"/>
          <xsl:text disable-output-escaping="yes">\"</xsl:text>< !- - JSON escaped quote is same as X3D escaped quote - - >
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
              <xsl:with-param name="inputText" select="substring-after($inputString,'\&amp;quot;')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
          </xsl:call-template>
        </xsl:when> -->
        <!-- comment: XML-escaped &amp;quot; (before regular &quot;) needs to be handled
        <xsl:when test="self::comment() and contains($inputString,'&amp;quot;') and 
                       (string-length(substring-before($inputString,'&quot;')) > string-length(substring-before($inputString,'&amp;quot;')))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][1.6]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'&amp;quot;')"/>
          <xsl:text>"</xsl:text>
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring-after($inputString,'&amp;quot;')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when> -->
        <!-- comment: escaped quote needs to be left alone -->
        <xsl:when test="self::comment() and contains($inputString,'\&quot;') and 
                       (string-length(substring-before($inputString,'&quot;')) -1 > string-length(substring-before($inputString,'\&quot;')))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'\&quot;')"/>
          <xsl:text disable-output-escaping="yes">\"</xsl:text><!-- JSON escaped quote is same as X3D escaped quote -->
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring-after($inputString,'\&quot;')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <!-- comment: backslash (no following quotes ") needs to be escaped -->
        <xsl:when test="self::comment() and contains($inputString,'\') and 
                       (not(contains($inputString,'&quot;')))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][2.3 \ to \\]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'\')"/>
          <xsl:text disable-output-escaping="yes">\\</xsl:text>
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring-after($inputString,'\')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <!-- comment: backslash (preceding ") needs to be escaped -->
        <xsl:when test="self::comment() and contains($inputString,'\') and 
                       (string-length(substring-before($inputString,'&quot;')) > string-length(substring-before($inputString,'\')))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][2.4 \ to \\]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'\')"/>
          <xsl:text disable-output-escaping="yes">\\</xsl:text>
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring-after($inputString,'\')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <!-- comment: unescaped quote needs \ escape character inserted, no quote delimiter remaining -->
        <xsl:when test="self::comment() and contains($inputString,'&quot;')">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][2.5 " to \"]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'&quot;')"/>
          <xsl:text disable-output-escaping="yes">\"</xsl:text>
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring-after($inputString,'&quot;')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <!-- SFString with quoted value -->
        <xsl:when test="($inputType = 'SFString') and starts-with($inputString,'&quot;')">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:text disable-output-escaping="yes">\"</xsl:text>
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring($inputString,2,string-length($inputString) - 1)"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when>
        <!-- SFString or MFString containing escaped quotation mark \" -->
        <xsl:when test="contains($inputString,'\&quot;') and (string-length(substring-before($inputString,'&quot;')) > string-length(substring-before($inputString,'\&quot;')))
						and not(contains(substring-before($inputString,'&quot;'),'\\'))">
                <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.4]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                <xsl:value-of select="substring-before($inputString,'\&quot;')"/>
                <xsl:text>\"</xsl:text>
                <xsl:call-template name="escape-quote-characters-recurse">
                    <xsl:with-param name="inputText" select="substring-after($inputString,'\&quot;')"/>
                    <xsl:with-param name="inputType" select="$inputType"/>
                    <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
                </xsl:call-template>
        </xsl:when>
        <!-- SFString or MFString containing escaped backslash \\ -->
        <xsl:when test="contains($inputString,'\\') and not(contains(substring-before($inputString,'\\'),'&quot;'))">
                <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.5]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                <xsl:value-of select="substring-before($inputString,'\\')"/>
                <xsl:text>\\</xsl:text>
                <xsl:call-template name="escape-quote-characters-recurse">
                    <xsl:with-param name="inputText" select="substring-after($inputString,'\\')"/>
                    <xsl:with-param name="inputType" select="$inputType"/>
                    <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
                </xsl:call-template>
        </xsl:when>
        <!-- SFString or MFString containing empty string "" -->
        <xsl:when test="starts-with($inputString,'&quot;&quot;')">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.5]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                <xsl:text>""</xsl:text>
                <xsl:if test="(string-length(normalize-space(substring($inputString,3))) > 0) and 
                                              not(normalize-space(substring($inputString,3)) = ',')">
                      <xsl:if test="not($firstPass)">
                          <xsl:text>,</xsl:text><!-- separate values -->
                      </xsl:if>
                      <xsl:variable name="remainder">
                              <xsl:choose>
                                      <xsl:when test="starts-with(normalize-space(substring($inputString,3)),',') and
                                                                         contains(substring-after(substring($inputString,3), ','),'&quot;')">
                                              <!-- skip follow-on intermediate comma and whitespace by finding next quote -->
                                              <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.5a]</xsl:text></xsl:message></xsl:if>
                                              <xsl:text>"</xsl:text>
                                              <xsl:value-of select="substring-after(substring($inputString,3),'&quot;')"/>
                                      </xsl:when>
                                      <xsl:when test="starts-with(normalize-space(substring($inputString,3)),',')">
                                              <!-- skip follow-on intermediate comma -->
                                              <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.5b]</xsl:text></xsl:message></xsl:if>
                                              <xsl:value-of select="substring-after(substring($inputString,3),',')"/>
                                      </xsl:when>
                                      <xsl:otherwise>
                                              <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.5c]</xsl:text></xsl:message></xsl:if>
                                              <xsl:value-of select="substring($inputString,3)"/>
                                      </xsl:otherwise>
                              </xsl:choose>
                      </xsl:variable>
                      <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.5d]$remainder=</xsl:text><xsl:value-of select="$remainder"/></xsl:message></xsl:if>
                      <xsl:choose>
                              <xsl:when test="starts-with(normalize-space($remainder),'&quot;') and ends-with(normalize-space($remainder),'&quot;')">
                                      <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.6]</xsl:text></xsl:message></xsl:if>
                                      <xsl:text>"</xsl:text>
                                      <xsl:variable name="remainder2" select="normalize-space(substring-after($remainder,'&quot;'))"/>
                                      <xsl:call-template name="escape-quote-characters-recurse">
                                            <xsl:with-param name="inputText" select="$remainder2"/>
                                            <xsl:with-param name="inputType" select="$inputType"/>
                                            <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
                                      </xsl:call-template>
                              </xsl:when>
                              <xsl:when test="starts-with(normalize-space($remainder),'&quot;')">
                                      <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.7]</xsl:text></xsl:message></xsl:if>
                                      <xsl:text>"</xsl:text>
                                      <xsl:call-template name="escape-quote-characters-recurse">
                                            <xsl:with-param name="inputText" select="substring-after(substring($inputString,3),'&quot;')"/>
                                            <xsl:with-param name="inputType" select="$inputType"/>
                                            <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
                                      </xsl:call-template>
                              </xsl:when>
                              <xsl:otherwise>
                                      <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][3.8]</xsl:text></xsl:message></xsl:if>
                                      <xsl:call-template name="escape-quote-characters-recurse">
                                            <xsl:with-param name="inputText" select="substring($inputString,3)"/>
                                            <xsl:with-param name="inputType" select="$inputType"/>
                                            <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
                                      </xsl:call-template>
                              </xsl:otherwise>
                      </xsl:choose>
                </xsl:if>
                <xsl:if test="($inputType = 'SFString')">
                    <xsl:message>
                        <xsl:text>Error: malformed SFString value has "" empty string followed by extra characters: </xsl:text>
                        <xsl:value-of select="substring($inputString,3)"/>
                        <xsl:value-of select="$debugMessage"/>
                    </xsl:message>
                </xsl:if>
        </xsl:when>
        <!-- lone quote indicates outer delimiter of MFString array with one element -->
        <xsl:when test="starts-with($inputString,'&quot;') and (string-length(normalize-space($inputString)) = 1)">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][4.0]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:text>"</xsl:text>
        </xsl:when>
        <xsl:when test="starts-with(normalize-space($inputString),'&quot; &quot;')  or starts-with(normalize-space($inputString),'&quot;, &quot;') or
                        starts-with(normalize-space($inputString),'&quot; ,&quot;') or starts-with(normalize-space($inputString),'&quot; , &quot;')">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][4.1]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:text>","</xsl:text>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after(substring-after($inputString,'&quot;'),'&quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- IMPORTANT: starting and ending quotes indicate outer delimiters of MFString array; output " and process/split string values hereafter... -->
        <xsl:when test="starts-with($inputString,'&quot;') and ends-with($inputString,'&quot;') and not(ends-with($inputString,'\&quot;'))
		  and not(starts-with(normalize-space($inputString),'&quot;,')) and not(starts-with(normalize-space($inputString),'&quot; ,'))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][4.2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:text>"</xsl:text>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring($inputString,2)"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- strings: skip past escaped quote character \" (a literal value, not a delimiter) then recurse to process remainder -->
        <xsl:when test="contains($inputString,'\&quot;') and (string-length(substring-before($inputString,'&quot;')) > (string-length(substring-before($inputString,'\&quot;')) + 1))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][5]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'\&quot;')"/>
            <xsl:text disable-output-escaping="yes">\"</xsl:text><!-- JSON escaped quote is same as X3D escaped quote -->
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after($inputString,'\&quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- MFString value next contains quotes delimiter between SFString array elements, but check no preceding unescaped quote -->
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'&quot; &quot;') and (string-length(substring-before($inputString,'&quot;')) >= string-length(substring-before($inputString,'&quot; &quot;')))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][6]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'&quot; &quot;')"/>
            <xsl:text>" "</xsl:text>          
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after($inputString,'&quot; &quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- pass through delimiter " " as "," -->
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'&quot; &quot;') and not(contains(substring-before($inputString,'&quot; &quot;'),'&quot;'))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.1]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'&quot; &quot;')"/>
            <xsl:text disable-output-escaping="yes">","</xsl:text>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after($inputString,'&quot; &quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- pass through delimeter "," as "," -->
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'&quot;,&quot;') and not(contains(substring-before($inputString,'&quot;,&quot;'),'&quot;'))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'&quot;,&quot;')"/>
            <xsl:text disable-output-escaping="yes">","</xsl:text>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after($inputString,'&quot;,&quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
		<!-- TODO need to generalize handling of unnormalized comma-whitespace, perhaps with regular expression -->
        <!-- pass through delimeter ", and " , as ", -->
        <xsl:when test="($inputType = 'MFString') and (starts-with(normalize-space($inputString),'&quot;,') or starts-with(normalize-space($inputString),'&quot; ,'))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.3]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'&quot;')"/>
            <xsl:text>"</xsl:text>
            <!-- one SFString finished, process next -->
            <xsl:variable name="remainder7.3" select="substring-after($inputString,',')"/>
            <xsl:if test="(string-length(normalize-space($remainder7.3)) > 0)">
                    <xsl:text>,</xsl:text>
            </xsl:if>
            <xsl:choose>
                <xsl:when test="starts-with(normalize-space($remainder7.3),'&quot;')">
                    <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.3a]</xsl:text></xsl:message></xsl:if>
                    <xsl:text disable-output-escaping="yes">"</xsl:text>
                    <xsl:call-template name="escape-quote-characters-recurse">
                        <xsl:with-param name="inputText" select="substring-after($remainder7.3,'&quot;')"/>
                        <xsl:with-param name="inputType" select="$inputType"/>
                        <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
                    </xsl:call-template>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.3b]</xsl:text></xsl:message></xsl:if>
                    <xsl:call-template name="escape-quote-characters-recurse">
                        <xsl:with-param name="inputText" select="$remainder7.3"/>
                        <xsl:with-param name="inputType" select="$inputType"/>
                        <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
                    </xsl:call-template>
              </xsl:otherwise>
            </xsl:choose>
        </xsl:when>
        <!-- pass through delimeter " ," as ","
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'&quot; ,&quot;') and not(contains(substring-before($inputString,'&quot; ,&quot;'),'&quot;'))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.4]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'&quot; ,&quot;')"/>
          <xsl:text disable-output-escaping="yes">","</xsl:text>
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name="inputText" select="substring-after($inputString,'&quot; ,&quot;')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when> -->
        <!-- pass through delimeter " , " as ","
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'&quot; , &quot;') and not(contains(substring-before($inputString,'&quot; , &quot;'),'&quot;'))">
          <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.5]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
          <xsl:value-of select="substring-before($inputString,'&quot; , &quot;')"/>
          <xsl:text disable-output-escaping="yes">","</xsl:text>
          <xsl:call-template name="escape-quote-characters-recurse">
              <xsl:with-param name=inputText" select="substring-after($inputString,'&quot; , &quot;')"/>
              <xsl:with-param name="inputType" select="$inputType"/>
              <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
          </xsl:call-template>
        </xsl:when> -->
        <!-- unescaped quote needs \ escape character inserted, occurs before quotes delimiter -->
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'\&quot;') and (string-length(substring-before($inputString,'&quot;')) > string-length(substring-before($inputString,'\&quot;')))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][7.6]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'&quot;')"/>
            <xsl:text disable-output-escaping="yes">\"</xsl:text>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after($inputString,'&quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- final string and final end quote is passed through, quoted. ignore trailing comma, if any. -->
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'&quot;') and not(contains(substring-after($inputString,'&quot;'),'&quot;')) and
			 (ends-with(normalize-space($inputString),'&quot;') or ends-with(normalize-space($inputString),'&quot;,') or ends-with(normalize-space($inputString),'&quot; ,'))">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][8.1]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'&quot;')"/>
            <xsl:text disable-output-escaping="yes">"</xsl:text>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after($inputString,'&quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- finish quoted SFString value and continue with next quoted SFString value -->
        <xsl:when test="($inputType = 'MFString') and contains($inputString,'&quot;') and contains(substring-after($inputString,'&quot;'),'&quot;')">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][8.2]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before(substring-after($inputString,'&quot;'),'&quot;')"/>
            <xsl:text disable-output-escaping="yes">","</xsl:text>
            <xsl:value-of select="substring-before($inputString,'&quot;')"/>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after(substring-after($inputString,'&quot;'),'&quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- unescaped quote needs \ escape character inserted, no quote delimiter remaining -->
        <xsl:when test="contains($inputString,'&quot;')">
            <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-q-c-r][8.3]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
            <xsl:value-of select="substring-before($inputString,'&quot;')"/>
            <xsl:text disable-output-escaping="yes">\"</xsl:text>
            <xsl:call-template name="escape-quote-characters-recurse">
                <xsl:with-param name="inputText" select="substring-after($inputString,'&quot;')"/>
                <xsl:with-param name="inputType" select="$inputType"/>
                <xsl:with-param name="firstPass"><xsl:value-of select="false()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:when>
        <!-- remaining case: all done -->
        <xsl:otherwise>
            <xsl:if test="$debugTrace">
                <xsl:message>
                    <xsl:text>[e-q-c-r][9]</xsl:text>
                    <xsl:value-of select="$debugMessage"/>
                </xsl:message>
            </xsl:if>
            <xsl:value-of select="$inputString"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <xsl:template name="omit-leading-trailing-whitespace">
        <xsl:param name="includeLeadingWhitespace"><xsl:text>true</xsl:text></xsl:param> <!-- true or false -->
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
	  
      <!-- debug 
	  <xsl:message>
		  <xsl:text>omit-leading-trailing-whitespace, includeLeadingWhitespace=</xsl:text>
		  <xsl:value-of select="$includeLeadingWhitespace"/>
	  </xsl:message>
	  -->
      <xsl:choose>
        <!-- trailing space &nbsp; \t \n \r respectively -->
        <xsl:when test="not($includeLeadingWhitespace = 'true') and
						(  ends-with($inputString,' ')     or   ends-with($inputString,'&#160;') or
                           ends-with($inputString,'&#09;') or   ends-with($inputString,'&#x0A;') or
                           ends-with($inputString,'&#x0D;'))">
            <!-- debug <xsl:message>strip leading whitespace.</xsl:message> -->
            <xsl:call-template name="omit-leading-trailing-whitespace">
                <xsl:with-param name="includeLeadingWhitespace"><xsl:value-of select="$includeLeadingWhitespace"/></xsl:with-param>
                <xsl:with-param name="inputValue" select="substring($inputString,1,(string-length($inputString)-1))"/>
            </xsl:call-template>
        </xsl:when>
        <!-- leading space &nbsp; \t \n \r respectively -->
        <xsl:when test="not($includeLeadingWhitespace = 'true') and
						(starts-with($inputString,' ')     or starts-with($inputString,'&#160;') or
                         starts-with($inputString,'&#09;') or starts-with($inputString,'&#x0A;') or
                         starts-with($inputString,'&#x0D;'))">
            <!-- debug <xsl:message>strip trailing whitespace.</xsl:message> -->
            <xsl:call-template name="omit-leading-trailing-whitespace">
                <xsl:with-param name="includeLeadingWhitespace"><xsl:value-of select="$includeLeadingWhitespace"/></xsl:with-param>
                <xsl:with-param name="inputValue" select="substring($inputString,2)"/>
            </xsl:call-template>
        </xsl:when>
        <xsl:otherwise>
          <!-- done -->
          <xsl:value-of select="$inputString"/>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-backslash-characters-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>

        <!-- debug (also use trace messages below) -->
        <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
        <xsl:variable name="debugMessage">
                <xsl:text>[local-name()=</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:if test="self::comment()">
                  <xsl:text>comment</xsl:text>
                </xsl:if>
                <xsl:text>]</xsl:text>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
        </xsl:variable>
        <!-- debug
        <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r input]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
        -->

        <xsl:variable name="nextCharAfterBackslash"  select="substring(substring-after($inputString,'\'),1,1)"/>
        <xsl:variable name="remainder" select="substring(substring-after($inputString,'\'),2)"/>
        <!-- debug
        <xsl:if test="$debugTrace">
                <xsl:message><xsl:text>[e-b-c-r parse][$nextCharAfterBackslashAfterBackslash]</xsl:text><xsl:value-of select="$nextCharAfterBackslash"/></xsl:message>
                <xsl:message><xsl:text>[e-b-c-r parse][$nextCharAfterBackslash$remainder]</xsl:text><xsl:value-of select="$nextCharAfterBackslash"/><xsl:value-of select="$remainder"/></xsl:message>
        </xsl:if> -->
        <!-- pass through escaped characters   https://www.web3d.org/x3d/stylesheets/X3dToJson.html#strings -->
        <xsl:choose>
            <xsl:when test="not(contains($inputString,'\')) and not(contains($inputString,'&quot;'))">
                    <!-- all done -->
                    <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r]  [20]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                    <xsl:value-of select="$inputString"/>
            </xsl:when>
            <xsl:when test="contains($inputString,'&quot;') and not(contains(substring-before($inputString,'&quot;'),'\'))">
                      <!-- handle unescaped " -->
                      <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r]  [21]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                      <xsl:value-of select="substring-before($inputString,'&quot;')"/>
                      <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                      <xsl:call-template name="escape-backslash-characters-recurse">
                            <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot;')"/>
                      </xsl:call-template>
            </xsl:when>
            <!-- \\ double backslash is same escape sequence for XML and JSON, so pass it through -->
            <xsl:when test="($nextCharAfterBackslash = '\')"><!-- $nextCharAfterBackslash (if any) is preceded by \ -->
                    <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r]  [22]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                    <xsl:value-of select="substring-before($inputString,'\')"/>
                    <xsl:text>\</xsl:text>
                    <xsl:value-of select="$nextCharAfterBackslash"/>
                    <xsl:call-template name="escape-backslash-characters-recurse">
                      <xsl:with-param name="inputValue" select="$remainder"/>
                    </xsl:call-template>
              </xsl:when>
            <!-- \" escaped quote is same escape sequence for XML and JSON, so pass it through -->
            <xsl:when test="($nextCharAfterBackslash = '&quot;')"><!-- $nextCharAfterBackslash (if any) is preceded by \ -->
                    <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r][23]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                    <xsl:value-of select="substring-before($inputString,'\')"/>
                    <xsl:if test="self::comment()">
                            <!-- comments are literals, so preserve the \ as \\ before preserving " as \" -->
                            <xsl:text>\</xsl:text>
                    </xsl:if>
                    <xsl:text>\</xsl:text>
                    <xsl:value-of select="$nextCharAfterBackslash"/>
                    <xsl:call-template name="escape-backslash-characters-recurse">
                      <xsl:with-param name="inputValue" select="$remainder"/>
                    </xsl:call-template>
            </xsl:when>
            <!-- handled previously: ($nextCharAfterBackslash = '&quot;') or ($nextCharAfterBackslash = '\') -->
<!-- special characters backspace, formfeed, newline, carriage return, horizontal tab are presumably character entities already -->
<!-- page links for character entities https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#HTML -->
<!-- https://www.w3schools.com/js/js_strings.asp -->
<xsl:when test="($nextCharAfterBackslash = '/') or
                ($nextCharAfterBackslash = 'n') or
                ($nextCharAfterBackslash = 'r') or
                ($nextCharAfterBackslash = 't') or
                ($nextCharAfterBackslash = 'b') or
                ($nextCharAfterBackslash = 'f')">
<xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r][23.5]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
<xsl:value-of select="substring-before($inputString,'\')"/>
<xsl:text disable-output-escaping="yes">\</xsl:text>
<xsl:value-of select="$nextCharAfterBackslash"/>
<xsl:call-template name="escape-backslash-characters-recurse">
  <xsl:with-param name="inputValue" select="$remainder"/>
</xsl:call-template>
</xsl:when>
                <!-- TODO any special handling needed for ($nextCharAfterBackslash = '\&apos;') ? -->
                <!-- counterproductive
                <xsl:when test='($nextCharAfterBackslash = "&apos;")'>
                        <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r][23.6]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                        <xsl:value-of select="substring-before($inputString,'\')"/>
                        <xsl:text disable-output-escaping="yes">\</xsl:text>
                        <xsl:value-of select="$nextCharAfterBackslash"/>
                        <xsl:call-template name="escape-backslash-characters-recurse">
                          <xsl:with-param name="inputValue" select="$remainder"/>
                        </xsl:call-template>
                </xsl:when>
                -->
                <xsl:when test="(normalize-space($nextCharAfterBackslash) = ' ') or (normalize-space($nextCharAfterBackslash) = '')">
                    <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r][23.7]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                    <xsl:value-of select="substring-before($inputString,'\')"/>
                    <xsl:text disable-output-escaping="yes">\\</xsl:text>
                    <xsl:value-of select="$nextCharAfterBackslash"/>
                    <xsl:call-template name="escape-backslash-characters-recurse">
                        <xsl:with-param name="inputValue" select="$remainder"/>
                    </xsl:call-template>
                </xsl:when>
                <!-- TODO are more thorough checks needed? https://tools.ietf.org/html/rfc7159#section-7 -->
                <xsl:otherwise>
                    <!-- \ found but not \\ and not \" -->
                    <!-- no longer needed <xsl:message><xsl:text>[e-b-c-r]  [24.0]</xsl:text><xsl:text>[unusual construct, escape \ found but not followed by known character]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message> -->
                    <xsl:if test="$debugTrace"><xsl:message><xsl:text>[e-b-c-r]  [24.1]</xsl:text><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>
                    <xsl:value-of select="substring-before($inputString,'\')"/>
                    <xsl:text>\</xsl:text><!-- must escape it -->
                    <xsl:text>\</xsl:text>
                    <xsl:value-of select="$nextCharAfterBackslash"/>
                    <xsl:call-template name="escape-backslash-characters-recurse">
                        <xsl:with-param name="inputValue" select="$remainder"/>
                    </xsl:call-template>
                </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-less-than-characters-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <xsl:choose>
        <xsl:when test="not(contains($inputString,'&lt;'))">
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="substring-before($inputString,'&lt;')"/>
          <xsl:text>&lt;</xsl:text>
          <xsl:call-template name="escape-less-than-characters-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'&lt;')"/>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>
	
    <xsl:template name="replace-newlines-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <xsl:choose>
        <xsl:when test="not(contains($inputString,'&#x0A;'))">
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="substring-before($inputString,'&#x0A;')"/>
          <xsl:text>\n</xsl:text>
          <xsl:call-template name="replace-newlines-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'&#x0A;')"/>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <xsl:template name="replace-tabs-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <xsl:choose>
        <xsl:when test="not(contains($inputString,'&#x09;'))">
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <xsl:otherwise>
          <xsl:value-of select="substring-before($inputString,'&#x09;')"/>
          <xsl:text>\t</xsl:text>
          <xsl:call-template name="replace-tabs-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'&#x09;')"/>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-greater-than-characters-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>

        <!-- debug (also use trace messages below) -->
        <xsl:variable name="debugTrace" select="false()"/><!-- true() false() -->
        <xsl:variable name="debugMessage">
            <xsl:text>[e-g-t-c-r input][local-name()=</xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:if test="self::comment()">
              <xsl:text>comment</xsl:text>
            </xsl:if>
            <xsl:text>]</xsl:text>
            <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
        </xsl:variable>
        <xsl:if test="$debugTrace"><xsl:message><xsl:value-of select="$debugMessage"/></xsl:message></xsl:if>

        <xsl:choose>
            <xsl:when test="not(contains($inputString,'&gt;'))">
                  <xsl:value-of select="$inputString"/>
            </xsl:when>
            <xsl:otherwise>
                  <xsl:value-of select="substring-before($inputString,'&gt;')"/>
                  <xsl:text>&gt;</xsl:text>
                  <xsl:call-template name="escape-greater-than-characters-recurse">
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&gt;')"/>
                  </xsl:call-template>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="insert-commas-recurse">
      <!-- insert commas before space characters between array values -->
      <!-- TODO tokenize() long strings and insert line break after every 100 values, simplifies file scrutiny and might help with EOF exceptions -->
      <xsl:param name="inputType"><xsl:text></xsl:text></xsl:param><!-- data type for this field -->
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <xsl:choose>
        <!-- no space, all done -->
        <xsl:when test="not(contains($inputString,' '))">
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <!-- strings: skip past escaped quote character \" (a literal value, not a delimiter) then recurse to process first unescaped quote character " -->
        <xsl:when test="contains($inputString,'\\&quot;') and (string-length(substring-before($inputString,'&quot;')) > string-length(substring-before($inputString,'\\&quot;')))">
          <xsl:value-of select="substring-before($inputString,'\&quot;')"/>
          <xsl:text disable-output-escaping="yes">\\\&quot;</xsl:text>
          <xsl:call-template name="insert-commas-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'\&quot;')"/>
            <xsl:with-param name="inputType"   select="$inputType"/>
          </xsl:call-template>
        </xsl:when>
        <!-- insert commas after next contained SFString within an MFString array -->
        <xsl:when test="contains($inputString,'&quot; &quot;')">
          <xsl:value-of select="substring-before($inputString,'&quot; &quot;')"/>
          <xsl:text>&quot;,&quot;</xsl:text>
          <xsl:call-template name="insert-commas-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot; &quot;')"/>
            <xsl:with-param name="inputType"   select="$inputType"/>
          </xsl:call-template>
        </xsl:when>
        <!-- do not insert commas within string types -->
        <xsl:when test="($inputType = 'SFString') or ($inputType = 'MFString')">
          <!-- MFString commas between SFString values already handled, so do not insert further commas -->
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <xsl:when test="(local-name()='url') or contains(local-name(),'Url')">
          <!-- do not modify space characters within a url value, all done -->
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <!-- other values: has spaces, type is non SFString/MFString array; replace space characters with commas directly -->
        <xsl:otherwise>
            <xsl:value-of select="translate($inputString,' ',',')"/>
          <!--
          <xsl:value-of select="substring-before($inputString,' ')"/>
          <xsl:text>,</xsl:text>
          <xsl:call-template name="insert-commas-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,' ')"/>
            <xsl:with-param name="inputType"   select="$inputType"/>
          </xsl:call-template>
          -->
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <xsl:template name="split-text-block-into-string-array-recurse">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <xsl:choose>
        <!-- no line feed, all done -->
        <xsl:when test="not(contains($inputString,'&#x0A;'))">
          <xsl:text>&#10;</xsl:text>
          <xsl:text>"</xsl:text>
		  <!-- only emit characters if non-whitespace is found -->
		  <xsl:if test="(string-length(normalize-space($inputString)) > 0)">
			<xsl:value-of select="$inputString"/>
		  </xsl:if>
          <xsl:text>"</xsl:text>
        </xsl:when>
        <xsl:otherwise>
          <xsl:text>&#10;</xsl:text>
          <xsl:text>"</xsl:text>
		  <!-- only emit characters if non-whitespace is found -->
		  <xsl:if test="(string-length(normalize-space(substring-before($inputString,'&#x0A;'))) > 0)">
			  <xsl:value-of select="substring-before($inputString,'&#x0A;')"/>
		  </xsl:if>
          <xsl:text>",</xsl:text>
          <xsl:call-template name="split-text-block-into-string-array-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'&#x0A;')"/>
          </xsl:call-template>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <xsl:template name="output-integers">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <xsl:for-each select="tokenize($inputString, '\s')">
            <xsl:variable name="singleInteger" select="."/>
            <xsl:choose>
                <!-- Convert hexadecimal values to decimal -->
                <xsl:when test="starts-with($singleInteger, '0x')">
                    <xsl:call-template name="hexToDecimal">
                        <xsl:with-param name="hexDigits" select="substring($singleInteger, 3)"/>
                    </xsl:call-template>
                </xsl:when>
                <!-- Already decimal so just print out -->
                <xsl:otherwise>
                    <xsl:value-of select="$singleInteger"/>
                </xsl:otherwise>
            </xsl:choose>
            <!--  array values require comma between values in JSON encoding -->
            <xsl:if test="last() > position()">
                <xsl:text>,</xsl:text>
            </xsl:if>
        </xsl:for-each>
    </xsl:template>
    
    <xsl:template name="hexToDecimal">
        <!-- Converts hexadecimal digits to decimal value, one digit at a time using recursion-->
        <xsl:param name="hexDigits"/> <!-- The hexadecimal digits to be converted -->
        <xsl:param name="decimalValue" select="0"/> <!-- The decimal value, which may already be partly computed -->
        <xsl:variable name="mostSignificantHexDigit" select="translate(substring($hexDigits, 1, 1), 'abcdef', 'ABCDEF')"/>
        <!-- One line trick to convert 0 to 0, 1 to 1, ..., A to 10, B to 11, ..., F to 16 -->
        <xsl:variable name="decimalValueOfHexDigit" select="string-length(substring-before('0123456789ABCDEF', $mostSignificantHexDigit))"/>
        <xsl:variable name="result" select="16 * $decimalValue + $decimalValueOfHexDigit"/>
        <xsl:choose>
            <!-- tail recursion to convert leading value in array from hexadecimal to integer -->
            <xsl:when test="string-length($hexDigits) > 1">
                <xsl:call-template name="hexToDecimal">
                    <xsl:with-param name="hexDigits" select="substring($hexDigits, 2)"/>
                    <xsl:with-param name="decimalValue" select="$result"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$result"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <xsl:template name="output-reals">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- insert leading zeroes before float values starting with decimal point; omit leading + signs -->
        <xsl:for-each select="tokenize($inputString, '\s')">
            <xsl:variable name="singleReal" select="."/>
            <xsl:call-template name="insert-leading-trailing-zero">
                <xsl:with-param name="inputReal" select="$singleReal"/>
            </xsl:call-template>
            <!--  array values require comma between values in JSON encoding -->
            <xsl:if test="last() > position()">
                <xsl:text>,</xsl:text>
            </xsl:if>
        </xsl:for-each>
    </xsl:template>

    <xsl:template name="insert-leading-trailing-zero">
        <xsl:param name="inputReal"><xsl:text></xsl:text></xsl:param>
        <xsl:choose>
            <!-- starts with decimal point, insert 0 -->
            <xsl:when test="starts-with($inputReal,'.')">
                <xsl:text>0</xsl:text>
                <xsl:value-of select="$inputReal"/>
            </xsl:when>
            <!-- starts with plus sign, delete and re-check -->
            <xsl:when test="starts-with($inputReal,'+')">
                <xsl:call-template name="insert-leading-trailing-zero">
                    <xsl:with-param name="inputReal" select="substring-after($inputReal,'+')"/>
                </xsl:call-template>
            </xsl:when>
            <!-- starts with minus sign and decimal point, insert 0 -->
            <xsl:when test="starts-with($inputReal,'-.')">
                <xsl:text>-0</xsl:text>
                <xsl:value-of select="substring($inputReal,2)"/>
            </xsl:when>
			<!-- missing numeral after decimal point before scientific notation, insert 0 -->
			<xsl:when test="contains($inputReal,'.e')">
				<xsl:value-of select="substring-before($inputReal,'.e')"/>
				<xsl:text>.0e</xsl:text>
				<xsl:value-of select="substring-after($inputReal,'.e')"/>
			</xsl:when>
			<xsl:when test="contains($inputReal,'.E')">
				<xsl:value-of select="substring-before($inputReal,'.E')"/>
				<xsl:text>.0E</xsl:text>
				<xsl:value-of select="substring-after($inputReal,'.E')"/>
			</xsl:when>
            <!-- doesn't start with decimal point -->
            <xsl:otherwise>
              <xsl:value-of select="$inputReal"/>
              <xsl:if test="ends-with($inputReal,'.')">
                  <!-- append 0 after trailing decimal point -->
                  <xsl:text>0</xsl:text>
              </xsl:if>
            </xsl:otherwise>
        </xsl:choose>       
    </xsl:template>

    <xsl:template name="insert-leading-trailing-zeroes-recurse">
        <!-- insert leading zeroes before float values starting with decimal point; omit leading + signs -->
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
      <xsl:choose>
        <!-- starts with decimal point, insert 0, more to follow -->
        <xsl:when test="starts-with($inputString,'.') and contains($inputString,' ')">
          <xsl:text>0</xsl:text>
          <xsl:value-of select="substring-before($inputString,' ')"/>
          <xsl:text> </xsl:text>
          <xsl:call-template name="insert-leading-trailing-zeroes-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,' ')"/>
          </xsl:call-template>
        </xsl:when>
        <!-- starts with decimal point, insert 0, all done -->
        <xsl:when test="starts-with($inputString,'.')">
          <xsl:text>0</xsl:text>
          <xsl:value-of select="$inputString"/>
        </xsl:when>
        <!-- starts with decimal point, insert 0, more to follow -->
        <xsl:when test="starts-with($inputString,'+')">
          <xsl:call-template name="insert-leading-trailing-zeroes-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,'+')"/>
          </xsl:call-template>
        </xsl:when>
        <!-- starts with minus sign and decimal point, insert 0, more to follow -->
        <xsl:when test="starts-with($inputString,'-.') and contains($inputString,' ')">
          <xsl:text>-0</xsl:text>
          <xsl:value-of select="substring-before(substring($inputString,2),' ')"/>
          <xsl:text> </xsl:text>
          <xsl:call-template name="insert-leading-trailing-zeroes-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,' ')"/>
          </xsl:call-template>
        </xsl:when>
        <!-- starts with minus sign and decimal point, insert 0, all done -->
        <xsl:when test="starts-with($inputString,'-.')">
          <xsl:text>-0</xsl:text>
          <xsl:value-of select="substring($inputString,2)"/>
        </xsl:when>
        <!-- doesn't start with decimal point, more to follow -->
        <xsl:when test="contains($inputString,' ')">
          <xsl:value-of select="substring-before($inputString,' ')"/>
          <xsl:if test="ends-with(substring-before($inputString,' '),'.')">
              <!-- append 0 after trailing decimal point -->
              <xsl:text>0</xsl:text>
          </xsl:if>
          <xsl:text> </xsl:text>
          <xsl:call-template name="insert-leading-trailing-zeroes-recurse">
            <xsl:with-param name="inputValue" select="substring-after($inputString,' ')"/>
          </xsl:call-template>
        </xsl:when>
        <!-- doesn't start with decimal point, all done -->
        <xsl:otherwise>
          <xsl:value-of select="$inputString"/>
          <xsl:if test="ends-with($inputString,'.')">
              <!-- append 0 after trailing decimal point -->
              <xsl:text>0</xsl:text>
          </xsl:if>
        </xsl:otherwise>
      </xsl:choose>
    </xsl:template>

    <!-- trace messsages on console -->
    <xsl:template name="trace">
      <xsl:param name="message"><xsl:text></xsl:text></xsl:param>
      <xsl:param name="element"><xsl:text></xsl:text></xsl:param>
      <xsl:param name="name"><xsl:text></xsl:text></xsl:param>
      <xsl:param name="DEF"><xsl:text></xsl:text></xsl:param>
      <xsl:param name="USE"><xsl:text></xsl:text></xsl:param>
      <xsl:param name="indent"><xsl:text>0</xsl:text></xsl:param>
      <xsl:param name="traceEnabled" select="$traceEnabled"/>
      
      <xsl:if test="($traceEnabled = 'true')">
        <xsl:variable name="fullMessage">
            <xsl:call-template name="print-indent">
                <xsl:with-param name="indent" select="$indent - 1"/>
            </xsl:call-template>
            <xsl:if test="(string-length(normalize-space($element)) > 0)">
                <xsl:value-of select="normalize-space($element)"/>
                <xsl:text> </xsl:text>
            </xsl:if>
            <xsl:if test="(string-length($name) > 0)">
                <xsl:text>name=</xsl:text>
                <xsl:value-of select="$name"/>
                <xsl:text> </xsl:text>
            </xsl:if>
            <xsl:if test="(string-length($DEF) > 0)">
                <xsl:text>DEF=</xsl:text>
                <xsl:value-of select="$DEF"/>
                <xsl:text> </xsl:text>
            </xsl:if>
            <xsl:if test="(string-length($USE) > 0)">
                <xsl:text>USE=</xsl:text>
                <xsl:value-of select="$USE"/>
                <xsl:text> </xsl:text>
            </xsl:if>
            <xsl:value-of select="normalize-space($message)"/>
        </xsl:variable>
        <xsl:if test="(string-length(normalize-space($fullMessage)) > 0)">
            <xsl:message>
				<xsl:value-of select="normalize-space($fullMessage)"/>
			</xsl:message>
        </xsl:if>
      </xsl:if>
    </xsl:template>

    <xsl:template name="not-default-attribute-value"> <!-- rule to filter out default attribute values -->
                
        <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3dom.xslt X3dUnwrap.xslt X3dWrap.xslt and X3dToJson.xslt -->
        <!-- check values with/without .0 suffix since these are string checks and autogenerated/DOM output might have either -->
        <!-- do not check ProtoInstance fields or natively defined nodes, since they might have different user-defined defaults -->
        <!-- tool-bug workaround:  split big boolean queries into pieces to avoid overloading the Xalan/lotusxml query buffer -->
        <xsl:variable name="notImplicitEvent1"
                      select="not(local-name(..)='AudioClip'	and	(local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='isActive')) and
                      not(contains(local-name(..),'Interpolator') and (local-name()='set_fraction' or local-name()='value_changed')) and
                      not(contains(local-name(..),'Sequencer')    and (local-name()='set_fraction' or local-name()='value_changed' or local-name()='previous' or local-name()='next')) and
                      not(((local-name(..)='Background') or (local-name(..)='TextureBackground')) and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound')) and
                      not(local-name(..)='Collision' and (local-name()='isActive' or local-name()='collideTime')) and
                      not(local-name(..)='CylinderSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='rotation' or local-name()='trackPoint_changed')) and
                      not(local-name(..)='ElevationGrid'	and	local-name()='set_height') and
                      not((local-name(..)='Extrusion') and starts-with(local-name(),'set_')) and
                      not(((local-name(..)='IndexedFaceSet') or contains(local-name(..),'TriangleFanSet') or contains(local-name(..),'TriangleSet') or contains(local-name(..),'TriangleStripSet') or contains(local-name(..),'QuadSet')) and starts-with(local-name(),'set_') and contains(local-name(),'ndex')) and
                      not(local-name(..)='IndexedLineSet' and	 local-name()='lineWidth') and
                      not(local-name(..)='MovieTexture' and	(local-name()='duration_changed' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='isActive')) and
                      not(local-name(..)='NavigationInfo' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound'))
                      " />
        <xsl:variable name="notImplicitEvent2"
                      select="not(local-name(..)='PointSet'	and	 local-name()='pointSize') and
                      not(local-name(..)='PlaneSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='translation_changed' or local-name()='trackPoint_changed')) and
                      not(local-name(..)='ProximitySensor' and (local-name()='isActive' or local-name()='position' or local-name()='orientation' or
                      local-name()='enterTime' or local-name()='exitTime')) and
                      not(local-name(..)='SphereSensor' and	(local-name()='isActive' or local-name()='rotation' or local-name()='trackPoint_changed')) and
                      not(local-name(..)='TimeSensor'	and	(local-name()='isActive' or local-name()='elapsedTime' or local-name()='isPaused' or local-name()='cycleTime' or local-name()='set_fraction' or
                      local-name()='time')) and
                      not(local-name(..)='TouchSensor' and	(local-name()='isActive' or local-name()='isOver' or local-name()='hitNormal_changed' or
                      local-name()='touchTime' or local-name()='hitPoint_changed' or local-name()='hitTexCoord_changed')) and
                      not(local-name(..)='Viewpoint'	  and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine')) and
                      not(local-name(..)='GeoViewpoint' and	(local-name()='set_bind' or local-name()='bindTime' or local-name()='isBound' or local-name()='examine'))
                      " />
        <xsl:variable name="notImplicitEvent3"
                      select="not(local-name(..)='BooleanTrigger'	and	(local-name()='set_triggerTime' or local-name()='triggerTrue')) and
                      not(local-name(..)='IntegerTrigger'	and	(local-name()='set_boolean' or local-name()='triggerValue'))
                      " />
        <xsl:variable name="notDefaultFieldValue1"
                      select="not( local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) and
                      not( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) and
                      not( local-name()='bboxDisplay' and string(.)='false') and
                      not( local-name()='castShadow' and string(.)='true') and
                      not( local-name()='channelCountMode' and string(.)='max') and
                      not( local-name()='channelInterpretation' and string(.)='speakers') and
                      not( local-name()='detune' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='enabled' and string(.)='true') and
                      not( local-name()='gain' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='load' and string(.)='true') and
                      not( local-name()='loop' and string(.)='false') and
                      not( local-name()='farDistance'  and (string(.)='-1' or string(.)='-1.0')) and
                      not( local-name()='nearDistance' and (string(.)='-1' or string(.)='-1.0')) and
                      not( local-name()='pitch' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='startTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='qualityFactor'  and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='autoRefresh' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='autoRefreshTimeLimit' and (string(.)='3600' or string(.)='3600.0')) and
                      not( local-name()='tailTime' and (string(.)='0' or string(.)='0.0')) and
                      not( local-name()='shadows' and string(.)='false') and
                      not( local-name()='shadowIntensity' and (string(.)='1' or string(.)='1.0')) and
                      not( local-name()='visible' and string(.)='true') and
                      not( local-name(..)='AudioClip'	and
                      ((local-name()='loop' and string(.)='false') or
                      (local-name()='pitch' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')))) and
                      not( (local-name(..)='Appearance') and ((local-name()='alphaMode' and (string(.)='AUTO')) or (local-name()='alphaCutoff' and (string(.)='0.5' or string(.)='.5')))) and
                      not( ((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) and
                      not( local-name(..)='BooleanToggle' and local-name()='toggle' and string(.)='false') and
                      not( local-name(..)='Box'	and ((local-name()='size' and (string(.)='2 2 2' or string(.)='2.0 2.0 2.0')) or (local-name()='solid' and string(.)='true'))) and
                      not( local-name(..)='Collision'	and local-name()='enabled' and string(.)='true') and
                      not( local-name(..)='Cone' and	
                      ((local-name()='bottomRadius' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='height' and (string(.)='2' or string(.)='2.0')) or
                      (local-name()='side' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='bottom' and string(.)='true')))"/>
        <xsl:variable name="notDefaultFieldValue1a"
                      select="not( local-name(..)='Cylinder' and
                      ((local-name()='height' and (string(.)='2' or string(.)='2.0')) or
                      (local-name()='radius' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='bottom' and string(.)='true') or
                      (local-name()='side' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='top' and string(.)='true'))) and
                      not( local-name(..)='CylinderSensor' and
                      ((local-name()='autoOffset' and string(.)='true') or
                      (local-name()='axisRotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='diskAngle' and string(.)='0.26179167') or
                      (local-name()='offset' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxAngle' and (string(.)='-1' or string(.)='-1.0')) or
                      (local-name()='minAngle' and (string(.)='0' or string(.)='0.0'))))" />
        <xsl:variable name="notDefaultFieldValue2"
                      select="not( local-name(..)='DirectionalLight' and
                      ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='direction' and (string(.)='0 0 -1' or string(.)='0.0 0.0 -1.0')) or
                      (local-name()='global' and string(.)='false') or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='on' and string(.)='true'))) and
                      not((local-name(..)='ElevationGrid' or local-name(..)='GeoElevationGrid') and
                      ((local-name()='ccw' and string(.)='true') or
                      (local-name()='colorPerVertex' and string(.)='true') or
                      (local-name()='normalPerVertex' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='xDimension' and (string(.)='2')) or
                      (local-name()='xSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='zDimension' and (string(.)='2')) or
                      (local-name()='zSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='yScale' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='height' and (string(.)='0 0 0 0' or string(.)='0.0 0.0 0.0 0.0')) or
                      (local-name()='geoGridOrigin' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Extrusion'	and
                      ((local-name()='beginCap' and string(.)='true') or
                      (local-name()='ccw' and string(.)='true') or
                      (local-name()='convex' and string(.)='true') or
                      (local-name()='endCap' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='scale' and (string(.)='1 1' or string(.)='1.0 1.0')) or
                      (local-name()='crossSection' and string(.)='1 1, 1 -1, -1 -1, -1 1, 1 1') or
                      (local-name()='crossSection' and string(.)='1 1 1 -1 -1 -1 -1 1 1 1') or
                      (local-name()='spine' and string(.)='0 0 0, 0 1 0') or
                      (local-name()='spine' and string(.)='0 0 0 0 1 0')))" />
        <xsl:variable name="notDefaultFieldValue3"
                      select="not(contains(local-name(..),'Fog') and 	((local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='visibilityRange' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='fogType' and string(.)='LINEAR'))) and
                      not(contains(local-name(..),'FontStyle')	and
                      ((local-name()='horizontal' and string(.)='true') or
                      (local-name()='leftToRight' and string(.)='true') or
                      (local-name()='topToBottom' and string(.)='true') or
                      (local-name()='size' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='spacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='pointSize' and (string(.)='12' or string(.)='12.0')) or
                      (local-name()='family' and string(.)='&quot;SERIF&quot;') or
                      (local-name()='justify' and string(.)='&quot;BEGIN&quot;') or
                      (local-name()='style' and string(.)='PLAIN'))) and
                      not( local-name(..)='ImageTexture' and
                      ((local-name()='repeatS' and string(.)='true') or
                      (local-name()='repeatT' and string(.)='true'))) and
                      not(((local-name(..)='IndexedFaceSet') or contains(local-name(..),'TriangleFanSet') or contains(local-name(..),'TriangleSet') or contains(local-name(..),'TriangleStripSet') or contains(local-name(..),'QuadSet')) and
                      ((local-name()='ccw' and string(.)='true') or
                      (local-name()='colorPerVertex' and string(.)='true') or
                      (local-name()='convex' and string(.)='true') or
                      (local-name()='normalPerVertex' and string(.)='true') or
                      (local-name()='solid' and string(.)='true') or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='IndexedLineSet' and local-name()='colorPerVertex' and string(.)='true') and
                      not( local-name(..)='Inline' and ((local-name()='load' and string(.)='true') or (local-name()='global' and string(.)='false'))) and
                      not( local-name(..)='LoadSensor' and
                      ((local-name()='enabled' and string(.)='true') or
                      (local-name()='timeOut' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='LOD'	and	((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or (local-name()='forceTransitions' and string(.)='false'))) and
                      not( ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
                      ((local-name()='ambientIntensity' and string(.)='0.2') or
                      (local-name()='diffuseColor' and string(.)='0.8 0.8 0.8') or
                      (local-name()='emissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='metallic' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='normalScale' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='occlusionStrength' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='roughness' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='shininess' and string(.)='0.2') or
                      (local-name()='specularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='transparency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='TwoSidedMaterial'	and
                      ((local-name()='backAmbientIntensity' and string(.)='0.2') or
                      (local-name()='backDiffuseColor' and string(.)='0.8 0.8 0.8') or
                      (local-name()='backEmissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='backShininess' and string(.)='0.2') or
                      (local-name()='separateBackColor' and string(.)='false') or
                      (local-name()='backSpecularColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='backTransparency' and (string(.)='0' or string(.)='0.0')))) and
                      not(ends-with(local-name(..),'Material')	and
                      ((ends-with(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
                      (local-name()='baseColor' and ((string(.)='1 1 1') or (string(.)='1. 1. 1.') or (string(.)='1.0 1.0 1.0'))) or
                      (ends-with(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
                      (local-name()='emissiveColor' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='metallic' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='normalScale' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='occlusionStrength' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='roughness' and ((string(.)='1') or (string(.)='1.') or (string(.)='1.0'))) or
                      (local-name()='transparency' and (string(.)='0' or string(.)='0.0'))))" />
        <xsl:variable name="notDefaultFieldValue4"
                      select="not( local-name(..)='MovieTexture' and
                      ((local-name()='loop' and string(.)='false') or
                      (local-name()='speed' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='repeatS' and string(.)='true') or
                      (local-name()='repeatT' and string(.)='true'))) and
                      not( local-name(..)='NavigationInfo' and
                      ((local-name()='avatarSize' and string(.)='0.25 1.6 0.75') or
                      (local-name()='headlight' and string(.)='true') or
                      (local-name()='speed' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='transitionTime' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='transitionType' and (string(.)='&quot;LINEAR&quot;')) or
					  (local-name()='type' and (string(.)='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
                      (local-name()='visibilityLimit' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PixelTexture' and
                      ((local-name()='repeatS' and string(.)='true') or
                      (local-name()='repeatT' and string(.)='true') or
                      (local-name()='image' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='PlaneSensor' and
                      ((local-name()='autoOffset' and string(.)='true') or
					  (local-name()='axisRotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='maxPosition' and (string(.)='-1 -1' or string(.)='-1.0 -1.0')) or
                      (local-name()='minPosition' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      (local-name()='offset' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( ((local-name(..)='PointLight') or (local-name(..)='EnvironmentLight')) and
                      ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0'))or
                      (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='global' and string(.)='true') or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='on' and string(.)='true') or
                      (local-name()='radius' and (string(.)='100' or string(.)='100.0'))))" />
        <xsl:variable name="notDefaultFieldValue5"
                      select="not(ends-with(local-name(..),'ProximitySensor') and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='enabled' and string(.)='true'))) and
                      not( local-name(..)='Script' and ((local-name()='directOutput' and string(.)='false') or
                      (local-name()='mustEvaluate' and string(.)='false'))) and
                      not( local-name(..)='Sound' and ((local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='priority' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxBack' and (string(.)='10' or string(.)='10.0')) or
                      (local-name()='maxFront' and (string(.)='10' or string(.)='10.0')) or
                      (local-name()='minBack' and (string(.)='1' or string(.)='1.0'))  or
                      (local-name()='minFront' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='spatialize' and string(.)='true'))) and
                      not( local-name(..)='Sphere' and ((local-name()='radius' and (string(.)='1' or string(.)='1.0')) or (local-name()='solid' and string(.)='true'))) and
                      not( local-name(..)='SphereSensor' and
                      ((local-name()='autoOffset' and string(.)='true') or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='offset' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0')) and
                      not( local-name(..)='Switch' and ../IS/connect[@nodeField='whichChoice'])))" />
        <!-- Switch whichChoice='-1' is very significant and somewhat counterintuitive/nonobvious, so otherwise show it. -->
        <!--	  and not( local-name(..)='Switch' and  local-name()='whichChoice' and (string(.)='-1' or string(.)='-1.0')) -->
        <xsl:variable name="notDefaultFieldValue6"
                      select="not( local-name(..)='SpotLight'	and
                      ((local-name()='ambientIntensity' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                      (local-name()='beamWidth' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854'))) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='cutOffAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
                      (local-name()='direction' and (string(.)='0 0 -1' or string(.)='0.0 0.0 -1.0')) or
                      (local-name()='global' and string(.)='true') or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='on' and string(.)='true') or
                      (local-name()='radius' and (string(.)='100' or string(.)='100.0')))) and
                      not( local-name(..)='Text'   and ((local-name()='maxExtent' and (string(.)='0' or string(.)='0.0')) or (local-name()='solid' and (string(.)='false')))) and
                      not( local-name(..)='TextureTransform' and
                      ((local-name()='center' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      (local-name()='rotation' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='scale' and (string(.)='1 1' or string(.)='1.0 1.0')) or
                      (local-name()='translation' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
                      not( local-name(..)='TextureTransform3D' and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='TextureTransformMatrix3D' and
                      ((local-name()='matrix' and (string(.)='1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1' or string(.)='1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0'))))" />
        <xsl:variable name="notDefaultFieldValue7"
                      select="not( local-name(..)='TimeSensor' and
                      ((local-name()='cycleInterval' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='startTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='stopTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='pauseTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='resumeTime'  and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='loop' and string(.)='false'))) and
                      not(contains(local-name(..),'TouchSensor') and
                      local-name()='enabled' and string(.)='true') and
                      not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
					  (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                      (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='Viewpoint' and
                      (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854')))) and
                      not( local-name(..)='OrthoViewpoint' and
                      (local-name()='fieldOfView' and ((string(.)='-1 -1 1 1') or (string(.)='-1.0 -1.0 1.0 1.0')))) and
                      not( contains(local-name(..),'Viewpoint') and
                      ((local-name()='centerOfRotation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='jump' and string(.)='true') or
                      (local-name()='viewAll' and string(.)='false') or
                      ((local-name()='nearClippingPlane' or local-name()='farClippingPlane') and ((string(.)='-1') or (string(.)='-1.') or (string(.)='-1.0'))) or
                      (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='retainUserOffsets' and (string(.)='false')) or
                      (local-name()='position' and (string(.)='0 0 10' or string(.)='0.0 0.0 10.0')))) and
                      not( local-name(..)='VisibilitySensor' and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='enabled' and string(.)='true') or
                      (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='enterTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='exitTime'  and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='isActive' and string(.)='false')))" />
        <xsl:variable name="notDefaultFieldValue8"
                      select="not( local-name(..)='FillProperties' and
                      ((local-name()='filled' and string(.)='true') or
                      (local-name()='hatched' and string(.)='true') or
                      (local-name()='hatchStyle' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='hatchColor' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')))) and
                      not( local-name(..)='LineProperties' and
                      ((local-name()='applied' and string(.)='true') or
                      (local-name()='linetype' and (string(.)='1')) or
                      (local-name()='linewidthScaleFactor' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PointProperties' and
                      ((local-name()='attenuation' and (string(.)='1 0 0' or string(.)='1.0 0.0 0.0')) or
                      (starts-with(local-name(),'pointSize') and (string(.)='1' or string(.)='1.0')))) and
                      not( local-name(..)='ClipPlane' and
                      ((local-name()='enabled' and string(.)='true') or
                      (local-name()='plane' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0')))) and
                      not( local-name(..)='ViewpointGroup' and
                      ((local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='displayed' and string(.)='true') or
                      (local-name()='retainUserOffsets' and string(.)='false') or
                      (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue9"
                      select="not( local-name(..)='MultiTexture' and
                      ((local-name()='alpha' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='color' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')))) and
                      not( contains(local-name(..),'Texture') and
                      ((local-name() = 'mapping') and (string-length(string(.)) = 0))) and
                      not( local-name(..)='TextureCoordinateGenerator' and
                      ((local-name()='mode' and string(.)='SPHERE'))) and
                      not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                      ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and string(.)='false')) and
                      not( local-name(..)='PixelTexture3D' and
                      (local-name()='image' and (string(.)='0 0 0 0'))) and
                      not( local-name(..)='IntegerTrigger' and
                      ((local-name()='integerKey' and string(.)='-1'))) and
                      not( local-name(..)='LayerSet' and
                      ((local-name()='activeLayer' and string(.)='0') or
                       (local-name()='order' and string(.)='0'))) and
                      not(contains(local-name(..),'PickSensor') and
                      ((local-name()='enabled' and string(.)='true') or
                       (local-name()='intersectionType' and string(.)='BOUNDS') or
                       (local-name()='matchCriterion' and string(.)='MATCH_ANY') or
                       (local-name()='objectType' and string(.)='&quot;ALL&quot;') or
                       (local-name()='sortOrder' and string(.)='CLOSEST'))) and
                      not( local-name(..)='ParticleSystem' and
                      ((local-name()='createParticles' and string(.)='true') or
                       (local-name()='enabled' and string(.)='true') or
                       (local-name()='geometryType' and string(.)='QUAD') or
                       (local-name()='lifetimeVariation' and string(.)='0.25') or
                       (local-name()='maxParticles' and string(.)='200') or
                       (local-name()='particleLifetime' and string(.)='5') or
                       (local-name()='particleSize' and string(.)='0.02 0.02'))) and
                      not( local-name(..)='PickableGroup' and
                      ((local-name()='objectType' and string(.)='&quot;ALL&quot;') or
                       (local-name()='pickable' and string(.)='true'))) and
                      not(local-name(..)='StringSensor' and
                      ((local-name()='deletionAllowed' or local-name()='enabled') and (string(.)='true'))) and
                      not( local-name(..)='TransformSensor' and
                      ((local-name()='enabled' and string(.)='true') or
                       (local-name()='size' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='GeneratedCubeMapTexture' and
                      ((local-name()='update' and string(.)='NONE') or
                       (local-name()='size' and string(.)='128'))) and
                      not(local-name(..)='MovieTexture' and
                      ((local-name()='pitch' or local-name()='1') and (string(.)='1.0'))) and
                      not(contains(local-name(..),'Emitter') and
                      ((local-name()='angle' and string(.)='0.7854') or
                       (local-name()='direction' and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                       (local-name()='mass' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='position' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='speed' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='surfaceArea' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='variation' and string(.)='0.25') or
                       (local-name()='internal' and string(.)='true') or
                       (local-name()='coordIndex' or local-name()='-1'))) and
                      not(local-name(..)='Contact' and
                      ((local-name()='minBounceSpeed' and (string(.)='0' or string(.)='0.0')))) and
                      not(contains(local-name(..),'Layer') and
                      ((local-name()='isPickable' and string(.)='true'))) and
                      not(contains(local-name(..),'Layout') and
                      ((local-name()='offset' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                       (local-name()='size'   and (string(.)='1 1' or string(.)='1.0 1.0')) or
                       (local-name()='align' and string(.)='&quot;CENTER&quot; &quot;CENTER&quot;') or
                       (local-name()='offsetUnits' and string(.)='&quot;WORLD&quot; &quot;WORLD&quot;') or
                       (local-name()='scaleMode' and string(.)='&quot;NONE&quot; &quot;NONE&quot;') or
                       (local-name()='sizeUnits' and string(.)='&quot;WORLD&quot; &quot;WORLD&quot;'))) and
                      not( local-name(..)='TextureProperties' and
                      ((local-name()='anisotropicDegree' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='borderColor' and (string(.)='0 0 0 0' or string(.)='0.0 0.0 0.0 0.0')) or
                       (local-name()='borderWidth' and (string(.)='0' or string(.)='0.0')) or
                       (starts-with(local-name(),'boundaryMode') and string(.)='REPEAT') or
                       (local-name()='generateMipMaps' and string(.)='false') or
                       (local-name()='magnificationFilter' and string(.)='FASTEST') or
                       (local-name()='minificationFilter'  and string(.)='FASTEST') or
                       (local-name()='textureCompression'  and string(.)='FASTEST') or
                       (local-name()='texturePriority' and (string(.)='0' or string(.)='0.0')))) and
                      not(local-name(..)='Viewport' and
                      ((local-name()='clipBoundary' and (string(.)='0 1 0 1' or string(.)='0.0 1.0 0.0 1.0')))) and
                      not( local-name(..)='KeySensor' and
                      ((local-name()='enabled' and string(.)='true'))) and
                      not(starts-with(local-name(..),'TextureProjector') and
                       ((local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='location'  and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                        (local-name()='upVector' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='farDistance'  and (string(.)='10' or string(.)='10.0')) or
                        (local-name()='nearDistance' and (string(.)='1'  or string(.)='1.0')) or
                        (local-name()='global' and string(.)='true') or
                        (local-name()='on' and string(.)='true'))) and
                      not( local-name(..)='TextureProjectorParallel' and
                      ((local-name()='fieldOfView' and (string(.)='-1 -1 1 1' or string(.)='-1.0 -1.0 1.0 1.0')))) and
                      not( local-name(..)='TextureProjectorPerspective' and
                       ((local-name()='upVector' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                        (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854')))))" />
        <xsl:variable name="notDefaultFieldValue10"
                      select="not( local-name(..)='AcousticProperties' and
                      ((local-name()='containerField' and string(.)='acousticProperties') or
                      (local-name()='absorption' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='diffuse' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='refraction' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='specular' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='Analyser' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequencyBinCount' and (string(.)='1024' or string(.)='1024.0')) or
                      (local-name()='fftSize' and (string(.)='2048' or string(.)='2048.0')) or
                      (local-name()='minDecibels' and (string(.)='-100' or string(.)='-100.0')) or
                      (local-name()='maxDecibels' and (string(.)='-30' or string(.)='-30.0')) or
                      (local-name()='smoothingTimeConstant' and (string(.)='.8' or string(.)='0.8')))) and
                      not( local-name(..)='BufferAudioSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='bufferDuration' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='type' and (string(.)='lowpass')) or
                      (local-name()='loopStart' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='loopEnd' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='numberOfChannels' and string(.)='0') or
                      (local-name()='playbackRate' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='sampleRate' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='AudioDestination' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='maxChannelCount' and (string(.)='2')))) and   
                      not( local-name(..)='BiquadFilter' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequency' and (string(.)='350' or string(.)='350.0')) or
                      (local-name()='qualityFactor' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='type' and (string(.)='lowpass')))) and
                      not( local-name(..)='ChannelMerger' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='ChannelSelector' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='channelSelection' and (string(.)='0')))) and
                      not( local-name(..)='ChannelSplitter' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='Convolver' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='normalize' and (string(.)='false')))) and
                      not( local-name(..)='Delay' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='delayTime' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='maxDelayTime' and (string(.)='1' or string(.)='1.0')))) and
                      not( local-name(..)='DynamicsCompressor' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='attack' and (string(.)='0.003' or string(.)='.003')) or
                      (local-name()='gain' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='knee' and (string(.)='30' or string(.)='30.0')) or
                      (local-name()='ratio' and (string(.)='12' or string(.)='12.0')) or
                      (local-name()='release' and (string(.)='.25' or string(.)='0.25')) or
                      (local-name()='threshold' and (string(.)='-24' or string(.)='-24.0')))) and
                      not( local-name(..)='Gain' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='ListenerPointSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='dopplerEnabled' and (string(.)='false')) or
                      (local-name()='interauralDistance' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                      (local-name()='position' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='trackCurrentView' and (string(.)='false')))) and
                      not( local-name(..)='MicrophoneSource' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='OscillatorSource' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='frequency' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='PeriodicWave' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='type' and (string(.)='square')))) and
                      not( local-name(..)='SpatialSound' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='coneInnerAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterGain' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                      (local-name()='distanceModel' and (string(.)='inverse')) or
                      (local-name()='dopplerEnabled' and (string(.)='false')) or
                      (local-name()='enableHRTF' and (string(.)='false')) or
                      (local-name()='intensity' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='location' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='maxDistance' and (string(.)='10000' or string(.)='10000.0')) or
                      (local-name()='priority' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='referenceDistance' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='rolloffFactor' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='spatialize' and (string(.)='true')))) and
                      not( local-name(..)='StreamAudioDestination' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='StreamAudioSource' and
                      ((local-name()='containerField' and string(.)='children'))) and
                      not( local-name(..)='WaveShaper' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='oversample' and (string(.)='none'))))" />
        <xsl:variable name="notDefaultContainerField1"
                      select="not((local-name()='containerField' and string(.)='children')	and
                      (contains(local-name(..),'Interpolator') or
                      contains(local-name(..),'Light') or
                      contains(local-name(..),'Sensor') or
                      local-name(..)='Anchor' or
                      local-name(..)='Background' or
                      local-name(..)='Billboard' or
                      local-name(..)='Collision' or
                      local-name(..)='Fog' or
                      local-name(..)='Group' or
                      local-name(..)='Inline' or
                      local-name(..)='LOD' or
                      local-name(..)='NavigationInfo' or
                      local-name(..)='Script' or
                      local-name(..)='Shape' or
                      local-name(..)='Sound' or
                      local-name(..)='Switch' or
                      local-name(..)='TextureBackground' or
                      starts-with(local-name(..),'TextureProjector') or
                      local-name(..)='Transform' or
                      local-name(..)='Viewpoint' or
                      local-name(..)='WorldInfo' or
                      local-name(..)='ProtoInstance')) and
                      not((local-name()='containerField' and string(.)='geometry')	and
                      (local-name(..)='Box' or
                      local-name(..)='Cone' or
                      local-name(..)='Cylinder' or
                      local-name(..)='ElevationGrid' or
                      local-name(..)='GeoElevationGrid' or
                      local-name(..)='Extrusion' or
                      local-name(..)='IndexedFaceSet' or
                      local-name(..)='IndexedLineSet' or
                      local-name(..)='PointSet' or
                      local-name(..)='Sphere' or
                      local-name(..)='Text' or
                      local-name(..)='XvlShell'))" />
        <xsl:variable name="notDefaultContainerField2"
                      select="not((local-name()='containerField' and string(.)='source')   and (local-name(..)='AudioClip')) and
                      not((local-name()='containerField' and string(.)='appearance')	   and (local-name(..)='Appearance')) and
                      not((local-name()='containerField' and string(.)='material')         and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))) and
                      not((local-name()='containerField' and string(.)='color')            and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                      not((local-name()='containerField' and string(.)='coord')            and ((local-name(..)='Coordinate') or (local-name(..)='CoordinateDouble') or (local-name(..)='GeoCoordinate'))) and
                      not((local-name()='containerField' and string(.)='normal')           and (local-name(..)='Normal')) and
                      not((local-name()='containerField' and string(.)='texture')          and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
                      not((local-name()='containerField' and string(.)='fontStyle')        and (local-name(..)='FontStyle')) and
                      not((local-name()='containerField' and string(.)='texCoord')         and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
                      not((local-name()='containerField' and string(.)='textureTransform') and (local-name(..)='TextureTransform'))" />
        <xsl:variable name="notDefaultContainerField3"
                      select="not((local-name()='containerField' and string(.)='geometry') and
                      ((local-name(..)='Arc2D') or (local-name(..)='ArcClose2D') or (local-name(..)='Circle2D') or (local-name(..)='Disk2D') or (local-name(..)='Polyline2D') or (local-name(..)='Polypoint2D') or (local-name(..)='Rectangle2D') or (local-name(..)='TriangleSet2D') or contains(local-name(..),'QuadSet'))) and
                      not((local-name()='containerField' and string(.)='voxels')	and
                      ((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))) and
                      not((local-name()='containerField' and string(.)='renderStyle')	and
                      ((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')))" />
        <xsl:variable name="notDefaultCAD"
                      select="not((local-name(..)='CADAssembly' or local-name(..)='CADFace' or local-name(..)='CADLayer') and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not(local-name(..)='CADPart' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
					   (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0' or string(.)='0.0 1.0 0.0 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultDIS1"
                      select="not((local-name(..)='EspduTransform' or contains(local-name(..),'Pdu')) and
                      ((starts-with(local-name(),'is')) or
                      (local-name()='address' and (string(.)='localhost')) or
                      (local-name()='enabled' and (string(.)='true')) or
                      (local-name()='networkMode' and (string(.)='standAlone')) or
                      (local-name()='rtpHeaderExpected' and (string(.)='false')) or
                      (local-name()='readInterval'  and (string(.)='.1' or string(.)='0.1')) or
                      (local-name()='writeInterval'  and (string(.)='1' or string(.)='1.0')) or
                      (((local-name()='applicationID') or (local-name()='munitionApplicationID') or (local-name()='whichGeometry')) and (string(.)='1')) or
                      ((contains(local-name(),'ntityID') or contains(local-name(),'iteID') or (local-name()='applicationID')) and (string(.)='0')) or
                      ((local-name()='port' or local-name()='multicastRelayPort' or local-name()='fireMissionIndex') and (string(.)='0'))))" />
        <!-- ='' ='1' '' geoCoords='0 0 0' geoSystem='"GD" "WE"' '1' munitionSiteID='0' ='' '0' '0' -->
        <xsl:variable name="notDefaultDIS2"
                      select="not(local-name(..)='EspduTransform' and
                      ((((local-name()='collisionType') or (local-name()='detonationResult')) and (string(.)='0')) or
                      (((local-name()='detonationLocation') or (local-name()='detonationRelativeLocation'))  and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='eventApplicationID'  and (string(.)='1')) or
                      (((local-name()='eventEntityID') or (local-name()='eventNumber') or (local-name()='eventSiteID'))  and (string(.)='0')) or
                      ((local-name()='fired1' or local-name()='fired2') and (string(.)='false')) or
                      (local-name()='deadReckoning'  and (string(.)='0')) or
                      ((local-name()='articulationParameterCount' or local-name()='entityCategory' or local-name()='entitySubcategory' or local-name()='entityCountry' or local-name()='entityDomain' or local-name()='entityExtra' or local-name()='entityKind' or local-name()='entitySpecific' or local-name()='eventApplicationID' or local-name()='firingRange' or local-name()='firingRate' or local-name()='fuse' or local-name()='warhead' or local-name()='forceID' or local-name()='munitionQuantity' or local-name()='munitionApplicationID') and (string(.)='0')) or
                      ((local-name()='linearVelocity' or local-name()='linearAcceleration' or local-name()='munitionStartPoint' or local-name()='munitionEndPoint') and (string(.)='0 0 0'))))" />
        <xsl:variable name="notDefaultDIS3"
                      select="not(local-name(..)='ReceiverPdu' and 
                      (((local-name()='radioID' or local-name()='receiverState' or starts-with(local-name(),'transmitter')) and (string(.)='0')) or
                      (local-name()='receivedPower'  and (string(.)='0' or string(.)='0.0')))) and
                      not(local-name(..)='SignalPdu' and
                      (((local-name()='radioID' or local-name()='encodingScheme' or local-name()='tdlType' or local-name()='sampleRate' or local-name()='samples' or local-name()='dataLength') and (string(.)='0')))) and
                      not(local-name(..)='TransmitterPdu' and
                      (((local-name()='radioID' or starts-with(local-name(),'antennaPattern') or starts-with(local-name(),'crypto') or local-name()='frequency' or local-name()='inputSource' or local-name()='lengthOfModulationParameters' or starts-with(local-name(),'modulationType') or starts-with(local-name(),'radioEntityType') or local-name()='transmitFrequencyBandwidth' or local-name()='transmitState') and (string(.)='0')) or
                      ((local-name()='power' or local-name()='transmitFrequencyBandwidth') and (string(.)='0' or string(.)='0.0')) or
                      ((contains(local-name(),'ntennaLocation') and (string(.)='0 0 0')))))" />
        <xsl:variable name="notDefaultDIS4"
                      select="not(local-name(..)='DISEntityManager' and
                      (((local-name()='applicationID') and (string(.)='0')) or
                      (local-name()='address' and (string(.)='localhost')) or
                      ((local-name()='port' or local-name()='siteID') and (string(.)='0')))) and
                      not(local-name(..)='DISEntityTypeMapping' and 
                      ((local-name()='containerField') and (string(.)='mapping')) or
                      ((local-name()='category' or local-name()='country' or local-name()='domain' or local-name()='extra' or local-name()='kind' or local-name()='specific' or local-name()='subcategory') and (string(.)='0')))" />
        <xsl:variable name="notDefaultGeo"
                      select="not((starts-with(local-name(..),'Geo') or (local-name(..)='EspduTransform') or contains(local-name(..),'Pdu')) and 
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='geoCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='geoCoords' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not(local-name(..)='GeoLOD' 	  and 
                      ((local-name()='range' and (string(.)='10' or string(.)='10.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not(local-name(..)='GeoViewpoint' and
                      ((local-name()='speedFactor' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='headlight' and (string(.)='true')) or
                       (local-name()='jump' and (string(.)='true')) or
                       (local-name()='viewAll' and string(.)='false') or
                       ((local-name()='nearClippingPlane' or local-name()='farClippingPlane') and ((string(.)='-1') or (string(.)='-1.') or (string(.)='-1.0'))) or
                       (local-name()='navType' and (string(.)='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
                       (local-name()='orientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='position' and (string(.)='0 0 100000' or string(.)='0.0 0.0 100000.0')) or
                      (local-name()='fieldOfView' and (string(.)='0.785398' or string(.)='.785398' or string(.)='0.7854' or string(.)='.7854')))) and
                      not((local-name(..)='GeoCoordinate' or local-name(..)='GeoOrigin') and
                      ((local-name()='rotateYUp' and (string(.)='false')) or
                      (local-name()='containerField' and (string(.)='geoOrigin')) or
                      (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;'))))" />
        <xsl:variable name="isHAnim1" select="$isX3D3 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)]"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] and not($isHAnim1 = true())"/>
        <xsl:variable name="notDefaultHAnim1"
                      select="not( local-name(..)='HAnimJoint' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='limitOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='stiffness' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSegment' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                       (local-name()='centerOfMass' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='mass' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='momentsOfInertia' and
                        (string(.)='0 0 0 0 0 0 0 0 0' or string(.)='0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSite' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultHAnim2"
                      select="not( local-name(..)='HAnimHumanoid' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='bboxCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='jointBindingPositions' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='jointBindingRotations' and (string(.)='0 0 1 0' or string(.)='0 1 0 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0.0 1.0 0.0 0.0')) or
                       (local-name()='jointBindingScales' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='loa' and (string(.)='-1')) or
                       (local-name()='version' and (($isHAnim1 = true() and (string(.)='1.0' or (string-length(string(.)) = 0))) or ($isHAnim2 = true() and string(.)='2.0'))) or
                       (local-name()='skeletalConfiguration' and (string(.)='BASIC')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='translation' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimDisplacer' and
                      ((local-name()='containerField' and (string(.)='displacers')) or
                       (local-name()='weight' and (string(.)='0' or string(.)='0.0')))) and
                      not( local-name(..)='HAnimMotion' and
                      ((local-name()='containerField' and (string(.)='motions')) or
                       (local-name()='frameDuration' and (string(.)='0.1' or string(.)='.1')) or
                       (local-name()='frameIncrement' and (string(.)='1')) or
                       ((local-name()='frameIndex' or local-name()='startFrame' or local-name()='endFrame') and (string(.)='0')) or
                       (local-name()='loa' and (string(.)='-1'))))" />
        <xsl:variable name="notDefaultNurbs"
                      select="not((local-name(..)='NurbsCurve' or local-name(..)='NurbsCurve2D') and
                      ((local-name()='tessellation' and (string(.)='0')) or
                      (local-name()='closed' and (string(.)='false')) or
                      (local-name()='order' and (string(.)='3')))) and
                      not(local-name(..)='NurbsSet' and
                      ((local-name()='tessellationScale' and (string(.)='1' or string(.)='1.0')) or 
                      (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator') and
                      ((local-name()='order' and (string(.)='3' or string(.)='3.0')))) and
                      not((local-name(..)='NurbsSurface' or local-name(..)='NurbsPatchSurface' or local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsTextureSurface' or local-name(..)='NurbsTrimmedSurface') and
                      ((local-name()='uTessellation' and (string(.)='0')) or
                      (local-name()='vTessellation' and (string(.)='0')) or
                      (local-name()='uDimension' and (string(.)='0')) or
                      (local-name()='vDimension' and (string(.)='0')) or
                      (local-name()='uOrder' and (string(.)='3')) or
                      (local-name()='vOrder' and (string(.)='3')) or
                      (local-name()='ccw' and (string(.)='true')) or
                      (local-name()='solid' and (string(.)='true')) or
                      ((local-name()='uClosed' or local-name()='vClosed') and (string(.)='false')))) and
                      not((local-name(..)='NurbsSurfaceInterpolator' or local-name(..)='NurbsTextureCoordinate') and
                      ((local-name()='uDimension' and (string(.)='0')) or
                      (local-name()='vDimension' and (string(.)='0')) or
                      (local-name()='uOrder' and (string(.)='3')) or
                      (local-name()='vOrder' and (string(.)='3')))) and
                      not((local-name(..)='NurbsCurve' or local-name(..)='NurbsSwungSurface') and
                      ((local-name()='ccw' or local-name()='solid') and (string(.)='true'))) and
                      not((contains(local-name(..),'SplinePositionInterpolator') or local-name(..)='SplineScalarInterpolator' or local-name(..)='SquadOrientationInterpolator') and
                      ((local-name()='closed' or local-name()='normalizeVelocity') and (string(.)='false')))" />
        <xsl:variable name="notDefaultGeometry2D"
                      select="not((local-name(..)='Arc2D' or local-name(..)='ArcClose2D') and
                      ((local-name()='startAngle' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='endAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
                       (local-name()='radius' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='solid' and (string(.)='false')) or
                       (local-name()='closureType' and (string(.)='PIE')))) and
                      not(local-name(..)='Circle2D' and
                      ((local-name()='radius' and (string(.)='1' or string(.)='1.0')))) and
                      not(local-name(..)='Disk2D' and
                      ((local-name()='innerRadius' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='outerRadius' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='solid' and (string(.)='false')))) and
                      not((local-name(..)='Rectangle2D') and
                      ((local-name()='size' and ((string(.)='2 2') or (string(.)='2.0 2.0'))) or
                       (local-name()='solid' and (string(.)='false')))) and
                      not((local-name(..)='TriangleSet2D') and
                      ((local-name()='solid' and (string(.)='false'))))" />
        <xsl:variable name="notDefaultVolume"
                      select="not(((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))	and
                      ((local-name()='dimensions' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or 
                      (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      ((local-name()='contourStepSize' or local-name()='surfaceTolerance') and (string(.)='0' or string(.)='0.0'))) and
                      not(((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')) and
                      (local-name()='enabled' and string(.)='true')) and
                      not((local-name(..)='BlendedVolumeStyle')	and
                      (((local-name()='weightConstant1' or local-name()='weightConstant2') and (string(.)='.5' or string(.)='0.5')) or
                       ((local-name()='weightFunction1' or local-name()='weightFunction2') and (string(.)='CONSTANT')))) and
                      not((local-name(..)='BoundaryEnhancementVolumeStyle')	and
                      (((local-name()='boundaryOpacity') and (string(.)='.9' or string(.)='0.9')) or
                       ((local-name()='opacityFactor') and (string(.)='2' or string(.)='2.0')) or
                       ((local-name()='retainedOpacity') and (string(.)='.2' or string(.)='0.2')))) and
                      not((local-name(..)='CartoonVolumeStyle')	and
                      (((local-name()='colorSteps') and (string(.)='4')) or
                       ((local-name()='orthogonalColor') and (string(.)='1 1 1 1' or string(.)='1.0 1.0 1.0 1.0')) or
                       ((local-name()='parallelColor') and (string(.)='0 0 0 1' or string(.)='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='EdgeEnhancementVolumeStyle')	and
                      (((local-name()='gradientThreshold') and (string(.)='.4' or string(.)='0.4')) or
                       ((local-name()='edgeColor') and (string(.)='0 0 0 1' or string(.)='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      (((local-name()='surfaceTolerance') and (string(.)='0' or string(.)='0.0')))) and
                      not((local-name(..)='ProjectionVolumeStyle')	and
                      (((local-name()='intensityThreshold') and (string(.)='0' or string(.)='0.0')) or
                       ((local-name()='type') and (string(.)='MAX')))) and
                      not((local-name(..)='ShadedVolumeStyle')	and
                      (((local-name()='lighting' or local-name()='shadows') and (string(.)='false')) or
                       ((local-name()='phaseFunction') and (string(.)='Henyey-Greenstein')))) and
                      not((local-name(..)='SilhouetteEnhancementVolumeStyle')	and
                      (((local-name()='silhouetteBoundaryOpacity') and (string(.)='0' or string(.)='0.0')) or
                       ((local-name()='silhouetteRetainedOpacity') and (string(.)='1' or string(.)='1.0')) or
                       ((local-name()='silhouetteSharpness') and (string(.)='.5' or string(.)='0.5')))) and
                      not((local-name(..)='ToneMappedVolumeStyle')	and
                      (((local-name()='colorSteps') and (string(.)='4')) or
                       ((local-name()='coolColor') and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')) or
                       ((local-name()='warmColor') and (string(.)='1 1 0 0' or string(.)='1.0 1.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFollower"
                      select="not(contains(local-name(..),'Chaser') and
                      ((local-name()='duration' and (string(.)='1' or string(.)='1.0')))) and
                      not(contains(local-name(..),'Damper') and
                      ((local-name()='tau' and (string(.)='.3' or string(.)='0.3')) or
                      (local-name()='tolerance' and (string(.)='-1' or string(.)='-1.0')) or
                      (local-name()='order ' and (string(.)='3')))) and
                      not(contains(local-name(..),'Damper') and
                      (local-name()='order' and (string(.)='3'))) and
                      not((local-name(..)='ColorChaser' or local-name(..)='ColorDamper') and
                      ((local-name()='initialDestination' and (string(.)='.8 .8 .8' or string(.)='0.8 0.8 0.8')) or
                      (local-name()='initialValue' and (string(.)='.8 .8 .8' or string(.)='0.8 0.8 0.8')))) and
                      not((local-name(..)='CoordinateChaser' or local-name(..)='CoordinateDamper' or local-name(..)='PositionChaser' or local-name(..)='PositionDamper') and
                      ((local-name()='initialDestination' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='initialValue' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')))) and
                      not((local-name(..)='PositionChaser2D' or local-name(..)='PositionDamper2D') and
                      ((local-name()='initialDestination' and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      (local-name()='initialValue' and (string(.)='0 0' or string(.)='0.0 0.0')))) and
                      not((local-name(..)='OrientationChaser' or local-name(..)='OrientationDamper') and
                      ((local-name()='initialDestination' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')) or
                      (local-name()='initialValue' and (string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0')))) and
                      not((local-name(..)='ScalarChaser' or local-name(..)='ScalarDamper') and
                      ((local-name()='initialDestination' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='initialValue' and (string(.)='0' or string(.)='0.0'))))" />
        <xsl:variable name="notDefaultShader"
                      select="not((local-name(..)='FloatVertexAttribute') and ((local-name()='numComponents' and (string(.)='4'))))" />
		              <!-- retained due to importance:
                      and
                      not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and ((local-name()='type' and (string(.)='VERTEX')))) -->
        <xsl:variable name="notDefaultRigidBodyPhysics"
                      select="not((local-name(..)='CollidableOffset' or local-name(..)='CollidableShape') and
                      (((local-name()='enabled') and (string(.)='true')) or
                      ((local-name()='rotation') and (string(.)='0 0 1 0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0.0 0.0 1.0 0.0')) or
                      ((local-name()='translation') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='bboxCenter')	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='bboxSize')	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='CollisionSpace') and
                      ((local-name()='enabled' and (string(.)='true')) or
                      (local-name()='useGeometry' and (string(.)='false')) or
                      (local-name()='bboxCenter'	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='bboxSize'	and	(string(.)='-1 -1 -1' or string(.)='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='BallJoint' or local-name(..)='DoubleAxisHingeJoint' or local-name(..)='MotorJoint' or local-name(..)='SingleAxisHingeJoint' or local-name(..)='SliderJoint' or local-name(..)='UniversalJoint') and
                      ((local-name()='forceOutput')	and	(string(.)='&quot;NONE&quot;'))) and
                      not((local-name(..)='BallJoint') and
                      ((local-name()='anchorPoint')	and	(string(.)='0 0 0' or string(.)='0.0 0.0 0.0'))) and
                      not((local-name(..)='BoundedPhysicsModel') and
                      ((local-name()='enabled')	and	(string(.)='true'))) and
                      not((local-name(..)='ForcePhysicsModel') and
                      ((local-name()='enabled')	and	(string(.)='true')) or
                      (local-name()='force'	and	(string(.)='0 -9.8 0' or string(.)='0.0 -9.8 0.0'))) and
                      not((local-name(..)='WindPhysicsModel') and
                      ((local-name()='enabled')	and	(string(.)='true')) or
                      (local-name()='gustiness'	and	(string(.)='0.1')) or
                      (local-name()='speed'	and	(string(.)='0.1')) or
                      (local-name()='turbulence'	and	(string(.)='0' or string(.)='0.0')) or
                      (local-name()='direction'	and	(string(.)='1 0 0' or string(.)='1.0 0.0 0.0'))) and
                      not((local-name(..)='CollisionCollection') and
                      (((local-name()='appliedParameters') and (string(.)='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='enabled') and (string(.)='true')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipFactors' or local-name()='surfaceSpeed') and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      ((local-name()='minBounceSpeed') and (string(.)='.1' or string(.)='0.1')) or
                      ((local-name()='softnessConstantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='CollisionSensor') and
                      (local-name()='enabled' and string(.)='true')) and
                      not((local-name(..)='Contact') and
                      (((local-name()='appliedParameters') and (string(.)='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce' or local-name()='depth' or local-name()='minbounceSpeed') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='contactNormal') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipCoefficients' or local-name()='surfaceSpeed') and (string(.)='0 0' or string(.)='0.0 0.0')) or
                      ((local-name()='frictionDirection') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='position') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='softnessConstantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='DoubleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='desiredAngularVelocity1' or local-name()='desiredAngularVelocity2' or local-name()='maxTorque1' or local-name()='maxTorque2' or local-name()='stop1Bounce' or local-name()='suspensionForce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='maxAngle1') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle1') and (string(.)='-3.1416' or string(.)='-3.14159' or string(.)='-3.141593' or string(.)='-3.1415926' or string(.)='-3.14159263' or string(.)='-3.141592653')) or
                      ((local-name()='stop1Bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stop1ConstantForceMix') and (string(.)='.001' or string(.)='0.001')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='suspensionErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='MotorJoint') and
                      (((local-name()='axis1Angle' or local-name()='axis2Angle' or local-name()='axis3Angle' or local-name()='axis1Torque' or local-name()='axis2Torque' or local-name()='axis3Torque' or local-name()='stop1Bounce' or local-name()='stop2Bounce' or local-name()='stop3Bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection' or local-name()='stop3ErrorCorrection') and (string(.)='.8' or string(.)='0.8')) or
                      ((local-name()='motor1Axis' or local-name()='motor2Axis' or local-name()='motor3Axis') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='enabledAxes') and (string(.)='1')) or
                      ((local-name()='autoCalc') and (string(.)='false')))) and
                      not((local-name(..)='RigidBody') and
                      (((local-name()='angularDampingFactor') and (string(.)='.001' or string(.)='0.001')) or
                      ((local-name()='angularVelocity' or local-name()='centerOfMass' or local-name()='finiteRotationAxis' or local-name()='linearVelocity' or local-name()='position') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='finiteRotationAxis') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='mass') and (string(.)='1' or string(.)='1.0')) or
                      ((local-name()='enabled' or local-name()='useGlobalGravity') and (string(.)='true')) or
                      ((local-name()='autoDamp' or local-name()='autoDisable' or local-name()='fixed' or local-name()='useFiniteRotation') and (string(.)='false')) or
                      ((local-name()='inertia') and (string(.)='1 0 0 0 1 0 0 0 1' or string(.)='1.0 0 0 0 1.0 0 0 0 1.0' or string(.)='1.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 1.0')) or
                      ((local-name()='linearDampingFactor') and (string(.)='.001' or string(.)='0.001')) or
                      ((local-name()='orientation') and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')))) and
                      not((local-name(..)='RigidBodyCollection') and
                      (((local-name()='autoDisable' or local-name()='preferAccuracy') and (string(.)='false')) or
                      ((local-name()='enabled') and (string(.)='true')) or
                      ((local-name()='constantForceMix') and (string(.)='.0001' or string(.)='0.0001')) or
                      ((local-name()='contactSurfaceThickness' or local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='errorCorrection') and (string(.)='.8' or string(.)='0.8')) or
                      ((local-name()='gravity') and (string(.)='0 -9.8 0' or string(.)='0.0 -9.8 0.0')) or
                      ((local-name()='iterations') and (string(.)='10')) or
                      ((local-name()='maxCorrectionSpeed') and (string(.)='-1' or string(.)='-1.0')))) and
                      not((local-name(..)='SingleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='maxAngle') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle') and (string(.)='-3.1416' or string(.)='-3.14159' or string(.)='-3.141593' or string(.)='-3.1415926' or string(.)='-3.14159263' or string(.)='-3.141592653')) or
                      ((local-name()='stopBounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stopErrorCorrection') and (string(.)='.8' or string(.)='0.8')))) and
                      not((local-name(..)='SliderJoint') and
                      (((local-name()='axis') and (string(.)='0 1 0' or string(.)='0.0 1.0 0.0')) or
                      ((local-name()='maxSeparation' or local-name()='stopErrorCorrection') and (string(.)='1' or string(.)='1.0')) or
                      ((local-name()='minSeparation' or local-name()='sliderForce' or local-name()='stopBounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stopErrorCorrection') and (string(.)='1' or string(.)='1.0')))) and
                      not((local-name(..)='UniversalJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      ((local-name()='stop1Bounce' or local-name()='stop2Bounce') and (string(.)='0' or string(.)='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection') and (string(.)='.8' or string(.)='0.8'))))" />
        <xsl:variable name="notFieldSpace"
                      select="not(local-name(..)='field'  and	(local-name()='space' or local-name()='xml:space')) and
                      not(local-name(..)='Script' and	(local-name()='space' or local-name()='xml:space'))" />
        
        <!-- provide attribute output only if it is not a default value, or if scene has a digital signature -->
        <!-- note that if digital signature is present, all attributes are included (including default values) and
                       order of attributes may change, but that should be OK according to Post Schema Validation Infoset (PSVI) -->
                <xsl:variable name="notDefaultValue" select="
                (count(//ds:Signature) > 0) or
                (local-name(..)='HAnimHumanoid' and local-name()='version') or(count(//ds:Signature) > 0) or
                (
                $notImplicitEvent1 and
                $notImplicitEvent2 and
                $notImplicitEvent3 and
                $notDefaultFieldValue1 and
                $notDefaultFieldValue1a and
                $notDefaultFieldValue2 and
                $notDefaultFieldValue3 and
                $notDefaultFieldValue4 and
                $notDefaultFieldValue5 and
                $notDefaultFieldValue6 and
                $notDefaultFieldValue7 and
                $notDefaultFieldValue8 and
                $notDefaultFieldValue9 and
                $notDefaultFieldValue10 and
                $notDefaultCAD         and
                $notDefaultDIS1        and
                $notDefaultDIS2        and
                $notDefaultDIS3        and
                $notDefaultDIS4        and
                $notDefaultGeo         and
                $notDefaultHAnim1      and
                $notDefaultHAnim2      and
                $notDefaultNurbs       and
                $notDefaultGeometry2D  and
                $notDefaultVolume      and
                $notDefaultFollower    and
                $notDefaultShader      and
                $notDefaultRigidBodyPhysics and
                $notDefaultContainerField1  and
                $notDefaultContainerField2  and
                $notDefaultContainerField3  and
                not(local-name()='containerField' and string(.)='') and
                not(local-name()='class' and string(.)='') and
                $notFieldSpace and
                not(contains(local-name(),'set_')) and
                not(contains(local-name(),'_changed')) and
                .)" />
        <!-- debug
        <xsl:message>
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> @</xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>=</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>, isDefaultValue: </xsl:text>
            <xsl:value-of select="not($notDefaultValue)"/>
        </xsl:message> -->
        
        <xsl:if test="$notDefaultValue or not($stripDefaultAttributes='true') or ((local-name()='name') and not(/AllX3dElementsAttributes)) or
                      ((local-name(..)='ROUTE') or (local-name(..)='field')   or (local-name(..)='fieldValue'))"> <!-- must haves -->
			<!-- attribute precaution: normalized value is needed if line feeds (which break json rules) are contained -->
			<xsl:choose>
				<xsl:when test="not(contains(string(.),'\n'))">
					<xsl:value-of select="."/> <!-- return non-default value, empty otherwise if $stripDefaultAttributes=false -->
				</xsl:when>
				<xsl:otherwise>
					<xsl:message>
						<xsl:text>normalizing: </xsl:text>
						<xsl:value-of select="."/>
					</xsl:message>
					<xsl:variable   name="normalizedValue" select="normalize-space(string(.))"/>
					<xsl:value-of select="$normalizedValue"/> <!-- return non-default value, empty otherwise if $stripDefaultAttributes=false -->
				</xsl:otherwise>
			</xsl:choose>			
        </xsl:if>
        
    </xsl:template> <!-- end name="not-default-attribute-value" -->

    <xsl:template name="attribute-type"> <!-- rule to determine attribute type -->
	
		<!-- Note:  these rules are adapted from X3dToVrml97.xslt X3dToJson.xslt X3dToJava.xslt X3dToES5.xslt etc. so be sure to apply any updates in all stylesheets -->

		<xsl:variable name="attributeName"       select="local-name()"/>
		<xsl:variable name="parentElementName"   select="local-name(..)"/>
		<xsl:variable name="normalizeSpaceValue" select="normalize-space(string(.))"/>
		<xsl:variable name="localFieldType"      select="normalize-space(../@type)"/> <!-- locally defined field -->

		<xsl:choose>
		  <!-- SFString -->
		  <xsl:when test="($localFieldType='SFString')          or
                            ($attributeName='DEF')                or
                            ($attributeName='USE')                or
                            ($attributeName='containerField')     or
                            ($attributeName='appinfo')            or
                            ($attributeName='channelCountMode')   or ($attributeName='channelInterpretation')   or
                            ($attributeName='documentation')      or
                            ($attributeName='name')               or
                            ($attributeName='class')              or
                            ($attributeName='id')                 or
                            ($attributeName='style')              or
                            ($attributeName='description')        or
                            ($attributeName='distanceModel')      or
                            ($attributeName='address')            or
                            ($attributeName='language')           or
                            ($attributeName='mapping')            or
                            ($attributeName='marking')            or
                            ($attributeName='multicastAddress')   or
                            ($attributeName='networkMode')        or
                            ($attributeName='oversample')         or
                            ($attributeName='reference')          or
                            ($attributeName='type')               or
                            ($attributeName='lang')               or ($attributeName='xml:lang') or
                            (starts-with($parentElementName,'field')         and (($attributeName='accessType') or ($attributeName='type')       or ($attributeName='appinfo') or ($attributeName='documentation'))) or
                            (starts-with($parentElementName,'meta')          and (($attributeName='content')    or ($attributeName='http-equiv') or ($attributeName='scheme')  or ($attributeName='dir') or ($attributeName='lang') or ($attributeName='xml:lang'))) or
                            (($parentElementName='component')                and not($attributeName='level')) or
                            (($parentElementName='unit')                     and not($attributeName='conversionFactor')) or
			    ($parentElementName='Appearance'                 and $attributeName='alphaMode') or
                            ($parentElementName='ArcClose2D'                 and $attributeName='closureType') or
                            ($parentElementName='BiquadFilter'               and $attributeName='type') or
                            ($parentElementName='BlendedVolumeStyle'         and (starts-with($attributeName,'weightFunction') or ($attributeName='magnificationFilter') or ($attributeName='minificationFilter') or ($attributeName='textureCompression'))) or
                            (ends-with($parentElementName,'Fog')             and $attributeName='fogType') or
			    ($parentElementName='GeneratedCubeMapTexture'    and $attributeName='update') or
                            ($parentElementName='HAnimHumanoid'              and (($attributeName='version') or ($attributeName='skeletalConfiguration'))) or
                            ($parentElementName='HAnimMotion'                and (($attributeName='channels') or ($attributeName='joints'))) or
                            ($parentElementName='IMPORT'                     and (($attributeName='AS') or ($attributeName='importedDEF') or ($attributeName='inlineDEF'))) or
                            (ends-with($parentElementName,'Material')	   and ends-with($attributeName,'Mapping')) or
                            ($parentElementName='ParticleSystem'             and $attributeName='geometryType') or
                            (ends-with($parentElementName,'PickSensor')      and ($attributeName='intersectionType' or $attributeName='matchCriterion' or $attributeName='sortOrder')) or
                            ($parentElementName='ProjectionVolumeStyle'      and $attributeName='type') or
                            ($parentElementName='ShadedVolumeStyle'          and $attributeName='phaseFunction') or
                            ($parentElementName='ShaderPart'                 and $attributeName='type') or
                            ($parentElementName='ShaderProgram'              and $attributeName='type') or
                            ($parentElementName='TextureCoordinateGenerator' and $attributeName='mode') or
                            ($parentElementName='TextureProperties'          and (starts-with($attributeName,'boundaryMode') or ($attributeName='magnificationFilter') or ($attributeName='minificationFilter') or ($attributeName='textureCompression'))) or
                            ($parentElementName='WorldInfo'                  and $attributeName='title') or
			    ($parentElementName='X3D'                        and (($attributeName='profile') or ($attributeName='version') or ($attributeName='noNamespaceSchemaLocation'))) or
                            ($parentElementName='XvlShell'                   and $attributeName='shellType')">
			  <xsl:text>SFString</xsl:text>
		  </xsl:when>
		  <!-- Statements: xs:integer as SFInt32 - TODO schema/spec change? -->
		  <!-- SFInt32 -->
		  <xsl:when test="($localFieldType='SFInt32')           or 
					      ($parentElementName='HAnimHumanoid'              and $attributeName='loa') or
                          (($parentElementName='component')                and $attributeName='level')">
			  <xsl:text>SFInt32</xsl:text>
		  </xsl:when>
		  <!-- SFDouble -->
		  <xsl:when test="($localFieldType='SFDouble')          or 
                          ($parentElementName='unit'      and $attributeName='conversionFactor')">
			  <xsl:text>SFDouble</xsl:text>
		  </xsl:when>
		  <!-- X3D statements (i.e. not nodes): SFString according to Object Model for X3D (OM4X3D), not xs:string (including X3D version attribute) -->
		  <xsl:when test="($parentElementName='X3D')     or ($parentElementName='ROUTE')   or ($parentElementName='meta')    or
					      ($parentElementName='EXPORT')  or ($parentElementName='IMPORT')  or ($parentElementName='connect')">
			  <!-- includes X3D version. field/fieldValue type logic handled separately -->
			  <xsl:text>SFString</xsl:text> 
		  </xsl:when>
		  <!-- MFString (some are also enumerations) -->
		  <xsl:when test="
					($localFieldType='MFString')   or 
                    ($attributeName='url') or contains($attributeName,'Url') or
					($attributeName='forceOutput') or
					($attributeName='objectType')  or
					($parentElementName='Anchor' and $attributeName='parameter') or
					($parentElementName='CollisionCollection' and $attributeName='appliedParameters') or
					($parentElementName='Contact' and $attributeName='appliedParameters') or
					(ends-with($parentElementName,'FontStyle') and ($attributeName='family' or $attributeName='justify')) or
					(starts-with($parentElementName,'Geo') and ($attributeName='geoSystem')) or
					($parentElementName='GeoMetadata' and $attributeName='summary') or
					($parentElementName='GeoViewpoint' and contains($attributeName,'navType')) or
					($parentElementName='HAnimHumanoid' and $attributeName='info') or
					($parentElementName='Layout' and ($attributeName='align' or $attributeName='offsetUnits' or $attributeName='scaleMode' or $attributeName='sizeUnits')) or
					($parentElementName='MetadataString' and $attributeName='value') or
					($parentElementName='MultiTexture' and ($attributeName='function' or $attributeName='mode' or $attributeName='source')) or
					($parentElementName='NavigationInfo' and ($attributeName='type' or $attributeName='transitionType')) or
					($parentElementName='Text' and $attributeName='string') or
					($parentElementName='UniversalJoint' and $attributeName='forceOutput') or
					($parentElementName='WorldInfo' and $attributeName='info')">
			  <xsl:text>MFString</xsl:text>
		  </xsl:when>
		  <!-- SFBool -->
		  <xsl:when test="
					($localFieldType='SFBool')  or 
                    ($attributeName='activate') or
                    ($attributeName='bboxDisplay') or
					($attributeName='ccw')      or
					($attributeName='closed')   or
					($attributeName='convex')   or
					($attributeName='colorPerVertex') or
					($attributeName='enabled')  or
					($attributeName='dopplerEnabled')  or
					($attributeName='enableHRTF')  or
					($attributeName='global')   or
					($attributeName='normalPerVertex') or
					($attributeName='on')       or
					($attributeName='load')     or
					($attributeName='loop')     or
					($attributeName='next')     or
					($attributeName='previous') or
					($attributeName='normalizeVelocity') or
					($attributeName='rtpHeaderExpected') or
					($attributeName='shadows') or
					($attributeName='solid') or
					($attributeName='uClosed') or ($attributeName='vClosed') or
					($attributeName='viewAll') or
					($attributeName='visible') or
					($parentElementName='AudioClip' and $attributeName='loop') or
					($parentElementName='BooleanToggle' and $attributeName='toggle') or
					($parentElementName='Collision' and $attributeName='enabled') or
					($parentElementName='CollisionSpace' and $attributeName='useGeometry') or
					($parentElementName='Cone' and ($attributeName='side' or $attributeName='bottom')) or
					($parentElementName='Cylinder' and ($attributeName='side' or $attributeName='bottom' or $attributeName='top')) or
					($parentElementName='CylinderSensor' and $attributeName='autoOffset') or
					($parentElementName='EspduTransform' and ($attributeName='fired1' or $attributeName='fired2')) or
					($parentElementName='Extrusion' and ($attributeName='beginCap' or $attributeName='endCap')) or
					($parentElementName='FillProperties' and ($attributeName='filled' or $attributeName='hatched')) or
					(ends-with($parentElementName,'FontStyle') and ($attributeName='horizontal' or $attributeName='leftToRight' or $attributeName='topToBottom')) or
					($parentElementName='GeoInline' and $attributeName='load') or
					($parentElementName='GeoOrigin' and $attributeName='rotateYUp') or
					($parentElementName='GeoViewpoint' and $attributeName='headlight') or
					($parentElementName='ImageTexture' and ($attributeName='repeatS' or $attributeName='repeatT')) or
					(contains($parentElementName,'Texture3D') and starts-with($attributeName,'repeat')) or
					($parentElementName='Inline' and ($attributeName='load')) or
					(ends-with($parentElementName,'Layer') and ($attributeName='isPickable')) or
					($parentElementName='LineProperties' and ($attributeName='applied')) or
					($parentElementName='ListenerPointSource' and $attributeName='trackCurrentView')  or
					($parentElementName='LOD' and ($attributeName='forceTransitions')) or
					($parentElementName='MotorJoint' and $attributeName='autoCalc') or
					($parentElementName='MovieTexture' and ($attributeName='repeatS' or $attributeName='repeatT' or $attributeName='loop')) or
					($parentElementName='NurbsPatchSurface' and $attributeName='closedSurface') or
					($parentElementName='ParticleSystem' and $attributeName='createParticles') or
					($parentElementName='VolumeEmitter' and $attributeName='internal') or
					($parentElementName='PickableGroup' and $attributeName='pickable') or
					($parentElementName='PixelTexture' and ($attributeName='repeatS' or $attributeName='repeatT')) or
					($parentElementName='NavigationInfo' and $attributeName='headlight') or
					($parentElementName='PlaneSensor' and $attributeName='autoOffset') or
					($parentElementName='RigidBody' and ($attributeName='autoDamp' or $attributeName='autoDisable' or $attributeName='fixed' or $attributeName='useFiniteRotation' or $attributeName='useGlobalGravity')) or
					($parentElementName='RigidBodyCollection' and ($attributeName='autoDisable' or $attributeName='preferAccuracy')) or
					($parentElementName='SphereSensor' and $attributeName='autoOffset') or
					($parentElementName='StringSensor' and $attributeName='deletionAllowed') or
					($parentElementName='Script' and ($attributeName='directOutput' or $attributeName='mustEvaluate')) or
					($parentElementName='ShadedVolumeStyle' and ($attributeName='lighting' or $attributeName='shadows')) or
					($parentElementName='Sound' and $attributeName='spatialize') or
					($parentElementName='TextureProperties' and $attributeName='generateMipMaps') or
					($parentElementName='TimeSensor' and $attributeName='loop') or
					($parentElementName='TwoSidedMaterial' and $attributeName='separateBackColor') or
					(contains($parentElementName,'Viewpoint') and ($attributeName='jump' or $attributeName='retainUserOffsets' or $attributeName='displayed')) or
					($parentElementName='VolumeEmitter' and $attributeName='internal')">
			  <xsl:text>SFBool</xsl:text>
		  </xsl:when>
		  <!-- MFBool -->
		  <xsl:when test="
					($localFieldType='MFBool')  or 
                    (contains($parentElementName,'BooleanSequencer') and $attributeName='keyValue') or
					($parentElementName='CADLayer'                   and ($attributeName='visible') and starts-with(//X3D/@version,'3')) or
					($parentElementName='HAnimHumanoid'              and $attributeName='motionsEnabled') or
					($parentElementName='HAnimMotion'                and $attributeName='channelsEnabled') or
					($parentElementName='MetadataBoolean'            and $attributeName='value') or
					($parentElementName='SegmentedVolumeData'        and $attributeName='segmentEnabled') or
					($parentElementName='XvlShell'                   and ($attributeName='faceEmpty' or $attributeName='faceHidden'))">
			  <xsl:text>MFBool</xsl:text>
		  </xsl:when>
		  <!-- SFColor -->
		  <xsl:when test="
					($localFieldType='SFColor')  or 
                    ($parentElementName='CartoonVolumeStyle' and ($attributeName='orthogonalColor' or $attributeName='parallelColor')) or
					($parentElementName='ColorChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ColorDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					(contains($parentElementName,'Light') and $attributeName='color') or
					($parentElementName='FillProperties' and ($attributeName='hatchColor')) or
					(contains($parentElementName,'Fog') and $attributeName='color') or
					(ends-with($parentElementName,'Material') and contains($attributeName,'Color')) or
					($parentElementName='MultiTexture' and $attributeName='color')">
			  <xsl:text>SFColor</xsl:text>
		  </xsl:when>
		  <!-- SFColorRGBA -->
		  <xsl:when test="
					($localFieldType='SFColorRGBA')  or 
                    ($parentElementName='EdgeEnhancementVolumeStyle' and $attributeName='edgeColor') or
					($parentElementName='TextureProperties' and $attributeName='borderColor') or
					($parentElementName='ToneMappedVolumeStyle' and ($attributeName='coolColor' or $attributeName='warmColor'))">
			  <xsl:text>SFColorRGBA</xsl:text>
		  </xsl:when>
		  <!-- MFColor -->
		  <xsl:when test="
					($localFieldType='MFColor')  or 
                    ($parentElementName='Color' and $attributeName='color') or
					($parentElementName='ColorInterpolator' and $attributeName='keyValue') or
					(ends-with($parentElementName,'Background') and ($attributeName='groundColor' or $attributeName='skyColor'))">
			  <xsl:text>MFColor</xsl:text>
		  </xsl:when>
		  <!-- MFColorRGBA -->
		  <xsl:when test="
					($localFieldType='MFColorRGBA')  or 
                    ($parentElementName='ColorRGBA' and $attributeName='color')">
			  <xsl:text>MFColorRGBA</xsl:text>
		  </xsl:when>
		  <!-- SFImage -->
		  <xsl:when test="
					($localFieldType='SFImage')  or 
                    ($parentElementName='PixelTexture' and $attributeName='image')">
			  <xsl:text>SFImage</xsl:text>
		  </xsl:when>
		  <!-- no MFImage attributes -->
		  <!-- SFDouble --> <!-- precedes SFFloat since some fields are different than usual -->
		  <xsl:when test="
					($localFieldType='SFDouble')  or 
                    ($parentElementName='GeoElevationGrid' and (($attributeName='creaseAngle') or ($attributeName='xSpacing') or ($attributeName='zSpacing')))">
			  <xsl:text>SFDouble</xsl:text>
		  </xsl:when>
		  <!-- MFDouble -->
		  <xsl:when test="
					($localFieldType='MFDouble')  or 
                    ($parentElementName='GeoElevationGrid'   and $attributeName='height') or
					($parentElementName='MetadataDouble'     and $attributeName='value')  or
					(starts-with($parentElementName,'Nurbs') and (($attributeName='knot') or ($attributeName='weight') or contains($attributeName,'Knot')))">
			  <xsl:text>MFDouble</xsl:text>
		  </xsl:when>
		  <!-- SFFloat -->
		  <xsl:when test="
					($localFieldType='SFFloat')  or 
                                        ($attributeName='absorption')       or
                                        ($attributeName='ambientIntensity') or
					($attributeName='attack')           or
                                        ($attributeName='coneInnerAngle')   or ($attributeName='coneOuterAngle')  or ($attributeName='coneOuterGain')    or
					($attributeName='creaseAngle')      or
					($attributeName='detune')           or
                                        ($attributeName='diffuse')          or
					($attributeName='farDistance')      or ($attributeName='nearDistance')    or
					($attributeName='frequency')        or
					($attributeName='gain')             or
					($attributeName='intensity')        or
					($attributeName='interauralDistance') or
					($attributeName='knee')             or
					($attributeName='maxDistance')      or
					($attributeName='minDecibels')      or ($attributeName='maxDecibels')     or
                                        starts-with($attributeName,'pointSize') or
					($attributeName='priority')         or
					($attributeName='qualityFactor')    or
                                        ($attributeName='radius')           or ($attributeName='innerRadius') or ($attributeName='outerRadius') or
					($attributeName='ratio')            or
					($attributeName='referenceDistance') or
                                        ($attributeName='refraction')       or
                                        ($attributeName='rolloffFactor')    or
					($attributeName='shadowIntensity')  or
					($attributeName='smoothingTimeConstant')  or
                                        ($attributeName='specular')         or
                                        ($attributeName='startAngle')       or ($attributeName='endAngle') or
					($attributeName='threshold')        or
                                        ($attributeName='tolerance')        or
					($attributeName='transparency')     or
					(starts-with($parentElementName,'Arc') and (contains($attributeName,'Angle') or $attributeName='radius')) or
					($parentElementName='AcousticProperties' and ($attributeName='absorption' or $attributeName='diffuse' or $attributeName='refraction' or $attributeName='specular')) or
					($parentElementName='Appearance'       and $attributeName='alphaCutoff') or
					($parentElementName='AudioClip' and $attributeName='pitch') or
					($parentElementName='BlendedVolumeStyle' and starts-with($attributeName,'weightConstant')) or
					($parentElementName='BoundaryEnhancementVolumeStyle' and (($attributeName='boundaryOpacity') or ($attributeName='opacityFactor') or ($attributeName='retainedOpacity'))) or
					($parentElementName='Circle2D' and $attributeName='radius') or
					($parentElementName='CollisionCollection' and ($attributeName='bounce' or $attributeName='minBounceSpeed' or $attributeName='softnessConstantForceMix' or $attributeName='softnessErrorCorrection')) or
					($parentElementName='Cone' and ($attributeName='bottomRadius' or $attributeName='height')) or
					($parentElementName='Contact' and ($attributeName='bounce' or $attributeName='depth' or $attributeName='minBounceSpeed' or $attributeName='softnessConstantForceMix' or $attributeName='softnessErrorCorrection')) or
					($parentElementName='Cylinder' and ($attributeName='radius' or $attributeName='height')) or
					($parentElementName='CylinderSensor' and ($attributeName='diskAngle' or $attributeName='maxAngle' or $attributeName='minAngle' or $attributeName='offset')) or
					($parentElementName='Disk2D' and contains($attributeName,'Radius')) or
					($parentElementName='DoubleAxisHingeJoint' and (starts-with($attributeName,'desiredAngularVelocity') or starts-with($attributeName,'max') or $attributeName='minAngle1' or starts-with($attributeName,'stop') or starts-with($attributeName,'suspension'))) or
					($parentElementName='EdgeEnhancementVolumeStyle' and $attributeName='gradientThreshold') or
					(contains($parentElementName,'ElevationGrid') and ($attributeName='xSpacing' or $attributeName='zSpacing')) or
					(ends-with($parentElementName,'Emitter') and ($attributeName='angle' or $attributeName='speed' or $attributeName='variation' or $attributeName='mass' or $attributeName='surfaceArea')) or
					($parentElementName='EspduTransform' and $attributeName='firingRange') or
					(ends-with($parentElementName,'Fog') and $attributeName='visibilityRange') or
					($parentElementName='FontStyle' and ($attributeName='size' or $attributeName='spacing')) or
					($parentElementName='GeoElevationGrid' and $attributeName='yScale') or
					($parentElementName='GeoLOD' and $attributeName='range') or
					($parentElementName='GeoViewpoint' and $attributeName='speedFactor') or
					($parentElementName='HAnimDisplacer' and $attributeName='weight') or
					($parentElementName='HAnimSegment' and $attributeName='mass') or
					($parentElementName='IsoSurfaceVolumeData' and ($attributeName='contourStepSize' or $attributeName='surfaceTolerance')) or
					($parentElementName='LineProperties'       and ($attributeName='linewidthScaleFactor')) or
					(ends-with($parentElementName,'Material')  and ($attributeName='ambientIntensity' or $attributeName='metallic' or $attributeName='normalScale' or $attributeName='occlusionStrength' or $attributeName='roughness' or $attributeName='shininess' or $attributeName='transparency')) or
					($parentElementName='ParticleSystem'       and ($attributeName='lifetimeVariation' or $attributeName='particleLifetime')) or
					($parentElementName='TwoSidedMaterial'     and ($attributeName='backAmbientIntensity' or $attributeName='backShininess' or $attributeName='backTransparency')) or
					($parentElementName='MotorJoint'           and (starts-with($attributeName,'axis') or starts-with($attributeName,'stop'))) or
					($parentElementName='MovieTexture'         and ($attributeName='pitch' or $attributeName='speed')) or
					($parentElementName='MultiTexture'         and $attributeName='alpha') or
					($parentElementName='NavigationInfo'       and ($attributeName='speed' or $attributeName='visibilityLimit' or $attributeName='transitionTime')) or
					($parentElementName='NurbsSet' and $attributeName='tessellationScale') or
					($parentElementName='PointLight' and $attributeName='radius') or
					($parentElementName='ProjectionVolumeStyle' and $attributeName='intensityThreshold') or
					($parentElementName='ReceiverPdu' and $attributeName='receivedPower') or
					($parentElementName='RigidBody' and ($attributeName='angularDampingFactor' or starts-with($attributeName,'disable') or $attributeName='linearDampingFactor' or $attributeName='mass')) or
					($parentElementName='RigidBodyCollection' and ($attributeName='constantForceMix' or $attributeName='contactSurfaceThickness' or starts-with($attributeName,'disable') or $attributeName='errorCorrection' or $attributeName='maxCorrectionSpeed')) or
					($parentElementName='ScalarChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ScalarDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ScreenFontStyle' and ($attributeName='pointSize' or $attributeName='spacing')) or
					($parentElementName='SilhouetteEnhancementVolumeStyle' and starts-with($attributeName,'silhouette')) or
					($parentElementName='SingleAxisHingeJoint' and ($attributeName='maxAngle' or $attributeName='minAngle' or $attributeName='stopBounce' or $attributeName='stopErrorCorrection')) or
					($parentElementName='SliderJoint' and ($attributeName='maxSeparation' or $attributeName='minSeparation' or $attributeName='sliderForce' or $attributeName='stopBounce' or $attributeName='stopErrorCorrection')) or
					($parentElementName='Sound' and ($attributeName='maxBack' or $attributeName='minBack' or $attributeName='maxFront' or $attributeName='minFront' or $attributeName='priority')) or
					($parentElementName='SpatialSound' and ($attributeName='coneInnerAngle' or $attributeName='coneOuterAngle' or $attributeName='coneOuterGain' or $attributeName='maxDistance' or $attributeName='priority' or $attributeName='referenceDistance' or $attributeName='rolloffFactor')) or
					($parentElementName='Sphere' and $attributeName='radius') or
					($parentElementName='SpotLight' and ($attributeName='radius' or $attributeName='cutOffAngle' or $attributeName='beamWidth')) or
					($parentElementName='Text' and $attributeName='maxExtent') or
					($parentElementName='TextureProperties' and ($attributeName='anisotropicDegree' or $attributeName='texturePriority')) or
					(starts-with($parentElementName,'TextureProjector') and ($attributeName='farDistance' or $attributeName='nearDistance')) or
                                        ($parentElementName='TextureTransform' and $attributeName='rotation') or
					($parentElementName='TransmitterPdu' and ($attributeName='power' or $attributeName='transmitFrequencyBandwidth')) or
					($parentElementName='UniversalJoint' and starts-with($attributeName,'stop')) or
					(($parentElementName='Viewpoint' or $parentElementName='GeoViewpoint' or $parentElementName='TextureProjector') and $attributeName='fieldOfView') or
					($parentElementName='WindPhysicsModel'    and ($attributeName='gustiness' or $attributeName='speed' or $attributeName='turbulence'))">
			  <xsl:text>SFFloat</xsl:text>
		  </xsl:when>
		  <!-- MFFloat -->
		  <xsl:when test="
					($localFieldType='MFFloat')  or 
					($attributeName='key')       or
					(contains($parentElementName,'ElevationGrid') and $attributeName='height') or
					(contains($parentElementName,'LOD') and $attributeName='range') or
					(ends-with($parentElementName,'Background') and ($attributeName='groundAngle' or $attributeName='skyAngle')) or
					($parentElementName='EnvironmentLight' and $attributeName='diffuseCoefficients') or
					($parentElementName='EspduTransform' and $attributeName='articulationParameterArray') or
					($parentElementName='FloatVertexAttribute' and $attributeName='value') or
					($parentElementName='FogCoordinate' and $attributeName='depth') or
					($parentElementName='HAnimSisplacer' and $attributeName='weight') or
					($parentElementName='HAnimJoint' and ($attributeName='llimit' or $attributeName='ulimit' or $attributeName='skinCoordWeight' or $attributeName='stiffness')) or
					($parentElementName='HAnimMotion' and $attributeName='values') or
					($parentElementName='HAnimSegment' and $attributeName='momentsOfInertia') or
					($parentElementName='IsoSurfaceVolumeData' and $attributeName='surfaceValues') or
					($parentElementName='Layout' and ($attributeName='offset' or $attributeName='size')) or
					($parentElementName='MetadataFloat' and $attributeName='value') or
					($parentElementName='NavigationInfo' and $attributeName='avatarSize') or
					($parentElementName='NurbsTextureCoordinate' and $attributeName='weight') or
					($parentElementName='ParticleSystem' and ($attributeName='colorKey' or $attributeName='texCoordKey')) or
					($parentElementName='ScalarInterpolator' and $attributeName='keyValue') or
					($parentElementName='SplineScalarInterpolator' and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
					($parentElementName='Text' and $attributeName='length') or
					($parentElementName='TextureCoordinateGenerator' and $attributeName='parameter') or
					($parentElementName='Viewport' and $attributeName='clipBoundary') or
					($parentElementName='XvlShell' and ($attributeName='vertexRound' or $attributeName='edgeRound'))">
			  <xsl:text>MFFloat</xsl:text>
		  </xsl:when>
		  <!-- SFTime -->
		  <xsl:when test="
                    ($localFieldType='SFTime')          or 
                    contains($attributeName,'Time')     or
                    contains($attributeName,'Duration') or
                    ($attributeName='cycleTime')      or
                    ($attributeName='pauseTime')      or
                    ($attributeName='resumeTime')     or
                    ($attributeName='startTime')      or
                    ($attributeName='stopTime')       or
                    ($attributeName='duration')       or
                    ($attributeName='elapsedTime')    or
                    ($attributeName='autoRefresh')    or
                    ($attributeName='autoRefreshTimeLimit') or
                    ($attributeName='tau')            or
                    ($attributeName='timestamp')      or
                    ($attributeName='readInterval')   or
                    ($attributeName='writeInterval')  or
                    ($parentElementName='LoadSensor'     and $attributeName='timeOut')  or
                    ($parentElementName='AudioClip'      and ends-with($attributeName,'Time'))  or
                    ($parentElementName='EspduTransform' and ends-with($attributeName,'Time'))  or
                    ($parentElementName='HAnimMotion'    and $attributeName='frameDuration') or
                    ($parentElementName='MovieTexture'   and ends-with($attributeName,'Time')) or
                    ($parentElementName='TimeSensor')"> 
                    <!-- TimeSensor loop & enabled are caught by SFBool tests, all other TimeSensor fields are SFTime -->
			  <xsl:text>SFTime</xsl:text>
		  </xsl:when>
		  <!-- no MFTime -->
		  <!-- SFVec2f -->
		  <xsl:when test="
					($localFieldType='SFVec2f')  or 
                    ($parentElementName='CollisionCollection' and ($attributeName='frictionCoefficients' or $attributeName='slipFactors' or $attributeName='surfaceSpeed')) or
					($parentElementName='Contact' and ($attributeName='frictionCoefficients' or $attributeName='slipCoefficients' or $attributeName='surfaceSpeed')) or
					($parentElementName='ParticleSystem' and $attributeName='particleSize') or
					($parentElementName='PlaneSensor' and ($attributeName='maxPosition' or $attributeName='minPosition')) or
					($parentElementName='PositionChaser2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='PositionDamper2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='Rectangle2D' and ($attributeName='size')) or
					($parentElementName='TextureTransform' and ($attributeName='center' or $attributeName='scale' or $attributeName='translation'))">
			  <xsl:text>SFVec2f</xsl:text>
		  </xsl:when>
		  <!-- MFVec2f -->
		  <xsl:when test="
					($localFieldType='MFVec2f')  or 
                    ($parentElementName='EaseInEaseOut' and $attributeName='easeInEaseOut') or
					($parentElementName='Extrusion' and ($attributeName='crossSection' or $attributeName='scale')) or
					(($parentElementName='CoordinateInterpolator2D' or $parentElementName='PositionInterpolator2D') and $attributeName='keyValue') or
					(($parentElementName='ContourPolyline2D' or $parentElementName='Polypoint2D' or $parentElementName='TextureCoordinate') and $attributeName='point') or
					(($parentElementName='NurbsCurve2D' or $parentElementName='NurbsTextureSurface') and $attributeName='controlPoint') or
					(($parentElementName='Polyline2D') and $attributeName='lineSegments') or
					(($parentElementName='SplinePositionInterpolator2D') and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
					($parentElementName='TexCoordChaser2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='TexCoordDamper2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					(($parentElementName='TriangleSet2D') and $attributeName='vertices')">
			  <xsl:text>MFVec2f</xsl:text>
		  </xsl:when>
		  <!-- SFVec3d -->
		  <xsl:when test="
					($localFieldType='SFVec3d')  or 
                    ($attributeName='geoCenter') or
					($attributeName='geoCoords') or
					($parentElementName='GeoElevationGrid'   and $attributeName='geoGridOrigin') or
					($parentElementName='GeoLOD'             and $attributeName='center') or
					($parentElementName='GeoProximitySensor' and $attributeName='center') or
					($parentElementName='GeoViewpoint'       and ($attributeName='centerOfRotation' or $attributeName='position'))">
			  <xsl:text>MFVec2f</xsl:text>
		  </xsl:when>
		  <!-- MFVec3d -->
		  <xsl:when test="
					($localFieldType='MFVec3d')  or 
                    ($parentElementName='ContourPolyline2D'       and $attributeName='controlPoint') or
					($parentElementName='CoordinateDouble'        and $attributeName='point') or
					($parentElementName='GeoCoordinate'           and $attributeName='point') or
					($parentElementName='GeoPositionInterpolator' and $attributeName='keyValue') or
					($parentElementName='GeoViewpoint'            and contains($attributeName,'position'))">
			  <xsl:text>MFVec3d</xsl:text>
		  </xsl:when>
		  <!-- SFVec3f -->
		  <!-- note TextureTransform tests must precede these default checks -->
		  <xsl:when test="
					($localFieldType='SFVec3f')    or 
                    ($attributeName='anchorPoint') or
					($attributeName='bboxCenter')  or
					($attributeName='bboxSize')    or
					($attributeName='center')      or
					($attributeName='scale')       or
					($attributeName='translation') or
					($parentElementName='Billboard' and $attributeName='axisOfRotation') or
					($parentElementName='Box' and $attributeName='size') or
					(ends-with($parentElementName,'Emitter') and ($attributeName='direction' or $attributeName='position')) or
					($parentElementName='Contact' and ($attributeName='contactNormal' or $attributeName='frictionDirection' or $attributeName='position')) or
					($parentElementName='DirectionalLight' and $attributeName='direction') or
					($parentElementName='DoubleAxisHingeJoint' and ($attributeName='axis1' or $attributeName='axis2')) or
					($parentElementName='EspduTransform' and (ends-with($attributeName,'Location') or $attributeName='linearVelocity' or $attributeName='linearAcceleration' or ends-with($attributeName,'Point'))) or
					($parentElementName='ForcePhysicsModel' and $attributeName='force') or
					($parentElementName='GeoProximitySensor' and $attributeName='size') or
					(starts-with($parentElementName,'HAnim') and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
					($parentElementName='HAnimSegment' and $attributeName='centerOfMass') or
					(contains($parentElementName,'LOD') and $attributeName='center') or
					($parentElementName='MotorJoint' and ($attributeName='motor1Axis' or $attributeName='motor2Axis' or $attributeName='motor3Axis')) or
					($parentElementName='PlaneSensor' and $attributeName='offset') or
					($parentElementName='PositionChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='PositionDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ProximitySensor' and ($attributeName='center' or $attributeName='size')) or
					($parentElementName='PointLight' and ($attributeName='attenuation' or $attributeName='location')) or
					($parentElementName='RigidBody' and ($attributeName='angularVelocity' or $attributeName='centerOfMass' or $attributeName='finiteRotationAxis' or $attributeName='linearVelocity' or $attributeName='position')) or
					($parentElementName='RigidBodyCollection' and ($attributeName='gravity')) or
					($parentElementName='SingleAxisHingeJoint' and ($attributeName='axis')) or
					($parentElementName='SliderJoint' and ($attributeName='axis')) or
					($parentElementName='Sound' and ($attributeName='direction' or $attributeName='location')) or
					($parentElementName='SpotLight' and ($attributeName='attenuation' or $attributeName='direction' or $attributeName='location')) or
					(starts-with($parentElementName,'TextureProjector') and ($attributeName='direction' or $attributeName='location')) or
					($parentElementName='Transform' and ($attributeName='center' or $attributeName='scale' or $attributeName='translation')) or
					($parentElementName='TransformSensor' and ($attributeName='size')) or
					($parentElementName='TransmitterPdu' and (ends-with($attributeName,'Location'))) or
					($parentElementName='UniversalJoint' and ($attributeName='axis1' or $attributeName='axis2')) or
					(($parentElementName='Viewpoint' or $parentElementName='OrthoViewpoint') and ($attributeName='position' or $attributeName='centerOfRotation')) or
					($parentElementName='ViewpointGroup'   and $attributeName='size') or
					($parentElementName='VisibilitySensor' and $attributeName='size') or
					(contains($parentElementName,'VolumeData') and $attributeName='dimensions') or
					($parentElementName='WindPhysicsModel' and $attributeName='direction')">
			  <xsl:text>SFVec3f</xsl:text>
		  </xsl:when>
		  <!-- MFVec3f -->
		  <xsl:when test="
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='CoordinateChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='CoordinateDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='CoordinateInterpolator'     and $attributeName='keyValue') or
                    ($parentElementName='HAnimHumanoid'              and $attributeName='jointBindingPositions') or
                    ($parentElementName='HAnimHumanoid'              and $attributeName='jointBindingScales') or
					($parentElementName='NormalInterpolator'         and $attributeName='keyValue') or
					($parentElementName='PositionInterpolator'       and $attributeName='keyValue') or
					($parentElementName='SplinePositionInterpolator' and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
					(contains($parentElementName,'Coordinate') and $attributeName='point') or
					($parentElementName='Extrusion' and $attributeName='spine') or
					($parentElementName='Normal' and $attributeName='vector') or
					($parentElementName='HAnimDisplacer' and $attributeName='displacements') or
					($parentElementName='XvlShell' and ($attributeName='edgeBeginVector' or $attributeName='edgeEndVector'))">
			  <xsl:text>MFVec3f</xsl:text>
		  </xsl:when>
		  <!-- SFVec4f -->
		  <xsl:when test="
					($localFieldType='SFVec4f')    or 
                    ($parentElementName='ClipPlane' and $attributeName='plane') or 
                    ($parentElementName='OrthoViewpoint' and $attributeName='fieldOfView') or 
                    ($parentElementName='TextureProjectorParallel' and $attributeName='fieldOfView')">
			  <xsl:text>SFVec4f</xsl:text>
		  </xsl:when>
		  <!-- SFRotation -->
		  <!-- note TextureTransform tests must precede these default checks -->
		  <xsl:when test="
					($localFieldType='SFRotation')    or 
                    ($attributeName='rotation') or
					($attributeName='scaleOrientation') or
					(($parentElementName='CylinderSensor' or $parentElementName='PlaneSensor') and $attributeName='axisRotation') or
					($parentElementName='OrientationChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='OrientationDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='RigidBody' and $attributeName='orientation') or
					($parentElementName='SphereSensor' and $attributeName='offset') or
					($parentElementName='Transform' and ($attributeName='rotation' or $attributeName='scaleOrientation')) or
					(contains($parentElementName,'Viewpoint') and $attributeName='orientation') or
					($parentElementName='HAnimJoint' and ($attributeName='limitOrientation' or $attributeName='rotation' or $attributeName='scaleOrientation')) or
					($parentElementName='HAnimSite' and ($attributeName='rotation' or $attributeName='scaleOrientation'))">
			  <xsl:text>SFRotation</xsl:text>
		  </xsl:when>
		  <!-- MFRotation -->
		  <xsl:when test="
					($localFieldType='MFRotation')    or 
                    ($parentElementName='Extrusion' and $attributeName='orientation') or
					($parentElementName='HAnimHumanoid'              and $attributeName='jointBindingRotations') or
					(ends-with($parentElementName,'OrientationInterpolator') and $attributeName='keyValue')">
			  <xsl:text>MFRotation</xsl:text>
		  </xsl:when>
		  <!-- SFMatrix3f -->
		  <xsl:when test="
					($localFieldType='SFMatrix3f')    or 
                    ($parentElementName='RigidBody' and $attributeName='inertia')">
			  <xsl:text>SFMatrix3f</xsl:text>
		  </xsl:when>
		  <!-- MFMatrix3f -->
		  <xsl:when test="
					($localFieldType='MFMatrix3f')    or 
                    ($parentElementName='Matrix3VertexAttribute' and $attributeName='value')">
			  <xsl:text>MFMatrix3f</xsl:text>
		  </xsl:when>
		  <!-- SFMatrix4f -->
		  <xsl:when test="
					($localFieldType='SFMatrix4f')    or 
                    ($parentElementName='TextureTransformMatrix3D' and $attributeName='matrix')">
			  <xsl:text>SFMatrix4f</xsl:text>
		  </xsl:when>
		  <!-- MFMatrix4f -->
		  <xsl:when test="
					($localFieldType='MFMatrix4f')    or 
                    ($parentElementName='Matrix4VertexAttribute' and $attributeName='value')">
			  <xsl:text>MFMatrix4f</xsl:text>
		  </xsl:when>
		  <!-- MFInt32 --> <!-- must precede MFInt32 -->
		  <xsl:when test="
					($localFieldType='MFInt32')    or 
                    ($attributeName='colorIndex') or
					($attributeName='coordIndex') or
					($attributeName='normalIndex') or
					($attributeName='texCoordIndex') or
					($attributeName='faceCoordIndex') or
					($attributeName='faceTexCoordIndex') or
					($attributeName='edgeBeginCoordIndex') or
					($attributeName='edgeEndCoordIndex') or
					($attributeName='fanCount') or
					($attributeName='stripCount') or
					($parentElementName='ContourPolyline2D' and $attributeName='index') or
					($parentElementName='EspduTransform' and starts-with($attributeName,'articulationParameter') and ends-with($attributeName,'Array')) or
					($parentElementName='HAnimJoint' and $attributeName='skinCoordIndex') or
					(starts-with($parentElementName,'IndexedTriangle') and $attributeName='index') or
					($parentElementName='IndexedQuadSet'               and $attributeName='index') or
					($parentElementName='IntegerSequencer' and $attributeName='keyValue') or
					($parentElementName='LayerSet' and ($attributeName='order')) or
					($parentElementName='LineSet' and $attributeName='vertexCount') or
					($parentElementName='MetadataInteger' and $attributeName='value') or
					($parentElementName='PixelTexture3D'  and $attributeName='image') or
					($parentElementName='SignalPdu' and $attributeName='data')">
			  <xsl:text>MFInt32</xsl:text>
		  </xsl:when>
		  <!-- SFInt32 --> <!-- Note that other DIS attibutes must get tested before this, including MFInt32 -->
		  <xsl:when test="
                    ($localFieldType='SFInt32')    or 
                     ends-with($attributeName,'ID')             or
                    ($attributeName='farClippingPlane')         or
                    ($attributeName='nearClippingPlane')        or
                    ($attributeName='order')                    or
					($attributeName='channelSelection')         or
					($attributeName='uOrder')                   or
					($attributeName='vOrder')                   or
					($attributeName='uDimension')               or
					($attributeName='vDimension')               or
					($parentElementName='DISEntityManager')     or
					($parentElementName='DISEntityTypeMapping') or
					($parentElementName='EspduTransform')       or
					($parentElementName='SignalPdu')            or
					($parentElementName='ReceiverPdu')          or
					($parentElementName='TransmitterPdu')       or
					($parentElementName='CartoonVolumeStyle' and $attributeName='colorSteps') or
					($parentElementName='IntegerTrigger' and $attributeName='integerKey') or
					(contains($parentElementName,'ElevationGrid') and ($attributeName='xDimension' or $attributeName='zDimension')) or
					($parentElementName='FillProperties' and ($attributeName='hatchStyle')) or
					($parentElementName='FloatVertexAttribute' and $attributeName='numComponents') or
					($parentElementName='GeneratedCubeMapTexture' and $attributeName='size') or
					(starts-with($parentElementName,'HAnim') and $attributeName='loa') or
                    ($parentElementName='HAnimMotion' and (($attributeName='frameCount') or ($attributeName='frameIncrement') or ($attributeName='frameIndex') or ($attributeName='startFrame') or ($attributeName='endFrame'))) or
                    ($parentElementName='IntegerTrigger' and $attributeName='integerKey') or
					($parentElementName='LayerSet' and ($attributeName='activeLayer')) or
					($parentElementName='LineProperties' and ($attributeName='linetype')) or
					($parentElementName='MotorJoint' and $attributeName='enabledAxe') or
					($parentElementName='ParticleSystem' and $attributeName='maxParticles') or
					($parentElementName='RigidBodyCollection' and $attributeName='iterations') or
					($parentElementName='Switch' and $attributeName='whichChoice') or
					($parentElementName='TextureProperties' and $attributeName='borderWidth') or
					(starts-with($parentElementName,'Nurbs') and ($attributeName='order' or $attributeName='tessellation' or $attributeName='uTessellation' or $attributeName='vTessellation' or $attributeName='uTessellation' or $attributeName='dimension' or $attributeName='UDimension' or $attributeName='vDimension')) or
					($parentElementName='XvlShell' and $attributeName='numberOfDivisions')">
			  <xsl:text>SFInt32</xsl:text>
		  </xsl:when>
		  <xsl:otherwise>
			  <xsl:choose>
				<xsl:when test="($parentElementName='field')">
					<xsl:value-of select="$localFieldType"/>
				</xsl:when>
				<!-- Other statement values require special handling, do not warn here -->
				<xsl:when test="($parentElementName='field')          or ($parentElementName='fieldValue') or contains($parentElementName,'Proto') or
                                ($parentElementName='meta')">
					<xsl:text></xsl:text>
				</xsl:when>
				<xsl:when test="preceding::*[(local-name() = $parentElementName) and (starts-with($parentElementName,'Xvl'))]">
					<!-- avoid repetitious warnings, no message.  TODO fix, test is not trapping properly. -->
					<xsl:text></xsl:text>
				</xsl:when>
				<xsl:otherwise>
					<xsl:text></xsl:text>
					<xsl:message>
						  <xsl:text>Warning: X3dToJson.xslt attribute type not found for </xsl:text>
						  <xsl:value-of select="$parentElementName"/>
						  <xsl:text> </xsl:text>
						  <xsl:value-of select="$attributeName"/>
					</xsl:message>
				</xsl:otherwise>
			  </xsl:choose>
		  </xsl:otherwise>
		</xsl:choose>

    </xsl:template>
</xsl:stylesheet>
