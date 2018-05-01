<?xml version="1.0" encoding="UTF-8"?>
<!--
Copyright (c) 2001-2018 held by the author(s).  All rights reserved.

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
      (http://www.nps.edu and http://www.MovesInstitute.org)
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
   <meta name="title"       content="X3dToXhtml.xslt" />
   <meta name="creator"     content="Don Brutzman" />
   <meta name="created"     content=" 1 January 2001" />
   <meta name="description" content="XSLT stylesheet to convert X3D source into an easily readable XHTML documentation page.
                            This version applies color and style using Cascading Style Sheet (CSS) markup via HTML span, div tags." />
   <meta name="url"         content="http://www.web3d.org/x3d/stylesheets/X3dToXhtml.xslt" />
  </head>

Recommended tools:
- X3D-Edit, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
- XML Spy http://www.xmlspy.com
-->

<!--	xmlns:fo="http://www.w3.org/1999/XSL/Format"	-->
<!--	xmlns:saxon="http://icl.com/saxon" saxon:trace="true"	-->


<xsl:stylesheet version="2.0"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns="http://www.w3.org/TR/xhtml1/strict"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#" 
                xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
    <!--        xmlns:fn="http://www.w3.org/2005/xpath-functions" -->
    <!-- <xsl:import href="X3dExtrusionToSvgViaXslt1.1.xslt"/> -->
    <!-- default parameter values can be overridden when invoking this stylesheet -->
    <xsl:param name="linkImages"><xsl:text>false</xsl:text></xsl:param>
    <!-- $baseUrlAvailable false means that stylesheet is being used by servlet or else styled results won't be in original directory -->
    <xsl:param name="baseUrlAvailable"><xsl:text>true</xsl:text></xsl:param>
    <!-- turn off links to SVG figures if stylesheet unavailable -->
    <xsl:param name="produceSVGfigures"><xsl:text>true</xsl:text></xsl:param>

    <xsl:strip-space elements="*"/>
    <xsl:output encoding="UTF-8" media-type="text/html" indent="yes" cdata-section-elements="Script PackagedShader ShaderPart ShaderProgram" omit-xml-declaration="no" method="xml"/>
        
    <!-- HAnimHumanoid visualization report parameters, matching BVH to X3D importer configuration in X3D-Edit -->
    <xsl:variable name="rootColor"              >0.8 0 0</xsl:variable>
    <xsl:variable name="jointColor"             >0 0 0.8</xsl:variable>
    <xsl:variable name="segmentColor"           >1 1 0</xsl:variable>
    <xsl:variable name="segmentColorRGBA"       >1 1 0 1, 1 1 0 0.1</xsl:variable>
    <xsl:variable name="siteColor"              >1 1 0</xsl:variable>
    <xsl:variable name="siteColorRGBA"          >1 1 0 1, 1 1 0 0.1</xsl:variable>
    <xsl:variable name="siteViewpointColor"     >1 1 0</xsl:variable>
    <xsl:variable name="siteViewpointColorRGBA" >1 1 0 1, 1 1 0 0.1</xsl:variable>

    <xsl:variable name="rootColor.HTML"         >#CC0000</xsl:variable>
    <xsl:variable name="jointColor.HTML"        >#0000CC</xsl:variable>
    <xsl:variable name="segmentColor.HTML"      >#DDDD00</xsl:variable><!-- slightly darker for html page contrast -->
    <xsl:variable name="siteColor.HTML"         >#DDDD00</xsl:variable><!-- slightly darker for html page contrast -->
    <xsl:variable name="siteViewpointColor.HTML">#DDDD00</xsl:variable><!-- slightly darker for html page contrast -->
	
	<xsl:variable name="hanimHumanoidInternalScale">
		<xsl:choose>
			<xsl:when test="(string-length(normalize-space(//HAnimHumanoid/HAnimJoint[1]/@scale)) > 0)">
				<xsl:value-of select="substring-before(normalize-space(//HAnimHumanoid/HAnimJoint[1]/@scale),' ')"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>1</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:variable>

	<xsl:variable name="apos">'</xsl:variable>
	<xsl:variable name="quot">"</xsl:variable>

    <!-- start - - - - - - - - - - - - - - - - - - - - - - - -->
    <xsl:template match="/">

        <!-- line break after XML header line -->
        <xsl:text>&#10;</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
]]></xsl:text>
        <!--	<html xmlns="http://www.w3.org/1999/xhtml">
		<xsl:element name="html">
			<xsl:attribute name="xmlns">http://www.w3.org/1999/xhtml</xsl:attribute>
	  -->
        <html>
            <head>
                <title>
                    <!-- Note that the name of the input file is not available/inspectable, and so the name must be extracted from the document itself.  This is OK for X3D files, since we have have such metadata conventions in the X3D Scene Authoring Hints.  If no name information was embedded, and the stylesheet were to be invoked by an external application, then the invoking application might be able to pass the input filename as a parameter to the stylesheet.-->
                    <xsl:variable name="fileName" select="//head/meta[@name='title']/@content"/>
                    <xsl:choose>
                        <xsl:when test="$fileName!='*enter FileNameWithNoAbbreviations.x3d here*' ">
                            <xsl:value-of select="$fileName"/>
                            <xsl:text> (X3dToXhtml listing)</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>(X3dToXhtml listing)</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                </title>
                <xsl:comment> I18N </xsl:comment><xsl:text>&#10;</xsl:text>
                <meta http-equiv="X-UA-Compatible" content="chrome=1,IE=edge"/>
                <meta http-equiv="Content-Type" content="text/html;charset=UTF-8"/>
                <!-- first put generic XML constructs, then X3D & specialized constructs -->
                <style type="text/css"><![CDATA[
span.element {color: navy}
span.attribute {color: green}
span.value {color: teal}
span.plain {color: black}
span.gray  {color: gray}
span.idName {color: maroon}
span.addedDocumentation {background-color:#EEEEEE} // slightly darker for html page contrast
span.behaviorNode       {background-color:#DDEEFF} // light blue for html page contrast
span.extensibilityNode  {background-color:#FFEEFF} // light blue for html page contrast
a.idName {color: maroon}
div.center {text-align: center}
div.indent {margin-left: 25px}

span.prototype {color: purple}
a.prototype {color: purple}
a.prototype:visited {color: black}
span.route {color: red}
b.warning {color: #CC5500}
b.error {color: #CC0000}
]]>
                </style>
<!-- http://www.quackit.com/html/codes/tables/html_table_border.cfm -->
<style type="text/css">
table.curvedEdges { border:10px solid RoyalBlue;-webkit-border-radius:13px;-moz-border-radius:13px;-ms-border-radius:13px;-o-border-radius:13px;border-radius:13px; }
table.curvedEdges td, table.curvedEdges th { border-bottom:1px dotted black;padding:5px; }
</style>
<!--
span.X3D       {title: 'X3D is the top-most XML element for an Extensible 3D (X3D) Graphics file';}
span.head      {title: 'head can contain component, unit, and author-defined metadata (meta) tags';}
span.component {title: 'component indicates needed scene functionality above the given X3D profile';}
span.unit      {title: 'unit defines scene scaling factors for length, angle, mass or force";}
-->

                <meta name="generator" content="XSLT processor {system-property('xsl:vendor')}"/>
                <meta name="generator" content="http://www.web3d.org/x3d/stylesheets/X3dToXhtml.xslt"/>
                <meta name="generator" content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToXhtml.xslt"/>
                <link rel="shortcut icon" href="http://www.web3d.org/x3d/content/icons/X3DtextIcon16.png" title="X3D" />
            </head>
            <body>
                <xsl:choose>
                    <xsl:when test="//X3D/@version='3.0'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.0//EN&quot; &quot;<a href="http://www.web3d.org/specifications/x3d-3.0.dtd">http://www.web3d.org/specifications/x3d-3.0.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;http://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='3.1'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.1//EN&quot; &quot;<a href="http://www.web3d.org/specifications/x3d-3.1.dtd">http://www.web3d.org/specifications/x3d-3.1.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;http://www.web3d.org/specifications/x3d-3.1.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.1.dtd&quot;&gt;
-->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='3.2'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.2//EN&quot; &quot;<a href="http://www.web3d.org/specifications/x3d-3.2.dtd">http://www.web3d.org/specifications/x3d-3.2.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- no transitional DOCTYPE for v3.2 -->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='3.3'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.3//EN&quot; &quot;<a href="http://www.web3d.org/specifications/x3d-3.3.dtd">http://www.web3d.org/specifications/x3d-3.3.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- no transitional DOCTYPE for v3.3 -->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='4.0'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 4.0//EN&quot; &quot;<a href="http://www.web3d.org/specifications/x3d-3.3.dtd">http://www.web3d.org/specifications/x3d-4.0.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- no transitional DOCTYPE for v4.0 -->
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:message>No recognized X3D version found, using recommended DOCTYPE v3.3</xsl:message>
                        <xsl:comment>No recognized X3D version found, using recommended DOCTYPE v3.3</xsl:comment>
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.3//EN&quot; &quot;<a href="http://www.web3d.org/specifications/x3d-3.3.dtd">http://www.web3d.org/specifications/x3d-3.3.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;http://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
                    </xsl:otherwise>
                </xsl:choose>

                <div>
                    <xsl:apply-templates select="* | comment()" />
                </div>
                
                <!-- HAnimHumanoid reports, wrapped by hidden (white) XML comment delimiters in case HTML is copied/pasted -->
                <xsl:if test="//HAnimHumanoid[string-length(@name) > 0]">
                    <span style="text-align:center; background-color:white">
                        <xsl:text>&#10;</xsl:text>
                        <span style="color:white">&lt;!--</span>
                        <xsl:text>&#10;</xsl:text>
                    </span>
                    <xsl:for-each select="//HAnimHumanoid[string-length(@name) > 0]">
                        <!-- prepare bookmark -->
                        <xsl:variable name="hAnimHumanoidID">
                            <xsl:value-of select="@name"/>
                            <xsl:text>HAnimHumanoidReport</xsl:text>
                        </xsl:variable>
                        <h3>
                            <!-- add bookmark -->
                            <xsl:element name="a">
                                <xsl:attribute name="name">
                                    <xsl:value-of select="$hAnimHumanoidID"/>
                                </xsl:attribute>
                                <xsl:text>Visualization report for HAnimHumanoid model </xsl:text>
                                <a href="#{@DEF}" class="idName">
                                    <xsl:value-of select="@DEF"/>
                                </a>
                            </xsl:element>
                        </h3>
                        <p>
                            Key to author-assist additions inserted in the HAnimHumanoid skeleton:
                            <ul>
                                <li><!-- background-color:lightgrey; -->
                                    <span style='color:{$rootColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;alt:visualization color {$rootColor};'>HumanoidRoot</span><xsl:text disable-output-escaping="yes"> &amp;#160; </xsl:text> <!-- &nbsp; -->
                                    <span class="gray">Suggested Shape geometry for HAnimHumanoid</span>
                                </li>
                                <li>
                                    <span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;alt:visualization color {$jointColor};'>HAnimJoint</span><xsl:text disable-output-escaping="yes"> &amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160; </xsl:text> <!-- &nbsp; -->
                                    <span class="gray">Suggested Shape geometry additions are provided to illustrate each HAnimJoint</span>
                                </li>
                                <li>
                                    <span style='color:{$segmentColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;alt:visualization color {$segmentColor};'>HAnimSegment</span><xsl:text disable-output-escaping="yes"> &amp;#160;</xsl:text>
                                    <span class="gray">Suggested IndexedLineSet connections illustrate each HAnimSegment</span>
                                </li>
                                <li>
                                    <span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;alt:visualization color {$siteColor};'>HAnimSite</span><xsl:text disable-output-escaping="yes"> &amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160; </xsl:text>
                                    <span class="gray">Suggested IndexedLineSet and Shape geometry additions illustrate each HAnimSite</span>
                                </li>
                                <li>
                                    <span class='color:{$siteViewpointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;alt:visualization color {$siteViewpointColor};'>Viewpoint</span><xsl:text disable-output-escaping="yes"> &amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160;&amp;#160; </xsl:text>
                                    <span class="gray">Suggested Shape geometry additions illustrate each HAnimSite/Viewpoint combinations</span>
                                </li>
                            </ul>
                        </p>

                        <table cellpadding="3" align="center" bgcolor="#F8F8F8" class="curvedEdges">
                            <tbody>
                                <tr>
                                    <td colspan="2">
                                        <xsl:text>&lt;</xsl:text>
                                        <span class="element">
                                            <xsl:text>HAnimHumanoid</xsl:text>
                                        </span>
                                        <xsl:text> </xsl:text>
                                        <span class="attribute">DEF</span>
                                        <xsl:text>='</xsl:text>
                                        <a href="#{@DEF}" class="idName">
                                            <xsl:value-of select="@DEF"/>
                                        </a>
                                        <xsl:text>' </xsl:text>
                                        <span class="attribute">name</span>
                                        <xsl:text>='</xsl:text>
                                            <span class="value">
                                                <xsl:value-of select="@name"/>
                                            </span>
                                        <xsl:text>' </xsl:text>
                                        <xsl:if test="string-length(@version) > 0">
                                            <span class="attribute">version</span>
                                            <xsl:text> ='</xsl:text>
                                            <span class="value">
                                                <xsl:value-of select="@version"/>
                                            </span>
                                            <xsl:text>' </xsl:text>
                                        </xsl:if>
                                        <xsl:text>&#10;</xsl:text>
                                    </td>
                                </tr>
                                <tr>
                                    <td valign="top" align="right" width="80px">
                                        <span class="attribute">info</span>
                                        <xsl:text>='</xsl:text>
                                        <xsl:text>&#10;</xsl:text>
                                    </td>
                                    <td>
                                        <span class="value">
                                            <xsl:call-template name="URL-ize-MFString-elements">
                                                <xsl:with-param name="list" select="normalize-space(@info)"/>
                                                <xsl:with-param name="urlsOnly">
                                                    <xsl:text>false</xsl:text>
                                                </xsl:with-param>
                                                <xsl:with-param name="insertBreaks">
                                                    <xsl:text>true</xsl:text>
                                                </xsl:with-param>
                                            </xsl:call-template>
                                        </span>
                                        <xsl:text> '</xsl:text>
                                        <xsl:text>&gt;</xsl:text>
                                        <xsl:text>&#10;</xsl:text>
                                    </td>
                                </tr>
                                <tr>
                                    <td colspan="2">
                                        <xsl:for-each select="HAnimJoint[string-length(@name) > 0]">
                                            <xsl:call-template name="HAnimNode-indent"/>
                                        </xsl:for-each>
										<!-- HAnimSite containerField='viewpoints' (not USE nodes) -->
                                        <xsl:for-each select="HAnimSite[string-length(@name) > 0]">
                                            <xsl:apply-templates select="preceding-sibling::comment()"/>
                                            <xsl:call-template name="HAnimNode-indent"/>
                                        </xsl:for-each>
										<xsl:if test="not(HAnimSite[string-length(@name) > 0])">
											<xsl:apply-templates select="preceding-sibling::comment()"/>
										</xsl:if>
                                    </td>
                                </tr>
								<!-- 
                                <xsl:if test="HAnimSite[string-length(@name) > 0][(@containerField = 'viewpoints')]">
									< ! - - includes USE geometry, must follow prior generation of geometry under HAnimJoint tree - - >
                                    <tr>
                                        <td colspan="2">
                                            < ! - - <xsl:text>&lt;! - - Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation - -&gt;</xsl:text> - - >
                                            <br />
                                            <xsl:for-each select="HAnimSite[string-length(@name) > 0][(@containerField = 'viewpoints')]">
                                                < ! - - http://p2p.wrox.com/xslt/70832-preceding-sibling-comment.html - - >
                                                <xsl:apply-templates select="preceding-sibling::node()[1][self::comment()]"/>
                                                <xsl:call-template name="HAnimNode-indent"/>
                                            </xsl:for-each>
                                        </td>
                                    </tr>
                                </xsl:if>
								-->
                                <xsl:if test="*[string-length(@USE) > 0]">
                                    <tr>
                                        <td colspan="2">
                                            <!-- <xsl:text>&lt;! - - USE nodes go here for access by inverse kinematics (IK) engines and other tools - -&gt;</xsl:text> -->
                                            <br />
                                            <xsl:for-each select="*[string-length(@USE) > 0]">
                                                <!-- http://p2p.wrox.com/xslt/70832-preceding-sibling-comment.html -->
                                                <xsl:if test="preceding-sibling::node()[1][self::comment()]">
                                                    <xsl:apply-templates select="preceding-sibling::node()[1][self::comment()]"/>
                                                    <br />
                                                </xsl:if>
                                                <xsl:apply-templates select="."/>
                                                <br />
                                            </xsl:for-each>
                                        </td>
                                    </tr>
                                </xsl:if>
                                <tr>
                                    <td colspan="2">
                                        <!-- close out entering HAnimHumanoid element -->
                                        <br />
                                        <xsl:text>&#10;</xsl:text>
                                        <!-- closing element -->
                                        <xsl:text>&lt;/</xsl:text>
                                        <span class="element">
                                            <xsl:text>HAnimHumanoid</xsl:text>
                                        </span>
                                        <xsl:text>&gt;</xsl:text>
                                        <xsl:text>&#10;</xsl:text>
                                    </td>
                                </tr>
                            </tbody>                    
                        </table>
                    </xsl:for-each>
                    <!-- end of HAnimHumanoid reports -->
                    
                    <p style="text-align:center; background-color:white">
                        <xsl:text>&#10;</xsl:text>
                        <span style="color:white">--></span>
                        <xsl:text>&#10;</xsl:text>
                    </p>
                </xsl:if>

                <!-- build color key as XML comment -->
                <p style="text-align:center;">
                    <xsl:text>&#10;</xsl:text>
                    <span style="color:white">&lt;!--</span>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>Color key: </xsl:text>
                    <xsl:comment>(matching X3D and XML terminology) </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    
                    <xsl:text>&lt;</xsl:text>
                    <span class="element">
                        <xsl:text>X3dNode</xsl:text>
                    </span>
                    <xsl:if test="//*[@DEF]">
                        <span class="idName">
                            <xsl:text> DEF</xsl:text>
                        </span>
                        <xsl:text>='</xsl:text>
                        <span class="idName">
                            <xsl:text>idName</xsl:text>
                        </span>
                        <xsl:text>'</xsl:text>
                    </xsl:if>
                    <xsl:text> </xsl:text>
                    <span class="attribute">
                        <xsl:text>field</xsl:text>
                    </span>
                    <xsl:text>='</xsl:text>
                    <span class="value">
                        <xsl:text>value</xsl:text>
                    </span>
                    <xsl:text>'/&gt; </xsl:text>
                    <xsl:text>&#10;</xsl:text>

                    <xsl:text> matches </xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    
                    <xsl:text>&lt;</xsl:text>
                    <span class="element">
                        <xsl:text>XmlElement</xsl:text>
                    </span>
                    <xsl:if test="//*[@DEF]">
                        <span class="idName">
                            <xsl:text> DEF</xsl:text>
                        </span>
                        <xsl:text>='</xsl:text>
                        <span class="idName">
                            <xsl:text>idName</xsl:text>
                        </span>
                        <xsl:text>'</xsl:text>
                    </xsl:if>
                    <xsl:text> </xsl:text>
                    <span class="attribute">
                        <xsl:text>attribute</xsl:text>
                    </span>
                    <xsl:text>='</xsl:text>
                    <span class="value">
                        <xsl:text>value</xsl:text>
                    </span>
                    <xsl:text>'/&gt; </xsl:text>
                    <br />
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;span title="behavior node" style="background-color:#DDEEFF;"&gt;(Light blue background: behavior node)&lt;/span&gt;</xsl:text>
                    <xsl:text> </xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;span title="inserted documentation about ROUTE connections" style="background-color:#EEEEEE;"&gt;(Grey background: inserted documentation)&lt;/span&gt;</xsl:text>
                    <xsl:text> </xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;span title="X3D Extensibility" style="background-color:#FFEEFF;"&gt;(Magenta background: X3D Extensibility)&lt;/span&gt;</xsl:text>
                    <br />
                    <xsl:text>&#10;</xsl:text>
                    
                    <!-- done with node key, begin Prototype key -->
                    <xsl:if test="//*[contains(local-name(),'Proto')]">
                        <xsl:text disable-output-escaping="yes">&amp;#160;&amp;#160;&amp;#160;</xsl:text> <!-- &nbsp; -->
                        <xsl:text>&#10;&lt;</xsl:text>
                        <span class="prototype">
                            <xsl:text>Prototype</xsl:text>
                        </span>
                        <xsl:text> </xsl:text>
                        <span class="attribute">
                            <xsl:text>name</xsl:text>
                        </span>
                        <xsl:text>='</xsl:text>
                        <span class="prototype">
                            <xsl:text>ProtoName</xsl:text>
                        </span>
                        <xsl:text>'&gt;</xsl:text>
                        <xsl:text>&#10;	&lt;</xsl:text>
                        <span class="prototype">
                            <xsl:text>field</xsl:text>
                        </span>
                        <span class="attribute">
                            <xsl:text>name</xsl:text>
                        </span>
                        <xsl:text>='</xsl:text>
                        <span class="prototype">
                            <xsl:text>fieldName</xsl:text>
                        </span>
                        <xsl:text>'/&gt;</xsl:text>
                        <xsl:text> &lt;/</xsl:text>
                        <span class="prototype">
                            <xsl:text>Prototype</xsl:text>
                        </span>
                        <xsl:text>&gt;</xsl:text>
                    </xsl:if>
                    <xsl:text>&#10;</xsl:text>
                    <span style="color:white"> --&gt;</span>
                    <xsl:text>&#10;</xsl:text>
                </p>
                
                <p style="text-align:center; background-color:white">
                    <xsl:text>&#10;</xsl:text>
                    <span style="color:white">&lt;!--</span>
                    <xsl:text>&#10;</xsl:text>
                    Additional help information about X3D scenes:  
                    <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" title="Numerous resources that support X3D graphics">X3D Resources</a>,
                    <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" title="Style guidelines, authoring tips and best practices">X3D Scene Authoring Hints</a>
                    and
                    <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" title="Summary descriptions and authoring hints for each X3D node (element) and field (attribute)">X3D Tooltips</a>
                    <xsl:text>&#10;</xsl:text>
                    <span style="color:white">--&gt;</span>
                    <xsl:text>&#10;</xsl:text>
                </p>
            </body>
            <!-- </xsl:element> </html> -->
        </html>                 

        <!-- finally build Extrusion crossSection SVG figures, if appropriate
        <xsl:if test="($produceSVGfigures = 'true')">
            <xsl:call-template name="produce-SVG-figures">
                <! - -	<xsl:with-param name="list" select="."/> - - >
            </xsl:call-template>
        </xsl:if> -->
        
    </xsl:template>

    <!-- ****** HAnimNode-indent:  callable template (recursive function) ****** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="HAnimNode-indent">
		<!-- debug
		<xsl:message>
			<xsl:text>$hanimHumanoidInternalScale=</xsl:text>
			<xsl:value-of select="$hanimHumanoidInternalScale"/>
		</xsl:message> -->
        <ul>
            <li>
                <xsl:text>&lt;</xsl:text>
                <span class="element">
                    <xsl:value-of select="local-name()"/>
                </span>
                <xsl:text> </xsl:text>
                <span class="attribute">DEF</span>
                <xsl:text>='</xsl:text>
                <a href="#{@DEF}" class="idName">
                    <xsl:value-of select="@DEF"/>
                </a>
                <xsl:text>' </xsl:text>
                <span class="attribute">name</span>
                <xsl:text>='</xsl:text>
                    <span class="value">
                        <xsl:value-of select="@name"/>
                    </span>
                <xsl:text>' </xsl:text>
                <xsl:if test="(string-length(@center) > 0) and not(@center='0 0 0')">
                    <span class="attribute">center</span>
                    <xsl:text> ='</xsl:text>
                    <span class="value">
                        <xsl:value-of select="@center"/>
                    </span>
                    <xsl:text>' </xsl:text>
                </xsl:if>
                <xsl:if test="(string-length(@containerField) > 0) and (@containerField != 'children')">
                    <span class="attribute">containerField</span>
                    <xsl:text> ='</xsl:text>
                    <span class="value">
                        <xsl:value-of select="@containerField"/>
                    </span>
                    <xsl:text>' </xsl:text>
                </xsl:if>
                <!-- HAnimSite additional attributes -->
                <xsl:if test="count(@*[(local-name()!='DEF') and (local-name()!='name') and (local-name()!='center') and (local-name()!='containerField')]) > 0">
                    <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='name') and (local-name()!='center') and (local-name()!='containerField')]"/>
                </xsl:if>
                <xsl:text>&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                
                <!-- special case:  top-level HAnimSite/Viewpoint, show Viewpoint and visualization geometry -->
                <xsl:if test="(local-name(..)='HAnimHumanoid') and (local-name()='HAnimSite') and (Viewpoint)">
                    <!-- insert suggested geometry -->
                    <xsl:call-template name="Site-NodeVisualization"/>
                    <xsl:call-template name="SiteViewpoint-NodeVisualization"/>
                    <!-- closing element -->
                    <xsl:text>&lt;/</xsl:text>
                    <span class="element">
                        <xsl:value-of select="local-name()"/>
                    </span>
                    <xsl:text>&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                
                <!-- Design pattern note: HAnimJoint children can only be [HAnimJoint,HAnimSegment,HAnimSite] and so the HAnimJoint visualization is embedded in child HAnimSegment -->
                        
                <!-- comments, HAnimJoint*/HAnimSegment -->
                <xsl:if test="comment()">
                    <!-- side effect: pushed to top among siblings -->
					<br />
                    <xsl:apply-templates select="comment()" />
                </xsl:if>
				
				<!-- TODO avoid creating a second HAnimSegment -->
                <xsl:if test="HAnimSegment">
                    <ul>
                        <xsl:for-each select="HAnimSegment">
                            <li>
                                <xsl:text>&lt;</xsl:text>
                                <span class="element">
                                    <xsl:text>HAnimSegment</xsl:text>
                                </span>
                                <xsl:text> </xsl:text>
                                <span class="attribute">DEF</span>
                                <xsl:text>='</xsl:text>
                                <a href="#{@DEF}" class="idName">
                                    <xsl:value-of select="@DEF"/>
                                </a>
                                <xsl:text>' </xsl:text>
                                <span class="attribute">name</span>
                                <xsl:text>='</xsl:text>
                                    <span class="value">
                                        <xsl:value-of select="@name"/>
                                    </span>
                                <xsl:text>'</xsl:text>
                                <xsl:text>&gt;</xsl:text>
                
                                <!-- tooltip for HAnimJoint visualization (embedded in HAnimSegment) -->
                                <xsl:variable name="HanimJointTooltip">
                                    <xsl:value-of select="local-name(..)"/>
                                    <xsl:text> </xsl:text>
                                    <xsl:value-of select="../@name"/>
                                        <xsl:text>, </xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text> </xsl:text>
                                    <xsl:value-of select="@name"/>
                                </xsl:variable>
                                
								<code><span class="gray">
                                    <ul>
                                        <!-- If no geometry found, insert suggested HAnimJointShape -->
										<xsl:choose>
											<xsl:when test="(parent::HAnimJoint[@name='HumanoidRoot']) and (@name = 'sacrum') and not(//Shape[@DEF='HAnimRootShape'])">
												<!-- only provide visualization shapes if not already available, sacrum should already be provided -->
												<span class="gray">
													<li>
														&lt;!-- Visualization root shape and hidden DEF geometry for later use --&gt;
													</li>
													<li>
														&lt;Viewpoint description='View from (0 0 4) towards HAnimHumanoid center' position='0 0 4'/&gt;
																</li>
																<li>
														&lt;Switch whichChoice='0'&gt;
																	<ul>
																		<li>
															&lt;Group&gt;
																		<ul>
																			<li>
																&lt;TouchSensor description='HAnimHumanoid HAnimSegment HumanoidRoot'/&gt;
																			</li>
																			<li>
																&lt;Shape DEF='<span style='color:{$rootColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimRootShape</span>'&gt;
																	&lt;Sphere DEF='HAnimJointSphere'/&gt;
																	&lt;Appearance&gt;
																		&lt;Material DEF='HAnimRootMaterial' <span style='color:{$rootColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>diffuseColor='<xsl:value-of select="$rootColor"/>'</span> transparency='0.3'/&gt;
																	&lt;/Appearance&gt;
																&lt;/Shape&gt;
																			</li>
																		</ul>
															&lt;/Group&gt;
																		</li>
																		<li>
															&lt;Shape DEF='<span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimJointShape</span>'&gt;
																&lt;Sphere USE='HAnimJointSphere'/&gt;
																&lt;Appearance&gt;
																	&lt;Material DEF='HAnimJointMaterial' <span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>diffuseColor='<xsl:value-of select="$jointColor"/>'</span> transparency='0.3'/&gt;
																&lt;/Appearance&gt;
															&lt;/Shape&gt;
																		</li>
																		<li>
															&lt;Shape&gt;
																&lt;LineSet vertexCount='2'&gt;
																	&lt;!-- transparency indicates parent/child relationship of line segment --&gt;
																	&lt;ColorRGBA DEF='<span style='color:{$segmentColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSegmentLineColorRGBA' color='<xsl:value-of select="$segmentColor"/> 1 <xsl:value-of select="$segmentColor"/> 0.1'</span>/&gt;
																	&lt;Coordinate point='0 0 0 0 0 0'/&gt;
																&lt;/LineSet&gt;
															&lt;/Shape&gt;
																		</li>
																		<li>
															&lt;Shape DEF='<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteShape</span>'&gt;
																&lt;IndexedFaceSet DEF='DiamondIFS' colorIndex='0 0 0 0 0 0 0 0' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1' creaseAngle='0.5' solid='false'&gt;
																	&lt;ColorRGBA DEF='<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteColorRGBA' color='<xsl:value-of select="$siteColor"/> 1 <xsl:value-of select="$siteColor"/> 0.1'</span>/&gt;
																	&lt;Coordinate point='0 0.8 0 -0.8 0 0 0 0 0.8 0.8 0 0 0 0 -0.8 0 -0.8 0'/&gt;
																&lt;/IndexedFaceSet&gt;
																&lt;Appearance&gt;
																	&lt;Material <span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>diffuseColor='<xsl:value-of select="$siteColor"/>'</span> transparency='0.3'/&gt;
																&lt;/Appearance&gt;
															&lt;/Shape&gt;
																		</li>
																	</ul>
														&lt;/Switch&gt;
													</li>
												</span>
											</xsl:when>
											<xsl:when test="not(Transform/Shape)">
												<!-- draw Joint shape -->
												<li>
													&lt;!-- Visualization sphere for &lt;<xsl:value-of select="local-name(..)"/> name='<xsl:value-of select="../@name"/>'/&gt; is placed within &lt;<xsl:value-of select="local-name()"/> name='<xsl:value-of select="@name"/>'/&gt; --&gt;
													<br/>
													&lt;TouchSensor description='<xsl:value-of select="$HanimJointTooltip"/>'/&gt;
												</li>
												<li>
													&lt;Transform translation='<xsl:value-of select="../@center"/>'&gt;
														&lt;Shape USE='<span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimJointShape</span>'/&gt;
														<!-- DEF no longer needed since Shape predefined
														<xsl:choose>
															<xsl:when test="not(//*[@DEF='HAnimJointShape']) and (ancestor::HAnimHumanoid) and not(preceding::HAnimSegment)">
																&lt;Shape DEF='<span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimJointShape</span>'&gt;
																	&lt;Sphere radius='<xsl:value-of select="0.006 div number($hanimHumanoidInternalScale)"/>'/&gt; 
																	<xsl:choose>
																		<xsl:when test="not(//*[@DEF='HAnimJointAppearance']) and (position()=1) and (count(preceding::HAnimJoint) = 0)">
																	&lt;Appearance DEF='HAnimJointAppearance'&gt; &lt;Material <span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>diffuseColor='<xsl:value-of select="$jointColor"/>'</span> transparency='0.3'/&gt; &lt;/Appearance&gt;
																		</xsl:when>
																		<xsl:otherwise>
																	&lt;Appearance USE='<span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimJointAppearance'</span>/&gt;  
																		</xsl:otherwise>
																	</xsl:choose>
																&lt;/Shape&gt;
															</xsl:when>
															<xsl:otherwise>
														&lt;Shape USE='<span style='color:{$jointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimJointShape</span>'/&gt;
															</xsl:otherwise>
														</xsl:choose>
														-->
													&lt;/Transform&gt;
												</li>
											</xsl:when>
										</xsl:choose>
                                        <!-- Insert suggested LineSet visualization -->
                                        <xsl:if test="not(Shape/LineSet) and not(Shape/IndexedLineSet)">
                                            <!-- draw line segment from beginning to end of segment; note ILS is not pickable and will not show the tooltip -->
                                            	<xsl:variable name="addHAnimSegmentLineColorRGBAtoFirstSegment" select="not(//*[@DEF='HAnimSegmentLineColorRGBA']) and (ancestor::HAnimHumanoid) and not(preceding::HAnimSegment)"/>
                                                <!-- loop to draw line geometry from current Joint to its child joints, if any -->
                                                <xsl:for-each select="../HAnimJoint"><!-- HAnimJoint children of current HAnimJoint (which is parent of this HAnimSegment) -->
                                                    <li>
                                                        &lt;!-- HAnimSegment visualization line from current &lt;<xsl:value-of select="local-name(..)"/> name='<xsl:value-of select="../@name"/>'/&gt; to child &lt;<xsl:value-of select="local-name()"/> name='<xsl:value-of select="@name"/>'/&gt; --&gt;
                                                        <br/>
                                                        &lt;Shape&gt;
                                                                <!-- LineSet visualization -->
                                                                &lt;LineSet vertexCount='2'&gt;
                                                                    &lt;Coordinate point='<xsl:value-of select="../@center"/>, <xsl:value-of select="@center"/>'/&gt;
                                                                    <!-- Color for line geometry -->
                                                                    &lt;ColorRGBA USE='<span style='color:{$segmentColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSegmentLineColorRGBA</span>'/&gt;
                                                                    <!-- DEF no longer needed since ColorRGBA predefined
																	<xsl:choose>
                                                                        <xsl:when test="($addHAnimSegmentLineColorRGBAtoFirstSegment) and not(preceding::HAnimJoint)">
                                                                    < !- - use transparency to indicate parent/child of line segment - ->
                                                                    &lt;<span style='color:{$segmentColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>ColorRGBA DEF='HAnimSegmentLineColorRGBA' color='<xsl:value-of select="$segmentColorRGBA"/>'</span>/&gt;
                                                                        </xsl:when>
                                                                        <xsl:otherwise>
                                                                    &lt;ColorRGBA USE='<span style='color:{$segmentColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSegmentLineColorRGBA</span>'/&gt;
                                                                        </xsl:otherwise>
                                                                    </xsl:choose>
																	-->
                                                                &lt;/LineSet&gt;
                                                        &lt;/Shape&gt;
                                                    </li>
                                                </xsl:for-each>
                                                <!-- draw line geometry from parent Joint to peer sites, if any -->
                                                <xsl:for-each select="HAnimSite[not(Viewpoint)]"> <!-- no Viewpoint child -->
                                                    <li>
                                                        &lt;!-- HAnimSite visualization line segment from ancestor &lt;<xsl:value-of select="local-name(../..)"/> name='<xsl:value-of select="../../@name"/>'/&gt; to &lt;<xsl:value-of select="local-name()"/> name='<xsl:value-of select="@name"/>'/&gt; --&gt;
                                                        <br />
                                                        &lt;Shape&gt;
                                                                <!-- LineSet visualization -->
                                                                &lt;LineSet vertexCount='2'&gt;
                                                                    &lt;Coordinate point='<xsl:value-of select="../../@center"/>, <xsl:value-of select="@translation"/>'/&gt;
                                                                    <!-- Color for line geometry -->
                                                                    &lt;ColorRGBA USE='<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteColorRGBA</span>'/&gt;
                                                                    <!-- DEF no longer needed since ColorRGBA predefined
																	<xsl:choose>
                                                                        <xsl:when test="not(//*[@DEF='HAnimSiteLineColorRGBA']) and (ancestor::HAnimHumanoid) and not(preceding::HAnimSite)">
                                                                    < !- - use transparency to indicate parent/child of line segment - ->
                                                                    &lt;<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>ColorRGBA DEF='HAnimSiteColorRGBA' color='<xsl:value-of select="$siteColorRGBA"/>'</span>/&gt;
                                                                        </xsl:when>
                                                                        <xsl:otherwise>
                                                                    &lt;ColorRGBA USE='<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteColorRGBA</span>'/&gt;  
                                                                        </xsl:otherwise>
                                                                    </xsl:choose>
																	-->
                                                                &lt;/LineSet&gt;
                                                        &lt;/Shape&gt;
                                                    </li>
                                                </xsl:for-each>
                                                <xsl:for-each select="HAnimSite[Viewpoint]"> <!-- HAnimSite with Viewpoint child -->
                                                    <li>
                                                        &lt;!-- HAnimSite/Viewpoint visualization line segment from ancestor &lt;<xsl:value-of select="local-name(../..)"/> name='<xsl:value-of select="../../@name"/>'/&gt; to &lt;<xsl:value-of select="local-name()"/> name='<xsl:value-of select="@name"/>'/&gt; --&gt;
                                                        <br />
                                                        &lt;Shape&gt;
                                                                <!-- LineSet visualization -->
                                                                &lt;LineSet vertexCount='2'&gt;
                                                                    &lt;Coordinate point='<xsl:value-of select="../../@center"/>, <xsl:value-of select="@translation"/>'/&gt;
                                                                    <!-- Color for line geometry -->
                                                                    <xsl:choose>
                                                                        <xsl:when test="not(//*[@DEF='HAnimSiteViewpointLineColorRGBA']) and (position()=1) and (count(preceding::HAnimSite/Viewpoint) = 0)"> <!-- and ((local-name(..)='HAnimHumanoid') or (local-name(../../../..)='HAnimHumanoid'))  -->
                                                                    <!-- use transparency to indicate parent/child of line segment -->
                                                                    &lt;<span style='color:{$siteViewpointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>ColorRGBA DEF='HAnimSiteViewpointLineColorRGBA' color='<xsl:value-of select="$siteViewpointColorRGBA"/>'</span>/&gt;
                                                                        </xsl:when>
                                                                        <xsl:otherwise>
                                                                    &lt;ColorRGBA USE='<span style='color:{$siteViewpointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteViewpointLineColorRGBA</span>'/&gt;  
                                                                        </xsl:otherwise>
                                                                    </xsl:choose>
                                                                &lt;/LineSet&gt;
                                                        &lt;/Shape&gt;
                                                        <!-- TODO need to account for Viewpoint position, direction -->
                                                    </li>
                                                </xsl:for-each>
                                        </xsl:if>
                                    </ul>
                                </span></code>

                                <!-- HAnimJoint/Shape/HAnimSite/HAnimSite -->
                                <xsl:if test="Transform | Shape | HAnimSite | HAnimDisplacer">
                                    <ul>
                                        <xsl:for-each select="Transform">
											<!-- This Transform node might not hold a Shape but hold HAnimSite or HAnimDisplacer -->
                                            <li>
                                                <xsl:text>&lt;</xsl:text>
                                                <span class="element">
                                                    <xsl:text>Transform</xsl:text>
                                                </span>
                                                <xsl:text> </xsl:text>
                                                <span class="attribute">translation</span>
                                                <xsl:text>='</xsl:text>
                                                <span class="value">
                                                    <xsl:value-of select="@translation"/>
                                                </span>
                                                <xsl:text>'</xsl:text>
                                                <xsl:text>&gt; </xsl:text>
                                                <xsl:for-each select="Shape">
                                                    <xsl:text>&lt;</xsl:text>
                                                    <span class="element">
                                                        <xsl:text>Shape</xsl:text>
                                                    </span>
                                                    <xsl:choose>
                                                        <xsl:when test="string-length(@DEF) > 0">
                                                            <xsl:text> </xsl:text>
                                                            <span class="attribute">DEF</span>
                                                            <xsl:text>='</xsl:text>
                                                            <a href="#{Shape/@DEF}" class="idName">
                                                                <xsl:value-of select="Shape/@DEF"/>
                                                            </a>
                                                            <xsl:text>'</xsl:text>
                                                        </xsl:when>
                                                        <xsl:when test="string-length(@USE) > 0">
                                                            <xsl:text> </xsl:text>
                                                            <span class="attribute">USE</span>
                                                            <xsl:text>='</xsl:text>
                                                            <a href="#{Shape/@USE}" class="idName">
                                                                <xsl:value-of select="Shape/@USE"/>
                                                            </a>
                                                            <xsl:text>'</xsl:text>
                                                        </xsl:when>
                                                    </xsl:choose>
                                                    <xsl:if test="(string-length(@containerField) > 0) and (@containerField != 'children')">
                                                        <span class="attribute">containerField</span>
                                                        <xsl:text> ='</xsl:text>
                                                        <span class="value">
                                                            <xsl:value-of select="@containerField"/>
                                                        </span>
                                                        <xsl:text>' </xsl:text>
                                                    </xsl:if>
                                                    <xsl:text>/&gt; </xsl:text>
                                                </xsl:for-each>
                                                <xsl:for-each select="comment()">
                                                    <xsl:text>&lt;!-- </xsl:text>
                                                    <xsl:value-of select="."/>
                                                    <xsl:text>--&gt;</xsl:text>
                                                </xsl:for-each>
										<!-- TODO poor design, duplicated for-each loops within/alongside Transorm, should recurse instead -->
                                        <xsl:for-each select="HAnimSite"> <!-- no Viewpoint child [not(Viewpoint)]-->
                                            <li>
                                                <!--
                                                <xsl:text>&lt;!- - HAnimSite no Viewpoint child - -&gt;</xsl:text>
                                                <br />
                                                 -->
                                                <xsl:text>&lt;</xsl:text>
                                                <span class="element">
                                                    <xsl:text>HAnimSite</xsl:text>
                                                </span>
                                                <xsl:text> </xsl:text>
                                                <span class="attribute">DEF</span>
                                                <xsl:text>='</xsl:text>
                                                <a href="#{@DEF}" class="idName">
                                                    <xsl:value-of select="@DEF"/>
                                                </a>
                                                <xsl:text>' </xsl:text>
                                                <span class="attribute">name</span>
                                                <xsl:text>='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@name"/>
                                                    </span>
                                                <xsl:text>'</xsl:text>
                                                <xsl:text> </xsl:text>
                                                <span class="attribute">translation</span>
                                                <xsl:text>='</xsl:text>
                                                <span class="value">
                                                    <xsl:value-of select="@translation"/>
                                                </span>
                                                <xsl:text>'</xsl:text>
                                                <xsl:if test="(string-length(@containerField) > 0) and (@containerField != 'children')">
                                                    <span class="attribute">containerField</span>
                                                    <xsl:text> ='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@containerField"/>
                                                    </span>
                                                    <xsl:text>' </xsl:text>
                                                </xsl:if>
                                                <xsl:text>&gt;</xsl:text>
                                                
                                                <xsl:call-template name="Site-NodeVisualization"/>
                                                <xsl:choose>
                                                    <xsl:when test="not(Viewpoint)">
                                                        <xsl:apply-templates select="*" />
                                                        <!-- closing element -->
                                                        <xsl:text>&lt;/</xsl:text>
                                                        <span class="element">
                                                            <xsl:text>HAnimSite</xsl:text>
                                                        </span>
                                                        <xsl:text>&gt;</xsl:text>
                                                    </xsl:when>
                                                    <xsl:otherwise>
                                                        <!-- insert suggested geometry -->
                                                        <xsl:call-template name="SiteViewpoint-NodeVisualization"/>
                                                        <!-- closing element -->
                                                        <xsl:text>&lt;/</xsl:text>
                                                        <span class="element">
                                                            <xsl:value-of select="local-name()"/>
                                                        </span>
                                                        <xsl:text>&gt;</xsl:text>
                                                        <xsl:text>&#10;</xsl:text>
                                                    </xsl:otherwise>
                                                </xsl:choose>
                                            </li>
                                        </xsl:for-each>
                                        <xsl:for-each select="HAnimDisplacer">
                                            <li>
                                                <xsl:text>&lt;</xsl:text>
                                                <span class="element">
                                                    <xsl:text>HAnimDisplacer</xsl:text>
                                                </span>
                                                <xsl:text> </xsl:text>
                                                <span class="attribute">DEF</span>
                                                <xsl:text>='</xsl:text>
                                                <a href="#{@DEF}" class="idName">
                                                    <xsl:value-of select="@DEF"/>
                                                </a>
                                                <xsl:text>' </xsl:text>
                                                <span class="attribute">name</span>
                                                <xsl:text>='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@name"/>
                                                    </span>
                                                <xsl:text>'</xsl:text>
                                                <xsl:if test="(string-length(@containerField) > 0) and (@containerField != 'children')">
                                                    <span class="attribute">containerField</span>
                                                    <xsl:text> ='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@containerField"/>
                                                    </span>
                                                    <xsl:text>' </xsl:text>
                                                </xsl:if>
                                                <xsl:text>/&gt;</xsl:text>
                                            </li>
                                        </xsl:for-each>
                                                <!-- closing element -->
                                                <xsl:text>&lt;/</xsl:text>
                                                <span class="element">
                                                    <xsl:text>Transform</xsl:text>
                                                </span>
                                                <xsl:text>&gt;</xsl:text>
                                            </li>
                                        </xsl:for-each>
                                        <xsl:for-each select="Shape">
                                            <li>
                                                <xsl:apply-templates select=".">
                                                    <xsl:with-param name="lineBreaks">
                                                        <xsl:text>false</xsl:text>
                                                    </xsl:with-param>
                                                </xsl:apply-templates>
                                        <!--
                                            <xsl:text>&lt;</xsl:text>
                                            <span class="element">
                                                <xsl:text>Shape</xsl:text>
                                            </span>
                                            <xsl:choose>
                                                <xsl:when test="string-length(Shape/@DEF) > 0">
                                                    <xsl:text> </xsl:text>
                                                    <span class="attribute">DEF</span>
                                                    <xsl:text>='</xsl:text>
                                                    <a href="#{Shape/@DEF}" class="idName">
                                                        <xsl:value-of select="Shape/@DEF"/>
                                                    </a>
                                                    <xsl:text>'</xsl:text>
                                                </xsl:when>
                                                <xsl:when test="string-length(Shape/@USE) > 0">
                                                    <xsl:text> </xsl:text>
                                                    <span class="attribute">USE</span>
                                                    <xsl:text>='</xsl:text>
                                                    <a href="#{Shape/@USE}" class="idName">
                                                        <xsl:value-of select="Shape/@USE"/>
                                                    </a>
                                                    <xsl:text>'</xsl:text>
                                                </xsl:when>
                                            </xsl:choose>
                                            <xsl:text>/&gt; </xsl:text>
                                        -->
                                            </li>
                                        </xsl:for-each>
                                        <xsl:for-each select="HAnimSite"> <!-- no Viewpoint child [not(Viewpoint)]-->
                                            <li>
                                                <!--
                                                <xsl:text>&lt;!- - HAnimSite no Viewpoint child - -&gt;</xsl:text>
                                                <br />
                                                 -->
                                                <xsl:text>&lt;</xsl:text>
                                                <span class="element">
                                                    <xsl:text>HAnimSite</xsl:text>
                                                </span>
                                                <xsl:text> </xsl:text>
                                                <span class="attribute">DEF</span>
                                                <xsl:text>='</xsl:text>
                                                <a href="#{@DEF}" class="idName">
                                                    <xsl:value-of select="@DEF"/>
                                                </a>
                                                <xsl:text>' </xsl:text>
                                                <span class="attribute">name</span>
                                                <xsl:text>='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@name"/>
                                                    </span>
                                                <xsl:text>'</xsl:text>
                                                <xsl:text> </xsl:text>
                                                <span class="attribute">translation</span>
                                                <xsl:text>='</xsl:text>
                                                <span class="value">
                                                    <xsl:value-of select="@translation"/>
                                                </span>
                                                <xsl:text>'</xsl:text>
                                                <xsl:if test="(string-length(@containerField) > 0) and (@containerField != 'children')">
                                                    <span class="attribute">containerField</span>
                                                    <xsl:text> ='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@containerField"/>
                                                    </span>
                                                    <xsl:text>' </xsl:text>
                                                </xsl:if>
                                                <xsl:text>&gt;</xsl:text>
                                                
                                                <xsl:call-template name="Site-NodeVisualization"/>
                                                <xsl:choose>
                                                    <xsl:when test="not(Viewpoint)">
                                                        <xsl:apply-templates select="*" />
                                                        <!-- closing element -->
                                                        <xsl:text>&lt;/</xsl:text>
                                                        <span class="element">
                                                            <xsl:text>HAnimSite</xsl:text>
                                                        </span>
                                                        <xsl:text>&gt;</xsl:text>
                                                    </xsl:when>
                                                    <xsl:otherwise>
                                                        <!-- insert suggested geometry -->
                                                        <xsl:call-template name="SiteViewpoint-NodeVisualization"/>
                                                        <!-- closing element -->
                                                        <xsl:text>&lt;/</xsl:text>
                                                        <span class="element">
                                                            <xsl:value-of select="local-name()"/>
                                                        </span>
                                                        <xsl:text>&gt;</xsl:text>
                                                        <xsl:text>&#10;</xsl:text>
                                                    </xsl:otherwise>
                                                </xsl:choose>
                                            </li>
                                        </xsl:for-each>
                                        <xsl:for-each select="HAnimDisplacer">
                                            <li>
                                                <xsl:text>&lt;</xsl:text>
                                                <span class="element">
                                                    <xsl:text>HAnimDisplacer</xsl:text>
                                                </span>
                                                <xsl:text> </xsl:text>
                                                <span class="attribute">DEF</span>
                                                <xsl:text>='</xsl:text>
                                                <a href="#{@DEF}" class="idName">
                                                    <xsl:value-of select="@DEF"/>
                                                </a>
                                                <xsl:text>' </xsl:text>
                                                <span class="attribute">name</span>
                                                <xsl:text>='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@name"/>
                                                    </span>
                                                <xsl:text>'</xsl:text>
                                                <xsl:if test="(string-length(@containerField) > 0) and (@containerField != 'children')">
                                                    <span class="attribute">containerField</span>
                                                    <xsl:text> ='</xsl:text>
                                                    <span class="value">
                                                        <xsl:value-of select="@containerField"/>
                                                    </span>
                                                    <xsl:text>' </xsl:text>
                                                </xsl:if>
                                                <xsl:text>/&gt;</xsl:text>
                                            </li>
                                        </xsl:for-each>
                                    </ul>
                                </xsl:if>
                                <!-- closing element -->
                                <xsl:text>&lt;/</xsl:text>
                                <span class="element">
                                    <xsl:text>HAnimSegment</xsl:text>
                                </span>
                                <xsl:text>&gt;</xsl:text>
                                <br />
                            </li>
                        </xsl:for-each>
                    </ul>
                </xsl:if>
                <xsl:text>&#10;</xsl:text>
                
                <xsl:for-each select="HAnimJoint[string-length(@name) > 0][string-length(@name) > 0]">
                    <xsl:call-template name="HAnimNode-indent">
                        <!--	<xsl:with-param name="list" select="."/> -->
                    </xsl:call-template>
                </xsl:for-each>
                <xsl:text>&#10;</xsl:text>
                <!-- close out entering HAnimJoint element -->
                <xsl:if test="(local-name()='HAnimJoint')">
                    <xsl:text>&lt;/</xsl:text>
                    <span class="element">
                        <xsl:value-of select="local-name()"/>
                    </span>
                    <xsl:text>&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
            </li>
        </ul>
    </xsl:template>

    <!-- process all elements/nodes -->
    <xsl:template match="*" >
        <xsl:param name="lineBreaks"><xsl:text>true</xsl:text></xsl:param>
        <!-- break to new line if needed -->
        <xsl:if test="(position() > 1) and not(local-name() ='X3D') and ($lineBreaks='true')"><xsl:text disable-output-escaping="yes">&lt;br /&gt;&#10;</xsl:text></xsl:if>
        <xsl:if test="@DEF or local-name()='ProtoDeclare' or local-name()='ExternProtoDeclare' or (local-name(..)='ProtoInterface' and local-name()='field') or local-name()='ROUTE' or local-name()='Viewpoint'">
            <!-- add bookmarks -->
            <xsl:element name="a">
                <xsl:attribute name="name">
                    <xsl:choose>
                        <xsl:when test="@DEF">
                            <xsl:value-of select="@DEF"/>
                        </xsl:when>
                        <xsl:when test="local-name()='ProtoDeclare'">
                            <xsl:text>ProtoDeclare_</xsl:text>
                            <xsl:value-of select="@name"/>
                        </xsl:when>
                        <xsl:when test="local-name()='ExternProtoDeclare'">
                            <xsl:text>ExternProtoDeclare_</xsl:text>
                            <xsl:value-of select="@name"/>
                        </xsl:when>
                        <xsl:when test="(local-name(..)='ProtoInterface' and local-name()='field')">
                            <xsl:value-of select="../../@name"/>
                            <xsl:text>ProtoField_</xsl:text>
                            <xsl:value-of select="@name"/>
                        </xsl:when>
                        <xsl:when test="local-name()='ROUTE'">
                            <xsl:text>ROUTE_</xsl:text>
                            <xsl:value-of select="count(preceding::ROUTE)"/>
                        </xsl:when>
                        <xsl:when test="local-name()='Viewpoint'">
                            <xsl:text>Viewpoint_</xsl:text>
                            <xsl:value-of select="(count(preceding::Viewpoint[string-length(@DEF) = 0]) + 1)"/><!-- position() of //Viewpoint -->
                        </xsl:when>
                    </xsl:choose>
                </xsl:attribute>
                <xsl:text> </xsl:text>
            </xsl:element>
            <xsl:text> </xsl:text>
        </xsl:if>
        <xsl:text>&#10;</xsl:text>
        <!-- insert ROUTE comment preceding node, if applicable -->
        <xsl:if test="@DEF">
            <xsl:variable name="DEFname" select="@DEF"/>
            <xsl:variable name="IncomingRoutes" select="//ROUTE[(@toNode=$DEFname)   and not(@fromNode=$DEFname)]"/>
            <xsl:variable name="OutgoingRoutes" select="//ROUTE[(@fromNode=$DEFname) and not(@toNode=$DEFname)]"/>
            <xsl:variable name="SelfRoutes"     select="//ROUTE[(@fromNode=$DEFname) and    (@toNode=$DEFname)]"/>
            <xsl:if test="boolean($IncomingRoutes | $OutgoingRoutes | $SelfRoutes)">
                <!-- addedDocumentationColor.HTML -->
                <xsl:text disable-output-escaping="yes">&lt;span style="background-color:#EEEEEE;" title="inserted documentation about ROUTE connections"&gt;</xsl:text>
                    <xsl:text>&lt;!-- </xsl:text>
                    <i>
                        <xsl:text>ROUTE</xsl:text>
                        <!--
                        <xsl:if test="count($IncomingRoutes) + count($OutgoingRoutes) + count($SelfRoutes) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                        -->
                    </i>
                    <xsl:text> information for </xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;span class="idName"&gt;</xsl:text>
                    <xsl:value-of select="@DEF"/>
                    <xsl:text disable-output-escaping="yes">&lt;/span&gt;</xsl:text>
                    <xsl:text> node</xsl:text>
                    <xsl:text>:</xsl:text>
                    <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                    <xsl:text>&#10;</xsl:text>
                    <xsl:for-each select="$IncomingRoutes">
                        <xsl:text>[</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to this ROUTE</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#ROUTE_</xsl:text>
                                <xsl:value-of select="count(preceding::ROUTE)"/>
                            </xsl:attribute>
                            <xsl:text disable-output-escaping="yes">&lt;i&gt;</xsl:text>
                            <xsl:text>from</xsl:text>
                            <xsl:text disable-output-escaping="yes">&lt;/i&gt;</xsl:text>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <span class="idName">
                                <xsl:value-of select="@fromNode"/>
                            </span>
                            <xsl:text>.</xsl:text>
                            <span class="attribute">
                                <xsl:value-of select="@fromField"/>
                            </span>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <xsl:text disable-output-escaping="yes">&lt;i&gt;</xsl:text>
                            <xsl:text>to</xsl:text>
                            <xsl:text disable-output-escaping="yes">&lt;/i&gt;</xsl:text>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <span class="attribute">
                                <xsl:value-of select="@toField"/>
                        </span></xsl:element><xsl:text>]&#10;</xsl:text>
                    </xsl:for-each>
                    <xsl:for-each select="$OutgoingRoutes">
                        <xsl:text>[</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to this ROUTE</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#ROUTE_</xsl:text>
                                <xsl:value-of select="count(preceding::ROUTE)"/>
                            </xsl:attribute>
                            <xsl:text disable-output-escaping="yes">&lt;i&gt;</xsl:text>
                            <xsl:text>from</xsl:text>
                            <xsl:text disable-output-escaping="yes">&lt;/i&gt;</xsl:text>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <span class="attribute">
                                <xsl:value-of select="@fromField"/>
                            </span>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <xsl:text disable-output-escaping="yes">&lt;i&gt;</xsl:text>
                            <xsl:text>to</xsl:text>
                            <xsl:text disable-output-escaping="yes">&lt;/i&gt;</xsl:text>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <span class="idName">
                                <xsl:value-of select="@toNode"/>
                            </span>
                            <xsl:text>.</xsl:text>
                            <span class="attribute">
                                <xsl:value-of select="@toField"/>
                        </span></xsl:element><xsl:text>]&#10;</xsl:text>
                    </xsl:for-each>
                    <xsl:for-each select="$SelfRoutes">
                        <xsl:text>[</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="href">
                                <xsl:text>#ROUTE_</xsl:text>
                                <xsl:value-of select="count(preceding::ROUTE)"/>
                            </xsl:attribute>
                            <xsl:text>self-route</xsl:text>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <xsl:text disable-output-escaping="yes">&lt;i&gt;</xsl:text>
                            <xsl:text>from</xsl:text>
                            <xsl:text disable-output-escaping="yes">&lt;/i&gt;</xsl:text>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <span class="attribute">
                                <xsl:value-of select="@fromField"/>
                            </span>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <xsl:text disable-output-escaping="yes">&lt;i&gt;</xsl:text>
                            <xsl:text>to</xsl:text>
                            <xsl:text disable-output-escaping="yes">&lt;/i&gt;</xsl:text>
                            <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                            <span class="attribute">
                                <xsl:value-of select="@toField"/>
                            </span>
                        </xsl:element>
                        <xsl:text>]&#10;</xsl:text>
                    </xsl:for-each>
                    <xsl:text> --&gt;</xsl:text>
                    <xsl:if test="($lineBreaks='true')">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                <xsl:text disable-output-escaping="yes">&lt;/span&gt;</xsl:text><!-- addedDocumentationColor -->
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
        </xsl:if>
        <!-- process element tag.  manually control generation of brackets since they are unaffected by styles.  -->
        <xsl:variable name="dsNode" select="(local-name()='Signature') or (local-name()='SignedInfo') or (local-name()='CanonicalizationMethod') or (local-name()='SignatureMethod') or 
                                         (local-name()='Reference') or (local-name()='Transforms') or (local-name(..)='Transforms' and local-name()='Transform') or 
                                         (local-name()='DigestMethod') or (local-name()='DigestValue') or (local-name()='SignatureValue') or (local-name()='KeyInfo') or
                                         (local-name()='X509Data') or (local-name()='X509Certificate') or (local-name()='KeyValue') or (local-name()='RSAKeyValue') or
                                         (local-name()='Modulus') or (local-name()='Exponent')"/>
        <xsl:variable name="containsTextData" select="normalize-space(.) and (not (normalize-space(.)='' or normalize-space(.)=' '))"/>
        <!-- debug:
        <xsl:message>
            <xsl:value-of select="local-name()"/>
            <xsl:text>, </xsl:text>
            <xsl:text>$dsNode=</xsl:text>
            <xsl:value-of select="$dsNode"/>
            <xsl:text>, </xsl:text>
            <xsl:text>$containsTextData=</xsl:text>
            <xsl:value-of select="$containsTextData"/>
            <xsl:text>, </xsl:text>
            <xsl:text>#children=</xsl:text>
            <xsl:value-of select="count(*)"/>
        </xsl:message> 
        -->
        <xsl:variable name="elementTooltip">
            <xsl:choose>
                <xsl:when test="local-name()='X3D'">
                    <xsl:text>X3D is the top-most XML element for an Extensible 3D (X3D) Graphics file</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='head'">
                    <xsl:text>head can contain component, unit, and author-defined metadata (meta) tags</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='component'">
                    <xsl:text>X3D component name and level indicate any additional scene functionality needed above the given X3D profile</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='unit'"><xsl:text>unit defines scene scaling factors for length, angle, mass, or force</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='meta'">
                    <xsl:choose>
                            <!-- also used in X3D-Edit X3DSchemaData.java -->
                            <xsl:when test="(@name = 'title')">
                                <xsl:text>meta 'title' provides file name for this resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'accessRights')">
                                <xsl:text>meta 'accessRights' defines permission required to access resource or security status</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'contributor')">
                                <xsl:text>meta 'contributor' provides name of individual contributing to this resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'created')">
                                <xsl:text>meta 'created' provides date of initial version</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'creator')">
                                <xsl:text>meta 'creator' provides name of original author</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'description')">
                                <xsl:text>meta 'description' provides summary overview describing this resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'documentation')">
                                <xsl:text>meta 'documentation' provides further information about this resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'drawing')">
                                <xsl:text>meta 'drawing' provides name or reference link to a supporting drawing or sketch file</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'error')">
                                <xsl:text>meta 'error' defines information about an error or known problem that can prevent proper operation</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'generator')">
                                <xsl:text>meta 'generator' provides name of authoring tool or translation tool producing this scene</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'hint')">
                                <xsl:text>meta 'hint' provides a user hint about resource features or operation</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'identifier')">
                                <xsl:text>meta 'identifier' provides the unique Uniform Resource Identifier (URI) or url address for this resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'image') or (@name = 'Image')">
                                <xsl:text>meta 'image' provides name or reference link to a supporting image file</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'info')">
                                <xsl:text>meta 'info' provides additional information of interest</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'license')">
                                <xsl:text>meta 'license' provides software license link or information</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'modified')">
                                <xsl:text>meta 'modified' provides date of modified version</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'movingimage') or (@name = 'MovingImage')">
                                <xsl:text>meta 'MovingImage' provides </xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'photo')">
                                <xsl:text>meta 'photo' provides name or reference link to a supporting photograph"</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'reference')">
                                <xsl:text>meta 'reference' provides name or reference link to a supporting resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'requires')">
                                <xsl:text>meta 'requires' provides prerequisites for operation or viewing</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'rights')">
                                <xsl:text>meta 'rights' defines intellectual property rights (IPR) for this scene</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'robots')">
                                <xsl:text>meta 'robots' defines search engine and web-spider guidance:  (no)index for page indexing, (no)follow for following links</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'sound') or (@name = 'Sound')">
                                <xsl:text>meta 'Sound' provides name or reference link to a supporting sound file</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'subject')">
                                <xsl:text>meta 'subject' provides search-index subject keywords, key phrases, or classification codes</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'text') or (@name = 'Text')">
                                <xsl:text>meta 'Text' provides name or reference link to a supporting text file</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'title')">
                                <xsl:text>meta 'title' provides file name for this resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'TODO') or (@name = 'todo') or (@name = 'Todo') or (@name = 'ToDo')">
                                <xsl:text>meta 'TODO' action item (to do) that still needs to be performed</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'translator')">
                                <xsl:text>meta 'translator' provides name of person performing translation from another format or language</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'translated')">
                                <xsl:text>meta 'translated' provides date of translation from another format or language</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'version')">
                                <xsl:text>meta 'version' provides current version number or ID of this resource</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'warning')">
                                <xsl:text>meta 'warning' provides warning information about a known problem that impedes proper operation</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>author-defined metadata</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                </xsl:when>
                <xsl:when test="local-name()='Scene'">
                    <xsl:text>Scene is the root node that contains an X3D scene graph</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='ROUTE'">
                    <xsl:text>ROUTE connects fields between nodes to enable event passing</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='IMPORT'">
                    <xsl:text>IMPORT provides ROUTE access to a node that is EXPORTed by an Inline scene</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='EXPORT'">
                    <xsl:text>EXPORT exposes a local node for ROUTEing when the current Scene is Inlined by an external world</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Shape'">
                    <xsl:text>Shape contains geometry and optional corresponding Appearance</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Appearance'">
                    <xsl:text>Appearance specifies visual properties of geometry by containing Material, texture and TextureTransform nodes</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Material'">
                    <xsl:text>Material specifies surface rendering properties for associated geometry</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='TwoSidedMaterial'">
                    <xsl:text>TwoSidedMaterial specifies surface rendering properties for associated geometry, for outer (front) and inner (back) sides of polygons</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='ImageTexture'">
                    <xsl:text>ImageTexture maps a 2D-image file onto a geometric shape</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='MovieTexture'">
                    <xsl:text>MovieTexture applies a 2D movie image to surface geometry, or provides audio for a Sound node</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='PixelTexture'">
                    <xsl:text>PixelTexture creates a 2D-image texture map using a numeric array of pixel values</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Viewpoint'">
                    <xsl:text>Viewpoint provides a specific location and direction where the user may view the scene</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='NavigationInfo'">
                    <xsl:text>NavigationInfo describes the viewing model and physical characteristics of the viewer's avatar</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='Background') or (local-name()='TextureBackground')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> simulates ground and sky, using vertical arrays of wraparound color values or backdrop textures on all six sides</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Anchor'">
                    <xsl:text>Selecting Anchored geometry loads content specified by the url field</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Billboard'">
                    <xsl:text>Billboard content faces the user, rotating about the specified axis</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Collision'">
                    <xsl:text>Collision detects camera-to-object contact using current view and NavigationInfo avatarSize</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Inline'">
                    <xsl:text>Inline is a Grouping node that can load nodes from another X3D scene via url</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Group'">
                    <xsl:text>Group is a Grouping node that can contain most nodes</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='StaticGroup'">
                    <xsl:text>StaticGroup is a Grouping node whose children do not change, send events, receive events, or include re-USE-able content.</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='LOD'">
                    <xsl:text>LOD (Level Of Detail) uses camera-to-object distance to switch among contained child levels</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Switch'">
                    <xsl:text>Switch is a Grouping node that only renders one (or zero) child at a time</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Transform'">
                    <xsl:text>Transform translates, orients and scales child geometry within the local world coordinate system</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='Box') or (local-name()='Cone') or (local-name()='Cylinder') or (local-name()='Sphere') or (local-name()='Text')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> is a geometry primitive node</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'LineSet') or contains(local-name(),'FaceSet') or contains(local-name(),'Triangle') or contains(local-name(),'Quad') or (local-name()='ElevationGrid') or (local-name()='GeoElevationGrid') or (local-name()='Extrusion') or (local-name()='PointSet')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> is a geometry node</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='FontStyle')">
                    <xsl:text>FontStyle defines the size, family, justification, and other styles used by Text nodes</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='Coordinate') or (local-name()='CoordinateDouble')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> defines a set of 3D coordinate triplet values</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='Color')">
                    <xsl:text>Color defines a set of color triplet values</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='ColorRGBA')">
                    <xsl:text>ColorRGBA defines a set of color 4-tuple values</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='Normal')">
                    <xsl:text>Normal defines a set of 3D surface-normal vectors</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='DirectionalLight')">
                    <xsl:text>DirectionalLight creates parallel light rays to illuminate geometric shapes</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='PointLight')">
                    <xsl:text>PointLight is a single light source that illuminates outwards in all directions</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='SpotLight')">
                    <xsl:text>SpotLight is a light source that illuminates geometry within a conical beam</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'Interpolator')">
                    <xsl:text>Interpolator nodes output event values using piecewise-linear function definitions</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'Chaser')">
                    <xsl:text>Chaser nodes output event values that progressively change from initial value to destination value</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'Damper')">
                    <xsl:text>Damper nodes output event values that progressively change from initial value to destination value</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'2D') and not(contains(local-name(),'Nurbs'))">
                    <xsl:text>2D geometry node</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'Sequencer')">
                    <xsl:text>Sequencer nodes output discrete event values</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='BooleanFilter'">
                    <xsl:text>BooleanFilter selectively passes true, false or negated events</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='BooleanToggle'">
                    <xsl:text>BooleanToggle maintains state and negates output when a true input is provided</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='BooleanTrigger'">
                    <xsl:text>BooleanTrigger converts time events to boolean true events</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='IntegerTrigger'">
                    <xsl:text>IntegerTrigger converts boolean true or time input events to an integer value</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='TimeTrigger'">
                    <xsl:text>TimeTrigger converts boolean true events to time events</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='TimeSensor'">
                    <xsl:text>TimeSensor continuously generates events as time passes</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='TouchSensor'">
                    <xsl:text>TouchSensor tracks location &amp; state of the pointing device, and detects when user points at geometry</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'Sensor')">
                    <xsl:text>Sensor nodes convert user interaction into events</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='AudioClip'">
                    <xsl:text>AudioClip provides audio data used by Sound nodes</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Sound'">
                    <xsl:text>Sound controls an AudioClip or MovieTexture for sound playback</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='WorldInfo'">
                    <xsl:text>WorldInfo contains persistent documentation information about the 3D world</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='CADLayer'">
                    <xsl:text>CADLayer nodes define a hierarchy that shows layer structure for a Computer-Aided Design (CAD) model. CADLayer is a Grouping node that can contain CADAssembly and most nodes.</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='CADAssembly'">
                    <xsl:text>CADAssembly holds a set of Computer-Aided Design (CAD) assemblies or parts grouped together.  CADAssembly is a Grouping node that can contain CADAssembly (subassembly), CADPart or CADFace nodes.</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='CADPart'">
                    <xsl:text>CADPart is an atomic part that defines both coordinate-system location and the faces that constitute a part in a Computer-Aided Design (CAD) model. CADPart contains CADFace nodes.</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='CADFace'">
                    <xsl:text>CADFace holds the geometry representing a face in a Computer-Aided Design (CAD) part. CADFace can only contain a single Shape, LOD or Transform node (with containerField='shape').  Constraint: only zero or one Shape child can be active at one time.</xsl:text>
                </xsl:when>
                <xsl:when test="contains(local-name(),'Espdu') or contains(local-name(),'Pdu')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> is a networked Distributed Interactive Simulation (DIS) node</xsl:text>
                </xsl:when>
                <xsl:when test="starts-with(local-name(),'Geo')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> is a geographic node</xsl:text>
                </xsl:when>
                <xsl:when test="starts-with(local-name(),'HAnim')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> is a Humanoid Animation (H-Anim) node</xsl:text>
                </xsl:when>
                <xsl:when test="starts-with(local-name(),'NURBS')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> is a Non Uniform Rational B-Spline (NURBS) node</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='Script'">
                    <xsl:text>Script contains author-programmed event behaviors for a scene</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='ProtoDeclare'">
                    <xsl:text>ProtoDeclare is a Prototype declaration, defining a new node made up of other node(s)</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='ExternProtoDeclare'">
                    <xsl:text>ExternProtoDeclare refers to a ProtoDeclare node declaration provided in another file</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='field'">
                    <xsl:text>A field element defines an interface attribute or node</xsl:text>
                    <xsl:if test="(local-name(..)='Script') or (local-name(..)='ProtoDeclare') or (local-name(..)='ExternProtoDeclare')">
                        <xsl:text> for a parent </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="local-name()='ProtoInterface'">
                    <xsl:text>ProtoInterface is first statement inside a ProtoDeclare statement and holds field definitions</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='ProtoBody'">
                    <xsl:text>Initial scene node in ProtoDeclare/ProtoBody statement determines this prototype's node type</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='ProtoInstance'">
                    <xsl:text>ProtoInstance creates an instance of a locally or externally declared prototype node</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='fieldValue'">
                    <xsl:text>A fieldValue element is used to re-initialize a default field value in a ProtoInstance</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='IS'">
                    <xsl:text>IS connects ProtoDeclare interface fields to node fields inside ProtoDeclare definitions</xsl:text>
                </xsl:when>
                <xsl:when test="local-name()='connect'">
                    <xsl:text>connect tags define each ProtoDeclare field connection within ProtoDeclare definitions</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="isBehaviorNode" select="(local-name()='ROUTE') or (local-name()='Script') or
                        ((local-name()='field') and (local-name(..)='Script')) or
                        contains(local-name(),'Filter') or contains(local-name(),'Interpolator') or contains(local-name(),'Sensor') or
                        contains(local-name(),'Sequencer') or contains(local-name(),'Trigger')"/>
		<!-- debug -->
		<xsl:if test="isBehaviorNode">
                    <xsl:message>
                            <xsl:value-of select="local-name()"/>
			<xsl:text> $isBehaviorNode=</xsl:text>
			<xsl:value-of select="$isBehaviorNode"/>
                    </xsl:message>
                </xsl:if>
        <xsl:variable name="isExtensibleNode" select="starts-with(local-name(),'Proto') or
                        contains(local-name(),'Shader') or (local-name()='IS') or (local-name()='connect') or 
                        (starts-with(local-name(),'field') and contains(local-name(..),'Proto'))"/>
		<!-- debug
                <xsl:if test="$isExtensibleNode">
                    <xsl:message>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> $isExtensibleNode=</xsl:text>
                            <xsl:value-of select="$isExtensibleNode"/>
                    </xsl:message>
                </xsl:if> -->
        <!-- tooltips for each node
        <xsl:element name="span"> -->
            <!-- apply tooltips for each node -->              
            <xsl:choose>
                <!-- check for existence of children -->
                <xsl:when test="boolean(* | comment() ) or (local-name()='Script') or $containsTextData">
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;span title="</xsl:text>
                        <xsl:value-of select="$elementTooltip"/>
                        <xsl:choose>
                            <xsl:when test="$isBehaviorNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#DDEEFF</xsl:text>
                            </xsl:when>
                            <xsl:when test="$isExtensibleNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#FFEEFF</xsl:text>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:text disable-output-escaping="yes">"&gt;</xsl:text>
                    </xsl:if>
                    <!-- open tag for current element, which itself is a parent -->
                    <xsl:text>&lt;</xsl:text>
                    <xsl:call-template name="style-element-name" />
                    <!-- handle namespace declaration(s) if X3D element -->
                    <xsl:if test="local-name()='X3D'">
                    <!-- dissatisfying debug of namespace attributes: only default-namespace and noNamespaceSchemaLocation attributes seem to be visible
                        <xsl:message>
                            <xsl:text>&gt;X3D</xsl:text>
                            <xsl:for-each select="@xmlns:*">
                                <xsl:text> xmlns:</xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text>'</xsl:text>
                            </xsl:for-each>
                            <xsl:for-each select="@*[not(starts-with(local-name(),'xsd:'))]">
                            <xsl:for-each select="@*">
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text>'</xsl:text>
                            </xsl:for-each>
                            <xsl:text>/&lt;</xsl:text>
                            <xsl:if test="ds:*">
                                <xsl:text> [ds: namespace elements found]</xsl:text>
                            </xsl:if>
                            <xsl:if test="*/@ds:*">
                                <xsl:text> [ds: namespace attributes found]</xsl:text>
                            </xsl:if>
                        </xsl:message>
                    -->
                        <xsl:if test="ds:* | (*/@ds:*)">
                            <!-- xmlns:ds="http://www.w3.org/2000/09/xmldsig#" -->
                            <span class="attribute">
                                <xsl:text>xmlns:ds</xsl:text>
                            </span>
                            <!-- note formatting is to avoid HTML space within linked quoted reference -->
                            <xsl:text>='</xsl:text><xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:text>http://www.w3.org/2000/09/xmldsig#</xsl:text>
                                </xsl:attribute>
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                <xsl:text>http://www.w3.org/2000/09/xmldsig#</xsl:text></xsl:element><xsl:text>' </xsl:text>
                        </xsl:if>
                    </xsl:if>
                    <!-- handle attribute(s) if any -->
                    <xsl:call-template name="process-attributes-in-order" />
                    <!-- finish initial tag of pair -->
                    <xsl:text>&gt;&#10;</xsl:text>
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;/span&gt;</xsl:text>
                    </xsl:if>

            <!-- DEBUG statements are for use in X3D Validator servlet output excerpt:
                    <xsl:if test="(local-name() ='Scene')">
                        <xsl:comment>
                            <xsl:text>$linkImages=</xsl:text>
                            <xsl:value-of select="$linkImages"/>
                        </xsl:comment>
                        <xsl:comment>
                            <xsl:text>$baseUrlAvailable=</xsl:text>
                            <xsl:value-of select="$baseUrlAvailable"/>
                        </xsl:comment>
            </xsl:if>
                        -->

                    <!-- indent children -->
                    <div class="indent">
                        <xsl:apply-templates select="* | comment()" />
                        <xsl:choose>
                            <!-- Script node:  output script source, preserve CDATA delimiters around contained code -->
                            <xsl:when test="local-name()='Script' and normalize-space(.) and (not (normalize-space(.)='' or normalize-space(.)=' '))">
                                <xsl:if test="($lineBreaks='true')">
                                    <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                                </xsl:if>
                                <xsl:text>&#10;</xsl:text>
                                <!-- eliminate/restore left margin so that CDATA script code has maximum page width -->
                                <xsl:for-each select="ancestor::*">
                                    <xsl:text disable-output-escaping="yes">&lt;/div class="indent"&gt;</xsl:text>
                                    <xsl:text>&#10;</xsl:text>
                                </xsl:for-each>
                                <code><b><xsl:text>&lt;![CDATA[</xsl:text></b></code>
                                <xsl:text>&#10;</xsl:text>
                                <pre>
                                    <xsl:for-each select="text()">
                                        <xsl:choose>
                                            <xsl:when test="(normalize-space(.)='' or normalize-space(.)=' ') and preceding::field"></xsl:when><!--<xsl:text>// stripped LF before field&#10;</xsl:text> -->
                                            <xsl:when test="(normalize-space(.)='' or normalize-space(.)=' ') and following::field"></xsl:when><!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
                                            <!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
                                            <!-- usable text found, need to convert '<' to &lt; -->
                                            <xsl:otherwise>
                                                <xsl:call-template name="escape-special-characters">
                                                    <xsl:with-param name="inputString" select="."/>
                                                </xsl:call-template>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:for-each>
                                </pre>
                                <code><b><xsl:text>]]&gt;</xsl:text></b></code>
                                <xsl:text>&#10;</xsl:text>
                                <!-- eliminate/restore left margin so that CDATA script code has maximum page width -->
                                <xsl:for-each select="ancestor::*">
                                    <xsl:text disable-output-escaping="yes">&lt;div class="indent"&gt;</xsl:text>
                                    <xsl:text>&#10;</xsl:text>
                                </xsl:for-each>
                            </xsl:when>
                            <!-- DS nodes -->
                            <xsl:when test="($dsNode) and ($containsTextData) and not(*)">
                                <code><xsl:value-of select="."/></code>
                            </xsl:when>
                        </xsl:choose>
                    </div>
                    <!-- close tag for this element -->
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;span title="</xsl:text>
                        <xsl:value-of select="$elementTooltip"/>
                        <xsl:choose>
                            <xsl:when test="$isBehaviorNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#DDEEFF</xsl:text>
                            </xsl:when>
                            <xsl:when test="$isExtensibleNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#FFEEFF</xsl:text>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:text disable-output-escaping="yes">"&gt;</xsl:text>
                    </xsl:if>
                    <!-- closing element -->
                    <xsl:text>&lt;/</xsl:text>
                    <xsl:call-template name="style-element-name" />
                    <xsl:text>&gt;&#10;</xsl:text>
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;/span&gt;</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:otherwise>
                    <!-- single tag, no children -->
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;span title="</xsl:text>
                        <xsl:value-of select="$elementTooltip"/>
                        <xsl:choose>
                            <xsl:when test="$isBehaviorNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#DDEEFF</xsl:text>
                            </xsl:when>
                            <xsl:when test="$isExtensibleNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#FFEEFF</xsl:text>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:text disable-output-escaping="yes">"&gt;</xsl:text>
                    </xsl:if>
                    <xsl:text>&lt;</xsl:text>
                    <xsl:call-template name="style-element-name" />
                    <!-- handle attribute(s) if any -->
                    <xsl:call-template name="process-attributes-in-order" />

                    <!-- finish singleton tag -->
                    <xsl:text>/&gt;&#10;</xsl:text>
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;/span&gt;</xsl:text>
                    </xsl:if>
                </xsl:otherwise>
            </xsl:choose>
        <!-- end of span for title tooltip
        </xsl:element> -->
        <!-- 	<xsl:if test="last() > position()"><xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text></xsl:if> -->
        <!-- element complete, insert index (after head tag prior to Scene tag, or after final X3D) or else break -->
        <xsl:if test="local-name()='head' or local-name()='X3D'">
            <xsl:call-template name="ID-link-index"/>
        </xsl:if>
    </xsl:template>

    <xsl:template name="escape-special-characters">
        <xsl:param name="inputString" select="0"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:choose>
            <!-- handle preceding &quot; marks first -->
            <xsl:when test="contains($inputString,$quot) and not(contains(substring-before($inputString,$quot),'&#60;')) and not(contains(substring-before($inputString,$quot),$apos))">
                <xsl:value-of select="substring-before($inputString,$quot)"/>
                <xsl:text disable-output-escaping="yes">&amp;quot;</xsl:text>
                <xsl:call-template name="escape-special-characters">
                    <xsl:with-param name="inputString" select="substring-after($inputString,$quot)"/>
                </xsl:call-template>
            </xsl:when>
            <!-- &#60; is &lt; -->
            <xsl:when test="contains($inputString,'&#60;') and not(contains(substring-before($inputString,'&#60;'),$quot)) and not(contains(substring-before($inputString,'&#60;'),$apos))">
                <xsl:value-of select="substring-before($inputString,'&#60;')"/>
                <xsl:text disable-output-escaping="yes">&amp;lt;</xsl:text>
                <xsl:call-template name="escape-special-characters">
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&#60;')"/>
                </xsl:call-template>
            </xsl:when>
            <!-- &apos; is apostrophe -->
            <xsl:when test="contains($inputString,$apos) and not(contains(substring-before($inputString,$apos),'&quot;')) and not(contains(substring-before($inputString,$apos),'&#60;'))">
                <xsl:value-of select="substring-before($inputString,$apos)"/>
                <xsl:text disable-output-escaping="yes">&amp;apos;</xsl:text>
                <xsl:call-template name="escape-special-characters">
                    <xsl:with-param name="inputString" select="substring-after($inputString,$apos)"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
	
    <xsl:template name="style-element-name">
        <xsl:choose>
            <xsl:when test="contains(local-name(),'Proto') or starts-with(local-name(),'field')">
                <span class="prototype">
                    <xsl:value-of select="local-name()"/>
                </span>
            </xsl:when>
            <xsl:when test="local-name()='ROUTE'">
                <span class="route">
                    <xsl:value-of select="local-name()"/>
                </span>
            </xsl:when>
            <xsl:otherwise>
                <span class="element">
                    <!-- handle alternate-namespace prefixes for XML authentication, encryption -->
                    <xsl:choose>
                        <xsl:when test="(local-name()='Signature') or (local-name()='SignedInfo') or (local-name()='CanonicalizationMethod') or (local-name()='SignatureMethod') or 
                                      (local-name()='Reference') or (local-name()='Transforms') or (local-name(..)='Transforms' and local-name()='Transform') or 
                                      (local-name()='DigestMethod') or (local-name()='DigestValue') or (local-name()='SignatureValue') or (local-name()='KeyInfo') or
                                      (local-name()='X509Data') or (local-name()='X509Certificate') or (local-name()='KeyValue') or (local-name()='RSAKeyValue') or
                                      (local-name()='Modulus') or (local-name()='Exponent')">
                            <xsl:text>ds:</xsl:text>
                        </xsl:when>
                        <xsl:when test="(local-name()='EncryptedData') or (local-name()='EncryptionMethod') or (local-name()='CipherData') or (local-name()='CipherValue')">
                            <xsl:text>xenc:</xsl:text>
                        </xsl:when>
                    </xsl:choose>
                    <xsl:value-of select="local-name()"/>
                </span>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="process-attributes-in-order">
        <!-- this template is shared with X3dTidy.xslt -->
        <xsl:choose>
            <!-- handle specially ordered cases first -->
            <xsl:when test="local-name()='meta'">
                <xsl:apply-templates select="@name" />
                <xsl:apply-templates select="@content" />
                <xsl:apply-templates select="@*[local-name()!='name' and local-name()!='content']"/><!-- safety net -->
            </xsl:when>
            <xsl:when test="local-name()='ROUTE'">
                <xsl:apply-templates select="@fromNode"/>
                <xsl:apply-templates select="@fromField"/>
                <xsl:apply-templates select="@toNode"/>
                <xsl:apply-templates select="@toField"/>
                <xsl:apply-templates select="@*[local-name()!='fromNode' and local-name()!='fromField' and
												local-name()!=  'toNode' and local-name()!=  'toField']"/><!-- safety net -->
            </xsl:when>
            <xsl:when test="local-name()='ElevationGrid' or local-name()='GeoElevationGrid'">
                <xsl:apply-templates select="@DEF | @USE | @containerField "/>
                <xsl:apply-templates select="@*[local-name()!='DEF' and local-name()!='USE' and local-name()!='containerField' and
                                                local-name()!='height' and local-name()!='colorIndex']"/><!-- safety net -->
                <xsl:apply-templates select="@height"/>
                <xsl:apply-templates select="@colorIndex"/>
            </xsl:when>
            <xsl:when test="local-name()='IndexedFaceSet' or local-name()='IndexedLineSet'">
                <xsl:apply-templates select="@DEF | @USE | @containerField "/>
                <xsl:apply-templates select="@*[local-name()!='DEF' and local-name()!='USE' and local-name()!='containerField' and
                                                not(contains(local-name(), 'Index'))]"/><!-- safety net -->
                <xsl:apply-templates select="@*[contains(local-name(), 'Index')]"/>
            </xsl:when>
            <xsl:when test="local-name()='IMPORT'">
                <xsl:apply-templates select="@inlineDEF"/>
                <xsl:apply-templates select="@importedDEF"/>
                <xsl:apply-templates select="@AS"/>
                <xsl:apply-templates select="@*[local-name()!='inlineDEF' and local-name()!='importedDEF' and
                                                local-name()!='AS']"/><!-- safety net -->
            </xsl:when>
            <xsl:when test="local-name()='EXPORT'">
                <xsl:apply-templates select="@localDEF"/>
                <xsl:apply-templates select="@AS"/>
                <xsl:apply-templates select="@*[local-name()!='localDEF' and local-name()!='AS']"/><!-- safety net -->
            </xsl:when>
            <xsl:when test="contains(local-name(),'Proto')">
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@DEF | @USE"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='USE') and (local-name()!='name')]"/><!-- safety net -->
            </xsl:when>
            <xsl:when test="local-name()='field' or local-name()='fieldValue'">
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@type"/>
                <xsl:apply-templates select="@value"/>
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='type') and (local-name()!='value') and (local-name()!='appinfo') and (local-name()!='documentation')]"/><!-- safety net -->
                <xsl:if test="@appinfo">
                    <xsl:text disable-output-escaping="yes">&#10;&lt;br /&gt;&#10;</xsl:text>
                </xsl:if>
                <xsl:apply-templates select="@appinfo"/>
                <xsl:if test="@documentation">
                    <xsl:text disable-output-escaping="yes">&#10;&lt;br /&gt;&#10;</xsl:text>
                </xsl:if>
                <xsl:apply-templates select="@documentation"/>
            </xsl:when>
            <xsl:when test="contains(local-name(),'connect')">
                <xsl:apply-templates select="@nodeField"/>
                <!-- IS -->
                <xsl:apply-templates select="@protoField"/>
            </xsl:when>
            <!-- otherwise not a special case, process DEF/USE first and urls last -->
            <xsl:otherwise>
                <xsl:apply-templates select="@DEF | @USE | @containerField | @*[not(contains(local-name(), 'url') or contains(local-name(), 'Url'))]"/>
                <xsl:apply-templates select="@*[contains(local-name(), 'url') or contains(local-name(), 'Url')]"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template match="@*" >
        <!-- eliminate default attribute values, otherwise they will all appear in output  -->
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
                      select="not( local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) and
                      not( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) and
                      not( local-name(..)='AudioClip'	and
                      ((local-name()='loop' and .='false') or
                      (local-name()='pitch' and (.='1' or .='1.0')) or
                      (local-name()='startTime' and (.='0' or .='0.0')) or
                      (local-name()='stopTime' and (.='0' or .='0.0')) or
                      (local-name()='pauseTime' and (.='0' or .='0.0')) or
                      (local-name()='resumeTime'  and (.='0' or .='0.0')))) and
                      not( ((local-name(..)='Background') or (local-name(..)='TextureBackground')) and ((local-name()='skyColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='transparency' and (.='0' or .='0.0')))) and
                      not( local-name(..)='Billboard'	and local-name()='axisOfRotation' and (.='0 1 0' or .='0.0 1.0 0.0')) and
                      not( local-name(..)='BooleanToggle' and local-name()='toggle' and .='false') and
                      not( local-name(..)='Box'	and ((local-name()='size' and (.='2 2 2' or .='2.0 2.0 2.0')) or (local-name()='solid' and .='true'))) and
                      not( local-name(..)='Collision'	and local-name()='enabled' and .='true') and
                      not( local-name(..)='Cone' and	((local-name()='bottomRadius' and (.='1' or .='1.0')) or
                      (local-name()='height' and (.='2' or .='2.0')) or
                      (local-name()='side' and .='true') or
                      (local-name()='solid' and .='true') or
        (local-name()='bottom' and .='true')))"/>
        <xsl:variable name="notDefaultFieldValue1a"
                      select="not( local-name(..)='Cylinder' and
                      ((local-name()='height' and (.='2' or .='2.0')) or
                      (local-name()='radius' and (.='1' or .='1.0')) or
                      (local-name()='bottom' and .='true') or
                      (local-name()='side' and .='true') or
                      (local-name()='solid' and .='true') or
                      (local-name()='top' and .='true'))) and
                      not( local-name(..)='CylinderSensor' and
                      ((local-name()='autoOffset' and .='true') or
                      (local-name()='axisRotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='diskAngle' and .='0.26179167') or
                      (local-name()='offset' and (.='0' or .='0.0')) or
                      (local-name()='maxAngle' and (.='-1' or .='-1.0')) or
                      (local-name()='minAngle' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultFieldValue2"
                      select="not( local-name(..)='DirectionalLight' and
                      ((local-name()='ambientIntensity' and (.='0' or .='0.0')) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='direction' and (.='0 0 -1' or .='0.0 0.0 -1.0')) or
                      (local-name()='global' and .='false') or
                      (local-name()='intensity' and (.='1' or .='1.0')) or
                      (local-name()='on' and .='true'))) and
                      not((local-name(..)='ElevationGrid' or local-name(..)='GeoElevationGrid') and
                      ((local-name()='ccw' and .='true') or
                      (local-name()='colorPerVertex' and .='true') or
                      (local-name()='normalPerVertex' and .='true') or
                      (local-name()='solid' and .='true') or
                      (local-name()='xDimension' and (.='2')) or
                      (local-name()='xSpacing' and (.='1' or .='1.0')) or
                      (local-name()='zDimension' and (.='2')) or
                      (local-name()='zSpacing' and (.='1' or .='1.0')) or
                      (local-name()='yScale' and (.='1' or .='1.0')) or
                      (local-name()='height' and (.='0 0 0 0' or .='0.0 0.0 0.0 0.0')) or
                      (local-name()='geoGridOrigin' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='creaseAngle' and (.='0' or .='0.0')))) and
                      not( local-name(..)='Extrusion'	and
                      ((local-name()='beginCap' and .='true') or
                      (local-name()='ccw' and .='true') or
                      (local-name()='convex' and .='true') or
                      (local-name()='endCap' and .='true') or
                      (local-name()='solid' and .='true') or
                      (local-name()='creaseAngle' and (.='0' or .='0.0')) or
                      (local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='scale' and (.='1 1' or .='1.0 1.0')) or
                      (local-name()='crossSection' and .='1 1, 1 -1, -1 -1, -1 1, 1 1') or
                      (local-name()='crossSection' and .='1 1 1 -1 -1 -1 -1 1 1 1') or
                      (local-name()='spine' and .='0 0 0, 0 1 0') or
                      (local-name()='spine' and .='0 0 0 0 1 0')))" />
        <xsl:variable name="notDefaultFieldValue3"
                      select="not(contains(local-name(..),'Fog') and 	((local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='visibilityRange' and (.='0' or .='0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='fogType' and .='LINEAR'))) and
                      not(contains(local-name(..),'FontStyle')	and
                      ((local-name()='horizontal' and .='true') or
                      (local-name()='leftToRight' and .='true') or
                      (local-name()='topToBottom' and .='true') or
                      (local-name()='size' and (.='1' or .='1.0')) or
                      (local-name()='spacing' and (.='1' or .='1.0')) or
                      (local-name()='pointSize' and (.='12' or .='12.0')) or
                      (local-name()='family' and .='&quot;SERIF&quot;') or
                      (local-name()='justify' and .='&quot;BEGIN&quot;') or
                      (local-name()='style' and .='PLAIN'))) and
                      not( local-name(..)='ImageTexture' and
                      ((local-name()='repeatS' and .='true') or
                      (local-name()='repeatT' and .='true'))) and
                      not( local-name(..)='IndexedFaceSet' and
                      ((local-name()='ccw' and .='true') or
                      (local-name()='colorPerVertex' and .='true') or
                      (local-name()='convex' and .='true') or
                      (local-name()='normalPerVertex' and .='true') or
                      (local-name()='solid' and .='true') or
                      (local-name()='creaseAngle' and (.='0' or .='0.0')))) and
                      not( local-name(..)='IndexedLineSet' and local-name()='colorPerVertex' and .='true') and
                      not( local-name(..)='Inline' and local-name()='load' and .='true') and
                      not( local-name(..)='LoadSensor' and
                      ((local-name()='enabled' and .='true') or
                      (local-name()='timeOut' and (.='0' or .='0.0')))) and
                      not( local-name(..)='LOD'	and	((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or (local-name()='forceTransitions' and .='false'))) and
                      not(((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial')) and
                      ((local-name()='ambientIntensity' and .='0.2') or
                      (local-name()='diffuseColor' and .='0.8 0.8 0.8') or
                      (local-name()='emissiveColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='shininess' and .='0.2') or
                      (local-name()='specularColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='transparency' and (.='0' or .='0.0')))) and
                      not( local-name(..)='TwoSidedMaterial'	and
                      ((local-name()='backAmbientIntensity' and .='0.2') or
                      (local-name()='backDiffuseColor' and .='0.8 0.8 0.8') or
                      (local-name()='backEmissiveColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='backShininess' and .='0.2') or
                      (local-name()='separateBackColor' and .='false') or
                      (local-name()='backSpecularColor' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='backTransparency' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultFieldValue4"
                      select="not( local-name(..)='MovieTexture' and
                      ((local-name()='loop' and .='false') or
                      (local-name()='speed' and (.='1' or .='1.0')) or
                      (local-name()='startTime' and (.='0' or .='0.0')) or
                      (local-name()='stopTime' and (.='0' or .='0.0')) or
                      (local-name()='pauseTime' and (.='0' or .='0.0')) or
                      (local-name()='resumeTime'  and (.='0' or .='0.0')) or
                      (local-name()='repeatS' and .='true') or
                      (local-name()='repeatT' and .='true'))) and
                      not( local-name(..)='NavigationInfo' and
                      ((local-name()='avatarSize' and .='0.25 1.6 0.75') or
                      (local-name()='headlight' and .='true') or
                      (local-name()='speed' and (.='1' or .='1.0')) or
                      (local-name()='transitionTime' and (.='1' or .='1.0')) or
                      (local-name()='transitionType' and (.='&quot;LINEAR&quot;')) or
					  (local-name()='type' and (.='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
                      (local-name()='visibilityLimit' and (.='0' or .='0.0')))) and
                      not( local-name(..)='PixelTexture' and
                      ((local-name()='repeatS' and .='true') or
                      (local-name()='repeatT' and .='true') or
                      (local-name()='image' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='PlaneSensor' and
                      ((local-name()='autoOffset' and .='true') or
					  (local-name()='axisRotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='maxPosition' and (.='-1 -1' or .='-1.0 -1.0')) or
                      (local-name()='minPosition' and (.='0 0' or .='0.0 0.0')) or
                      (local-name()='offset' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='PointLight' and
                      ((local-name()='ambientIntensity' and (.='0' or .='0.0'))or
                      (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='global' and .='true') or
                      (local-name()='intensity' and (.='1' or .='1.0')) or
                      (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='on' and .='true') or
                      (local-name()='radius' and (.='100' or .='100.0'))))" />
        <xsl:variable name="notDefaultFieldValue5"
                      select="not(contains(local-name(..),'ProximitySensor') and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='enabled' and .='true'))) and
                      not( local-name(..)='Script' and ((local-name()='directOutput' and .='false') or
                      (local-name()='mustEvaluate' and .='false'))) and
                      not( local-name(..)='Sound' and ((local-name()='direction' and (.='0 0 1' or .='0.0 0.0 1.0')) or
                      (local-name()='intensity' and (.='1' or .='1.0')) or
                      (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='priority' and (.='0' or .='0.0')) or
                      (local-name()='maxBack' and (.='10' or .='10.0')) or
                      (local-name()='maxFront' and (.='10' or .='10.0')) or
                      (local-name()='minBack' and (.='1' or .='1.0'))  or
                      (local-name()='minFront' and (.='1' or .='1.0')) or
                      (local-name()='spatialize' and .='true'))) and
                      not( local-name(..)='Sphere' and ((local-name()='radius' and (.='1' or .='1.0')) or (local-name()='solid' and .='true'))) and
                      not( local-name(..)='SphereSensor' and
                      ((local-name()='autoOffset' and .='true') or
                      (local-name()='enabled' and .='true') or
                      (local-name()='offset' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0')) and
                      not( local-name(..)='Switch' and ../IS/connect[@nodeField='whichChoice'])))" />
        <!-- Switch whichChoice='-1' is very significant and somewhat counterintuitive/nonobvious, so otherwise show it. -->
        <!--	  and not( local-name(..)='Switch' and  local-name()='whichChoice' and (.='-1' or .='-1.0')) -->
        <xsl:variable name="notDefaultFieldValue6"
                      select="not( local-name(..)='SpotLight'	and
                      ((local-name()='ambientIntensity' and (.='0' or .='0.0')) or
                      (local-name()='attenuation' and (.='1 0 0' or .='1.0 0.0 0.0')) or
                      (local-name()='beamWidth' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854'))) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='cutOffAngle' and (.='1.5708' or .='1.570796')) or
                      (local-name()='direction' and (.='0 0 -1' or .='0.0 0.0 -1.0')) or
                      (local-name()='global' and .='true') or
                      (local-name()='intensity' and (.='1' or .='1.0')) or
                      (local-name()='location' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='on' and .='true') or
                      (local-name()='radius' and (.='100' or .='100.0')))) and
                      not( local-name(..)='Text'   and ((local-name()='maxExtent' and (.='0' or .='0.0')) or (local-name()='solid' and (.='false')))) and
                      not( local-name(..)='TextureTransform' and
                      ((local-name()='center' and (.='0 0' or .='0.0 0.0')) or
                      (local-name()='rotation' and (.='0' or .='0.0')) or
                      (local-name()='scale' and (.='1 1' or .='1.0 1.0')) or
                      (local-name()='translation' and (.='0 0' or .='0.0 0.0')))) and
                      not( local-name(..)='TextureTransform3D' and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='TextureTransformMatrix3D' and
                      ((local-name()='matrix' and (.='1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1' or .='1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 0.0 1.0'))))" />
        <xsl:variable name="notDefaultFieldValue7"
                      select="not( local-name(..)='TimeSensor' and
                      ((local-name()='cycleInterval' and (.='1' or .='1.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='startTime' and (.='0' or .='0.0')) or
                      (local-name()='stopTime' and (.='0' or .='0.0')) or
                      (local-name()='pauseTime' and (.='0' or .='0.0')) or
                      (local-name()='resumeTime'  and (.='0' or .='0.0')) or
                      (local-name()='loop' and .='false'))) and
                      not( contains(local-name(..),'TouchSensor') and
                      local-name()='enabled' and .='true') and
                      not( ((local-name(..)='Transform') or (local-name(..)='EspduTransform') or (local-name(..)='GeoTransform')) and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
					  (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                      (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='Viewpoint' and
                      (local-name()='fieldOfView' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854')))) and
                      not( local-name(..)='OrthoViewpoint' and
                      (local-name()='fieldOfView' and ((.='-1 -1 1 1') or (.='-1.0 -1.0 1.0 1.0')))) and
                      not( contains(local-name(..),'Viewpoint') and
                      ((local-name()='centerOfRotation' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='fieldOfView' and ((.='0.785398') or (.='0.7854') or (.='.785398') or (.='.7854'))) or
                      (local-name()='jump' and .='true') or
                      (local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                      (local-name()='retainUserOffsets' and (.='false')) or
                      (local-name()='position' and (.='0 0 10' or .='0.0 0.0 10.0')))) and
                      not( local-name(..)='VisibilitySensor' and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='enabled' and .='true') or
                      (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='enterTime' and (.='0' or .='0.0')) or
                      (local-name()='exitTime'  and (.='0' or .='0.0')) or
                      (local-name()='isActive' and .='false')))" />
        <xsl:variable name="notDefaultFieldValue8"
                      select="not( local-name(..)='FillProperties' and
                      (((local-name()='filled' and .='true') or
                      (local-name()='hatched' and .='true') or
                      local-name()='hatchStyle' and (.='1' or .='1.0')) or
                      (local-name()='hatchColor' and (.='1 1 1' or .='1.0 1.0 1.0')))) and
                      not( local-name(..)='LineProperties' and
                      ((local-name()='applied' and .='true') or
                      (local-name()='linetype' and (.='1')) or
                      (local-name()='linewidthScaleFactor' and (.='0' or .='0.0')))) and
                      not( local-name(..)='ClipPlane' and
                      ((local-name()='enabled' and .='true') or
                      (local-name()='plane' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0')))) and
                      not( local-name(..)='ViewpointGroup' and
                      ((local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='displayed' and .='true') or
                      (local-name()='retainUserOffsets' and .='false') or
                      (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFieldValue9"
                      select="not( local-name(..)='MultiTexture' and
                      ((local-name()='alpha' and (.='1' or .='1.0')) or
                      (local-name()='color' and (.='1 1 1' or .='1.0 1.0 1.0')))) and
                      not( local-name(..)='TextureCoordinateGenerator' and
                      ((local-name()='mode' and .='SPHERE'))) and
                      not((local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D') and
                      ((local-name()='repeatS' or local-name()='repeatT' or local-name()='repeatR') and .='false')) and
                      not( local-name(..)='PixelTexture3D' and
                      (local-name()='image' and (.='0 0 0 0'))) and
                      not( local-name(..)='IntegerTrigger' and
                      ((local-name()='integerKey' and .='-1'))) and
                      not( local-name(..)='LayerSet' and
                      ((local-name()='activeLayer' and .='0') or
                       (local-name()='order' and .='0'))) and
                      not(contains(local-name(..),'PickSensor') and
                      ((local-name()='enabled' and .='true') or
                       (local-name()='intersectionType' and .='BOUNDS') or
                       (local-name()='matchCriterion' and .='MATCH_ANY') or
                       (local-name()='objectType' and .='&quot;ALL&quot;') or
                       (local-name()='sortOrder' and .='CLOSEST'))) and
                      not( local-name(..)='ParticleSystem' and
                      ((local-name()='createParticles' and .='true') or
                       (local-name()='enabled' and .='true') or
                       (local-name()='geometryType' and .='QUAD') or
                       (local-name()='lifetimeVariation' and .='0.25') or
                       (local-name()='maxParticles' and .='200') or
                       (local-name()='particleLifetime' and .='5') or
                       (local-name()='particleSize' and .='0.02 0.02'))) and
                      not( local-name(..)='PickableGroup' and
                      ((local-name()='objectType' and .='&quot;ALL&quot;') or
                       (local-name()='pickable' and .='true'))) and
                      not(local-name(..)='StringSensor' and
                      ((local-name()='deletionAllowed' or local-name()='enabled') and (.='true'))) and
                      not( local-name(..)='TransformSensor' and
                      ((local-name()='enabled' and .='true') or
                       (local-name()='size' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='GeneratedCubeMapTexture' and
                      ((local-name()='update' and .='NONE') or
                       (local-name()='size' and .='128'))) and
                      not(local-name(..)='MovieTexture' and
                      ((local-name()='pitch' or local-name()='1') and (.='1.0'))) and
                      not(contains(local-name(..),'Emitter') and
                      ((local-name()='angle' and .='0.7854') or
                       (local-name()='direction' and (.='0 1 0' or .='0.0 1.0 0.0')) or
                       (local-name()='mass' and (.='0' or .='0.0')) or
                       (local-name()='position' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='speed' and (.='0' or .='0.0')) or
                       (local-name()='surfaceArea' and (.='0' or .='0.0')) or
                       (local-name()='variation' and .='0.25') or
                       (local-name()='internal' and .='true') or
                       (local-name()='coordIndex' or local-name()='-1'))) and
                      not(local-name(..)='Contact' and
                      ((local-name()='minBounceSpeed' and (.='0' or .='0.0')))) and
                      not(contains(local-name(..),'Layer') and
                      ((local-name()='isPickable' and .='true'))) and
                      not(contains(local-name(..),'Layout') and
                      ((local-name()='offset' and (.='0 0' or .='0.0 0.0')) or
                       (local-name()='size'   and (.='1 1' or .='1.0 1.0')) or
                       (local-name()='align' and .='&quot;CENTER&quot; &quot;CENTER&quot;') or
                       (local-name()='offsetUnits' and .='&quot;WORLD&quot; &quot;WORLD&quot;') or
                       (local-name()='scaleMode' and .='&quot;NONE&quot; &quot;NONE&quot;') or
                       (local-name()='sizeUnits' and .='&quot;WORLD&quot; &quot;WORLD&quot;'))) and
                      not( local-name(..)='TextureProperties' and
                      ((local-name()='anisotropicDegree' and (.='1' or .='1.0')) or
                       (local-name()='borderColor' and (.='0 0 0 0' or .='0.0 0.0 0.0 0.0')) or
                       (local-name()='borderWidth' and (.='0' or .='0.0')) or
                       (starts-with(local-name(),'boundaryMode') and .='REPEAT') or
                       (local-name()='generateMipMaps' and .='false') or
                       (local-name()='magnificationFilter' and .='FASTEST') or
                       (local-name()='minificationFilter'  and .='FASTEST') or
                       (local-name()='textureCompression'  and .='FASTEST') or
                       (local-name()='texturePriority' and (.='0' or .='0.0')))) and
                      not(local-name(..)='Viewport' and
                      ((local-name()='clipBoundary' and (.='0 1 0 1' or .='0.0 1.0 0.0 1.0')))) and
                      not( local-name(..)='KeySensor' and
                      ((local-name()='enabled' and .='true')))" />
        <xsl:variable name="notDefaultContainerField1"
                      select="not((local-name()='containerField' and .='children')	and
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
                      local-name(..)='Transform' or
                      local-name(..)='Viewpoint' or
                      local-name(..)='WorldInfo' or
                      local-name(..)='ProtoInstance')) and
                      not((local-name()='containerField' and .='geometry')	and
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
                      select="not((local-name()='containerField' and .='source')	and (local-name(..)='AudioClip')) and
                      not((local-name()='containerField' and .='appearance')	and (local-name(..)='Appearance')) and
                      not((local-name()='containerField' and .='material')	and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial'))) and
                      not((local-name()='containerField' and .='color')	and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                      not((local-name()='containerField' and .='coord')	and (local-name(..)='Coordinate')) and
                      not((local-name()='containerField' and .='normal')	and (local-name(..)='Normal')) and
                      not((local-name()='containerField' and .='texture')	and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D')) and
                      not((local-name()='containerField' and .='fontStyle')	and (local-name(..)='FontStyle')) and
                      not((local-name()='containerField' and .='texCoord')	and (local-name(..)='TextureCoordinate' or local-name(..)='TextureCoordinateGenerator')) and
                      not((local-name()='containerField' and .='textureTransform')	and (local-name(..)='TextureTransform'))" />
        <xsl:variable name="notDefaultContainerField3"
                      select="not((local-name()='containerField' and .='geometry')	and
                      ((local-name(..)='Arc2D') or (local-name(..)='ArcClose2D') or (local-name(..)='Circle2D') or (local-name(..)='Disk2D') or (local-name(..)='Polyline2D') or (local-name(..)='Polypoint2D') or (local-name(..)='Rectangle2D') or (local-name(..)='TriangleSet2D') or contains(local-name(..),'QuadSet'))) and
                      not((local-name()='containerField' and .='voxels')	and
                      ((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))) and
                      not((local-name()='containerField' and .='renderStyle')	and
                      ((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')))" />
        <xsl:variable name="notDefaultCAD"
                      select="not((local-name(..)='CADAssembly' or local-name(..)='CADFace' or local-name(..)='CADLayer') and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not(local-name(..)='CADPart' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
					   (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultDIS1"
                      select="not((local-name(..)='EspduTransform' or contains(local-name(..),'Pdu')) and
                      ((starts-with(local-name(),'is')) or
                      (local-name()='address' and (.='localhost')) or
                      (local-name()='enabled' and (.='true')) or
                      (local-name()='networkMode' and (.='standAlone')) or
                      (local-name()='rtpHeaderExpected' and (.='false')) or
                      (local-name()='readInterval'  and (.='.1' or .='0.1')) or
                      (local-name()='writeInterval'  and (.='1' or .='1.0')) or
                      (((local-name()='applicationID') or (local-name()='munitionApplicationID') or (local-name()='whichGeometry')) and (.='1')) or
                      ((contains(local-name(),'ntityID') or contains(local-name(),'iteID') or (local-name()='applicationID')) and (.='0')) or
                      ((local-name()='port' or local-name()='multicastRelayPort' or local-name()='fireMissionIndex') and (.='0'))))" />
        <!-- ='' ='1' '' geoCoords='0 0 0' geoSystem='"GD" "WE"' '1' munitionSiteID='0' ='' '0' '0' -->
        <xsl:variable name="notDefaultDIS2"
                      select="not(local-name(..)='EspduTransform' and
                      ((((local-name()='collisionType') or (local-name()='detonationResult')) and (.='0')) or
                      (((local-name()='detonationLocation') or (local-name()='detonationRelativeLocation'))  and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='eventApplicationID'  and (.='1')) or
                      (((local-name()='eventEntityID') or (local-name()='eventNumber') or (local-name()='eventSiteID'))  and (.='0')) or
                      ((local-name()='fired1' or local-name()='fired2') and (.='false')) or
                      (local-name()='deadReckoning'  and (.='0')) or
                      ((local-name()='articulationParameterCount' or local-name()='entityCategory' or local-name()='entitySubcategory' or local-name()='entityCountry' or local-name()='entityDomain' or local-name()='entityExtra' or local-name()='entityKind' or local-name()='entitySpecific' or local-name()='eventApplicationID' or local-name()='firingRange' or local-name()='firingRate' or local-name()='fuse' or local-name()='warhead' or local-name()='forceID' or local-name()='munitionQuantity' or local-name()='munitionApplicationID') and (.='0')) or
                      ((local-name()='linearVelocity' or local-name()='linearAcceleration' or local-name()='munitionStartPoint' or local-name()='munitionEndPoint') and (.='0 0 0'))))" />
        <xsl:variable name="notDefaultDIS3"
                      select="not(local-name(..)='ReceiverPdu' and
                      (((local-name()='radioID' or local-name()='receiverState' or starts-with(local-name(),'transmitter')) and (.='0')) or
                      (local-name()='receiverPower'  and (.='0' or .='0.0')))) and
                      not(local-name(..)='SignalPdu' and
                      (((local-name()='radioID' or local-name()='encodingScheme' or local-name()='tdlType' or local-name()='sampleRate' or local-name()='samples' or local-name()='dataLength') and (.='0')))) and
                      not(local-name(..)='TransmitterPdu' and
                      (((local-name()='radioID' or starts-with(local-name(),'antennaPattern') or starts-with(local-name(),'crypto') or local-name()='frequency' or local-name()='inputSource' or local-name()='lengthOfModulationParameters' or starts-with(local-name(),'modulationType') or starts-with(local-name(),'radioEntityType') or local-name()='transmitFrequencyBandwidth' or local-name()='transmitState') and (.='0')) or
                      (local-name()='power'  and (.='0' or .='0.0')) or
                      ((contains(local-name(),'antennaLocation') and (.='0 0 0')))))" />
        <xsl:variable name="notDefaultDIS4"
                      select="not(local-name(..)='DISEntityManager' and
                      (((local-name()='applicationID') and (.='0')) or
                      (local-name()='address' and (.='localhost')) or
                      ((local-name()='port' or local-name()='siteID') and (.='0')))) and
                      not(local-name(..)='DISEntityTypeMapping' and 
                      ((local-name()='containerField') and (.='mapping')) or
                      ((local-name()='category' or local-name()='country' or local-name()='domain' or local-name()='extra' or local-name()='kind' or local-name()='specific' or local-name()='subcategory') and (.='0')))" />
        <xsl:variable name="notDefaultGeo"
                      select="not((starts-with(local-name(..),'Geo') or (local-name(..)='EspduTransform') or contains(local-name(..),'Pdu')) and 
                      ((local-name()='geoCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='geoCoords' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not(local-name(..)='GeoLOD' 	  and 
                      ((local-name()='range' and (.='10' or .='10.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not(local-name(..)='GeoViewpoint' and
                      ((local-name()='speedFactor' and (.='1' or .='1.0')) or
						(local-name()='headlight' and (.='true')) or
						(local-name()='jump' and (.='true')) or
						(local-name()='navType' and (.='&quot;EXAMINE&quot; &quot;ANY&quot;')) or
						(local-name()='orientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
						(local-name()='position' and (.='0 0 100000' or .='0.0 0.0 100000.0')) or
                        (local-name()='fieldOfView' and (.='0.785398' or .='.785398' or .='0.7854' or .='.7854')) or
                        (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;')))) and
                      not((local-name(..)='GeoCoordinate' or local-name(..)='GeoOrigin') and
                      ((local-name()='rotateYUp' and (.='false')) or
                      (local-name()='containerField' and (.='geoOrigin')) or
                      (local-name()='geoSystem' and (translate(.,',','')='&quot;GD&quot; &quot;WE&quot;'))))" />
        <xsl:variable name="notDefaultHAnim1"
                      select="not( local-name(..)='HAnimJoint' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='limitOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='stiffness' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSegment' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
                       (local-name()='centerOfMass' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='mass' and (.='0' or .='0.0')) or
                       (local-name()='momentsOfInertia' and
                        (.='0 0 0 0 0 0 0 0 0' or .='0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimSite' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultHAnim2"
                      select="not( local-name(..)='HAnimHumanoid' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='bboxCenter' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='bboxSize' and (.='-1 -1 -1' or .='-1.0 -1.0 -1.0')) or
                       (local-name()='center' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                       (local-name()='rotation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='scale' and (.='1 1 1' or .='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')) or
                       (local-name()='translation' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not( local-name(..)='HAnimDisplacer' and
                      ((local-name()='containerField' and (.='children')) or
                       (local-name()='weight' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultNurbs"
                      select="not((local-name(..)='NurbsCurve' or local-name(..)='NurbsCurve2D') and
                      ((local-name()='tessellation' and (.='0')) or
                      (local-name()='closed' and (.='false')) or
                      (local-name()='order' and (.='3')))) and
                      not(local-name(..)='NurbsSet' and
                      ((local-name()='tessellationScale' and (.='1' or .='1.0')) or 
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='NurbsOrientationInterpolator' or local-name(..)='NurbsPositionInterpolator') and
                      ((local-name()='order' and (.='3' or .='3.0')))) and
                      not((local-name(..)='NurbsSurface' or local-name(..)='NurbsPatchSurface' or local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsTextureSurface' or local-name(..)='NurbsTrimmedSurface') and
                      ((local-name()='uTessellation' and (.='0')) or
                      (local-name()='vTessellation' and (.='0')) or
                      (local-name()='uDimension' and (.='0')) or
                      (local-name()='vDimension' and (.='0')) or
                      (local-name()='uOrder' and (.='3')) or
                      (local-name()='vOrder' and (.='3')) or
                      (local-name()='ccw' and (.='true')) or
                      (local-name()='solid' and (.='true')) or
                      ((local-name()='uClosed' or local-name()='vClosed') and (.='false')))) and
                      not((local-name(..)='NurbsSurfaceInterpolator' or local-name(..)='NurbsTextureCoordinate') and
                      ((local-name()='uDimension' and (.='0')) or
                      (local-name()='vDimension' and (.='0')) or
                      (local-name()='uOrder' and (.='3')) or
                      (local-name()='vOrder' and (.='3')))) and
                      not((local-name(..)='NurbsCurve' or local-name(..)='NurbsSwungSurface') and
                      ((local-name()='ccw' or local-name()='solid') and (.='true'))) and
                      not((contains(local-name(..),'SplinePositionInterpolator') or local-name(..)='SplineScalarInterpolator' or local-name(..)='SquadOrientationInterpolator') and
                      ((local-name()='closed' or local-name()='normalizeVelocity') and (.='false')))" />
        <xsl:variable name="notDefaultGeometry2D"
                      select="not((local-name(..)='Arc2D' or local-name(..)='ArcClose2D') and
                      ((local-name()='startAngle' and (.='0' or .='0.0')) or
                       (local-name()='endAngle' and (.='1.5708' or .='1.570796')) or
                       (local-name()='radius' and (.='1' or .='1.0')) or
                       (local-name()='solid' and (.='false')))) and
                      not(local-name(..)='Circle2D' and
                      ((local-name()='radius' and (.='1' or .='1.0')))) and
                      not(local-name(..)='Disk2D' and
                      ((local-name()='innerRadius' and (.='0' or .='0.0')) or
                       (local-name()='outerRadius' and (.='1' or .='1.0')) or
                       (local-name()='solid' and (.='false')))) and
                      not((local-name(..)='Rectangle2D') and
                      ((local-name()='size' and ((.='2 2') or (.='2.0 2.0'))) or
                       (local-name()='solid' and (.='false')))) and
                      not((local-name(..)='TriangleSet2D') and
                      ((local-name()='solid' and (.='false')) or
                       (local-name()='closureType' and (.='PIE'))))" />
        <xsl:variable name="notDefaultVolume"
                      select="not(((local-name(..)='IsoSurfaceVolumeData') or (local-name(..)='SegmentedVolumeData') or (local-name(..)='VolumeData'))	and
                      ((local-name()='dimensions' and (.='1 1 1' or .='1.0 1.0 1.0')) or 
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ( local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      ((local-name()='contourStepSize' or local-name()='surfaceTolerance') and (.='0' or .='0.0'))) and
                      not(((local-name(..)='BlendedVolumeStyle') or (local-name(..)='BoundaryEnhancementVolumeStyle') or (local-name(..)='CartoonVolumeStyle') or (local-name(..)='ComposedVolumeStyle') or (local-name(..)='EdgeEnhancementVolumeStyle') or (local-name(..)='OpacityMapVolumeStyle') or (local-name(..)='ProjectionVolumeStyle') or (local-name(..)='ShadedVolumeStyle') or (local-name(..)='SilhouetteEnhancementVolumeStyle') or (local-name(..)='ToneMappedVolumeStyle')) and
                      (local-name()='enabled' and .='true')) and
                      not((local-name(..)='BlendedVolumeStyle')	and
                      (((local-name()='weightConstant1' or local-name()='weightConstant2') and (.='.5' or .='0.5')) or
                       ((local-name()='weightFunction1' or local-name()='weightFunction2') and (.='CONSTANT')))) and
                      not((local-name(..)='BoundaryEnhancementVolumeStyle')	and
                      (((local-name()='boundaryOpacity') and (.='.9' or .='0.9')) or
                       ((local-name()='opacityFactor') and (.='2' or .='2.0')) or
                       ((local-name()='retainedOpacity') and (.='.2' or .='0.2')))) and
                      not((local-name(..)='CartoonVolumeStyle')	and
                      (((local-name()='colorSteps') and (.='4')) or
                       ((local-name()='orthogonalColor') and (.='1 1 1 1' or .='1.0 1.0 1.0 1.0')) or
                       ((local-name()='parallelColor') and (.='0 0 0 1' or .='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='EdgeEnhancementVolumeStyle')	and
                      (((local-name()='gradientThreshold') and (.='.4' or .='0.4')) or
                       ((local-name()='edgeColor') and (.='0 0 0 1' or .='0.0 0.0 0.0 1.0')))) and
                      not((local-name(..)='IsoSurfaceVolumeData')	and
                      (((local-name()='surfaceTolerance') and (.='0' or .='0.0')))) and
                      not((local-name(..)='ProjectionVolumeStyle')	and
                      (((local-name()='intensityThreshold') and (.='0' or .='0.0')) or
                       ((local-name()='type') and (.='MAX')))) and
                      not((local-name(..)='ShadedVolumeStyle')	and
                      (((local-name()='lighting' or local-name()='shadows') and (.='false')) or
                       ((local-name()='phaseFunction') and (.='Henyey-Greenstein')))) and
                      not((local-name(..)='SilhouetteEnhancementVolumeStyle')	and
                      (((local-name()='silhouetteBoundaryOpacity') and (.='0' or .='0.0')) or
                       ((local-name()='silhouetteRetainedOpacity') and (.='1' or .='1.0')) or
                       ((local-name()='silhouetteSharpness') and (.='.5' or .='0.5')))) and
                      not((local-name(..)='ToneMappedVolumeStyle')	and
                      (((local-name()='colorSteps') and (.='4')) or
                       ((local-name()='coolColor') and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0')) or
                       ((local-name()='warmColor') and (.='1 1 0 0' or .='1.0 1.0 0.0 0.0'))))" />
        <xsl:variable name="notDefaultFollower"
                      select="not(contains(local-name(..),'Chaser') and
                      ((local-name()='duration' and (.='1' or .='1.0')))) and
                      not(contains(local-name(..),'Damper') and
                      ((local-name()='tau' and (.='.3' or .='0.3')) or
                      (local-name()='tolerance' and (.='-1' or .='-1.0')) or
                      (local-name()='order ' and (.='3')))) and
                      not(contains(local-name(..),'Damper') and
                      (local-name()='order' and (.='3'))) and
                      not((local-name(..)='ColorChaser' or local-name(..)='ColorDamper') and
                      ((local-name()='initialDestination' and (.='.8 .8 .8' or .='0.8 0.8 0.8')) or
                      (local-name()='initialValue' and (.='.8 .8 .8' or .='0.8 0.8 0.8')))) and
                      not((local-name(..)='CoordinateChaser' or local-name(..)='CoordinateDamper' or local-name(..)='PositionChaser' or local-name(..)='PositionDamper') and
                      ((local-name()='initialDestination' and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='initialValue' and (.='0 0 0' or .='0.0 0.0 0.0')))) and
                      not((local-name(..)='PositionChaser2D' or local-name(..)='PositionDamper2D') and
                      ((local-name()='initialDestination' and (.='0 0' or .='0.0 0.0')) or
                      (local-name()='initialValue' and (.='0 0' or .='0.0 0.0')))) and
                      not((local-name(..)='OrientationChaser' or local-name(..)='OrientationDamper') and
                      ((local-name()='initialDestination' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 0 1 0' or .='0.0 0.0 1.0 0.0')) or
                      (local-name()='initialValue' and (.='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 0 1 0' or .='0.0 0.0 1.0 0.0')))) and
                      not((local-name(..)='ScalarChaser' or local-name(..)='ScalarDamper') and
                      ((local-name()='initialDestination' and (.='0' or .='0.0')) or
                      (local-name()='initialValue' and (.='0' or .='0.0'))))" />
        <xsl:variable name="notDefaultShader"
                      select="not((local-name(..)='FloatVertexAttribute') and ((local-name()='numComponents' and (.='4'))))" />
		              <!-- retained due to importance:
                      and
                      not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and ((local-name()='type' and (.='VERTEX')))) -->
        <xsl:variable name="notDefaultRigidBodyPhysics"
                      select="not((local-name(..)='CollidableOffset' or local-name(..)='CollidableShape') and
                      (((local-name()='enabled') and (.='true')) or
                      ((local-name()='rotation') and (.='0 0 1 0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0.0 0.0 1.0 0.0')) or
                      ((local-name()='translation') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='bboxCenter')	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='bboxSize')	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='CollisionSpace') and
                      ((local-name()='enabled' and (.='true')) or
                      (local-name()='useGeometry' and (.='false')) or
                      (local-name()='bboxCenter'	and	(.='0 0 0' or .='0.0 0.0 0.0')) or
                      (local-name()='bboxSize'	and	(.='-1 -1 -1' or .='-1.0 -1.0 -1.0')))) and
                      not((local-name(..)='BallJoint' or local-name(..)='DoubleAxisHingeJoint' or local-name(..)='MotorJoint' or local-name(..)='SingleAxisHingeJoint' or local-name(..)='SliderJoint' or local-name(..)='UniversalJoint') and
                      ((local-name()='forceOutput')	and	(.='&quot;NONE&quot;'))) and
                      not((local-name(..)='BallJoint') and
                      ((local-name()='anchorPoint')	and	(.='0 0 0' or .='0.0 0.0 0.0'))) and
                      not((local-name(..)='BoundedPhysicsModel') and
                      ((local-name()='enabled')	and	(.='true'))) and
                      not((local-name(..)='ForcePhysicsModel') and
                      ((local-name()='enabled')	and	(.='true')) or
                      (local-name()='force'	and	(.='0 -9.8 0' or .='0.0 -9.8 0.0'))) and
                      not((local-name(..)='WindPhysicsModel') and
                      ((local-name()='enabled')	and	(.='true')) or
                      (local-name()='gustiness'	and	(.='0.1')) or
                      (local-name()='speed'	and	(.='0.1')) or
                      (local-name()='turbulence'	and	(.='0' or .='0.0')) or
                      (local-name()='direction'	and	(.='1 0 0' or .='1.0 0.0 0.0'))) and
                      not((local-name(..)='CollisionCollection') and
                      (((local-name()='appliedParameters') and (.='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce') and (.='0' or .='0.0')) or
                      ((local-name()='enabled') and (.='true')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipFactors' or local-name()='surfaceSpeed') and (.='0 0' or .='0.0 0.0')) or
                      ((local-name()='minBounceSpeed') and (.='.1' or .='0.1')) or
                      ((local-name()='softnessConstantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='CollisionSensor') and
                      (local-name()='enabled' and .='true')) and
                      not((local-name(..)='Contact') and
                      (((local-name()='appliedParameters') and (.='&quot;BOUNCE&quot;')) or
                      ((local-name()='bounce' or local-name()='depth' or local-name()='minbounceSpeed') and (.='0' or .='0.0')) or
                      ((local-name()='contactNormal') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='frictionCoefficients' or local-name()='slipCoefficients' or local-name()='surfaceSpeed') and (.='0 0' or .='0.0 0.0')) or
                      ((local-name()='frictionDirection') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='position') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='softnessConstantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='softnessErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='DoubleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='desiredAngularVelocity1' or local-name()='desiredAngularVelocity2' or local-name()='maxTorque1' or local-name()='maxTorque2' or local-name()='stop1Bounce' or local-name()='suspensionForce') and (.='0' or .='0.0')) or
                      ((local-name()='maxAngle1') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle1') and (.='-3.1416' or .='-3.14159' or .='-3.141593' or .='-3.1415926' or .='-3.14159263' or .='-3.141592653')) or
                      ((local-name()='stop1Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ConstantForceMix') and (.='.001' or .='0.001')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='suspensionErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='MotorJoint') and
                      (((local-name()='axis1Angle' or local-name()='axis2Angle' or local-name()='axis3Angle' or local-name()='axis1Torque' or local-name()='axis2Torque' or local-name()='axis3Torque' or local-name()='stop1Bounce' or local-name()='stop2Bounce' or local-name()='stop3Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection' or local-name()='stop3ErrorCorrection') and (.='.8' or .='0.8')) or
                      ((local-name()='motor1Axis' or local-name()='motor2Axis' or local-name()='motor3Axis') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='enabledAxes') and (.='1')) or
                      ((local-name()='autoCalc') and (.='false')))) and
                      not((local-name(..)='RigidBody') and
                      (((local-name()='angularDampingFactor') and (.='.001' or .='0.001')) or
                      ((local-name()='angularVelocity' or local-name()='centerOfMass' or local-name()='finiteRotationAxis' or local-name()='linearVelocity' or local-name()='position') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (.='0' or .='0.0')) or
                      ((local-name()='finiteRotationAxis') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='mass') and (.='1' or .='1.0')) or
                      ((local-name()='enabled' or local-name()='useGlobalGravity') and (.='true')) or
                      ((local-name()='autoDamp' or local-name()='autoDisable' or local-name()='fixed' or local-name()='useFiniteRotation') and (.='false')) or
                      ((local-name()='inertia') and (.='1 0 0 0 1 0 0 0 1' or .='1.0 0 0 0 1.0 0 0 0 1.0' or .='1.0 0.0 0.0 0.0 1.0 0.0 0.0 0.0 1.0')) or
                      ((local-name()='linearDampingFactor') and (.='.001' or .='0.001')) or
                      ((local-name()='orientation') and (.='0 0 1 0' or .='0.0 0.0 1.0 0.0' or .='0 1 0 0' or .='0.0 1.0 0.0 0.0' or .='0 1 0 0.0'  or .='0 0 1 0.0')))) and
                      not((local-name(..)='RigidBodyCollection') and
                      (((local-name()='autoDisable' or local-name()='preferAccuracy') and (.='false')) or
                      ((local-name()='enabled') and (.='true')) or
                      ((local-name()='constantForceMix') and (.='.0001' or .='0.0001')) or
                      ((local-name()='contactSurfaceThickness' or local-name()='disableAngularSpeed' or local-name()='disableLinearSpeed' or local-name()='disableTime') and (.='0' or .='0.0')) or
                      ((local-name()='errorCorrection') and (.='.8' or .='0.8')) or
                      ((local-name()='gravity') and (.='0 -9.8 0' or .='0.0 -9.8 0.0')) or
                      ((local-name()='iterations') and (.='10')) or
                      ((local-name()='maxCorrectionSpeed') and (.='-1' or .='-1.0')))) and
                      not((local-name(..)='SingleAxisHingeJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='maxAngle') and (.= '3.1416' or .= '3.14159' or .= '3.141593' or .= '3.1415926' or .= '3.14159263' or .= '3.141592653')) or
                      ((local-name()='minAngle') and (.='-3.1416' or .='-3.14159' or .='-3.141593' or .='-3.1415926' or .='-3.14159263' or .='-3.141592653')) or
                      ((local-name()='stopBounce') and (.='0' or .='0.0')) or
                      ((local-name()='stopErrorCorrection') and (.='.8' or .='0.8')))) and
                      not((local-name(..)='SliderJoint') and
                      (((local-name()='axis') and (.='0 1 0' or .='0.0 1.0 0.0')) or
                      ((local-name()='maxSeparation' or local-name()='stopErrorCorrection') and (.='1' or .='1.0')) or
                      ((local-name()='minSeparation' or local-name()='sliderForce' or local-name()='stopBounce') and (.='0' or .='0.0')) or
                      ((local-name()='stopErrorCorrection') and (.='1' or .='1.0')))) and
                      not((local-name(..)='UniversalJoint') and
                      (((local-name()='anchorPoint' or local-name()='axis1' or local-name()='axis2') and (.='0 0 0' or .='0.0 0.0 0.0')) or
                      ((local-name()='stop1Bounce' or local-name()='stop2Bounce') and (.='0' or .='0.0')) or
                      ((local-name()='stop1ErrorCorrection' or local-name()='stop2ErrorCorrection') and (.='.8' or .='0.8'))))" />
        <xsl:variable name="notFieldSpace"
                      select="not(local-name(..)='field'  and	(local-name()='space' or local-name()='xml:space')) and
                      not(local-name(..)='Script' and	(local-name()='space' or local-name()='xml:space'))" />
        <xsl:if test="$notImplicitEvent1 and
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
                not(local-name()='containerField' and .='') and
                not(local-name()='class' and .='') and
                $notFieldSpace and
                not(contains(local-name(),'set_')) and
                not(contains(local-name(),'_changed')) and
                ." >
            <xsl:variable name="attributeTooltip">
                <xsl:choose>
                    <xsl:when test="(local-name(..)='X3D') and (local-name()='profile')">
                        <xsl:choose>
                            <xsl:when test="(.='Core')">
                                <xsl:text>X3D Core Profile is minimalist, must add components to gain node support</xsl:text>
                            </xsl:when>
                            <xsl:when test="(.='Interchange')">
                                <xsl:text>X3D Interchange Profile supports simple geometry and animation</xsl:text>
                            </xsl:when>
                            <xsl:when test="(.='Interactive')">
                                <xsl:text>X3D Interactive Profile supports Interchange geometry and animation, plus basic user interaction</xsl:text>
                            </xsl:when>
                            <xsl:when test="(.='Immersive')">
                                <xsl:text>X3D Immersive Profile supports most nodes, similar to VRML97</xsl:text>
                            </xsl:when>
                            <xsl:when test="(.='CADInterchange')">
                                <xsl:text>X3D CADInterchange Profile supports Interchange geometry and animation, plus CAD structural nodes</xsl:text>
                            </xsl:when>
                            <xsl:when test="(.='Full')">
                                <xsl:text>X3D Full Profile supports all nodes and components</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>unrecognized profile, erroneous profile value!</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:when>
                    <xsl:when test="(local-name(..)='X3D' and local-name()='noNamespaceSchemaLocation')">
                        <xsl:text>XML namespace for X3D Graphics schema validation</xsl:text>
                    </xsl:when>
                    <xsl:when test="(local-name()='url') or contains(local-name(),'Url')">
                        <xsl:text>uniform resource locator (url) list of relative or absolute file addresses, performed in order until resource retrieval succeeds</xsl:text>
                    </xsl:when>
                    <xsl:when test="((local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare' or local-name(..)='field' or local-name(..)='fieldValue') and local-name()='documentation')">
                        <xsl:text>documentation url providing further information for this </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                    </xsl:when>
                    <xsl:when test="((local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare' or local-name(..)='field' or local-name(..)='fieldValue') and local-name()='appinfo')">
                        <xsl:text>application information for this </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                    </xsl:when>
                </xsl:choose>
            </xsl:variable>
            <!-- if attribute includes an apostrophe but not a quote, handle with non-canonical delimiter. -->
            <xsl:variable name="attributeDelimiter">
                <xsl:choose>
                    <xsl:when test="contains(.,$apos) and not(contains(.,$quot))">
						<xsl:value-of select="$quot"/>
						<!-- debug
						<xsl:message>
							<xsl:text>$attributeDelimiter=</xsl:text>
							<xsl:value-of select="$quot"/>
							<xsl:text> since .=</xsl:text>
							<xsl:value-of select="."/>
						</xsl:message> -->
					</xsl:when>
					<xsl:otherwise>
						<xsl:value-of select="$apos"/>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>
            <!-- good attribute found, output it -->
            <xsl:choose>
                <!-- break to new line prior to each of Background url fields -->
                <xsl:when test="(local-name()='url') or contains(local-name(), 'Url')">
                    <xsl:text disable-output-escaping="yes">&#10;&lt;br /&gt;&#10;&amp;#160;&amp;#160;</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text> <!-- &nbsp; -->
                </xsl:otherwise>
            </xsl:choose>
            <!-- save value as variable $value for later use in constraint pattern matching -->
            <xsl:variable name="value" select="."/>
            <!-- style attribute name and add tooltip, as appropriate -->
            <xsl:if test="string-length($attributeTooltip) > 0">
                <xsl:text disable-output-escaping="yes">&lt;span title="</xsl:text>
                <xsl:value-of select="$attributeTooltip"/>
                <xsl:text disable-output-escaping="yes">"&gt;</xsl:text>
            </xsl:if>
            <xsl:choose>
                <xsl:when test="((local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare' or local-name(..)='field' or local-name(..)='fieldValue') and (local-name()='appinfo'))">
                    <span class="gray">
                        <xsl:value-of select="local-name()"/>
                    </span>
                </xsl:when>
                <xsl:when test="(local-name()='description') or (local-name()='documentation')">
                    <span class="attribute">
                        <xsl:value-of select="local-name()" disable-output-escaping="yes"/><!-- I18N -->
                    </span>
                </xsl:when>
                <xsl:when test="(local-name(..)='X3D' and local-name()='noNamespaceSchemaLocation')">
                    <!-- xmlns:xsd attribute typically not seen, so insert it into pretty-print HTML -->
                    <span title="XML namespace for XML Schema validation">
                        <xsl:if test="not(../@xsd)"> <!-- not(../@xmlns:xsd) and -->
                            <span class="attribute">
                                <xsl:text>xmlns:xsd</xsl:text>
                            </span>
                            <!-- note formatting is to avoid HTML space within linked quoted reference -->
                            <xsl:text>='</xsl:text><xsl:element name="a">
                            <xsl:attribute name="href">
                                <xsl:text>http://www.w3.org/2001/XMLSchema-instance</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:text>_blank</xsl:text>
                            </xsl:attribute>
                            <xsl:text>http://www.w3.org/2001/XMLSchema-instance</xsl:text></xsl:element><xsl:text>'&#10;</xsl:text>
                        </xsl:if>
                    </span>
                    <!-- now finish with encountered attribute -->
                    <span title="XML namespace for X3D Graphics schema validation">
                        <span class="attribute">
                            <xsl:text>xsd:</xsl:text>
                            <xsl:value-of select="local-name()"/>
                        </span>
                    </span>
                </xsl:when>
                <xsl:otherwise>
                    <span class="attribute">
                        <xsl:value-of select="local-name()"/>
                    </span>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>=</xsl:text>
			<xsl:value-of select="$attributeDelimiter"/>
            <!-- style payload data, as appropriate -->
            <xsl:choose>
                <!-- handle special cases first -->
                <xsl:when test="not(.) or .=''">
                    <xsl:comment>no value, no action</xsl:comment>
                </xsl:when>
                <xsl:when test="local-name()='DEF'">
                    <span class="idName" title="DEF name is a unique ID for a given node">
                        <xsl:value-of select="."/>
                    </span>
                </xsl:when>
                <xsl:when test="local-name()='USE' or (local-name(..)='ROUTE' and contains(local-name(),'Node'))">
                    <xsl:variable name="refName" select="."/>
                    <xsl:choose>
                        <xsl:when test="//*[@DEF=$refName]">
                            <xsl:element name="a">
                                <xsl:attribute name="title">
                                    <xsl:text>go to the original DEF node definition</xsl:text>
                                </xsl:attribute>
                                <xsl:attribute name="href">
                                    <xsl:text>#</xsl:text>
                                    <xsl:value-of select="."/>
                                </xsl:attribute>
                                <xsl:attribute name="class">
                                    <xsl:text>idName</xsl:text>
                                </xsl:attribute>
                                <xsl:value-of select="."/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:otherwise>
                            <span class="idName">
                                <!-- TODO escape-special-characters
                                <xsl:value-of select="."/> -->
                                <xsl:call-template name="escape-special-characters">
                                    <xsl:with-param name="inputString" select="."/>
                                </xsl:call-template>
                            </span>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:when test="local-name(..)='meta' and ../@name='warning'">
                    <b class="warning">
                        <xsl:call-template name="URL-ize-MFString-elements">
                            <xsl:with-param name="list" select="normalize-space(.)"/>
                        </xsl:call-template>
                    </b>
                </xsl:when>
                <xsl:when test="local-name(..)='meta' and ../@name='error'">
                    <b class="error">
                        <xsl:call-template name="URL-ize-MFString-elements">
                            <xsl:with-param name="list" select="normalize-space(.)"/>
                        </xsl:call-template>
                    </b>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and local-name()='content') and ((../@name='description') or (../@name='documentation') or (../@name='info'))">
                    <span class="plain">
						<xsl:call-template name="escape-special-characters">
							<xsl:with-param name="inputString" select="."/>
						</xsl:call-template>
                    </span>
                </xsl:when>
                <xsl:when test="((local-name(..)='field' or local-name(..)='fieldValue') and local-name()='appinfo')">
                    <span class="gray">
                        <xsl:value-of select="."/>
                    </span>
                </xsl:when>
                <xsl:when test="(local-name(..)='ProtoInstance' and local-name()='name') and (//ProtoDeclare[@name=$value] or //ExternProtoDeclare[@name=$value])">
                    <xsl:element name="a">
                        <xsl:attribute name="title">
                            <xsl:choose>
                                <xsl:when test="//ProtoDeclare[@name=$value]">
                                    <xsl:text>go to the defining ProtoDeclare for this prototype instance</xsl:text>
                                </xsl:when>
                                <xsl:when test="//ExternProtoDeclare[@name=$value]">
                                    <xsl:text>go to the defining ExternProtoDeclare for this prototype instance</xsl:text>
                                </xsl:when>
                            </xsl:choose>
                        </xsl:attribute>
                        <xsl:attribute name="href">
                            <!-- build correct bookmark link for ProtoInstance name -->
                            <xsl:text>#</xsl:text>
                            <xsl:choose>
                                <xsl:when test="//ProtoDeclare[@name=$value]">
                                    <xsl:text>ProtoDeclare_</xsl:text>
                                </xsl:when>
                                <xsl:when test="//ExternProtoDeclare[@name=$value]">
                                    <xsl:text>ExternProtoDeclare_</xsl:text>
                                </xsl:when>
                            </xsl:choose>
                            <xsl:value-of select="."/>
                        </xsl:attribute>
                        <xsl:attribute name="class">
                            <xsl:text>prototype</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="."></xsl:value-of>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='connect' and local-name()='nodeField')">
                    <span class="prototype" title="connect interface events to this field in given node">
                        <xsl:value-of select="."></xsl:value-of>
                    </span>
                </xsl:when>
                <xsl:when test="(local-name(..)='connect' and local-name()='protoField')">
                    <span title="field interface connecting events into the prototype interior">
                        <xsl:text disable-output-escaping="yes">&lt;span class="prototype"&gt;</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to the protoField definition</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <!-- build correct bookmark link for protoField name -->
                                <xsl:text>#</xsl:text>
                                <xsl:value-of select="//ProtoDeclare/@name"/>
                                <xsl:text>ProtoField_</xsl:text>
                                <xsl:value-of select="."/>
                            </xsl:attribute>
                            <xsl:attribute name="class">
                                <xsl:text>prototype</xsl:text>
                            </xsl:attribute>
                            <xsl:value-of select="."></xsl:value-of>
                        </xsl:element>
                        <xsl:text disable-output-escaping="yes">&lt;/span&gt;</xsl:text>
                    </span>
                </xsl:when>
                <xsl:when test="(contains(local-name(..),'Proto') or starts-with(local-name(..),'field')) and local-name()='name'">
                    <span class="prototype">
                        <xsl:value-of select="."></xsl:value-of>
                    </span>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'X3D-Edit, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'X3D-Edit, ')"/>
                    <span class="value">
                        <xsl:text>X3D-Edit, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'X3D-Edit 3.3, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'X3D-Edit 3.3, ')"/>
                    <span class="value">
                        <xsl:text>X3D-Edit 3.3, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'X3D-Edit 3.2, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'X3D-Edit 3.2, ')"/>
                    <span class="value">
                        <xsl:text>X3D-Edit 3.2, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'Xeena VRML importer, X3D-Edit 3.1, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'Xeena VRML importer, X3D-Edit 3.1, ')"/>
                    <span class="value">
                        <xsl:text>Xeena VRML importer, X3D-Edit 3.1, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'X3D-Edit 3.1, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'X3D-Edit 3.1, ')"/>
                    <span class="value">
                        <xsl:text>X3D-Edit 3.1, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'Vrml97ToX3dNist, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'Vrml97ToX3dNist, ')"/>
                    <span class="value">
                        <xsl:text>Vrml97ToX3dNist, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'Xj3D, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'Xj3D, ')"/>
                    <span class="value">
                        <xsl:text>Xj3D, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'FluxStudio, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'FluxStudio, ')"/>
                    <span class="value">
                        <xsl:text>FluxStudio, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'VivatyStudio, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'VivatyStudio, ')"/>
                    <span class="value">
                        <xsl:text>VivatyStudio, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'VizX3D, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'VizX3D, ')"/>
                    <span class="value">
                        <xsl:text>FluxStudio, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and starts-with(.,'Wings, ')">
                    <xsl:variable name="containedUrl" select="substring-after(.,'Wings, ')"/>
                    <span class="value">
                        <xsl:text>Wings, </xsl:text>
                    </span>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and (contains(.,'.xslt') or contains(.,'.java') or contains(.,'.c') or contains(.,'.m')) and not(contains(.,' '))">
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="."/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="."/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and contains(.,'http')">
                    <xsl:variable name="prefixProse"  select="substring-before(.,'http://')"/>
                    <xsl:variable name="containedUrl" select="substring-after (.,$prefixProse)"/>
                    <!--	<xsl:message>
                                        <xsl:text>$prefixProse=</xsl:text>
                                        <xsl:value-of select="$prefixProse"/>
                                        <xsl:text>, $containedUrl=</xsl:text>
                                        <xsl:value-of select="$containedUrl"/>
                                </xsl:message> -->
                    <xsl:if test="($prefixProse!='')">
                        <span class="value">
                            <xsl:value-of select="$prefixProse"/>
                        </span>
                    </xsl:if>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$containedUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$containedUrl"/>
                    </xsl:element>
                </xsl:when>
                <!-- tokenize and make single/multiple url references into actual <a href=""> links -->
                <xsl:when test=" (local-name()='url' or contains(local-name(), 'Url')) or
     ((local-name(..)='meta' and local-name()='content' and (../@name='identifier' or ../@name='url' or ../@name='license' or ../@name='example' or ../@name='title' or ../@name='reference' or ../@name='requires' or ../@name='drawing' or ../@name='image' or ../@name='Image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='MovingImage' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or ../@name='javadoc' or contains(../@name,'permission') or contains(../@name,'specificationUrl')) and not(contains(normalize-space(.),' ')))) or
     ((local-name(..)='field' or local-name(..)='fieldValue') and (contains(../@name, 'Url') or contains(../@name, 'url')) and (local-name() = 'value')) or
     ((local-name(..)='field' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare') and (local-name()='documentation')) or
                (contains(.,'http://') or contains(.,'https://') or contains(.,'ftp://') or contains(.,'sftp://') or contains(.,'mailto:') or contains(.,'./') or contains(.,'/'))">
                    <!--				 (starts-with(normalize-space(.),'http://') or starts-with(normalize-space(.),'https://'))">	-->
                    <!--	<xsl:if test="local-name(..)='Script'">
			<xsl:message>	<xsl:text>... found Script parent, attribute </xsl:text>
					<xsl:value-of select="local-name()"/>
					<xsl:text>, value=</xsl:text>
					<xsl:value-of select="."/>
			</xsl:message>
		</xsl:if>
	-->
                    <xsl:variable name="isUrlField" select="(local-name()='url' or contains(local-name(), 'Url'))"/>
                    <xsl:choose>
                        <xsl:when test="contains(../@name,'specificationSection')">
                            <xsl:text>&#10;</xsl:text>
                            <span class="value">
                                <xsl:value-of select="."/>
                            </span>
                        </xsl:when>
                        <xsl:when test="starts-with(normalize-space(.),'*')">
                            <!-- *default example values* -->
                            <xsl:text>&#10;</xsl:text>
                            <span class="value">
                                <xsl:value-of select="."/>
                            </span>
                        </xsl:when>
                        <xsl:when test="starts-with(normalize-space(.),'ecmascript') or starts-with(normalize-space(.),'javascript')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:element name="pre">
                                <xsl:value-of select="."/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:when test="$isUrlField">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="."/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(.,'&quot;')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(.)"/>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(.,'http://')">
                            <!--	<xsl:message><xsl:text>... found http:// in reference... </xsl:text></xsl:message> -->
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'http://')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(substring-after(.,substring-before(.,'http://')))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(.,'https://')">
                            <!--	<xsl:message><xsl:text>... found https:// in reference... </xsl:text></xsl:message> -->
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'https://')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(substring-after(.,substring-before(.,'https://')))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <!-- check sftp before ftp -->
                        <xsl:when test="contains(.,'sftp://')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'sftp://')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(substring-after(.,substring-before(.,'sftp://')))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(.,'ftp://')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'ftp://')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(substring-after(.,substring-before(.,'ftp://')))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(.,'mailto:')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'mailto:')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="substring-after(.,substring-before(.,'mailto:'))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="($baseUrlAvailable='false')">
                            <span class="value">
                                <xsl:value-of select="."/>
                            </span>
                        </xsl:when>
                        <xsl:when test="contains(.,'../')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'../')"/>
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="substring-after(.,substring-before(.,'../'))"/>
                                </xsl:attribute>
                                <!-- for meta links, staying in frame (rather than external target) works better for multiframe archive collections
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                -->
                                <xsl:value-of select="substring-after(.,substring-before(.,'../'))"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:when test="contains(.,'./')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'./')"/>
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="substring-after(.,substring-before(.,'./'))"/>
                                </xsl:attribute>
                                <!-- for meta links, staying in frame (rather than external target) works better for multiframe archive collections
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                -->
                                <xsl:value-of select="substring-after(.,substring-before(.,'./'))"/>
                            </xsl:element>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="normalize-space(.)"/>
                                </xsl:attribute>
                                <!-- for meta links, staying in frame (rather than external target) works better for multiframe archive collections
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                -->
                                <xsl:value-of select="normalize-space(.)"/>
                            </xsl:element>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:when test="local-name(..)='meta' and local-name()='content' and (../@name='mail' or ../@name='email' or ../@name='e-mail' or ../@name='contact') and contains(.,'@')">
                    <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>select to send mail</xsl:text>
                            </xsl:attribute>
                        <xsl:attribute name="href">
                            <xsl:if test="not(starts-with(normalize-space(.),'mailto:'))">
                                <xsl:text>mailto:</xsl:text>
                            </xsl:if>
                            <xsl:value-of select="normalize-space(.)"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="normalize-space(.)"/>
                    </xsl:element>
                </xsl:when>
                <xsl:when test="(local-name(..)='X3D' and local-name()='noNamespaceSchemaLocation')">
                    <span class="value">
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>XML namespace for X3D Graphics schema validation</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:value-of select="."/>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:text>_blank</xsl:text>
                            </xsl:attribute>
                            <xsl:value-of select="."/>
                        </xsl:element>
                    </span>
                </xsl:when>
                <xsl:when test="(local-name(..)='Extrusion' and local-name()='crossSection')">
                    <!-- link to SVG diagram -->
                    <xsl:variable name="svgFilename">
                        <xsl:value-of select="substring-before(//head/meta[@name='title']/@content,'.x3d')"/>
                        <xsl:text>.Extrusion</xsl:text>
                        <xsl:value-of select="count(preceding::*[local-name()='Extrusion'])+1"/>
                        <xsl:text>.svg</xsl:text>
                    </xsl:variable>
                    <!--	<xsl:message><xsl:text>svgFilename=</xsl:text><xsl:value-of select="$svgFilename"/></xsl:message> -->
                    <xsl:element name="a">
                        <xsl:attribute name="title">
                            <xsl:text>Extrusion crossSection shown as Scalable Vector Graphics (SVG) plot</xsl:text>
                        </xsl:attribute>
                        <xsl:attribute name="href">
                            <xsl:text>_svg/</xsl:text>
                            <xsl:value-of select="$svgFilename"/>
                        </xsl:attribute>
                        <xsl:value-of select="."/></xsl:element>
                        <!-- skipped to avoid whitespace: <span class="attribute"></span>-->
                </xsl:when>
                <xsl:when test="($linkImages='true') and (local-name(..)='Viewpoint') and (local-name()='description') and (.) and (//head/meta[@name='title']/@content)">
                    <!-- TODO:  provide filename even if no title is present? -->
                    <xsl:variable name="viewpointImageFilename">
                            <!-- TODO: verify generation of local url -->
                            <xsl:value-of select="//head/meta[@name='title']/@content"/>
                            <xsl:text>._VP_</xsl:text>
                            <xsl:value-of select="translate(.,' ','_')"/> <!-- replace spaces with underscores to build image file name -->
                            <xsl:text>.png</xsl:text>
                    </xsl:variable>
                    <!-- TODO link color for description? -->
                    <xsl:element name="a">
                        <xsl:attribute name="title">
                            <xsl:text>viewpoint image (produced using Xj3D)</xsl:text>
                        </xsl:attribute>
                        <xsl:attribute name="href">
                            <xsl:text>_viewpoints/</xsl:text>
                            <xsl:value-of select="$viewpointImageFilename"/>
                        </xsl:attribute>
                        <xsl:value-of select="."/></xsl:element>
                    <!-- skipped to avoid whitespace: <span class="attribute"></span>-->
                </xsl:when>
                <xsl:otherwise>
                    <span class="value">
                        <xsl:value-of select="."/>
                    </span>
                </xsl:otherwise>
            </xsl:choose>
			<xsl:value-of select="$attributeDelimiter"/>
            <xsl:if test="string-length($attributeTooltip) > 0">
                <xsl:text disable-output-escaping="yes">&lt;/span&gt;</xsl:text>
            </xsl:if>
            <!-- end if filtering of default attribute values -->
        </xsl:if>
    </xsl:template>

    <!-- ****** XML text ****** -->
    <xsl:template match="text()">
      <!-- XML text is likely from digital signature nodes - try to swallow it here -->
    </xsl:template>

    <!-- ****** XML comments ****** -->
    <xsl:template match="comment()">
        <xsl:choose>
            <xsl:when test="(.='Warning:  transitional DOCTYPE in source .x3d file')">
                <!-- ignore transitional DOCTYPE warning since it is corrected by initial stylesheet output -->
            </xsl:when>
            <xsl:when test="starts-with(normalize-space(.),'Additional authoring resources for meta-tags: ')">
                <!-- break to new line if needed -->
                <xsl:if test="position() > 1"><xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text></xsl:if>
                <code title="XML comment providing additional resource information"><xsl:text>&lt;!--&#10;</xsl:text>
                    <xsl:call-template name="URL-ize-MFString-elements">
                        <xsl:with-param name="list" select="."/>
                        <xsl:with-param name="urlsOnly"><xsl:text>false</xsl:text></xsl:with-param>
                        <xsl:with-param name="insertBreaks">
                            <!-- break if two urls or more -->
                            <xsl:value-of select="contains(substring-after(.,'://'),'://')"/>
                        </xsl:with-param>
                    </xsl:call-template>
                <xsl:text>&#10;--&gt;</xsl:text></code>
                <xsl:text>&#10;</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <!-- break to new line if needed -->
                <xsl:if test="position() > 1"><xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text></xsl:if>
                <!-- wrap comment in blanks in case it ends with hyphen, since - is not a valid comment terminator -->
                <span title="XML comment"><xsl:text>&lt;!-- </xsl:text><xsl:value-of select="normalize-space(.)"/><xsl:text> --&gt;</xsl:text></span>
                <xsl:text>&#10;</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- ****** XML processing-instruction ****** -->
    <xsl:template match="processing-instruction()">
        <span title="XML processing instruction, hidden as a comment"><code><xsl:text>&lt;-- </xsl:text></code><xsl:value-of select="."/><code><xsl:text> --&gt;&#10;</xsl:text></code></span>
    </xsl:template>

    <xsl:template name="ID-link-index">
        <!-- output bookmark index:  ExternProtoDeclare, ProtoDeclare, DEF -->
        <xsl:if test="boolean((//*[@DEF]) | (//HAnimHumanoid) | (//*[local-name()='ProtoDeclare']) | (//*[local-name()='ExternProtoDeclare']) | (//Viewpoint))">
            <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
            <!-- hidden comment characters for compatible copy/paste -->
            <span style="color:white"><xsl:text>&#10;&lt;!--&#10;</xsl:text></span>
            <div class="center">
                <hr style="width:100%"/>
                <xsl:if test="//HAnimHumanoid[string-length(@name) > 0]">
                    <xsl:text>&#10;</xsl:text>
                    <i>
                        <xsl:text>Visualization report</xsl:text>
                        <xsl:if test="count(//HAnimHumanoid[string-length(@name) > 0]) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                        <xsl:text> for HAnimHumanoid model</xsl:text>
                        <xsl:if test="count(//HAnimHumanoid[string-length(@name) > 0]) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                    </i>
                    <xsl:text>: </xsl:text>
                    <xsl:for-each select="//HAnimHumanoid[string-length(@name) > 0]">
                        <xsl:text>&#10;</xsl:text>
                        <xsl:variable name="hAnimHumanoidID">
                            <xsl:value-of select="@name"/>
                            <xsl:text>HAnimHumanoidReport</xsl:text>
                        </xsl:variable>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to the </xsl:text>
                                <xsl:text>HAnimHumanoid report</xsl:text>
                                <xsl:value-of select="@name"/>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#</xsl:text>
                                <xsl:value-of select="@name"/>
                                <xsl:text>HAnimHumanoidReport</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="class">
                                <xsl:text>idName</xsl:text>
                            </xsl:attribute>
                            <!-- visible part of anchor -->
                            <xsl:value-of select="@name"/>
                            <xsl:text> HAnimHumanoid Report</xsl:text>
                        </xsl:element>
                        <xsl:if test="not(position()=last())">
                            <xsl:text>,</xsl:text>
                        </xsl:if>
                    </xsl:for-each>
                    <br />
                </xsl:if>
                <xsl:if test="//*[local-name()='ExternProtoDeclare']">
                    <xsl:text>&#10;</xsl:text>
                    <b><i>
                        <xsl:text>Index for ExternProtoDeclare definition</xsl:text>
                        <xsl:if test="count(//*[local-name()='ExternProtoDeclare']) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                    </i></b>
                    <xsl:text>: </xsl:text>
                    <xsl:for-each select="//*[local-name()='ExternProtoDeclare']">
                        <xsl:sort select="@name" order="ascending" case-order="upper-first" data-type="text"/>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to this declaration</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#ExternProtoDeclare_</xsl:text>
                                <xsl:value-of select="@name"/>
                            </xsl:attribute>
                            <xsl:attribute name="class">
                                <xsl:text>prototype</xsl:text>
                            </xsl:attribute>
                            <!-- visible part of anchor -->
                            <xsl:value-of select="@name"/>
                        </xsl:element>
                        <xsl:if test="not(position()=last())">
                            <xsl:text>,</xsl:text>
                        </xsl:if>
                    </xsl:for-each>
                </xsl:if>
                <xsl:if test="//*[local-name()='ProtoDeclare']">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:if test="//*[local-name()='ExternProtoDeclare']">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                        <hr width="50%"/>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <b><i>
                        <xsl:text>Index for ProtoDeclare definition</xsl:text>
                        <xsl:if test="count(//*[local-name()='ProtoDeclare']) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                    </i></b>
                    <xsl:text>: </xsl:text>
                    <xsl:for-each select="//*[local-name()='ProtoDeclare']">
                        <xsl:sort select="@name" order="ascending" case-order="upper-first" data-type="text"/>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to this declaration</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#ProtoDeclare_</xsl:text>
                                <xsl:value-of select="@name"/>
                            </xsl:attribute>
                            <xsl:attribute name="class">
                                <xsl:text>prototype</xsl:text>
                            </xsl:attribute>
                            <!-- visible part of anchor -->
                            <xsl:value-of select="@name"/>
                        </xsl:element>
                        <xsl:if test="not(position()=last())">
                            <xsl:text>,</xsl:text>
                        </xsl:if>
                    </xsl:for-each>
                </xsl:if>
                <xsl:if test="//*[@DEF]">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:if test="boolean(//*[local-name()='ProtoDeclare'] | //*[local-name()='ExternProtoDeclare'])">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                        <hr width="50%"/>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <b><i>
                        <xsl:text>Index for DEF node</xsl:text>
                        <xsl:if test="count(//*[@DEF]) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                    </i></b>
                    <xsl:text>: </xsl:text>
                    <xsl:for-each select="//*[@DEF]">
                        <xsl:sort select="@DEF" order="ascending" case-order="upper-first" data-type="text"/>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to this </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text> node</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#</xsl:text>
                                <xsl:value-of select="@DEF"/>
                            </xsl:attribute>
                            <xsl:attribute name="class">
                                <xsl:text>idName</xsl:text>
                            </xsl:attribute>
                            <!-- visible part of anchor -->
                            <xsl:value-of select="@DEF"/>
                        </xsl:element>
                        <xsl:if test="not(position()=last())">
                            <xsl:text>,</xsl:text>
                        </xsl:if>
                    </xsl:for-each>
                </xsl:if>
                <xsl:if test="//Viewpoint and ($linkImages='true')">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:if test="boolean(//*[local-name()='ProtoDeclare'] | //*[local-name()='ExternProtoDeclare'] | //*[@DEF])">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                        <hr width="50%"/>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <b><i>
                        <xsl:text>Index for Viewpoint image</xsl:text>
                        <xsl:if test="count(//Viewpoint) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                    </i></b>
                    <xsl:text>: </xsl:text>
                    <xsl:for-each select="//Viewpoint">
						<!-- TODO get unnamed viewpoints to appear last -->
                        <xsl:sort select="@DEF[string-length(.) > 0]" order="ascending" case-order="upper-first" data-type="text"/>
                        <xsl:sort select="@DEF[string-length(.) = 0]" order="ascending" case-order="upper-first" data-type="text"/>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:variable name="viewpointID">
                            <xsl:choose>
                                <xsl:when test="@DEF">
                                    <xsl:value-of select="@DEF"/>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text>Viewpoint_</xsl:text>
                                    <xsl:value-of select="position()"/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:variable>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to this </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text> node</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#</xsl:text>
                                <xsl:value-of select="$viewpointID"/>
                            </xsl:attribute>
                            <xsl:attribute name="class">
                                <xsl:text>idName</xsl:text>
                            </xsl:attribute>
                            <!-- visible part of anchor -->
                            <xsl:value-of select="$viewpointID"/>
                        </xsl:element>
                        <xsl:if test="not(position()=last())">
                            <xsl:text>,</xsl:text>
                        </xsl:if>
                    </xsl:for-each>
                </xsl:if>
                <xsl:text>&#10;</xsl:text>
                <hr style="width:100%"/>
            </div>
            <!-- hidden comment characters for compatible copy/paste -->
            <span style="color:white"><xsl:text>&#10;--&gt;&#10;</xsl:text></span>
        </xsl:if>
    </xsl:template>
    
    <xsl:template name="Site-NodeVisualization">
        <!-- insert suggested geometry -->
        <span class="gray">
            <code>
                <ul>
                    <li>
                        <xsl:apply-templates select="comment()" />
                        &lt;!-- HAnimSite visualization shape --&gt;
                    </li>
                    <li>
                        <!-- tooltip for HAnimSite visualization -->
                        &lt;TouchSensor description='<xsl:value-of select="local-name()"/><xsl:text> </xsl:text><xsl:value-of select="@name"/>'/&gt;
                    </li>
                    <li>
                        &lt;Shape USE='<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteShape</span>'/&gt;
                        <!-- DEF no longer needed since Shape predefined
                        <xsl:choose>
                            <xsl:when test="not(//*[@DEF='HAnimSiteShape']) and (position()=1) and (count(preceding::HAnimSite) = 0)">
								<xsl:variable name="scaledValue" select="0.008 div number($hanimHumanoidInternalScale)"/>
                                &lt;Shape DEF='<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteShape</span>'&gt; 
                                    &lt;IndexedFaceSet DEF='DiamondIFS' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1' creaseAngle='0.5' solid='false'&gt;
                                        &lt;Coordinate point='0 <xsl:value-of select="$scaledValue"/> 0 -<xsl:value-of select="$scaledValue"/> 0 0 0 0 <xsl:value-of select="$scaledValue"/> <xsl:text disable-output-escaping="yes">&amp;nbsp;</xsl:text> <xsl:value-of select="$scaledValue"/> 0 0 0 0 -<xsl:value-of select="$scaledValue"/> 0 -<xsl:value-of select="$scaledValue"/> 0'/&gt;
                                    &lt;/IndexedFaceSet&gt;
                                    &lt;Appearance&gt; &lt;Material <span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>diffuseColor='<xsl:value-of select="$siteColor"/>'</span> transparency='0.3'/&gt; &lt;/Appearance&gt; 
                                &lt;/Shape&gt;
                            </xsl:when>
                            <xsl:otherwise>
                                &lt;Shape USE='<span style='color:{$siteColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteShape</span>'/&gt;
                            </xsl:otherwise>
                        </xsl:choose>
						-->
                    </li>
                </ul>
            </code>
        </span>
    </xsl:template>
    
    <xsl:template name="SiteViewpoint-NodeVisualization">
        <span class="gray">
            <code>
                <ul>
                    <!-- insert child comments -->
                    <xsl:if test="comment()">
                        <li>
                            <xsl:apply-templates select="comment()" />
                        </li>
                    </xsl:if>
                    <!-- insert child Viewpoint -->
                    <li>
                        <xsl:apply-templates select="*" />
                    </li>
                    <li>
                        &lt;!-- HAnimSite/Viewpoint visualization shape --&gt;
                    </li>
                    <li>
                        <!-- tooltip for HAnimSite visualization, allow user selection of Viewpoint -->
                        &lt;Anchor description='<xsl:value-of select="local-name()"/><xsl:text> </xsl:text><xsl:value-of select="@DEF"/><xsl:text> Viewpoint </xsl:text>' url='&quot;#<xsl:value-of select="Viewpoint/@DEF"/>&quot;'&gt;
                        <br />
                        <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text><!-- &nbsp; -->
                        &lt;LOD forceTransitions='true' range='0.04'&gt;
                        <br />
                        <xsl:text disable-output-escaping="yes">&amp;#160;&amp;#160;</xsl:text><!-- &nbsp; -->
                        &lt;WorldInfo info='&quot;hide diamond when close&quot;'/&gt;
                        <br />
                        <xsl:text disable-output-escaping="yes">&amp;#160;&amp;#160;</xsl:text><!-- &nbsp; -->
                        <xsl:choose>
                            <xsl:when test="not(//*[@DEF='HAnimSiteViewpointShape']) and (position()=1) and (count(preceding::HAnimSite/Viewpoint) = 0)">
                                <!-- this diamond is more prominent (slightly larger and partially transparent) in case it is coincident with other HAnimJoint nodes -->
                                &lt;Shape DEF='<span style='color:{$siteViewpointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteViewpointShape</span>'&gt; 
                                    &lt;IndexedFaceSet DEF='SiteViewpointDiamondIFS' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1' creaseAngle='0.5'&gt;
                                        &lt;Coordinate point='0 0.010 0 -0.010 0 0 0 0 0.010 0.010 0 0 0 0 -0.010 0 -0.010 0'/&gt;
                                    &lt;/IndexedFaceSet&gt;
                                    &lt;Appearance&gt; &lt;Material <span style='color:{$siteViewpointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>diffuseColor='<xsl:value-of select="$siteViewpointColor"/>'</span> transparency='0.3'/&gt; &lt;/Appearance&gt; 
                                &lt;/Shape&gt;
                            </xsl:when>
                            <xsl:otherwise>
                                &lt;Shape USE='<span style='color:{$siteViewpointColor.HTML};font-weight:bold;text-shadow: 1px 1px #aaaaaa;'>HAnimSiteViewpointShape</span>'/&gt;
                            </xsl:otherwise>
                        </xsl:choose>
                        <br />
                        <xsl:text disable-output-escaping="yes">&amp;#160;</xsl:text><!-- &nbsp; -->
                        &lt;/LOD&gt;
                        <br />
                        &lt;/Anchor&gt;
                    </li>
                </ul>
            </code>
        </span>
    </xsl:template>

    <!-- ****** URL-ize-MFString-elements:  callable template (recursive function) ****** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="URL-ize-MFString-elements">
        <xsl:param name="list"/>
        <xsl:param name="urlsOnly"><xsl:text>false</xsl:text></xsl:param>
        <xsl:param name="insertBreaks"><xsl:text>true</xsl:text></xsl:param>
        <xsl:variable name="wlist" select="concat(normalize-space($list),' ')"/>
        <!-- debug: <xsl:text>&#10;$wlist=[</xsl:text><xsl:value-of select="$wlist" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
        <!-- debug: <xsl:message><xsl:text>$urlsOnly=</xsl:text><xsl:value-of select="$urlsOnly"/></xsl:message> -->
        <xsl:if test="$wlist!=' '">
            <xsl:variable name="nextURL"> <!-- nextCandidateUrl token, anyway -->
                <xsl:value-of select="substring-before($wlist,' ')"/>
            </xsl:variable>
            <xsl:variable name="nextURLunquoted">
                <xsl:value-of select="normalize-space(translate($nextURL,'&quot;',''))"/>
            </xsl:variable>
            <xsl:variable name="quoted">
                <xsl:value-of select="contains($nextURL,'&quot;')"/>
            </xsl:variable>
            <!-- debug: <xsl:comment><xsl:text>$quoted=</xsl:text><xsl:value-of select="$quoted"/></xsl:comment> -->
            <!-- don't force &quot; substitution when working with plain text -->
            <!--	<value-of select="translate(substring-before($wlist,' '),'&quot;','')"/> -->
            <!-- 	<xsl:choose>
					<xsl:when test="($urlsOnly='true')">
						<xsl:value-of select="substring-before($wlist,' ')"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:text>blah</xsl:text>
						<value-of select="substring-before(normalize-space(translate($wlist,'&quot;',' ')),' ')"/>
						<value-of select="substring-before($wlist,' ')"/>

						<value-of select="$wlist"/>
					</xsl:otherwise>
				</xsl:choose> -->
            <!--
						<value-of select="translate(substring-before(normalize-space($wlist),' '),'&quot;','')"/>
			-->
            <!-- debug: <xsl:text>&#10;$nextURL=[</xsl:text><xsl:value-of select="$nextURL" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
            <xsl:variable name="nextURLsize" select="string-length($nextURL)"/>
            <!-- debug: <xsl:text>&#10;$nextURLsize=[</xsl:text><xsl:value-of select="$nextURLsize" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
            <!-- stack overflow problems when taking substring after $nextURL -->
            <xsl:variable name="restURLs" select="substring-after($wlist,' ')"/>
            <!-- debug: <xsl:text>&#10;$restURLs=[</xsl:text><xsl:value-of select="$restURLs" disable-output-escaping="yes"/><xsl:text>]&#10;</xsl:text> -->
            <xsl:choose>
                <xsl:when test="($urlsOnly='true') and not(contains($nextURL,'http://')) and not(contains($nextURL,'https://')) 
                                                   and not(contains($nextURL,'sftp://')) and not(contains($nextURL,'mailto:')) 
                                                   and not(contains($nextURL, 'ftp://')) and not(contains($nextURL,'./'))">
                    <!-- if baseUrlAvailable is false then merely provide text, otherwise output style the output into link -->
                    <xsl:choose>
                        <xsl:when test="($baseUrlAvailable='true')">
                            <xsl:text> </xsl:text>
                            <!--
                            <xsl:if test="($insertBreaks='true') and not($urlsOnly)">
                                <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                            </xsl:if>
                            -->
                            <xsl:if test="($quoted='true')">
                                <xsl:text>&quot;</xsl:text>
                            </xsl:if>
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of disable-output-escaping="yes" select="$nextURLunquoted"/>
                                </xsl:attribute>
                                <xsl:value-of select="$nextURLunquoted"/>
                            </xsl:element>
                            <xsl:if test="($quoted='true')">
                                <xsl:text>&quot;</xsl:text>
                            </xsl:if>
                            <xsl:text> </xsl:text>
                            <xsl:if test="($insertBreaks='true') and not($urlsOnly) and not(starts-with(normalize-space($restURLs),'ftp://')) and not(starts-with(normalize-space($restURLs),'sftp://')) and not(starts-with(normalize-space($restURLs),'http://'))">
                                <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of disable-output-escaping="yes" select="$nextURL"/>
                            <xsl:text> </xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <!-- handle sftp:// but only if it precedes http:// -->
                <xsl:when test="($urlsOnly='true') and (contains($nextURL,'sftp://')) and not(contains(substring-before($nextURL,'sftp://'),'http://'))">
                    <!-- sftp:// found next -->
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly)">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                    <xsl:value-of disable-output-escaping="yes" select="substring-before($nextURL,'sftp://')"/>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:text>sftp://</xsl:text>
                            <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'sftp://'))"/>
                        </xsl:attribute>
                        <xsl:text>sftp://</xsl:text>
                        <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'sftp://'))"/>
                    </xsl:element>
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <xsl:text> </xsl:text>
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly) and not(starts-with(normalize-space($restURLs),'sftp://')) and not(starts-with(normalize-space($restURLs),'http://'))">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                </xsl:when>
                <!-- handle ftp:// but only if it precedes http:// and follows sftp:// -->
                <xsl:when test="($urlsOnly='true') and (contains($nextURL,'ftp://')) and not(contains(substring-before($nextURL,'ftp://'),'http://'))">
                    <!-- ftp:// found next -->
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly)">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                    <xsl:value-of disable-output-escaping="yes" select="substring-before($nextURL,'ftp://')"/>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:text>ftp://</xsl:text>
                            <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'ftp://'))"/>
                        </xsl:attribute>
                        <xsl:text>ftp://</xsl:text>
                        <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'ftp://'))"/>
                    </xsl:element>
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <xsl:text> </xsl:text>
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly) and not(starts-with(normalize-space($restURLs),'ftp://')) and not(starts-with(normalize-space($restURLs),'http://'))">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                </xsl:when>
                <!-- handle http:// -->
                <xsl:when test="($urlsOnly='true') and (contains($nextURL,'http://'))">
                    <!-- http:// found next -->
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly)">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                    <xsl:value-of disable-output-escaping="yes" select="substring-before($nextURL,'http://')"/>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:text>http://</xsl:text>
                            <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'http://'))"/>
                        </xsl:attribute>
                        <xsl:text>http://</xsl:text>
                        <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'http://'))"/>
                    </xsl:element>
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <xsl:text> </xsl:text>
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly) and not(starts-with(normalize-space($restURLs),'ftp://')) and not(starts-with(normalize-space($restURLs),'http://'))">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                </xsl:when>
                <!-- handle https:// -->
                <xsl:when test="($urlsOnly='true') and (contains($nextURL,'https://'))">
                    <!-- https:// found next -->
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly)">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                    <xsl:value-of disable-output-escaping="yes" select="substring-before($nextURL,'https://')"/>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:text>https://</xsl:text>
                            <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'https://'))"/>
                        </xsl:attribute>
                        <xsl:text>https://</xsl:text>
                        <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'https://'))"/>
                    </xsl:element>
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <xsl:text> </xsl:text>
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly) and not(starts-with(normalize-space($restURLs),'ftp://')) and not(starts-with(normalize-space($restURLs),'http://'))">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="($baseUrlAvailable='false') and not(contains($nextURL,'://'))">
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <span class="value">
                        <xsl:value-of select="normalize-space($nextURLunquoted)"/>
                    </span>
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <xsl:text>&#10;</xsl:text>
                </xsl:when>
                <xsl:when test="($urlsOnly='false') and not(contains($nextURL,'://')) and not(contains($nextURL,'mailto:'))">
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="$nextURL"/>
                    <xsl:text> </xsl:text>
                    <!-- check last character is a quotation mark, if so then break when requested -->
                    <xsl:if test="($insertBreaks='true') and (string-length($nextURL) > 0) and (substring($nextURL,string-length($nextURL)) = '&quot;')">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:otherwise>
                    <!-- output URL-ized nextURL -->
                    <xsl:if test="($insertBreaks='true') and not($urlsOnly)">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                    </xsl:if>
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$nextURLunquoted"/>
                        </xsl:attribute>
                        <xsl:value-of select="$nextURLunquoted"/>
                    </xsl:element>
                    <xsl:if test="($quoted='true')">
                        <xsl:text>&quot;</xsl:text>
                    </xsl:if>
                    <xsl:text>&#10;</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <!-- tail recurse on remainder of list of URLs -->
            <xsl:if test="$restURLs!=''">
                <xsl:call-template name="URL-ize-MFString-elements">
                    <xsl:with-param name="list" select="$restURLs"/>
                    <xsl:with-param name="urlsOnly" select="$urlsOnly"/>
                </xsl:call-template>
            </xsl:if>
        </xsl:if>
    </xsl:template>

    <!-- SVG -->
    <xsl:template name="produce-SVG-figures">

        <xsl:for-each select="//Extrusion">

            <xsl:variable name="svgFilename">
                <xsl:value-of select="substring-before(//head/meta[@name='title']/@content,'.x3d')"/>
                <xsl:text>.Extrusion</xsl:text>
                <xsl:value-of select="position()"/>
                <xsl:text>.svg</xsl:text>
            </xsl:variable>
            <!--	<xsl:message><xsl:text>svgFilename=</xsl:text><xsl:value-of select="$svgFilename"/></xsl:message> -->

            <!-- document goes in _svg directory, may need to change X3dToXhtml.xslt invocations in Makefile -->
            <xsl:result-document href="_svg/{$svgFilename}" method="xml" encoding="UTF-8" indent="yes">
                <xsl:fallback>
                    <xsl:message>&lt;xsl:result-document&gt; not supported, no SVG diagram produced for Extrusion</xsl:message>
                </xsl:fallback>

                <!--	<svg/> -->

                <!-- invoke appropriate template in X3dExtrusionToSvgViaXslt1.1.xslt
                <xsl:call-template name="plotSvgExtrusionCrossSection">
                    <xsl:with-param name="svgFilename" select="$svgFilename"/>
                </xsl:call-template> -->

            </xsl:result-document>

        </xsl:for-each>

        <!-- can invoke other 2D nodes similarly -->
    </xsl:template>

</xsl:stylesheet>

