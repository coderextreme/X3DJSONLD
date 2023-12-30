<?xml version="1.0" encoding="UTF-8"?>
<!--
Copyright (c) 2001-2023 held by the author(s).  All rights reserved.

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
   <meta name="title"       content="X3dToXhtml.xslt" />
   <meta name="creator"     content="Don Brutzman" />
   <meta name="created"     content=" 1 January 2001" />
   <meta name="description" content="XSLT stylesheet to convert X3D source into an easily readable XHTML documentation page.
                            This version applies color and style using Cascading Style Sheet (CSS) markup via HTML span, div tags." />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml.xslt" />
  </head>

Recommended tools:
- X3D-Edit, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- XML Spy https://www.xmlspy.com
-->

<!--	xmlns:fo="http://www.w3.org/1999/XSL/Format"	-->
<!--	xmlns:saxon="http://icl.com/saxon" saxon:trace="true"	-->


<xsl:stylesheet version="2.0"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns="http://www.w3.org/TR/xhtml1/strict"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#" 
                xmlns:saxon="http://icl.com/saxon" saxon:trace="yes">
    <!--        xmlns:fn="http://www.w3.org/2005/xpath-functions" -->
    <!-- <xsl:import href="X3dExtrusionToSvgViaXslt1.1.xslt"/> -->
    <!-- default parameter values can be overridden when invoking this stylesheet -->
    <xsl:param name="linkImages"><xsl:text>false</xsl:text></xsl:param>
    <!-- $baseUrlAvailable false means that stylesheet is being used by servlet or else styled results won't be in original directory -->
    <xsl:param name="baseUrlAvailable"><xsl:text>true</xsl:text></xsl:param>
    <!-- turn off links to SVG figures if stylesheet unavailable -->
    <xsl:param name="produceSVGfigures"><xsl:text>true</xsl:text></xsl:param>
        
    <xsl:variable name="x3dVersion" select="normalize-space(//X3D/@version)"/>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersion,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersion,'4')"/>

    <xsl:strip-space elements="*"/>
    <xsl:output encoding="UTF-8" media-type="text/html" indent="yes" cdata-section-elements="Script ShaderPart ShaderProgram" omit-xml-declaration="no" method="xml"/>
        
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
    
    <xsl:variable name="maxROUTEdepth">
        <!-- global variable.  note that if this value is too large, some recursion loops might not recover. -->
        <!-- TODO: addditional tests are needed for detecting and avoiding ROUTE loops. -->
        <xsl:choose>
            <xsl:when test="(count(//ROUTE) lt 10)">
                <xsl:value-of select="count(//ROUTE)"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="number(10)"/>
            </xsl:otherwise>
        </xsl:choose>
        
    </xsl:variable>
    
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
span.element   {color: navy}
span.attribute {color: green}
span.value     {color: teal}
span.plain     {color: black}
span.gray      {color: gray}
span.idName    {color: maroon}
span.addedDocumentation {background-color:#EEEEEE;} /* slightly darker for html page contrast */
span.behaviorNode       {background-color:#DDEEFF;} /*      light blue for html page contrast */
span.extensibilityNode  {background-color:#FFEEFF;} /*    lighter blue for html page contrast */
a.idName {color: maroon}
div.boxedBlock          {border: 1px solid grey;  }
div.center {text-align: center}
div.indented {margin-left: 25px}

span.prototype {color: purple}
a.prototype {color: purple}
a.prototype:visited {color: black}
span.route {color: red}
b.warning {color: #CC5500}
b.error {color: #CC0000}

/* https://stackoverflow.com/questions/10769016/display-image-on-text-link-hover-css-only 
    position: relative;
    left: 20px;*/
.child {
    float: right;
    height: 0px;
}
.parent:hover {
    background-color: lightyellow;
}
.parent:hover .child {
    background-color: lightyellow;
    height: 200px;
}
]]>
                </style>
<!-- https://www.quackit.com/html/codes/tables/html_table_border.cfm -->
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
                <meta name="generator" content="https://www.web3d.org/x3d/stylesheets/X3dToXhtml.xslt"/>
                <meta name="generator" content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToXhtml.xslt"/>
                <link rel="shortcut icon" href="https://www.web3d.org/x3d/content/icons/X3DtextIcon16.png" title="X3D" />
            </head>
            <body>
                <xsl:choose>
                    <xsl:when test="//X3D/@version='3.0'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.0//EN&quot; &quot;<a href="https://www.web3d.org/specifications/x3d-3.0.dtd">https://www.web3d.org/specifications/x3d-3.0.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;https://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='3.1'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.1//EN&quot; &quot;<a href="https://www.web3d.org/specifications/x3d-3.1.dtd">https://www.web3d.org/specifications/x3d-3.1.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;https://www.web3d.org/specifications/x3d-3.1.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.1.dtd&quot;&gt;
-->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='3.2'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.2//EN&quot; &quot;<a href="https://www.web3d.org/specifications/x3d-3.2.dtd">https://www.web3d.org/specifications/x3d-3.2.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- no transitional DOCTYPE for v3.2 -->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='3.3'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.3//EN&quot; &quot;<a href="https://www.web3d.org/specifications/x3d-3.3.dtd">https://www.web3d.org/specifications/x3d-3.3.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- no transitional DOCTYPE for v3.3 -->
                    </xsl:when>
                    <xsl:when test="//X3D/@version='4.0'">
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 4.0//EN&quot; &quot;<a href="https://www.web3d.org/specifications/x3d-3.3.dtd">https://www.web3d.org/specifications/x3d-4.0.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- no transitional DOCTYPE for v4.0 -->
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:message>No recognized X3D version found, using recommended DOCTYPE v3.3</xsl:message>
                        <xsl:comment>No recognized X3D version found, using recommended DOCTYPE v3.3</xsl:comment>
                        <!-- final DOCTYPE: -->
                        <code title="XML declaration">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</code>
                        <br />
                        <code title="Document Type Declaration (DTD) for X3D validation">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.3//EN&quot; &quot;<a href="https://www.web3d.org/specifications/x3d-3.3.dtd">https://www.web3d.org/specifications/x3d-3.3.dtd</a>&quot;&gt;</code>
                        <xsl:text>&#10;</xsl:text>
                        <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;https://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
                    </xsl:otherwise>
                </xsl:choose>

                <div>
                    <xsl:apply-templates select="* | comment()" />
                    <xsl:comment> apply-templates * | comment() complete </xsl:comment>
                </div>
                <xsl:text>&#10;</xsl:text>
                
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
            <!-- Unicode Character 'BOOKMARK' (U+1F516) https://www.fileformat.info/info/unicode/char/1f516/index.htm -->
            <a href="#{$hAnimHumanoidID}">&#128278;</a>
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
                        
        <!-- post-processing -->
        <xsl:if test="(local-name()='HAnimHumanoid')">
        <!-- used in X3dTidy.xslt and X3dToXhtml.xslt -->
            <!-- debug
            <xsl:message>
                <xsl:text>[debug] output-humanoid-tree HAnimHumanoid commencing</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:message>
            -->
            <xsl:variable name="output-humanoid-tree-result">
                <xsl:call-template name="output-humanoid-tree">
                    <xsl:with-param name="currentNode" select="self::node()"/>
                    <xsl:with-param name="treeMargin"><xsl:text></xsl:text></xsl:with-param>
                </xsl:call-template>
            </xsl:variable>
            <xsl:message>
                <xsl:value-of select="$output-humanoid-tree-result"/>
            </xsl:message>
            <pre>
                <xsl:call-template name="output-humanoid-tree">
                    <xsl:with-param name="currentNode" select="self::node()"/>
                    <xsl:with-param name="treeMargin"><xsl:text></xsl:text></xsl:with-param>
                </xsl:call-template>
            </pre>
        </xsl:if>
        
                        <p>
                            The following inset decorates the original HAnimHumanoid skeleton with additional visualization shapes.
                            Authors can copy/paste this version to assist in visually diagnosing skeleton correctness.
                        </p>
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
                                        <xsl:if test="(string-length(normalize-space(@info)) = 0)">
                                            <xsl:text>&gt;</xsl:text>
                                        </xsl:if>
                                        <xsl:text>&#10;</xsl:text>
                                    </td>
                                </tr>
                                <xsl:if test="(string-length(normalize-space(@info)) > 0)">
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
                                </xsl:if>
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
                                                < ! - - https://p2p.wrox.com/xslt/70832-preceding-sibling-comment.html - - >
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
                                            <div class="indented">
                                            <xsl:for-each select="*[string-length(@USE) > 0]">
                                                <!-- https://p2p.wrox.com/xslt/70832-preceding-sibling-comment.html -->
                                                <xsl:if test="preceding-sibling::node()[1][self::comment()]">
                                                    <xsl:apply-templates select="preceding-sibling::node()[1][self::comment()]"/>
                                                    <br />
                                                </xsl:if>
                                                <xsl:apply-templates select="."/>
                                                <br />
                                            </xsl:for-each>
                                            </div>
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
                </xsl:if>
                
                <!--_ Event Graph ROUTE table ======================================== -->
                <xsl:if test="(count(//ROUTE) gt 0)">
        
                    <!-- debug -->
                    <xsl:if test="(count(//ROUTE) gt number($maxROUTEdepth))">
                        <xsl:message>
                            <xsl:text>[info] total # ROUTE statements = </xsl:text>
                            <xsl:value-of select="count(//ROUTE)"/>
                            <xsl:text>, event-cascade table-row maxROUTEdepth=</xsl:text>
                            <xsl:value-of select="$maxROUTEdepth"/>
                        </xsl:message>
                    </xsl:if>
                    
                    <!-- =========================== -->
                    <xsl:for-each select="//ROUTE">
                        <xsl:sort select="@toNode" order="ascending" case-order="upper-first" data-type="text"/>
                        
                        <xsl:variable name="fromNodeDEF"   select="@fromNode"/>
                        <xsl:variable name=  "toNodeDEF"   select="@toNode"/>
                        <xsl:variable name="toNodeName"    select="local-name(//*[@DEF = $toNodeDEF])"/>
                        <xsl:variable name=  "toFieldName" select="@toField"/>
                        <xsl:variable name="fromFieldName" select="@fromField"/>
                        
                        <!-- check for missing DEF definitions -->
                        <xsl:if test="(count(//*[@DEF = $fromNodeDEF]) = 0)">
                            <xsl:message>
                                <xsl:text>[error] no node found with origination DEF='</xsl:text>
                                <xsl:value-of select="$fromNodeDEF"/>
                                <xsl:text>' for ROUTE fromField='</xsl:text>
                                <xsl:value-of select="$fromFieldName"/>
                                <xsl:text>' fromNode='</xsl:text>
                                <xsl:value-of select="$fromNodeDEF"/>
                                <xsl:text>' toField='</xsl:text>
                                <xsl:value-of select="$toFieldName"/>
                                <xsl:text> 'toNode='</xsl:text>
                                <xsl:value-of select="$toNodeDEF"/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:if>
                        <xsl:if test="(count(//*[@DEF = $toNodeDEF]) = 0)">
                            <xsl:message>
                                <xsl:text>[error] no node found with destination DEF='</xsl:text>
                                <xsl:value-of select="$toNodeDEF"/>
                                <xsl:text>': ROUTE fromField='</xsl:text>
                                <xsl:value-of select="$fromFieldName"/>
                                <xsl:text>' fromNode='</xsl:text>
                                <xsl:value-of select="$fromNodeDEF"/>
                                <xsl:text>' toField='</xsl:text>
                                <xsl:value-of select="$toFieldName"/>
                                <xsl:text> 'toNode='</xsl:text>
                                <xsl:value-of select="$toNodeDEF"/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:if>
                        <xsl:if test="(string-length($fromFieldName) = 0) or (string-length($fromNodeDEF) = 0) or (string-length($toFieldName) = 0) or (string-length($toNodeDEF) = 0)">
                            <xsl:message>
                                <xsl:text>[error] node or field name missing: ROUTE fromField='</xsl:text>
                                <xsl:value-of select="$fromFieldName"/>
                                <xsl:text>' fromNode='</xsl:text>
                                <xsl:value-of select="$fromNodeDEF"/>
                                <xsl:text>' toField='</xsl:text>
                                <xsl:value-of select="$toFieldName"/>
                                <xsl:text> 'toNode='</xsl:text>
                                <xsl:value-of select="$toNodeDEF"/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:if>
                        <!-- check for duplicate ROUTE definitions -->
                        <xsl:variable name="precedingDuplicateRouteCount"
                                    select="count(//preceding::ROUTE[(@fromNode=$fromNodeDEF) and (@fromField=$fromFieldName) and (@toNode=$toNodeDEF) and (@toField=$toFieldName)])"/>
                        <xsl:variable name="totalIdenticalRouteCount"
                                    select="count(           //ROUTE[(@fromNode=$fromNodeDEF) and (@fromField=$fromFieldName) and (@toNode=$toNodeDEF) and (@toField=$toFieldName)])"/>
                        <xsl:if test="($precedingDuplicateRouteCount gt 1)"><!-- inclusive, apparently; just report on first occurrence -->
                            <xsl:message>
                                <xsl:text>[error] </xsl:text>
                                <xsl:value-of select="$totalIdenticalRouteCount"/>
                                <xsl:text> duplicate ROUTE statements found:  ROUTE fromField='</xsl:text>
                                <xsl:value-of select="$fromFieldName"/>
                                <xsl:text>' fromNode='</xsl:text>
                                <xsl:value-of select="$fromNodeDEF"/>
                                <xsl:text>' toField='</xsl:text>
                                <xsl:value-of select="$toFieldName"/>
                                <xsl:text> 'toNode='</xsl:text>
                                <xsl:value-of select="$toNodeDEF"/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:if>
                        <!-- check for nodes with multiple fan in, which can result in nondeterministic behavior -->
                        
                        <xsl:variable name="toNode" select="@toNode"/>
                        <xsl:if test="(preceding-sibling::*[@toNode = $toNode]) and not(following-sibling::*[@toNode = $toNode])">
                            <xsl:message>
                                 <xsl:text>[diagnostic] nodes with multiple fan-in from event ROUTEs might have timing variations and possibly inconsistent behaviors: </xsl:text>
                                <xsl:value-of select="local-name(//*[@DEF = $toNode])"/>
                                 <xsl:text> DEF='</xsl:text>
                                <xsl:value-of select="$toNode"/>
                                 <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:if>
                    </xsl:for-each>
        
                    <!-- all candidate event-originating nodes -->
                    <xsl:variable name="eventProducingNodes" 
                                select="//TouchSensor | //TimeSensor | //ProtoInstance | //Script | //HAnimDisplacer | //HAnimMotion |
                                        //*[ends-with(local-name(), 'Sensor')] | //*[ends-with(local-name(), 'Source')] | 
                                        //AudioClip | //EspduTransform | //*[ends-with(local-name(), 'Pdu')]"/>
                    <xsl:variable name="routeTableCount">
                        <xsl:choose>
                            <xsl:when test="(count(//ROUTE) le 1)">
                                <xsl:value-of select="count(//ROUTE)"/>
                            </xsl:when>
                            <xsl:when test="(count(//ROUTE) le count($eventProducingNodes))">
                                <xsl:value-of select="count(//ROUTE)"/>
                            </xsl:when>
                            <!-- could get fancier here and exclude counting eventProducingNodes with input ROUTE connections -->
                            <xsl:otherwise>
                                <xsl:value-of select="count($eventProducingNodes)"/>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    
                    <div style="background-color:#DDEEFF;">
                    <br /> <!-- light blue margin -->
                    <p style="text-align:center;">
                        <b>
                        <xsl:element name="a">
                            <xsl:attribute name="name">
                                <xsl:text>EventGraph</xsl:text>
                            </xsl:attribute>
                            <xsl:text> </xsl:text><!-- keep whitespace character here to avoid singleton tag -->
                        </xsl:element>
                        <!--<xsl:value-of select="$routeTableCount"/><xsl:text> </xsl:text> -->
                        <a href="#EventGraph" title="bookmark link">
                            <xsl:text>Event Graph ROUTE Table</xsl:text>
                        </a>
                        <xsl:if test="($routeTableCount > 1)">
                            <xsl:text> entries</xsl:text>
                        </xsl:if>
                        <xsl:text> with </xsl:text>
                        <xsl:value-of select="count(//ROUTE)"/>
                        <xsl:text> </xsl:text>
                        <a href="https://www.web3d.org/x3d/content/X3dTooltips.html#ROUTE" title="X3D Tooltips: ROUTE" target="_blank">ROUTE</a>
                        <xsl:text></xsl:text>
                        <xsl:if test="(count(//ROUTE) > 0)">
                            <xsl:text> connections</xsl:text>
                        </xsl:if>
                        <xsl:text> total</xsl:text>
                        <xsl:text>, showing </xsl:text>
                        <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-IS.proof/Part01/concepts.html#Eventmodel" target="_blank" title="X3D 4.0 Architecture, Concepts, Event Model">
                            <xsl:text>event model relationships</xsl:text>
                        </a>
                        <xsl:text> for this scene.</xsl:text>
                        </b>
                    </p>
                    
                    <!-- debug ROUTE statements
                    <xsl:message>
                        <xsl:text>[debug] Processing all candidate event-originating nodes, count($eventProducingNodes)=</xsl:text>
                        <xsl:value-of select="count($eventProducingNodes)"/>
                    </xsl:message> -->
                    
                    <!-- all candidate event-originating nodes -->
                    <xsl:for-each select="$eventProducingNodes">
                        <xsl:sort select="local-name()" order="descending" case-order="upper-first" data-type="text"/>
                        <xsl:sort select="@DEF"         order="ascending" case-order="upper-first" data-type="text"/>
                            
                        <xsl:variable name="DEFname" select="@DEF"/>
                        <xsl:variable name="nodeName" select="local-name()"/>
                        <xsl:variable name="IncomingRoutes" select="//ROUTE[  (@toNode=$DEFname) and not(@fromNode=$DEFname)]"/>
                        <xsl:variable name="OutgoingRoutes" select="//ROUTE[(@fromNode=$DEFname) and not(  @toNode=$DEFname)]"/>
                        <xsl:variable name="SelfRoutes"     select="//ROUTE[(@fromNode=$DEFname) and    (  @toNode=$DEFname)]"/>
                        <xsl:variable name="depth"          select="number(1)"/>

                        <!-- debug ROUTE statements
                        <xsl:message>
                            <xsl:text>[debug] Processing started for #</xsl:text>
                            <xsl:value-of select="position()"/>
                            <xsl:text>, </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>' with </xsl:text>
                            <xsl:value-of select="count($IncomingRoutes)"/>
                            <xsl:text> IncomingRoutes, </xsl:text>
                            <xsl:value-of select="count($OutgoingRoutes)"/>
                            <xsl:text> OutgoingRoutes, </xsl:text>
                            <xsl:value-of select="count($SelfRoutes)"/>
                            <xsl:text> SelfRoutes </xsl:text>
                        </xsl:message> -->
                    
                        <xsl:if test="not(count($IncomingRoutes) > 0)">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:comment> EventGraph </xsl:comment>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:variable name="tableBackgroundColor">
                                <xsl:choose>
                                    <xsl:when test="not(count($OutgoingRoutes) > 0)">
                                        <xsl:text>white</xsl:text>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:text>#DDEEFF</xsl:text>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:variable>
                            <table border="1" style="border: 1px solid black; margin-left: auto; margin-right: auto; background-color:{$tableBackgroundColor};">
                                <xsl:if test="(position() = 1)">
                                    <!-- start a row -->
                                    <xsl:comment>starting first row</xsl:comment> <!-- -->
                                    <xsl:text disable-output-escaping="yes">&#10;&lt;tr>&#10;</xsl:text>
                                    <xsl:text>         </xsl:text>
                                </xsl:if>

                                <!-- TODO get column skipping working for TimeSensor -->
                                <xsl:if test="not(ends-with($nodeName, 'Sensor')) and not(count($IncomingRoutes) = 0)">                                                    
                                    <!-- skip first columns, TODO match depth -->
                                    <td>
                                        <xsl:text disable-output-escaping="yes"> &amp;#160; </xsl:text> <!-- &nbsp; -->
                                        <xsl:comment>skip1</xsl:comment>
                                    </td>
                                    <td>
                                        <xsl:text disable-output-escaping="yes"> &amp;#160; </xsl:text> <!-- &nbsp; -->
                                        <xsl:comment>skip1</xsl:comment>
                                    </td>
                                    <td>
                                        <xsl:text disable-output-escaping="yes"> &amp;#160; </xsl:text> <!-- &nbsp; -->
                                        <xsl:comment>skip1</xsl:comment>
                                    </td>
                                </xsl:if>
                            
                                <!-- handle first-level trigger nodes
                                <xsl:message>
                                    <xsl:text>[debug] handle first-level trigger nodes:</xsl:text>
                                </xsl:message> -->
                                <xsl:choose>
                                    <xsl:when test="(string-length(@USE) gt 0)">
                                        <!-- ignore USE nodes
                                        <xsl:message>
                                            <xsl:text>[debug] ignore USE nodes in table construction</xsl:text>
                                        </xsl:message> -->
                                    </xsl:when>
                                    <xsl:when test="(local-name() = 'TimeSensor') and (count($IncomingRoutes) gt 0)">
                                        <!-- this clock is separately triggered and already handled in another animation chain -->
                                        <!-- ignore TimeSensor nodes -->
                                        <xsl:message>
                                            <xsl:text>[debug] ignore TimeSensor nodes in animation chain</xsl:text>
                                        </xsl:message>
                                    </xsl:when>
                                    <xsl:when test="(count($OutgoingRoutes) = 0)">
                                        <!-- debug
                                        <xsl:message>
                                            <xsl:text>[debug] count($OutgoingRoutes) zero test: count($OutgoingRoutes)=</xsl:text>
                                            <xsl:value-of select="count($OutgoingRoutes)"/>
                                        </xsl:message>
                                        -->
                                        <td style="text-align:right">
                                            <xsl:choose>
                                                <xsl:when test="(string-length(@DEF) > 0)">
                                                    <xsl:element name="a">
                                                        <xsl:attribute name="href">
                                                            <xsl:text>#</xsl:text>
                                                            <xsl:value-of select="$DEFname"/>
                                                        </xsl:attribute>
                                                        <xsl:value-of select="$DEFname"/>
                                                    </xsl:element>
                                                </xsl:when>
                                                <xsl:otherwise>
                                                    <!-- no DEF available -->
                                                </xsl:otherwise>
                                            </xsl:choose>
                                            <br />
                                            <b>
                                                <xsl:value-of select="$nodeName"/>
                                            </b>
                                            <br />
                                        </td>
                                        <td> 
                                            <xsl:if test="(string-length(@description) > 0)">
                                                <xsl:value-of select="@description"/>
                                            </xsl:if>
                                            <br />
                                            <xsl:text>(No ROUTE connection found for this node)</xsl:text>
                                            <br />
                                        </td>
                                    </xsl:when>
                                    <xsl:when test="(count($OutgoingRoutes) ge number($maxROUTEdepth))">
                                        <!-- debug ROUTE statements
                                        <xsl:message>
                                            <xsl:text>[debug] Processing </xsl:text>
                                            <xsl:value-of select="local-name()"/>
                                            <xsl:text> DEF='</xsl:text>
                                            <xsl:value-of select="@DEF"/>
                                            <xsl:text>' with </xsl:text>
                                            <xsl:value-of select="count($IncomingRoutes)"/>
                                            <xsl:text> IncomingRoutes, </xsl:text>
                                            <xsl:value-of select="count($OutgoingRoutes)"/>
                                            <xsl:text> OutgoingRoutes, </xsl:text>
                                            <xsl:value-of select="count($SelfRoutes)"/>
                                            <xsl:text> SelfRoutes </xsl:text>
                                        </xsl:message> -->
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <!-- debug
                                        <xsl:message>
                                            <xsl:text>[debug] looping on $OutgoingRoutes: count($OutgoingRoutes)=</xsl:text>
                                            <xsl:value-of select="count($OutgoingRoutes)"/>
                                        </xsl:message>
                                        -->
                                        <!-- likely should not be a for-each selection constraint [position() le number($maxROUTEdepth)] -->
                                        <xsl:for-each select="$OutgoingRoutes">
                                            <xsl:variable name= "toNodeDEF"    select="@toNode"/>
                                            <xsl:variable name= "toNodeName"   select="local-name(//*[@DEF = $toNodeDEF])"/>
                                            <xsl:variable name="toFieldName"   select="@toField"/>
                                            <xsl:variable name="fromFieldName" select="@fromField"/>
                                            
                                            <!-- debug
                                            <xsl:message>
                                                <xsl:text>[debug] first-level outer-loop trace #</xsl:text>
                                                <xsl:value-of select="position()"/>
                                                <xsl:text>: OutgoingRoute from </xsl:text>
                                                <xsl:value-of select="$DEFname"/>
                                                <xsl:text> to </xsl:text>
                                                <xsl:value-of select="$toNodeDEF"/>
                                            </xsl:message>
                                            -->

                                            <xsl:choose>
                                                <xsl:when test="(position() le number($maxROUTEdepth))">
                                                    <!-- TODO avoid recursive looping !! -->
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 8a!</xsl:text>
        </xsl:message> -->
                                                    <xsl:call-template name="tableElementEntries">
                                                        <xsl:with-param name="DEFname"      ><xsl:value-of select="$DEFname"/></xsl:with-param>
                                                        <xsl:with-param name="nodeName"     ><xsl:value-of select="$nodeName"/></xsl:with-param>
                                                        <xsl:with-param name="fromFieldName"><xsl:value-of select="$fromFieldName"/></xsl:with-param>
                                                        <xsl:with-param name="toNodeDEF"    ><xsl:value-of select="$toNodeDEF"/></xsl:with-param>
                                                        <xsl:with-param name="toNodeName"   ><xsl:value-of select="$toNodeName"/></xsl:with-param>
                                                        <xsl:with-param name="toFieldName"  ><xsl:value-of select="$toFieldName"/></xsl:with-param>
                                                        <xsl:with-param name="depth"        ><xsl:text>1</xsl:text></xsl:with-param><!-- top -->
                                                    </xsl:call-template>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 8b!</xsl:text>
        </xsl:message> -->

                                                    <!-- row finished -->
                                                    <xsl:comment>row finished</xsl:comment>
                                                    <xsl:text disable-output-escaping="yes">&#10;&lt;/tr>&#10;</xsl:text>
                                                    <xsl:if test="not(position() = last())">
                                                        <xsl:comment>starting new row</xsl:comment>
                                                        <xsl:text disable-output-escaping="yes">&#10;&lt;tr>&#10;</xsl:text>
                                                        <xsl:text disable-output-escaping="yes">         </xsl:text>
                                                    </xsl:if>
                                                </xsl:when>
                                                <xsl:otherwise>
                                                    <!-- should never get here -->
                                                    <xsl:message>
                                                        <xsl:text>[debug] first-level outer-loop trace #</xsl:text>
                                                        <xsl:value-of select="position()"/>
                                                        <xsl:text> failure!</xsl:text>
                                                    </xsl:message>
                                                </xsl:otherwise>
                                            </xsl:choose>
                                        </xsl:for-each>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </table>
                            <xsl:if test="not(position() = last())">
                                <xsl:text>&#10;</xsl:text>
                                <br />
                            </xsl:if>
                        </xsl:if>
                        <xsl:text>&#10;</xsl:text>
                        <!-- debug ROUTE statements
                        <xsl:message>
                            <xsl:text>[debug] Processing complete for #</xsl:text>
                            <xsl:value-of select="position()"/>
                            <xsl:text>, </xsl:text>
                            <xsl:value-of select="local-name()"/>
                        </xsl:message> -->
                    </xsl:for-each>
                    <br /> <!-- light blue margin -->
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 9!</xsl:text>
        </xsl:message> -->
                        
                    </div>
                    <hr style="width:100%"/>
                </xsl:if>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 10!</xsl:text>
        </xsl:message> -->
                
                <xsl:text>&#10;</xsl:text>
                <span style="color:white">--></span>
                <xsl:text>&#10;</xsl:text>
                
                <xsl:variable name="identifierUrl" select="normalize-space(substring-before(//head/meta[@name='identifier']/@content,'.x3d'))"/>
		<xsl:variable name="versionControlUrl">
                    <xsl:choose>
                        <xsl:when test="starts-with($identifierUrl,'https://www.web3d.org/x3d/content/examples/')">
                            <xsl:text>https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/</xsl:text>
                            <xsl:value-of select="normalize-space(substring-after(substring-before(//head/meta[@name='identifier']/@content,'.x3d'),
                                                                                 'https://www.web3d.org/x3d/content/examples/'))"/>
                            <xsl:text>.x3d</xsl:text>
                        </xsl:when>
                        <xsl:when test="starts-with($identifierUrl,'https://savage.nps.edu/Savage/')">
                            <xsl:text>https://gitlab.nps.edu/Savage/Savage/</xsl:text>
                            <xsl:value-of select="normalize-space(substring-after(substring-before(//head/meta[@name='identifier']/@content,'.x3d'),
                                                                                 'https://savage.nps.edu/Savage/'))"/>
                            <xsl:text>.x3d</xsl:text>
                        </xsl:when>
                        <xsl:when test="starts-with($identifierUrl,'https://SavageDefense.nps.edu/SavageDefense/')">
                            <xsl:text>https://gitlab.nps.edu/SavageDefense/SavageDefense/</xsl:text>
                            <xsl:value-of select="normalize-space(substring-after(substring-before(//head/meta[@name='identifier']/@content,'.x3d'),
                                                                                 'https://SavageDefense.nps.edu/SavageDefense/'))"/>
                            <xsl:text>.x3d</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:message>
                                <xsl:text>[debug] Unrecognized archive identifier, corresponding version control archive unknown: </xsl:text>
                                <xsl:value-of select="$identifierUrl"/>
                            </xsl:message>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
		<!-- debug
		<xsl:message>
			<xsl:text>$identifierUrl=</xsl:text>
			<xsl:value-of select="$identifierUrl"/>
		</xsl:message> -->
                <xsl:if test="(string-length($identifierUrl) > 0) and 
                               (starts-with($identifierUrl,'https://www.web3d.org/x3d/content/examples/') or
                                starts-with($identifierUrl,'https://savage.nps.edu/Savage/') or
                                starts-with($identifierUrl,'https://SavageDefense.nps.edu/SavageDefense/'))">
                    <p style="text-align:center; background-color:white">
                        <xsl:text>&#10;</xsl:text>
                        <span style="color:white">&lt;!--</span>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>Online at </xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <br />
                        <xsl:text>&#10;</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="href">
                                <xsl:value-of select="$identifierUrl"/><xsl:text>Index.html</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:text>_top</xsl:text>
                            </xsl:attribute>
                            <xsl:value-of select="$identifierUrl"/><xsl:text>Index.html</xsl:text>
                        </xsl:element>
                        <xsl:text>&#10;</xsl:text>
                        <span style="color:white">--&gt;</span>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:if test="(string-length($versionControlUrl) > 0)">
                            <br />
                            <xsl:text>&#10;</xsl:text>
                            <span style="color:white">&lt;!--</span>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text>Version control at </xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <br />
                            <xsl:text>&#10;</xsl:text>
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="$versionControlUrl"/>
                                </xsl:attribute>
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                <xsl:value-of select="$versionControlUrl"/>
                            </xsl:element>
                            <xsl:text>&#10;</xsl:text>
                            <span style="color:white">--&gt;</span>
                            <xsl:text>&#10;</xsl:text>
                        </xsl:if>
                    </p>
                </xsl:if>

                <!-- build color key as XML comment -->
                <p style="text-align:center;">
                    <xsl:text>&#10;</xsl:text>
                    <span style="color:white">&lt;!--</span>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>Color legend: X3D terminology </xsl:text>
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

                    <xsl:text> matches XML terminology </xsl:text>
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
                    <xsl:text disable-output-escaping="yes">&lt;span title="behavior node" style="background-color:#DDEEFF;" &gt;(Light-blue background: event-based behavior node or statement)&lt;/span&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;span title="inserted documentation about ROUTE connections" style="background-color:#EEEEEE;"&gt;(Grey background inside box: inserted documentation)&lt;/span&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;span title="X3D Extensibility" style="background-color:#FFEEFF;"&gt;(Magenta background: X3D Extensibility)&lt;/span&gt;</xsl:text>
                    <br />
                    <xsl:text>&#10;</xsl:text>
                    
                    <!-- done with node key, begin Prototype key -->
                    <xsl:if test="//*[contains(local-name(),'Proto')]">
                        <xsl:variable name="protoStatementName">
                            <xsl:choose>
                                <xsl:when test="//*[contains(local-name(),'ProtoInstance')]">
                                    <xsl:text>ProtoInstance</xsl:text>
                                </xsl:when>
                                <xsl:when test="//*[contains(local-name(),'ProtoDeclare')]">
                                    <xsl:text>ProtoDeclare</xsl:text>
                                </xsl:when>
                                <xsl:when test="//*[contains(local-name(),'ExternProtoDeclare')]">
                                    <xsl:text>ExternProtoDeclare</xsl:text>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text>Prototype</xsl:text>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:variable>
                        <xsl:text disable-output-escaping="yes">&amp;#160;&amp;#160;&amp;#160;</xsl:text> <!-- &nbsp; -->
                        <xsl:text>&#10;&lt;</xsl:text>
                        <span class="prototype">
                            <xsl:value-of select="$protoStatementName"/>
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
                            <xsl:value-of select="$protoStatementName"/>
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
                    <xsl:text>For additional help information about X3D scenes, please see </xsl:text>
                    <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" title="Summary descriptions and authoring hints for each X3D node (element) and field (attribute)" target="_blank">X3D Tooltips</a>
                    <xsl:text>, </xsl:text>
                    <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" title="Numerous resources that support X3D graphics" target="_blank">X3D Resources</a>
                    <xsl:text>, and </xsl:text>
                    <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" title="Style guidelines, authoring tips, and best practices" target="_blank">X3D Scene Authoring Hints</a>
                    <xsl:text>.</xsl:text>
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

    <!-- ** ** ** HAnimNode-indent:  callable template (recursive function) ** ** ** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="HAnimNode-indent">
		<!-- debug
		<xsl:message>
			<xsl:text>$hanimHumanoidInternalScale=</xsl:text>
			<xsl:value-of select="$hanimHumanoidInternalScale"/>
		</xsl:message> -->
        <xsl:variable name="isHAnim1" select="$isX3D3 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)]"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] and not($isHAnim1 = true())"/>
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
                                                    <xsl:text>&#10;</xsl:text>
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
                                                        <xsl:text>_pt</xsl:text><!-- _pt _ti _view -->
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
                
                <xsl:for-each select="HAnimJoint[string-length(@name) > 0]">
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
        
        <xsl:variable name="DEFname" select="@DEF"/>
        <xsl:variable name="IncomingRoutes" select="//ROUTE[(@toNode=$DEFname)   and not(@fromNode=$DEFname)]"/>
        <xsl:variable name="OutgoingRoutes" select="//ROUTE[(@fromNode=$DEFname) and not(@toNode=$DEFname)]"/>
        <xsl:variable name="SelfRoutes"     select="//ROUTE[(@fromNode=$DEFname) and    (@toNode=$DEFname)]"/>
            
        <!-- break to new line if needed -->
        <xsl:if test="(position() > 1) and not(local-name()='X3D') and ($lineBreaks='true')"><xsl:text disable-output-escaping="yes">&lt;br /&gt;&#10;</xsl:text></xsl:if>
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
                            <xsl:value-of select="(count(preceding::ROUTE) + 1)"/>
                        </xsl:when>
                        <xsl:when test="local-name()='Viewpoint'">
                            <xsl:text>Viewpoint_</xsl:text>
                            <xsl:value-of select="(count(preceding::Viewpoint[string-length(@DEF) = 0]) + 1)"/><!-- position() of //Viewpoint -->
                        </xsl:when>
                    </xsl:choose>
                </xsl:attribute>
                <xsl:text> </xsl:text><!-- keep whitespace character here to avoid singleton tag -->
            </xsl:element>
            <xsl:text> </xsl:text>
        </xsl:if>
        <xsl:text>&#10;</xsl:text>
        <!-- insert ROUTE comment preceding node, if applicable -->
        <xsl:if test="@DEF">
            <xsl:if test="boolean($IncomingRoutes | $OutgoingRoutes | $SelfRoutes)">
                    <!-- addedDocumentationColor.HTML -->
                <xsl:text disable-output-escaping="yes">&lt;div class="boxedBlock"&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>
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
                                <xsl:value-of select="(count(preceding::ROUTE) + 1)"/>
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
                                <xsl:value-of select="(count(preceding::ROUTE) + 1)"/>
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
        <xsl:variable name="containedText" select="normalize-space(text())"/>
        <xsl:variable name="containsTextData" select="(string-length($containedText) > 0) and not($containedText='' or $containedText=' ')"/>
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
                            <xsl:when test="(@name = 'author')">
                                <xsl:text>meta 'author' provides name of individual author</xsl:text>
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
                                <xsl:text>meta 'Image' provides name or reference link to a supporting image file</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'info')">
                                <xsl:text>meta 'info' provides additional information of interest</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'isVersionOf')">
                                <xsl:text>meta 'isVersionOf' provides related resource of which the described resource is a version, edition, or adaptation</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'keywords')">
                                <xsl:text>meta 'keywords' provides comma-separated tokens, each of which is a keyword of interest</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'license')">
                                <xsl:text>meta 'license' provides software license link or information</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'mediator')">
                                <xsl:text>meta 'license' provides entity that mediates access to resource and for whom resource is intended or useful</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'modified')">
                                <xsl:text>meta 'modified' provides date of modified version</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'movingimage') or (@name = 'MovingImage')">
                                <xsl:text>meta 'MovingImage' provides </xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'photo')">
                                <xsl:text>meta 'photo' provides name or reference link to a supporting photograph</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@name = 'publisher')">
                                <xsl:text>meta 'photo' provides name of entity responsible for making the resource available</xsl:text>
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
                            <xsl:when test="(@name = 'error')">
                                <xsl:text>meta 'error' describes a known flaw in the model</xsl:text>
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
                    <xsl:text> is a Humanoid Animation (HAnim) node</xsl:text>
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
        <xsl:variable name="isBehaviorNode" select="(local-name()='ROUTE') or (local-name()='Script')  or (local-name()='ShaderPart') or (local-name()='ShaderProgram') or
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
                <xsl:when test="boolean(* | comment() ) or (local-name()='Script')  or (local-name()='ShaderPart') or (local-name()='ShaderProgram') or $containsTextData">
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;span title="</xsl:text>
                        <xsl:value-of select="$elementTooltip"/>
                        <xsl:choose>
                            <xsl:when test="$isBehaviorNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#DDEEFF;</xsl:text>
                            </xsl:when>
                            <xsl:when test="$isExtensibleNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#FFEEFF;</xsl:text>
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
                            <!-- xmlns:ds="https://www.w3.org/2000/09/xmldsig#" -->
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
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <xsl:if test="boolean($IncomingRoutes | $OutgoingRoutes | $SelfRoutes)">
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text disable-output-escaping="yes">&lt;/div&gt;</xsl:text>
                        <xsl:comment>div.boxedBlock</xsl:comment>
                        <xsl:text>&#10;</xsl:text>
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

                    <!-- indented children -->
                    <div class="indented">
                        <xsl:apply-templates select="* | comment()" />
                        <xsl:choose>
                            <!-- Script node:  output script source, preserve CDATA delimiters around contained code -->
                            <xsl:when test="((local-name()='Script') or (local-name()='ShaderPart') or (local-name()='ShaderProgram')) 
                                             and normalize-space(string(.)) and (not (normalize-space(string(.))='' or normalize-space(string(.))=' '))">
                                <xsl:if test="($lineBreaks='true')">
                                    <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                                </xsl:if>
                                <xsl:text>&#10;</xsl:text>
                                <!-- eliminate/restore left margin so that CDATA script code has maximum page width -->
                                <xsl:for-each select="ancestor::*">
                                    <xsl:text disable-output-escaping="yes">&lt;/div class="indented"&gt;</xsl:text>
                                    <xsl:text>&#10;</xsl:text>
                                </xsl:for-each>
                                <code><b><xsl:text>&lt;![CDATA[</xsl:text></b></code>
                                <xsl:text>&#10;</xsl:text>
                                <pre>
                                    <xsl:for-each select="text()">
                                        <xsl:choose>
                                            <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and preceding::field"></xsl:when><!--<xsl:text>// stripped LF before field&#10;</xsl:text> -->
                                            <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and following::field"></xsl:when><!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
                                            <!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
                                            <!-- usable text found, need to convert '<' to &lt; -->
                                            <xsl:otherwise>
                                                <xsl:call-template name="escape-special-characters">
                                                    <xsl:with-param name="inputValue" select="."/>
                                                </xsl:call-template>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:for-each>
                                </pre>
                                <code><b><xsl:text>]]&gt;</xsl:text></b></code>
                                <xsl:text>&#10;</xsl:text>
                                <!-- eliminate/restore left margin so that CDATA script code has maximum page width -->
                                <xsl:for-each select="ancestor::*">
                                    <xsl:text disable-output-escaping="yes">&lt;div class="indented"&gt;</xsl:text>
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
                                <xsl:text disable-output-escaping="yes">" style="background-color:#DDEEFF;</xsl:text>
                            </xsl:when>
                            <xsl:when test="$isExtensibleNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#FFEEFF;</xsl:text>
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
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:otherwise>
                    <!-- single tag, no children -->
                    <xsl:if test="string-length($elementTooltip) > 0">
                        <xsl:text disable-output-escaping="yes">&lt;span title="</xsl:text>
                        <xsl:value-of select="$elementTooltip"/>
                        <xsl:choose>
                            <xsl:when test="$isBehaviorNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#DDEEFF;</xsl:text>
                            </xsl:when>
                            <xsl:when test="$isExtensibleNode">
                                <xsl:text disable-output-escaping="yes">" style="background-color:#FFEEFF;</xsl:text>
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
                    <xsl:if test="boolean($IncomingRoutes | $OutgoingRoutes | $SelfRoutes)">
                        <xsl:text disable-output-escaping="yes">&lt;/div&gt;</xsl:text>
                        <xsl:comment>div.boxedBlock</xsl:comment>
                        <xsl:text>&#10;</xsl:text>
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
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:choose>
            <!-- handle preceding &quot; marks first -->
            <xsl:when test="contains($inputString,$quot) and not(contains(substring-before($inputString,$quot),'&#60;')) and not(contains(substring-before($inputString,$quot),$apos))">
                <xsl:value-of select="substring-before($inputString,$quot)"/>
                <xsl:text disable-output-escaping="yes">&amp;quot;</xsl:text>
                <xsl:call-template name="escape-special-characters">
                    <xsl:with-param name="inputValue" select="substring-after($inputString,$quot)"/>
                </xsl:call-template>
            </xsl:when>
            <!-- &#60; is &lt; -->
            <xsl:when test="contains($inputString,'&#60;') and not(contains(substring-before($inputString,'&#60;'),$quot)) and not(contains(substring-before($inputString,'&#60;'),$apos))">
                <xsl:value-of select="substring-before($inputString,'&#60;')"/>
                <xsl:text disable-output-escaping="yes">&amp;lt;</xsl:text>
                <xsl:call-template name="escape-special-characters">
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&#60;')"/>
                </xsl:call-template>
            </xsl:when>
            <!-- &apos; is apostrophe -->
            <xsl:when test="contains($inputString,$apos) and not(contains(substring-before($inputString,$apos),'&quot;')) and not(contains(substring-before($inputString,$apos),'&#60;'))">
                <xsl:value-of select="substring-before($inputString,$apos)"/>
                <xsl:text disable-output-escaping="yes">&amp;apos;</xsl:text>
                <xsl:call-template name="escape-special-characters">
                    <xsl:with-param name="inputValue" select="substring-after($inputString,$apos)"/>
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
                    <xsl:element name="a">
                        <xsl:attribute name="title">
                            <xsl:text>HTML bookmark for this ROUTE is #ROUTE_</xsl:text>
                            <xsl:value-of select="(count(preceding::ROUTE) + 1)"/>
                        </xsl:attribute>
                        <xsl:attribute name="href">
                            <xsl:text>#</xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text>_</xsl:text>
                            <xsl:value-of select="(count(preceding::ROUTE) + 1)"/>
                        </xsl:attribute>
                        <xsl:attribute name="class">
                            <xsl:text>route</xsl:text>
                        </xsl:attribute>
                        <!-- visible part of anchor -->
                        <xsl:value-of select="local-name()"/>
                    </xsl:element>
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
                <!-- wrap hover help -->
                <xsl:if test="(@name='image') or (@name='Image')">
                    <xsl:text disable-output-escaping="yes">&lt;span</xsl:text>
                    <xsl:text> class="parent"</xsl:text>
                    <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>*** opening span tag class="parent" for Image</xsl:text>
                    </xsl:message> -->
                </xsl:if>
                
                <xsl:apply-templates select="@name" />
                <xsl:apply-templates select="@content" />
                <xsl:apply-templates select="@*[local-name()!='name' and local-name()!='content']"/><!-- safety net -->
                
                <!-- unwrap hover help -->
                <xsl:if test="(@name='image') or (@name='Image')">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;img src="</xsl:text>
                    <xsl:value-of select="@content"/>
                    <xsl:text>" class="child"</xsl:text>
                    <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;/span&gt; </xsl:text>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>*** closing span tag class="child" for Image</xsl:text>
                    </xsl:message>
                    -->
                </xsl:if>
            </xsl:when>
            <xsl:when test="local-name()='ROUTE'">
                <!-- TODO identify type mismatches -->
                <xsl:variable name="fromFieldType">
                    <xsl:call-template name="attribute-type">
                        <xsl:with-param name="parentElementDEF" ><xsl:value-of select="@fromNode"/></xsl:with-param>
                        <xsl:with-param name="attributeNameFull"><xsl:value-of select="@fromField"/></xsl:with-param>
                    </xsl:call-template>
                </xsl:variable>
                <xsl:variable name="toFieldType">
                    <xsl:call-template name="attribute-type">
                        <xsl:with-param name="parentElementDEF" ><xsl:value-of select="@toNode"/></xsl:with-param>
                        <xsl:with-param name="attributeNameFull"><xsl:value-of select="@toField"/></xsl:with-param>
                    </xsl:call-template>
                </xsl:variable>
                <xsl:variable name="fieldTypeBackgroundColor">
                    <xsl:choose>
                        <!-- multipleFanInToNode -->
                        <xsl:when test="not($fromFieldType = $toFieldType)">
                            <xsl:text>#FFD580</xsl:text><!-- LightOrange -->
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>#DDEEFF;</xsl:text><!-- behavior node -->
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                <xsl:variable name="fieldMismatchTooltip">
                    <xsl:choose>
                        <xsl:when test="not($fromFieldType = $toFieldType)">
                            <xsl:text>Error, mismatched field types: </xsl:text>
                            <xsl:value-of select="$fromFieldType"/>
                            <xsl:text> and </xsl:text>
                            <xsl:value-of select="$toFieldType"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- otherwise blank -->
                            <xsl:text></xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
        
                <xsl:apply-templates select="@fromNode"/>
                <xsl:element name="span">
                    <xsl:attribute name="title">
                        <xsl:value-of select="$fieldMismatchTooltip"/>
                    </xsl:attribute>
                    <xsl:attribute name="style">
                        <xsl:text>background-color:</xsl:text>
                        <xsl:value-of select="$fieldTypeBackgroundColor"/>
                        <xsl:text>;</xsl:text>
                    </xsl:attribute>
                    <xsl:apply-templates select="@fromField"/>
                </xsl:element>
                <xsl:apply-templates select="@toNode"/>
                <xsl:element name="span">
                    <xsl:attribute name="title">
                        <xsl:value-of select="$fieldMismatchTooltip"/>
                    </xsl:attribute>
                    <xsl:attribute name="style">
                        <xsl:text>background-color:</xsl:text>
                        <xsl:value-of select="$fieldTypeBackgroundColor"/>
                        <xsl:text>;</xsl:text>
                    </xsl:attribute>
                    <xsl:apply-templates select="@toField"/>
                </xsl:element>
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
      <xsl:if test="(string-length(../@USE) = 0) or (local-name()='USE') or (local-name()='containerField')">
        <!-- eliminate default attribute values, otherwise they will all appear in output  -->
        <!-- this block of tests is used identically in X3dToXhtml.xslt X3dToHtml.xslt X3dToVrml97.xslt X3dTidy.xslt X3dToX3domX_ITE.xslt X3dUnwrap.xslt X3dWrap.xslt X3dToJson.xslt X3dToPython.xslt and X3dToTurtle.xslt -->
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
                      not( local-name()='channelCountMode' and string(.)='MAX') and
                      not( local-name()='channelInterpretation' and string(.)='SPEAKERS') and
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
                      (local-name()='xDimension' and (string(.)='0')) or
                      (local-name()='xSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='zDimension' and (string(.)='0')) or
                      (local-name()='zSpacing' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='yScale' and (string(.)='1' or string(.)='1.0')) or
                      (local-name()='geoGridOrigin' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                      (local-name()='creaseAngle' and (string(.)='0' or string(.)='0.0')))) and
                      not((local-name(..)='ElevationGrid') and
                      (local-name()='height' and (string(.)='' or string(.)=''))) and
                      not((local-name(..)='GeoElevationGrid') and
                      (local-name()='height' and (string(.)='0 0' or string(.)='0.0 0.0'))) and
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
                      not( local-name(..)='IndexedFaceSet' and
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
                      not(((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial') or (local-name(..)='PhysicalMaterial')) and
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
                      not(contains(local-name(..),'Material')	and
                      ((contains(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
                      (local-name()='baseColor' and ((string(.)='1 1 1') or (string(.)='1. 1. 1.') or (string(.)='1.0 1.0 1.0'))) or
                      (contains(local-name(),'Mapping') and (string-length(string(.)) = 0)) or
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
                      select="not(contains(local-name(..),'ProximitySensor') and
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
                      (local-name()='fieldOfView' and ((string(.)='0.785398') or (string(.)='0.7854') or (string(.)='.785398') or (string(.)='.7854'))) or
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
                      (local-name()='type' and (string(.)='LOWPASS')) or
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
                      (local-name()='frequency' and (string(.)='440' or string(.)='440.0')))) and
                      not( local-name(..)='PeriodicWave' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='type' and (string(.)='SQUARE')))) and
                      not( local-name(..)='SpatialSound' and
                      ((local-name()='containerField' and string(.)='children') or
                      (local-name()='coneInnerAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterAngle' and (string(.)='6.2832')) or
                      (local-name()='coneOuterGain' and (string(.)='0' or string(.)='0.0')) or
                      (local-name()='direction' and (string(.)='0 0 1' or string(.)='0.0 0.0 1.0')) or
                      (local-name()='distanceModel' and (string(.)='INVERSE')) or
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
                      (local-name()='oversample' and (string(.)='NONE'))))" />
        <xsl:variable name="notDefaultContainerField1"
                      select="not((local-name()='containerField' and string(.)='children')	and
                      (contains(local-name(..),'Interpolator') or
                      ends-with(local-name(..),'Filter') or
                      ends-with(local-name(..),'Sequencer') or
                      ends-with(local-name(..),'Trigger') or
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
                      not((local-name()='containerField' and string(.)='material')         and ((local-name(..)='Material') or (local-name(..)='TwoSidedMaterial') or (local-name(..)='PhysicalMaterial'))) and
                      not((local-name()='containerField' and string(.)='color')            and (local-name(..)='Color' or local-name(..)='ColorRGBA')) and
                      not((local-name()='containerField' and string(.)='coord')            and ((local-name(..)='Coordinate') or (local-name(..)='CoordinateDouble') or (local-name(..)='GeoCoordinate'))) and
                      not((local-name()='containerField' and string(.)='normal')           and (local-name(..)='Normal')) and
                      not((local-name()='containerField' and string(.)='texture')          and (local-name(..)='ImageTexture' or local-name(..)='PixelTexture' or local-name(..)='MovieTexture' or local-name(..)='MultiTexture' or local-name(..)='ComposedTexture3D' or local-name(..)='ImageTexture3D' or local-name(..)='PixelTexture3D' or local-name(..)='GeneratedCubeMapTexture')) and
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
					   (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
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
                      (local-name()='receiverPower'  and (string(.)='0' or string(.)='0.0')))) and
                      not(local-name(..)='SignalPdu' and
                      (((local-name()='radioID' or local-name()='encodingScheme' or local-name()='tdlType' or local-name()='sampleRate' or local-name()='samples' or local-name()='dataLength') and (string(.)='0')))) and
                      not(local-name(..)='TransmitterPdu' and
                      (((local-name()='radioID' or starts-with(local-name(),'antennaPattern') or starts-with(local-name(),'crypto') or local-name()='frequency' or local-name()='inputSource' or local-name()='lengthOfModulationParameters' or starts-with(local-name(),'modulationType') or starts-with(local-name(),'radioEntityType') or local-name()='transmitFrequencyBandwidth' or local-name()='transmitState') and (string(.)='0')) or
                      (local-name()='power'  and (string(.)='0' or string(.)='0.0')) or
                      ((contains(local-name(),'antennaLocation') and (string(.)='0 0 0')))))" />
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
                      ((local-name()='geoCenter' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
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
                        (local-name()='fieldOfView' and (string(.)='0.785398' or string(.)='.785398' or string(.)='0.7854' or string(.)='.7854')) or
                        (local-name()='geoSystem' and (translate(string(.),',','')='&quot;GD&quot; &quot;WE&quot;')))) and
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
                      not((local-name(..)='NurbsSweptSurface' or local-name(..)='NurbsSwungSurface') and
                      ((local-name()='ccw' or local-name()='solid') and (string(.)='true'))) and
                      not((contains(local-name(..),'SplinePositionInterpolator') or local-name(..)='SplineScalarInterpolator' or local-name(..)='SquadOrientationInterpolator') and
                      ((local-name()='closed' or local-name()='normalizeVelocity') and (string(.)='false')))" />
        <xsl:variable name="notDefaultGeometry2D"
                      select="not((local-name(..)='Arc2D' or local-name(..)='ArcClose2D') and
                      ((local-name()='startAngle' and (string(.)='0' or string(.)='0.0')) or
                       (local-name()='endAngle' and (string(.)='1.5708' or string(.)='1.570796')) or
                       (local-name()='radius' and (string(.)='1' or string(.)='1.0')) or
                       (local-name()='solid' and (string(.)='false')))) and
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
                      ((local-name()='solid' and (string(.)='false')) or
                       (local-name()='closureType' and (string(.)='PIE'))))" />
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
                      select="not((local-name(..)='FloatVertexAttribute') and
                      ((local-name()='numComponents' and (string(.)='4')))) and
                      not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and
                      ((local-name()='type' and (string(.)='VERTEX'))))" />
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
                not($isX3D3 and starts-with(local-name(..),'Metadata') and (local-name()='containerField') and (string(.)='metadata')) and
                not($isX3D4 and starts-with(local-name(..),'Metadata') and (local-name()='containerField') and (string(.)='value')) and
                ." >
            <xsl:variable name="attributeTooltip">
                <xsl:choose>
                    <xsl:when test="(local-name(..)='X3D') and (local-name()='profile')">
                        <xsl:choose>
                            <xsl:when test="(string(.)='Core')">
                                <xsl:text>X3D Core Profile is minimalist, must add components to gain node support</xsl:text>
                            </xsl:when>
                            <xsl:when test="(string(.)='Interchange')">
                                <xsl:text>X3D Interchange Profile supports simple geometry and animation</xsl:text>
                            </xsl:when>
                            <xsl:when test="(string(.)='Interactive')">
                                <xsl:text>X3D Interactive Profile supports Interchange geometry and animation, plus basic user interaction</xsl:text>
                            </xsl:when>
                            <xsl:when test="(string(.)='Immersive')">
                                <xsl:text>X3D Immersive Profile supports most nodes, similar to VRML97</xsl:text>
                            </xsl:when>
                            <xsl:when test="(string(.)='CADInterchange')">
                                <xsl:text>X3D CADInterchange Profile supports Interchange geometry and animation, plus CAD structural nodes</xsl:text>
                            </xsl:when>
                            <xsl:when test="(string(.)='Full')">
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
                    <xsl:when test="contains(string(.),$apos) and not(contains(string(.),$quot))">
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
                <xsl:when test="(local-name(..)='X3D' and contains(local-name(),'noNamespaceSchemaLocation'))">
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
                <xsl:when test="not(.) or string(.)=''">
                    <xsl:comment>no value, no action</xsl:comment>
                </xsl:when>
                <xsl:when test="local-name()='DEF'">
                    <!--
                    <span class="idName" title="DEF name is a unique ID for a given node">
                        <xsl:value-of select="."/>
                    </span>
                    -->
                    <xsl:element name="a">
                        <xsl:attribute name="title">
                            <xsl:text>bookmark link to </xsl:text>
                            <xsl:value-of select="."/>
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
                <xsl:when test="local-name()='USE' or (local-name(..)='ROUTE' and contains(local-name(),'Node'))">
                    <xsl:variable name="refName" select="."/>
                    <xsl:text>&#10;</xsl:text>
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
                                    <xsl:with-param name="inputValue" select="."/>
                                </xsl:call-template>
                            </span>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:when test="local-name(..)='meta' and ((../@name='warning') or (../@name='TODO'))">
                    <b class="warning">
                        <xsl:call-template name="URL-ize-MFString-elements">
                            <xsl:with-param name="list" select="normalize-space(string(.))"/>
                        </xsl:call-template>
                    </b>
                </xsl:when>
                <xsl:when test="local-name(..)='meta' and ../@name='error'">
                    <b class="error">
                        <xsl:call-template name="URL-ize-MFString-elements">
                            <xsl:with-param name="list" select="normalize-space(string(.))"/>
                        </xsl:call-template>
                    </b>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta' and local-name()='content') and ((../@name='description') or (../@name='documentation') or (../@name='info'))">
                    <span class="plain">
						<xsl:call-template name="escape-special-characters">
							<xsl:with-param name="inputValue" select="."/>
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
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and (contains(string(.),'.xslt') or contains(string(.),'.java') or contains(string(.),'.c') or contains(string(.),'.m')) and not(contains(string(.),' '))">
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
                <xsl:when test="(local-name(..)='meta' and (../@name='generator') and local-name()='content') and contains(string(.),'http')">
                    <xsl:variable name="prefixProse"  select="substring-before(.,'http')"/><!-- also https -->
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
     ((local-name(..)='meta' and local-name()='content' and (../@name='identifier' or ../@name='url' or ../@name='license' or ../@name='example' or ../@name='title' or ../@name='reference' or ../@name='requires' or ../@name='drawing' or ../@name='image' or ../@name='Image' or ../@name='map' or ../@name='chart' or ../@name='movie' or ../@name='MovingImage' or ../@name='photo' or ../@name='photograph' or ../@name='diagram' or ../@name='javadoc' or contains(../@name,'permission') or contains(../@name,'specificationUrl')) and not(contains(normalize-space(string(.)),' ')))) or
     ((local-name(..)='field' or local-name(..)='fieldValue') and (contains(../@name, 'Url') or contains(../@name, 'url')) and (local-name() = 'value')) or
     ((local-name(..)='field' or local-name(..)='ProtoDeclare' or local-name(..)='ExternProtoDeclare') and (local-name()='documentation')) or
                (contains(string(.),'http://') or contains(string(.),'https://') or contains(string(.),'ftp://') or contains(string(.),'sftp://') or contains(string(.),'mailto:') or contains(string(.),'./') or contains(string(.),'/'))">
                    <!--				 (starts-with(normalize-space(string(.)),'http://') or starts-with(normalize-space(string(.)),'https://'))">	-->
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
                        <xsl:when test="starts-with(normalize-space(string(.)),'*')">
                            <!-- *default example values* -->
                            <xsl:text>&#10;</xsl:text>
                            <span class="value">
                                <xsl:value-of select="."/>
                            </span>
                        </xsl:when>
                        <xsl:when test="starts-with(normalize-space(string(.)),'ecmascript') or starts-with(normalize-space(string(.)),'javascript')">
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
                        <xsl:when test="contains(string(.),'&quot;')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(string(.))"/>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(string(.),'http://')">
                            <!--	<xsl:message><xsl:text>... found http:// in reference... </xsl:text></xsl:message> -->
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'http://')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(substring-after(.,substring-before(.,'http://')))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(string(.),'https://')">
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
                        <xsl:when test="contains(string(.),'sftp://')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'sftp://')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(substring-after(.,substring-before(.,'sftp://')))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(string(.),'ftp://')">
                            <xsl:text>&#10;</xsl:text>
                            <xsl:value-of select="substring-before(.,'ftp://')"/>
                            <xsl:call-template name="URL-ize-MFString-elements">
                                <xsl:with-param name="list" select="normalize-space(substring-after(.,substring-before(.,'ftp://')))"/>
                                <xsl:with-param name="urlsOnly"><xsl:value-of select="$isUrlField"/></xsl:with-param>
                                <xsl:with-param name="insertBreaks"><xsl:text>false</xsl:text></xsl:with-param>
                            </xsl:call-template>
                        </xsl:when>
                        <xsl:when test="contains(string(.),'mailto:')">
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
                        <xsl:when test="contains(string(.),'../')">
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
                        <xsl:when test="contains(string(.),'./')">
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
                                    <xsl:value-of select="normalize-space(string(.))"/>
                                </xsl:attribute>
                                <!-- for meta links, staying in frame (rather than external target) works better for multiframe archive collections
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                -->
                                <xsl:value-of select="normalize-space(string(.))"/>
                            </xsl:element>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:when test="local-name(..)='meta' and local-name()='content' and (../@name='mail' or ../@name='email' or ../@name='e-mail' or ../@name='contact') and contains(string(.),'@')">
                    <xsl:element name="a">
                        <xsl:attribute name="title">
                            <xsl:text>select to send mail</xsl:text>
                        </xsl:attribute>
                        <xsl:attribute name="href">
                            <xsl:if test="not(starts-with(normalize-space(string(.)),'mailto:'))">
                                <xsl:text>mailto:</xsl:text>
                            </xsl:if>
                            <xsl:value-of select="normalize-space(string(.))"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="normalize-space(string(.))"/>
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
                            <xsl:value-of select="translate(string(.),' ','_')"/> <!-- replace spaces with underscores to build image file name -->
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
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <!-- end if filtering of default attribute values -->
        </xsl:if>
      </xsl:if>
    </xsl:template>

    <!-- ** ** ** XML text ** ** ** -->
    <xsl:template match="text()">
      <!-- XML text is likely from digital signature nodes - try to swallow it here -->
    </xsl:template>

    <!-- ** ** ** XML comments ** ** ** -->
    <xsl:template match="comment()">
        <xsl:choose>
            <xsl:when test="(string(.)='Warning:  transitional DOCTYPE in source .x3d file')">
                <!-- ignore transitional DOCTYPE warning since it is corrected by initial stylesheet output -->
            </xsl:when>
            <xsl:when test="starts-with(normalize-space(string(.)),'Additional authoring resources for meta-tags: ')">
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
                <span title="XML comment">
                    <xsl:text>&lt;!-- </xsl:text>
                    <xsl:call-template name="URL-ize-MFString-elements">
                        <xsl:with-param name="list" select="normalize-space(string(.))"/>
                        <xsl:with-param name="urlsOnly">
                            <xsl:text>false</xsl:text>
                        </xsl:with-param>
                        <xsl:with-param name="insertBreaks">
                            <xsl:text>true</xsl:text>
                        </xsl:with-param>
                    </xsl:call-template>
                    <xsl:text> here!!! --&gt;</xsl:text>
                </span>
                <xsl:text>&#10;</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- ** ** ** XML processing-instruction ** ** ** -->
    <xsl:template match="processing-instruction()">
        <span title="XML processing instruction, hidden as a comment"><code><xsl:text>&lt;-- </xsl:text></code><xsl:value-of select="."/><code><xsl:text> --&gt;&#10;</xsl:text></code></span>
    </xsl:template>

    <xsl:template name="ID-link-index">
        <!-- output bookmark index:  ExternProtoDeclare, ProtoDeclare, DEF -->
        <xsl:if test="boolean((//*[@DEF]) | (//HAnimHumanoid) | (//*[local-name()='ProtoDeclare']) | (//*[local-name()='ExternProtoDeclare']) | (//Viewpoint))">
            <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
            <!-- hidden comment characters for compatible copy/paste -->
            <span style="color:white"><xsl:text>&lt;!--</xsl:text></span>
            <xsl:text>&#10;</xsl:text>
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
                    <hr width="25%"/>
                </xsl:if>
                <xsl:if test="//*[local-name()='ExternProtoDeclare']">
                    <xsl:text>&#10;</xsl:text>
                    <b><i>
                        <xsl:text>Index for ExternProtoDeclare definition</xsl:text>
                        <xsl:if test="count(//*[local-name()='ExternProtoDeclare']) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                        <xsl:text>: </xsl:text>
                    </i></b>
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
                        <hr width="25%"/>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <b><i>
                        <xsl:text>Index for ProtoDeclare definition</xsl:text>
                        <xsl:if test="count(//*[local-name()='ProtoDeclare']) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                        <xsl:text>: </xsl:text>
                    </i></b>
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
                        <hr width="25%"/>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <b><i>
                        <xsl:text>Index for DEF node</xsl:text>
                        <xsl:if test="count(//*[@DEF]) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                        <xsl:text>: </xsl:text>
                    </i></b>
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
                    <xsl:if test="(count(//ROUTE) > 0)">
                        <xsl:text> and </xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>Event Graph ROUTE Table shows event connections</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#EventGraph</xsl:text>
                            </xsl:attribute>
                            <xsl:text disable-output-escaping="yes">Event&amp;#160;Graph ROUTE&amp;#160;Table</xsl:text><!-- &nbsp; -->
                        </xsl:element>
                    </xsl:if>
                </xsl:if>
                <xsl:if test="false()"><!-- //ROUTE -->
                    <xsl:text>&#10;</xsl:text>
                    <xsl:if test="boolean(//*[local-name()='ROUTE'])">
                        <xsl:text disable-output-escaping="yes">&lt;br /&gt;</xsl:text>
                        <hr width="25%"/>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <b><i>
                        <xsl:text>Index for ROUTE node</xsl:text>
                        <xsl:if test="count(//*[@DEF]) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                        <xsl:text>: </xsl:text>
                    </i></b>
                    <xsl:for-each select="//ROUTE">
                        <xsl:text>&#10;</xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to this </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text> node</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#</xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>_</xsl:text>
                                <xsl:value-of select="position()"/>
                            </xsl:attribute>
                            <xsl:attribute name="class">
                                <xsl:text>route</xsl:text>
                            </xsl:attribute>
                            <!-- visible part of anchor -->
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>_</xsl:text>
                                <xsl:value-of select="position()"/>
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
                        <hr width="25%"/>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>
                    <b><i>
                        <xsl:text>Index for Viewpoint node</xsl:text>
                        <xsl:if test="count(//Viewpoint) > 1">
                            <xsl:text>s</xsl:text>
                        </xsl:if>
                        <xsl:text>: </xsl:text>
                    </i></b>
                    <xsl:for-each select="//Viewpoint">
			<!-- TODO get unnamed viewpoints to appear last -->
                        <xsl:sort select="@DEF[string-length(string(.)) > 0]" order="ascending" case-order="upper-first" data-type="text"/>
                        <xsl:sort select="@DEF[string-length(string(.)) = 0]" order="ascending" case-order="upper-first" data-type="text"/>
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
                                <xsl:if test="(string-length(normalize-space(@description)) > 0)">
                                    <xsl:text>: </xsl:text>
                                    <xsl:value-of select="normalize-space(@description)"/>
                                </xsl:if>
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
            <span style="color:white"><xsl:text>--&gt;</xsl:text></span>
            <xsl:text>&#10;</xsl:text>
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

    <!-- ** ** ** URL-ize-MFString-elements:  callable template (recursive function) ** ** ** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="URL-ize-MFString-elements">
        <xsl:param name="list"/>
        <xsl:param name="urlsOnly"><xsl:text>false</xsl:text></xsl:param>
        <xsl:param name="insertBreaks"><xsl:text>true</xsl:text></xsl:param>
        
        <xsl:variable name="parentElement" select="local-name(..)"/>
        <xsl:variable name="hasImagePreview" select="($parentElement = 'ImageTexture')   or 
                                                     ($parentElement = 'Background')     or 
                                                     ($parentElement = 'MetadataString') or 
                                                     ($parentElement = 'Anchor')"/>
        <!-- debug: <xsl:message><xsl:value-of select="$parentElement"/><xsl:text> $hasImagePreview=</xsl:text><xsl:value-of select="$hasImagePreview"/></xsl:message> -->

        <xsl:variable name="wlist" select="concat(normalize-space(string($list)),' ')"/>
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
            <xsl:variable name="isDisplayableImage" select="not(starts-with($nextURLunquoted, 'urn:')) and
                                                            (ends-with($nextURLunquoted, '.png') or 
                                                             ends-with($nextURLunquoted, '.gif') or 
                                                             ends-with($nextURLunquoted, '.svg') or 
                                                             ends-with($nextURLunquoted, '.jpg') or 
                                                             ends-with($nextURLunquoted, '.jpeg'))"/>
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
                                <xsl:attribute name="target">
                                    <xsl:text>_blank</xsl:text>
                                </xsl:attribute>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>*** opening span tag class="parent" for Image</xsl:text>
                                    </xsl:message> -->
                                    <xsl:attribute name="class">
                                        <xsl:text>parent</xsl:text>
                                    </xsl:attribute>
                                </xsl:if>
                                <xsl:value-of select="$nextURLunquoted"/>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <xsl:element name="img">
                                        <xsl:attribute name="class">
                                            <xsl:text>child</xsl:text>
                                        </xsl:attribute>
                                        <xsl:attribute name="src">
                                            <xsl:value-of select="$nextURLunquoted"/>
                                        </xsl:attribute>
                                    </xsl:element>
                                </xsl:if>
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
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
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
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
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
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>*** opening span tag class="parent" for Image</xsl:text>
                                    </xsl:message> -->
                                    <xsl:attribute name="class">
                                        <xsl:text>parent</xsl:text>
                                    </xsl:attribute>
                                </xsl:if>
                        <xsl:text>http://</xsl:text>
                        <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'http://'))"/>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <xsl:element name="img">
                                        <xsl:attribute name="class">
                                            <xsl:text>child</xsl:text>
                                        </xsl:attribute>
                                        <xsl:attribute name="src">
                                            <xsl:value-of select="$nextURLunquoted"/>
                                        </xsl:attribute>
                                    </xsl:element>
                                </xsl:if>
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
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>*** opening span tag class="parent" for Image</xsl:text>
                                    </xsl:message> -->
                                    <xsl:attribute name="class">
                                        <xsl:text>parent</xsl:text>
                                    </xsl:attribute>
                                </xsl:if>
                        <xsl:text>https://</xsl:text>
                        <xsl:value-of select="normalize-space(substring-after($nextURLunquoted,'https://'))"/>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <xsl:element name="img">
                                        <xsl:attribute name="class">
                                            <xsl:text>child</xsl:text>
                                        </xsl:attribute>
                                        <xsl:attribute name="src">
                                            <xsl:value-of select="$nextURLunquoted"/>
                                        </xsl:attribute>
                                    </xsl:element>
                                </xsl:if>
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
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>*** opening span tag class="parent" for Image</xsl:text>
                                    </xsl:message> -->
                                    <xsl:attribute name="class">
                                        <xsl:text>parent</xsl:text>
                                    </xsl:attribute>
                                </xsl:if>
                        <xsl:value-of select="$nextURLunquoted"/>
                                <xsl:if test="$hasImagePreview and $isDisplayableImage">
                                    <xsl:element name="img">
                                        <xsl:attribute name="class">
                                            <xsl:text>child</xsl:text>
                                        </xsl:attribute>
                                        <xsl:attribute name="src">
                                            <xsl:value-of select="$nextURLunquoted"/>
                                        </xsl:attribute>
                                    </xsl:element>
                                </xsl:if>
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
    
    <xsl:template name="superscripts">
        <xsl:param name="currentNode"><!-- default value is empty --></xsl:param>
            <xsl:if test="(count(HAnimDisplacer) > 0)">
                <xsl:text> %</xsl:text>
                <xsl:for-each select="HAnimDisplacer">
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="@name"/>
                </xsl:for-each>
            </xsl:if>
        <!-- (count(HAnimSite)already listed as part of triplet
            <xsl:if test="(count(HAnimSite) > 0)">
                <xsl:text>^</xsl:text>
            </xsl:if> -->
    </xsl:template>
    
    <xsl:template name="output-site-list">
        <!-- one or the other -->
        <xsl:param name="nodeNameOfInterest"      ><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <xsl:param name="containerFieldOfInterest"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>

        <xsl:variable name="superscript">
            <xsl:choose>
                <xsl:when test="($nodeNameOfInterest = 'HAnimDisplacer')">
                    <xsl:text>%</xsl:text>
                </xsl:when>
                <xsl:when test="($nodeNameOfInterest = 'HAnimSite')">
                    <xsl:text>^</xsl:text>
                </xsl:when>
                <xsl:when test="($nodeNameOfInterest = 'HAnimMotion')">
                    <xsl:text>$</xsl:text>
                </xsl:when>
                <xsl:when test="(string-length($containerFieldOfInterest) > 0)">
                    <xsl:text>@</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>?</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        
        <xsl:variable name="countContainedNodesOfInterest" 
                    select="count(*[(local-name()    = $nodeNameOfInterest)]         [string-length(@USE) = 0]) + 
                            count(*[(@containerField = $containerFieldOfInterest)][string-length(@USE) = 0])"/>
        <!-- debug 
        <xsl:if test="($countContainedNodesOfInterest > 0)">
            <xsl:message>
                <xsl:text>[debug] $countContainedNodesOfInterest=</xsl:text>
                <xsl:value-of select="$countContainedNodesOfInterest"/>
                <xsl:text> for </xsl:text>
                <xsl:choose>
                    <xsl:when test="(string-length($nodeNameOfInterest) > 0)">
                        <xsl:text>$nodeNameOfInterest=</xsl:text>
                        <xsl:value-of select="$nodeNameOfInterest"/>
                    </xsl:when>
                    <xsl:when test="(string-length($containerFieldOfInterest) > 0)">
                        <xsl:text>$containerFieldOfInterest=</xsl:text>
                        <xsl:value-of select="$containerFieldOfInterest"/>
                    </xsl:when>
                </xsl:choose>
            </xsl:message>
        </xsl:if>
        -->
        <xsl:if test="($countContainedNodesOfInterest > 0)">
            <xsl:text>&#10;</xsl:text>
            <!-- <xsl:text> found HAnim node! </xsl:text> -->
            <xsl:value-of select="$superscript"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name()"/><!-- parent node -->
            <xsl:text> </xsl:text>
            <xsl:value-of select="@name"/>
            <xsl:text> holds </xsl:text>
            <xsl:value-of select="$countContainedNodesOfInterest"/>
            <xsl:text> </xsl:text>
            <!-- one or the other -->
            <xsl:choose>
                <xsl:when test="(string-length($nodeNameOfInterest) > 0)">
                    <xsl:value-of select="$nodeNameOfInterest"/>
                    <xsl:text> node</xsl:text>
                </xsl:when>
                <xsl:when test="(string-length($containerFieldOfInterest) > 0)">
                    <xsl:text>containerField='</xsl:text>
                    <xsl:value-of select="$containerFieldOfInterest"/>
                    <xsl:text>'</xsl:text>
                    <xsl:text> node</xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:if test="($countContainedNodesOfInterest > 1)">
                <xsl:text>s</xsl:text>
            </xsl:if>
            <xsl:text>: </xsl:text>
        </xsl:if>
        <xsl:choose>
            <xsl:when test="($nodeNameOfInterest = 'HAnimMotion')">
                <!-- start from top of scene since HAnimMotion might not be included in HAnimHumanoid -->
                <xsl:for-each select="*[local-name() = 'HAnimMotion']">
                    <xsl:if test="position() > 1">
                        <xsl:text>, </xsl:text>
                    </xsl:if>
                    <xsl:choose>
                        <xsl:when test="(string-length(@name) > 0)">
                            <xsl:value-of select="@name"/>
                        </xsl:when>
                        <xsl:when test="(string-length(@DEF) > 0)">
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:when>
                        <xsl:when test="(string-length(@USE) > 0)">
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- TODO not working as expected
                            <xsl:text>HAnimMotion</xsl:text>
                            <xsl:message>
                                <xsl:value-of select="$nodeNameOfInterest"/>
                                <xsl:text> (local-name()='</xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>', no name or DEF)</xsl:text>
                            </xsl:message> -->
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:for-each>
            </xsl:when>
            <xsl:otherwise>
                <!-- starts at local node -->
                <xsl:for-each select="*[(local-name() = $nodeNameOfInterest) or (@containerField = $containerFieldOfInterest)][string-length(@USE) = 0]">
                    <xsl:if test="position() > 1">
                        <xsl:text>, </xsl:text>
                    </xsl:if>
                    <xsl:choose>
                        <xsl:when test="(string-length(@name) > 0)">
                            <xsl:value-of select="@name"/>
                        </xsl:when>
                        <xsl:when test="(string-length(@DEF) > 0)">
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:when>
                        <xsl:when test="(string-length(@USE) > 0)">
                            <!-- ignore -->
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$nodeNameOfInterest"/>
                            <!-- TODO not working as expected
                            <xsl:message>
                                <xsl:value-of select="$nodeNameOfInterest"/>
                                <xsl:text> (local-name()='</xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>', no name or DEF)</xsl:text>
                            </xsl:message> -->
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:for-each>
            </xsl:otherwise>
        </xsl:choose>
        <!-- recurse on other children for completeness, showing HAnimSite nodes -->
        <xsl:for-each select="child::node()[string-length(@USE) = 0][not(local-name() = 'HAnimDisplacer')]">
            <xsl:call-template name="output-site-list">
                <xsl:with-param name="nodeNameOfInterest" select="$nodeNameOfInterest"/>
            </xsl:call-template>
        </xsl:for-each>
    </xsl:template>
    
    <xsl:template name="output-humanoid-tree">
        <!-- used in X3dTidy.xslt and X3dToXhtml.xslt -->
        <xsl:param name="currentNode"><!-- default value is empty --></xsl:param>
        <xsl:param name="treeMargin"> <xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        
        <xsl:variable name="isHAnim1" select="$isX3D3 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)]"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] and not($isHAnim1 = true())"/>
        <xsl:if test="($isHAnim1 = true()) and ($isHAnim2 = true())">
            <xsl:message>
                <xsl:text>[diagnostic] error in X3dToXhtml.xslt internal logic, $isHAnim1 and $isHAnim2 are both true, output-humanoid-tree entry </xsl:text>
            </xsl:message>
        </xsl:if>
        
        <xsl:if test="(string-length($currentNode/@USE) = 0)">
            <xsl:variable name="describeSelf">
                <xsl:value-of select="local-name($currentNode)"/>
                <xsl:if test="(string-length($currentNode/@name) > 0)">
                    <xsl:text> (</xsl:text>
                    <xsl:value-of select="$currentNode/@name"/>
                    <xsl:text>)</xsl:text>
                </xsl:if>
            </xsl:variable>
            
            <!-- debug
            <xsl:if test="starts-with($describeSelf, 'HAnim')">
                <xsl:message>
                    <xsl:text>[debug] output-humanoid-tree trace: </xsl:text>
                    <xsl:value-of select="$describeSelf"/>
                </xsl:message>
            </xsl:if> -->
            <xsl:variable name="jointCount"     select="count(descendant::*[local-name() = 'HAnimJoint']    [string-length(@USE) = 0][string-length(@name) > 0])"/>
            <xsl:variable name="segmentCount"   select="count(descendant::*[local-name() = 'HAnimSegment']  [string-length(@USE) = 0][string-length(@name) > 0])"/>
            <xsl:variable name="displacerCount" select="count(descendant::*[local-name() = 'HAnimDisplacer'][string-length(@USE) = 0][string-length(@name) > 0])"/>
            <xsl:variable name="motionCount"    select="count(descendant::*[local-name() = 'HAnimMotion']   [string-length(@USE) = 0][string-length(@name) > 0])"/>
            <xsl:variable name="siteCount"      select="count(descendant::*[local-name() = 'HAnimSite']     [string-length(@USE) = 0][string-length(@name) > 0])"/>
            <xsl:variable name="skinCount"      select="count(descendant::*[@containerField = 'skin']       [string-length(@USE) = 0])"/>
            
            <xsl:if test="(local-name($currentNode)='HAnimHumanoid')">
                <xsl:text>=============================================================================================================================</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>HAnimHumanoid</xsl:text>
                <xsl:choose>
                    <xsl:when test="(string-length(@DEF) > 0)">
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="@DEF"/>
                    </xsl:when>
                    <xsl:when test="(string-length(@name) > 0)">
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="@name"/>
                    </xsl:when>
                </xsl:choose>
                
                <xsl:text> skeleton holds X3D</xsl:text>
                <xsl:value-of select="substring(//X3D/@version,1,1)"/>
                <xsl:text> HAnim</xsl:text>
                <xsl:choose>
                    <xsl:when test="(string-length(@version) > 0)">
                        <xsl:value-of select="substring(@version,1,1)"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>1</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> joints/segments</xsl:text>
                <xsl:if test="($siteCount > 0)">
                    <xsl:text>/sites</xsl:text>
                </xsl:if>
                <xsl:choose>
                    <xsl:when test="($displacerCount > 0) and ($motionCount > 0)">
                        <xsl:text> with animating displacer and motion nodes</xsl:text>
                    </xsl:when>
                    <xsl:when test="($displacerCount = 1)">
                        <xsl:text> with an animating displacer node</xsl:text>
                    </xsl:when>
                    <xsl:when test="($displacerCount > 1)">
                        <xsl:text> with animating displacer nodes</xsl:text>
                    </xsl:when>
                    <xsl:when test="($motionCount = 1)">
                        <xsl:text> with an animating motion node</xsl:text>
                    </xsl:when>
                    <xsl:when test="($motionCount > 1)">
                        <xsl:text> with animating motion nodes</xsl:text>
                    </xsl:when>
                </xsl:choose>
                <xsl:choose>
                    <xsl:when test="($skinCount = 1)">
                        <xsl:text> and a skin node</xsl:text>
                    </xsl:when>
                    <xsl:when test="($skinCount > 1)">
                        <xsl:text> and skin nodes</xsl:text>
                    </xsl:when>
                </xsl:choose>
                <xsl:text>.</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>  [key] jointname : segmentname ^ sitename</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>[nodes] </xsl:text>
                <xsl:text>HAnimJoint (</xsl:text>
                <xsl:value-of select="$jointCount"/>
                <xsl:text>), : HAnimSegment (</xsl:text>
                <xsl:value-of select="$segmentCount"/>
                <xsl:text>), % HAnimDisplacer (</xsl:text>
                <xsl:value-of select="$displacerCount"/>
                <xsl:text>), $ HAnimMotion (</xsl:text>
                <xsl:value-of select="$motionCount"/>
                <xsl:text>), ^ HAnimSite (</xsl:text>
                <xsl:value-of select="$siteCount"/>
                <xsl:text>), @ skin nodes (</xsl:text>
                <xsl:value-of select="$skinCount"/>
                <xsl:text>)</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>=============================================================================================================================</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            
            <xsl:choose>
                <xsl:when test="((local-name($currentNode)='HAnimJoint') or (local-name($currentNode)='HAnimHumanoid')) and (string-length($currentNode/@USE) = 0)">
                    <xsl:value-of select="$treeMargin"/>
                    <xsl:choose>
                        <xsl:when test="(local-name($currentNode)='HAnimHumanoid')">
                            <xsl:text>HAnimHumanoid DEF='</xsl:text>
                            <xsl:value-of select="$currentNode/@DEF"/>
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="$currentNode/@name"/>
                            <xsl:text>' loa='</xsl:text>
                            <xsl:value-of select="@loa"/>
                            <xsl:text>'</xsl:text>
                            <xsl:if test="(count(*[@containerField='motions']) > 0)">
                                <xsl:text>&#10;</xsl:text>
                                <xsl:text>motions</xsl:text>
                                <xsl:text>&#10;</xsl:text>
                                <xsl:text>  </xsl:text>
                                <xsl:for-each select="*[@containerField='motions']">
                                     <xsl:value-of select="local-name()"/>
                                     <xsl:if test="(string-length(@DEF) > 0) and not(string-length(@name) > 0)">
                                         <xsl:text> DEF='</xsl:text>
                                         <xsl:value-of select="@DEF"/>
                                         <xsl:text>'</xsl:text>
                                     </xsl:if>
                                     <xsl:if test="(string-length(@name) > 0)">
                                         <xsl:text> </xsl:text>
                                         <xsl:value-of select="@name"/>
                                     </xsl:if>
                                </xsl:for-each>
                            </xsl:if>
                            <xsl:if test="(count(*[@containerField='skin']) > 0)">
                                <xsl:text>&#10;</xsl:text>
                                <xsl:text>skin </xsl:text>
                                <xsl:for-each select="*[@containerField='skin']">
                                     <xsl:value-of select="local-name()"/>
                                     <xsl:if test="(string-length(@DEF) > 0) and not(string-length(@name) > 0)">
                                         <xsl:text> DEF='</xsl:text>
                                         <xsl:value-of select="@DEF"/>
                                         <xsl:text>'</xsl:text>
                                     </xsl:if>
                                     <xsl:if test="(string-length(@name) > 0)">
                                         <xsl:text> </xsl:text>
                                         <xsl:value-of select="@name"/>
                                     </xsl:if>
                                </xsl:for-each>
                            </xsl:if>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text>skeleton</xsl:text>
                        </xsl:when>
                        <xsl:when test="(string-length($currentNode/@name) > 0)">
                            <xsl:value-of select="$currentNode/@name"/>
                            <xsl:call-template name="superscripts">
                                <xsl:with-param name="currentNode" select="$currentNode"/>
                            </xsl:call-template>
                            <!-- check if name changed, if so display that too -->
                            <xsl:variable name="newNameValue">
                                <xsl:call-template name="newHAnimNameValue">
                                    <xsl:with-param name="nameValue"><xsl:value-of select="$currentNode/@name"/></xsl:with-param>
                                    <xsl:with-param name="nodeName" ><xsl:value-of select="local-name($currentNode)"/></xsl:with-param>
                                </xsl:call-template>
                            </xsl:variable>
                            <xsl:if test="($isHAnim2 = true()) and not($currentNode/@name = $newNameValue)">
                                <xsl:text> (HAnim2 name </xsl:text>
                                <xsl:value-of select="$newNameValue"/>
                                <xsl:text>)</xsl:text>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text> (</xsl:text>
                            <xsl:value-of select="local-name($currentNode)"/>
                            <xsl:text>/@name not found)</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <!-- segment list -->
                    <xsl:choose>
                        <xsl:when test="$currentNode/HAnimSegment[string-length(@USE) = 0]"><!-- omit HAnimHumanoid, HAnimJoint from this additional output -->
                            <xsl:text> : </xsl:text>
                            <xsl:choose>
                                <xsl:when test="$currentNode/HAnimSegment[string-length(@name) > 0]">
                                    <xsl:value-of select="$currentNode/HAnimSegment/@name"/>
                                    <xsl:call-template name="superscripts">
                                        <xsl:with-param name="currentNode" select="$currentNode/HAnimSegment"/>
                                    </xsl:call-template>
                                    <!-- check if name changed, if so display that too -->
                                    <xsl:variable name="newNameValue">
                                        <xsl:call-template name="newHAnimNameValue">
                                            <xsl:with-param name="nameValue"><xsl:value-of select="$currentNode/@name"/></xsl:with-param>
                                            <xsl:with-param name="nodeName" ><xsl:value-of select="local-name($currentNode)"/></xsl:with-param>
                                        </xsl:call-template>
                                    </xsl:variable>
                                    <xsl:if test="($isHAnim2 = true()) and not($currentNode/@name = $newNameValue)">
                                        <xsl:text> (HAnim2 name </xsl:text>
                                        <xsl:value-of select="$newNameValue"/>
                                        <xsl:text>)</xsl:text>
                                    </xsl:if>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text>(HAnimSegment/@name not found)</xsl:text>
                                </xsl:otherwise>
                            </xsl:choose>
                            <!-- site list -->
                            <xsl:if test="(count(child::node()/HAnimSite[string-length(@USE) = 0]) > 0)">
                                <xsl:text> ^ </xsl:text>
                                <xsl:for-each select="child::node()/HAnimSite[string-length(@USE) = 0]">
                                    <xsl:value-of select="@name"/>
                                    <xsl:call-template name="superscripts">
                                        <xsl:with-param name="currentNode" select="$currentNode/HAnimSite[string-length(@USE) = 0]"/>
                                    </xsl:call-template>
                                    <!-- check if name changed, if so display that too -->
                                    <xsl:variable name="newNameValue">
                                        <xsl:call-template name="newHAnimNameValue">
                                            <xsl:with-param name="nameValue"><xsl:value-of select="$currentNode/@name"/></xsl:with-param>
                                            <xsl:with-param name="nodeName" ><xsl:value-of select="local-name($currentNode)"/></xsl:with-param>
                                        </xsl:call-template>
                                    </xsl:variable>
                                    <xsl:if test="($isHAnim2 = true()) and not($currentNode/@name = $newNameValue)">
                                        <xsl:text> (HAnim2 name </xsl:text>
                                        <xsl:value-of select="$newNameValue"/>
                                        <xsl:text>)</xsl:text>
                                    </xsl:if>
                                    <xsl:if test="not(position() = last())">
                                        <xsl:text>, </xsl:text>
                                    </xsl:if>
                                </xsl:for-each>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- no HAnimSegment child -->
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:variable name="treeMarginIncrement">
                        <xsl:choose>
                            <xsl:when test="not(position() = last()) and not(local-name($currentNode)='HAnimHumanoid') and not(@name = 'humanoid_root')">
                                <xsl:text>| </xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>  </xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:for-each select="child::node()[string-length(@USE) = 0][not(local-name() = 'HAnimSegment')]">
                        <xsl:call-template name="output-humanoid-tree">
                            <xsl:with-param name="currentNode" select="self::node()"/>
                            <xsl:with-param name="treeMargin" select="concat($treeMargin,$treeMarginIncrement)"/>
                        </xsl:call-template>
                    </xsl:for-each>
                </xsl:when>
                <xsl:otherwise>
                    <!-- recurse on other children for completeness, showing HAnim skeleton -->
                    <xsl:for-each select="child::node()[string-length(@USE) = 0][not(local-name() = 'HAnimSegment')]">
                        <xsl:call-template name="output-humanoid-tree">
                            <xsl:with-param name="currentNode" select="self::node()"/>
                            <xsl:with-param name="treeMargin" select="concat($treeMargin,'**')"/><!-- flags that possible further debugging is needed -->
                        </xsl:call-template>
                    </xsl:for-each>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:if test="(local-name($currentNode)='HAnimHumanoid')"><!-- end -->
                <!-- key listings for HAnimDisplacer, HAnimSite, HAnimMotion -->
                <xsl:if test="(count(//HAnimDisplacer[string-length(@USE) = 0]) > 0)">
                    <xsl:call-template name="output-site-list">
                        <xsl:with-param name="nodeNameOfInterest"><xsl:text>HAnimDisplacer</xsl:text></xsl:with-param>
                    </xsl:call-template>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                <xsl:if test="(count(//HAnimSite[string-length(@USE) = 0]) > 0)">
                    <xsl:call-template name="output-site-list">
                        <xsl:with-param name="nodeNameOfInterest"><xsl:text>HAnimSite</xsl:text></xsl:with-param>
                    </xsl:call-template>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                <xsl:if test="(count(/descendant::HAnimMotion) > 0)">
                    <xsl:call-template name="output-site-list">
                        <xsl:with-param name="nodeNameOfInterest"><xsl:text>HAnimMotion</xsl:text></xsl:with-param>
                    </xsl:call-template>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                <xsl:if test="(count(//*[@containerField = 'skin'][string-length(@USE) = 0]) > 0)">
                    <xsl:call-template name="output-site-list">
                        <xsl:with-param name="containerFieldOfInterest"><xsl:text>skin</xsl:text></xsl:with-param>
                    </xsl:call-template>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                <xsl:text>=============================================================================================================================</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
        </xsl:if>
    </xsl:template>

    <xsl:template name="indentTableColumns">
        <xsl:param name="newDepth"      ><xsl:text></xsl:text></xsl:param>
        
        <!-- skip first columns since this is nested, match depth -->
        <xsl:variable name="nestedColumnCount">
            <xsl:choose>
                <xsl:when test="($newDepth = 1)">
                    <!-- 3 columns for beginning -->
                    <xsl:text>3</xsl:text>
                </xsl:when>
                <xsl:when test="($newDepth > 1)">
                    <!-- 4 columns for continuing increment -->
                    <xsl:value-of select="(4 * $newDepth - 1)"/>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        
        <td colspan="{$nestedColumnCount}" style="background-color:#DDEEFF;">
            <!-- debug
            <xsl:text>newDepth=</xsl:text><xsl:value-of select="$newDepth"/> -->
            <xsl:text disable-output-escaping="yes"> &amp;#160; </xsl:text> <!-- &nbsp; -->
            <xsl:comment>
                <xsl:text>skip </xsl:text>
                <xsl:value-of select="$nestedColumnCount"/>
                <xsl:text>for depth </xsl:text>
                <xsl:value-of select="$newDepth"/>
            </xsl:comment>
        </td>
        
        <!-- tail recursion no longer needed -->
    </xsl:template>

    <xsl:template name="tableElementEntries">
        <xsl:param name="DEFname"      ><xsl:text></xsl:text></xsl:param>
        <xsl:param name="nodeName"     ><xsl:text></xsl:text></xsl:param>
        <xsl:param name="fromFieldName"><xsl:text></xsl:text></xsl:param>
        <xsl:param name="toNodeDEF"    ><xsl:text></xsl:text></xsl:param>
        <xsl:param name="toNodeName"   ><xsl:text></xsl:text></xsl:param>
        <xsl:param name="toFieldName"  ><xsl:text></xsl:text></xsl:param>
        <xsl:param name="depth"        ><xsl:text></xsl:text></xsl:param>

        <!-- debug
        <xsl:message>
            <xsl:text>[debug] [tableElementEntries] inner-loop recursion trace: depth=</xsl:text>
            <xsl:value-of select="$depth"/>
            <xsl:text>, from </xsl:text>
            <xsl:value-of select="$DEFname"/>
            <xsl:text> to </xsl:text>
            <xsl:value-of select="$toNodeDEF"/>
        </xsl:message>
        -->
    <xsl:choose>
      <xsl:when test="(number($depth) le number($maxROUTEdepth))">
        <!-- do not continue to excessive depth, no possibility of recursing further from this template -->
        
        <xsl:variable name="multipleFanInFromNode" select="(count(//ROUTE[@toNode eq $DEFname])   > 1)"/>
        <xsl:variable name="multipleFanInToNode"   select="(count(//ROUTE[@toNode eq $toNodeDEF]) > 1)"/>
        
        <xsl:variable name="multipleFanInFromNodeTooltip">
            <xsl:if test="$multipleFanInFromNode">
                <xsl:text>nodes with multiple fan-in events may have varying delivery order</xsl:text>
            </xsl:if>
            <!-- otherwise empty -->
        </xsl:variable>
        <xsl:variable name="multipleFanInToNodeTooltip">
            <xsl:if test="$multipleFanInToNode">
                <xsl:text>nodes with multiple fan-in events may have varying delivery order</xsl:text>
            </xsl:if>
            <!-- otherwise empty -->
        </xsl:variable>
        
        <xsl:variable name="cellBackgroundColorFromNode">
            <xsl:choose>
                <!-- multipleFanInFromNode -->
                <xsl:when test="$multipleFanInFromNode">
                    <xsl:text>LightYellow</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>white</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="cellBackgroundColorToNode">
            <xsl:choose>
                <!-- multipleFanInToNode -->
                <xsl:when test="$multipleFanInToNode">
                    <xsl:text>LightYellow</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>white</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="fromFieldType">
            <xsl:call-template name="attribute-type">
                <xsl:with-param name="parentElementDEF" ><xsl:value-of select="$DEFname"/></xsl:with-param>
                <xsl:with-param name="attributeNameFull"><xsl:value-of select="$fromFieldName"/></xsl:with-param>
            </xsl:call-template>
        </xsl:variable>
        <xsl:variable name="toFieldType">
            <xsl:call-template name="attribute-type">
                <xsl:with-param name="parentElementDEF" ><xsl:value-of select="$toNodeDEF"/></xsl:with-param>
                <xsl:with-param name="attributeNameFull"><xsl:value-of select="$toFieldName"/></xsl:with-param>
            </xsl:call-template>
        </xsl:variable>
        <xsl:variable name="fieldTypeBackgroundColor">
            <xsl:choose>
                <!-- multipleFanInToNode -->
                <xsl:when test="not($fromFieldType = $toFieldType)">
                    <xsl:text>#FFD580</xsl:text><!-- LightOrange -->
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>white</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="fieldMismatchTooltip">
            <xsl:choose>
                <xsl:when test="not($fromFieldType = $toFieldType)">
                    <xsl:text>Error, mismatched field types: </xsl:text>
                    <xsl:value-of select="$fromFieldType"/>
                    <xsl:text> and </xsl:text>
                    <xsl:value-of select="$toFieldType"/>
                </xsl:when>
                <xsl:otherwise>
                    <!-- otherwise blank -->
                    <xsl:text></xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 1!</xsl:text>
        </xsl:message> -->
        
        <xsl:choose>
            <xsl:when test="(number($depth) gt number($maxROUTEdepth))">
                <xsl:message>
                    <xsl:text>[warning] [tableElementEntries #1]: ROUTE chain depth=</xsl:text>
                    <xsl:value-of select="$depth"/>
                    <xsl:text> exceeded internal limit of $maxROUTEdepth=</xsl:text>
                    <xsl:value-of select="$maxROUTEdepth"/>
                    <xsl:text>, check for an illegal loop of ROUTE connections.</xsl:text>
                </xsl:message>
                <xsl:message>
                    <xsl:text>    ROUTE fromNode='</xsl:text>
                    <xsl:value-of select="$DEFname"/>
                    <xsl:text>' fromField='</xsl:text>
                    <xsl:value-of select="$fromFieldName"/>
                    <xsl:text>' toNode='</xsl:text>
                    <xsl:value-of select="$toNodeDEF"/>
                    <xsl:text>' toField='</xsl:text>
                    <xsl:value-of select="$toFieldName"/>
                    <xsl:text>'</xsl:text>
                </xsl:message>
                <!-- done, end tail recursion -->
            </xsl:when>
            <xsl:otherwise>
                <!-- continue tail recursion -->
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 2!</xsl:text>
        </xsl:message> -->
                
                <td style="text-align:right; background-color:{$cellBackgroundColorFromNode};" title="{$multipleFanInFromNodeTooltip}">
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:text>#</xsl:text>
                            <xsl:value-of select="$DEFname"/>
                        </xsl:attribute>
                        <xsl:attribute name="title">
                            <xsl:text>DEF name</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$DEFname"/>
                    </xsl:element>
                    <br />
                    <b>
                        <span title="X3D node name">
                            <xsl:value-of select="$nodeName"/>
                        </span>
                    </b>
                    <br />
                    <b>
                        <xsl:element name="a">
                        <xsl:attribute name="title">
                            <xsl:text>X3D Tooltips: field </xsl:text>
                            <xsl:value-of select="$nodeName"/>
                            <xsl:text>.</xsl:text>
                            <xsl:choose>
                                <xsl:when test="starts-with($fromFieldName, 'set_') and not($fromFieldName = 'set_fraction')">
                                    <xsl:value-of select="substring-after($fromFieldName, 'set_')"/>
                                </xsl:when>
                                <xsl:when test="ends-with($fromFieldName, '_changed') and not($fromFieldName = 'fraction_changed') and not($fromFieldName = 'value_changed')">
                                    <xsl:value-of select="substring-before($fromFieldName, '_changed')"/>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:value-of select="$fromFieldName"/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_blank</xsl:text>
                        </xsl:attribute>
                        <xsl:attribute name="href">
                            <xsl:text>https://www.web3d.org/x3d/content/X3dTooltips.html#</xsl:text>
                            <xsl:value-of select="$nodeName"/>
                            <xsl:text>.</xsl:text>
                            <xsl:choose>
                                <xsl:when test="starts-with($fromFieldName, 'set_') and not($fromFieldName = 'set_fraction')">
                                    <xsl:value-of select="substring-after($fromFieldName, 'set_')"/>
                                </xsl:when>
                                <xsl:when test="ends-with($fromFieldName, '_changed') and not($fromFieldName = 'value_changed')">
                                    <xsl:value-of select="substring-before($fromFieldName, '_changed')"/>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:value-of select="$fromFieldName"/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:attribute>
                        <xsl:value-of select="$fromFieldName"/>
                    </xsl:element> 
                    </b>
                    <br />
                    <xsl:element name="span">
                        <xsl:attribute name="title">
                            <xsl:value-of select="$fieldMismatchTooltip"/>
                        </xsl:attribute>
                        <xsl:attribute name="style">
                            <xsl:text>background-color:</xsl:text>
                            <xsl:value-of select="$fieldTypeBackgroundColor"/>
                            <xsl:text>;title:</xsl:text>
                            <xsl:text>;</xsl:text>
                        </xsl:attribute>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>X3D Tooltips: </xsl:text>
                                <xsl:value-of select="$fromFieldType"/>
                                <xsl:text> data type</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:text>_tooltip_type</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>https://www.web3d.org/x3d/content/X3dTooltips.html#</xsl:text>
                                <xsl:value-of select="$fromFieldType"/>
                            </xsl:attribute>
                            <xsl:value-of select="$fromFieldType"/>
                        </xsl:element>
                    </xsl:element>
                </td>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 3!</xsl:text>
        </xsl:message> -->
                <td style="vertical-align:middle; text-align:center; background-color:white;">
                    <!-- https://stackoverflow.com/questions/6183017/how-to-vertically-align-elements-in-td-tag -->
                    <xsl:element name="div">
                        <xsl:attribute name="style">
                            <xsl:text>background-color:</xsl:text>
                            <xsl:value-of select="$fieldTypeBackgroundColor"/>
                        </xsl:attribute>
                        <xsl:attribute name="title">
                            <xsl:value-of select="$fieldMismatchTooltip"/>
                        </xsl:attribute>
                        <!-- blank line -->
                        <br />
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>go to #ROUTE_</xsl:text>
                                <xsl:value-of select="(count(preceding::ROUTE) + 1)"/>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>#ROUTE_</xsl:text>
                                <xsl:value-of select="(count(preceding::ROUTE) + 1)"/>
                            </xsl:attribute>
                            <xsl:text>ROUTE</xsl:text>
                        </xsl:element>
                        <br />
                        <xsl:text> event to </xsl:text>
                        <br />
                        <xsl:text disable-output-escaping="yes"> &amp;#160; </xsl:text> <!-- &nbsp; -->
                    </xsl:element>
                </td>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 4!</xsl:text>
        </xsl:message> -->
                <td style="text-align:left; background-color:{$cellBackgroundColorToNode};" title="{$multipleFanInToNodeTooltip}">
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:text>#</xsl:text>
                            <xsl:value-of select="$toNodeDEF"/>
                        </xsl:attribute>
                        <xsl:attribute name="title">
                            <xsl:text>DEF name</xsl:text>
                        </xsl:attribute>
                        <xsl:value-of select="$toNodeDEF"/>
                    </xsl:element>
                    <br />
                    <b>
                        <span title="X3D node name">
                            <xsl:value-of select="$toNodeName"/>
                        </span>
                    </b>
                    <br />
                    <b>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>X3D Tooltips: field </xsl:text>
                                <xsl:value-of select="$toNodeName"/>
                                <xsl:text>.</xsl:text>
                                <xsl:choose>
                                    <xsl:when test="starts-with($toFieldName, 'set_') and not($toFieldName = 'set_fraction')">
                                        <xsl:value-of select="substring-after($toFieldName, 'set_')"/>
                                    </xsl:when>
                                    <xsl:when test="ends-with($toFieldName, '_changed') and not($toFieldName = 'fraction_changed') and not($toFieldName = 'fraction_changed') and not($toFieldName = 'value_changed')">
                                        <xsl:value-of select="substring-before($toFieldName, '_changed')"/>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:value-of select="$toFieldName"/>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:text>_blank</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>https://www.web3d.org/x3d/content/X3dTooltips.html#</xsl:text>
                                <xsl:value-of select="$toNodeName"/>
                                <xsl:text>.</xsl:text>
                                <xsl:choose>
                                    <xsl:when test="starts-with($toFieldName, 'set_') and not($toFieldName = 'set_fraction')">
                                        <xsl:value-of select="substring-after($toFieldName, 'set_')"/>
                                    </xsl:when>
                                    <xsl:when test="ends-with($toFieldName, '_changed') and not($toFieldName = 'fraction_changed') and not($toFieldName = 'value_changed')">
                                        <xsl:value-of select="substring-before($toFieldName, '_changed')"/>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:value-of select="$toFieldName"/>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:attribute>
                            <xsl:value-of select="$toFieldName"/>
                        </xsl:element>
                    </b>
                    <br />
                    <xsl:element name="span">
                        <xsl:attribute name="title">
                            <xsl:value-of select="$fieldMismatchTooltip"/>
                        </xsl:attribute>
                        <xsl:attribute name="style">
                            <xsl:text>background-color:</xsl:text>
                            <xsl:value-of select="$fieldTypeBackgroundColor"/>
                            <xsl:text>;</xsl:text>
                        </xsl:attribute>
                        <xsl:element name="a">
                            <xsl:attribute name="title">
                                <xsl:text>X3D Tooltips: </xsl:text>
                                <xsl:value-of select="$toFieldType"/>
                                <xsl:text> data type</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:text>_tooltip_type</xsl:text>
                            </xsl:attribute>
                            <xsl:attribute name="href">
                                <xsl:text>https://www.web3d.org/x3d/content/X3dTooltips.html#</xsl:text>
                                <xsl:value-of select="$toFieldType"/>
                            </xsl:attribute>
                            <xsl:value-of select="$toFieldType"/>
                        </xsl:element>
                    </xsl:element>
                </td>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 5!</xsl:text>
        </xsl:message> -->
                <xsl:choose>
                    <xsl:when test="(count(//*[@DEF eq $toNodeDEF]) > 1)">
                        <xsl:message>
                            <xsl:text>[error] more than one node found with DEF='</xsl:text>
                            <xsl:value-of select="$toNodeDEF"/>
                            <xsl:text>' and so not continuing</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <xsl:when test="($DEFname = $toNodeDEF)">
                        <xsl:message>
                            <xsl:text>[warning] </xsl:text>
                            <xsl:value-of select="$nodeName"/>
                            <xsl:text> </xsl:text>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="$toNodeDEF"/>
                            <xsl:text>' is self-routing fromfield </xsl:text>
                            <xsl:value-of select="$toFieldName"/>
                            <xsl:text>' is self-routing fromField='</xsl:text>
                            <xsl:value-of select="$fromFieldName"/>
                            <xsl:text>' toField='</xsl:text>
                            <xsl:value-of select="$toFieldName"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <xsl:when test="//ROUTE[@fromNode = $toNodeDEF]">
                        <!-- more ROUTES in chain to follow, recurse -->

                        <xsl:variable name="newNode"           select="//*[@DEF = $toNodeDEF]"/>
                        <xsl:variable name="newDEFname"        select="$toNodeDEF"/>
                        <xsl:variable name="newNodeName"       select="$toNodeName"/>
                        <xsl:variable name="newIncomingRoutes" select="//ROUTE[(  @toNode=$newDEFname) and not(@fromNode=$newDEFname)]"/>
                        <xsl:variable name="newOutgoingRoutes" select="//ROUTE[(@fromNode=$newDEFname) and not(  @toNode=$newDEFname)]"/>
                        <xsl:variable name="newSelfRoutes"     select="//ROUTE[(@fromNode=$newDEFname) and    (  @toNode=$newDEFname)]"/>

                        <xsl:choose>
                            <xsl:when test="(number($depth) gt number($maxROUTEdepth))">
                                <xsl:message>
                                    <xsl:text>[warning] [tableElementEntries #2]: ROUTE chain depth=</xsl:text>
                                    <xsl:value-of select="$depth"/>
                                    <xsl:text> exceeded internal limit of $maxROUTEdepth=</xsl:text>
                                    <xsl:value-of select="$maxROUTEdepth"/>
                                    <xsl:text>, check for an illegal loop of ROUTE connections.</xsl:text>
                                </xsl:message>
                                <xsl:message>
                                    <xsl:text>    ROUTE fromNode='</xsl:text>
                                    <xsl:value-of select="$DEFname"/>
                                    <xsl:text>' fromField='</xsl:text>
                                    <xsl:value-of select="$fromFieldName"/>
                                    <xsl:text>' toNode='</xsl:text>
                                    <xsl:value-of select="$toNodeDEF"/>
                                    <xsl:text>' toField='</xsl:text>
                                    <xsl:value-of select="$toFieldName"/>
                                    <xsl:text>'</xsl:text>
                                </xsl:message>
                                <!-- done, end tail recursion -->
                            </xsl:when>
                            <xsl:when test="(count($newOutgoingRoutes) gt number($maxROUTEdepth))">
                                <xsl:message>
                                    <xsl:text>[warning] count($newOutgoingRoutes)=</xsl:text>
                                    <xsl:value-of select="count($newOutgoingRoutes)"/>
                                    <xsl:text> which exceeds internal table-generation limit of $maxROUTEdepth=</xsl:text>
                                    <xsl:value-of select="$maxROUTEdepth"/>
                                    <xsl:text>, check for an illegal loop across ROUTE connections in this event cascade.</xsl:text>
                                </xsl:message>
                                <xsl:message>
                                    <xsl:text>    ROUTE fromNode='</xsl:text>
                                    <xsl:value-of select="$DEFname"/>
                                    <xsl:text>' fromField='</xsl:text>
                                    <xsl:value-of select="$fromFieldName"/>
                                    <xsl:text>' toNode='</xsl:text>
                                    <xsl:value-of select="$toNodeDEF"/>
                                    <xsl:text>' toField='</xsl:text>
                                    <xsl:value-of select="$toFieldName"/>
                                    <xsl:text>'</xsl:text>
                                </xsl:message>
                                <!-- done, end tail recursion -->
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:if test="number($depth) lt number($maxROUTEdepth)">
                                    <!-- continue tail recursion -->
                                    <xsl:for-each select="$newOutgoingRoutes[position() lt number($maxROUTEdepth)]">
                                        <xsl:sort select="@fromField" order="ascending" case-order="upper-first" data-type="text"/>

                                        <xsl:variable name="toNodeDEF"     select="@toNode"/>
                                        <xsl:variable name="toNodeName"    select="local-name(//*[@DEF eq $toNodeDEF])"/>
                                        <xsl:variable name=  "toFieldName" select="@toField"/>
                                        <xsl:variable name="fromFieldName" select="@fromField"/>

                                        <td style="text-align:center; background-color:white; vertical-align:bottom;">
                                            <!-- vertical-align:middle; https://stackoverflow.com/questions/6183017/how-to-vertically-align-elements-in-td-tag -->

                                            <span style="background-color:lightgrey;">
                                                <i>
                                                    <xsl:text>then</xsl:text>
                                                </i>
                                            </span>
                                        </td>

                                        <xsl:choose>
                                            <xsl:when test="(position() gt number($maxROUTEdepth))">
                                                <xsl:message>
                                                    <xsl:text>[warning] [tableElementEntries #3]: ROUTE chain position()=</xsl:text>
                                                    <xsl:value-of select="position()"/>
                                                    <xsl:text> exceeded internal limit of $maxROUTEdepth=</xsl:text>
                                                    <xsl:value-of select="$maxROUTEdepth"/>
                                                    <xsl:text>, check for an illegal loop of ROUTE connections.</xsl:text>
                                                </xsl:message>
                                                <xsl:message>
                                                    <xsl:text>    ROUTE fromNode='</xsl:text>
                                                    <xsl:value-of select="$DEFname"/>
                                                    <xsl:text>' fromField='</xsl:text>
                                                    <xsl:value-of select="$fromFieldName"/>
                                                    <xsl:text>' toNode='</xsl:text>
                                                    <xsl:value-of select="$toNodeDEF"/>
                                                    <xsl:text>' toField='</xsl:text>
                                                    <xsl:value-of select="$toFieldName"/>
                                                    <xsl:text>'</xsl:text>
                                                </xsl:message>
                                                <!-- done, end tail recursion -->
                                            </xsl:when>
                                            <!-- avoid excessive recursing -->
                                            <xsl:when test="(number($depth) le number($maxROUTEdepth))">
                                                <!-- debug
                                                <xsl:message>
                                                    <xsl:text>[warning] [tableElementEntries #4a]: ROUTE chain position()=</xsl:text>
                                                    <xsl:value-of select="position()"/>
                                                </xsl:message>
                                                -->
                                                <xsl:call-template name="tableElementEntries">
                                                    <xsl:with-param name="DEFname"      ><xsl:value-of select="$newDEFname"/></xsl:with-param>
                                                    <xsl:with-param name="nodeName"     ><xsl:value-of select="$newNodeName"/></xsl:with-param>
                                                    <xsl:with-param name="fromFieldName"><xsl:value-of select="$fromFieldName"/></xsl:with-param>
                                                    <xsl:with-param name="toNodeDEF"    ><xsl:value-of select="$toNodeDEF"/></xsl:with-param>
                                                    <xsl:with-param name="toNodeName"   ><xsl:value-of select="$toNodeName"/></xsl:with-param>
                                                    <xsl:with-param name="toFieldName"  ><xsl:value-of select="$toFieldName"/></xsl:with-param>
                                                    <xsl:with-param name="depth"        ><xsl:value-of select="$depth + 1"/></xsl:with-param>
                                                </xsl:call-template>
                                                <!-- debug
                                                <xsl:message>
                                                    <xsl:text>[warning] [tableElementEntries #4b]: ROUTE chain position()=</xsl:text>
                                                    <xsl:value-of select="position()"/>
                                                    <xsl:text>, depth=</xsl:text>
                                                    <xsl:value-of select="$depth"/>
                                                    <xsl:text>, template returned</xsl:text>
                                                </xsl:message>
                                                -->

                                                <!-- finished with latest, time for a new row? -->
                                                <xsl:if test="not(position() eq last()) and not(position() gt number($maxROUTEdepth)) and not($depth gt $maxROUTEdepth)">
                                                    <!-- start a new row, indent according to nested depth -->
                                                    <xsl:text disable-output-escaping="yes">&#10;&lt;/tr>&#10;</xsl:text>
                                                    <xsl:text disable-output-escaping="yes">&#10;&lt;tr>&#10;</xsl:text>
                                                    <xsl:text disable-output-escaping="yes">         </xsl:text>
                                                    <xsl:call-template name="indentTableColumns">
                                                        <xsl:with-param name="newDepth"      ><xsl:value-of select="$depth"/></xsl:with-param>
                                                    </xsl:call-template>
                                                </xsl:if>
                                                <!-- debug
                                                <xsl:message>
                                                    <xsl:text>[warning] [tableElementEntries #4c]: ROUTE chain position()=</xsl:text>
                                                    <xsl:value-of select="position()"/>
                                                    <xsl:text>, depth=</xsl:text>
                                                    <xsl:value-of select="$depth"/>
                                                    <xsl:text>, template iteration at end of loop</xsl:text>
                                                </xsl:message>
                                                -->
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <!-- debug
                                                -->
                                                <xsl:message>
                                                    <xsl:text>[warning] [tableElementEntries #4d]: excessive depth at position()=</xsl:text>
                                                    <xsl:value-of select="position()"/>
                                                    <xsl:text>, number($depth)=</xsl:text>
                                                    <xsl:value-of select="number($depth)"/>
                                                    <xsl:text>, number($maxROUTEdepth)=</xsl:text>
                                                    <xsl:value-of select="number($maxROUTEdepth)"/>
                                                </xsl:message>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:for-each>
                                </xsl:if>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- debug
                        <xsl:message>
                            <xsl:text>[debug] inner-loop tail recursion complete: depth=</xsl:text>
                            <xsl:value-of select="$depth"/>
                            <xsl:text>, from </xsl:text>
                            <xsl:value-of select="$DEFname"/>
                            <xsl:text> to </xsl:text>
                            <xsl:value-of select="$toNodeDEF"/>
                            <xsl:text>, time to start new row</xsl:text>
                        </xsl:message>
                        -->
                        <xsl:comment>time to start new row</xsl:comment>
                    </xsl:otherwise>
                </xsl:choose>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 6!</xsl:text>
        </xsl:message> -->
        
                <!-- completed tail recursion for this event chain -->
            </xsl:otherwise>
        </xsl:choose>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] here 7! tableElementEntries template complete...</xsl:text>
        </xsl:message>  -->
      
      </xsl:when>
      <xsl:otherwise>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] stylesheet warning, attempted to recurse to depth=</xsl:text>
            <xsl:value-of select="$depth"/>
            <xsl:text>, from </xsl:text>
            <xsl:value-of select="$DEFname"/>
            <xsl:text>.</xsl:text>
            <xsl:value-of select="$fromFieldName"/>
            <xsl:text> to </xsl:text>
            <xsl:value-of select="$toNodeDEF"/>
            <xsl:text>.</xsl:text>
            <xsl:value-of select="$toFieldName"/>
        </xsl:message>
        -->
      </xsl:otherwise>
    </xsl:choose>
    
    </xsl:template>

    <xsl:template name="newHAnimNameValue">
        <xsl:param name="nameValue"><xsl:text></xsl:text></xsl:param>
        <xsl:param name="nodeName"><xsl:text></xsl:text></xsl:param>
        
        <!-- newNameValue check may be performed within an HAnimHumanoid or else outside (for example, by ROUTE) -->
        <xsl:variable name="isHAnim1" select="$isX3D3 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'1') or (string-length(@version) = 0)])"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'2')])"/>
        <xsl:if test="($isHAnim1 = true()) and ($isHAnim2 = true())">
            <xsl:message>
                <xsl:text>[diagnostic] error in X3dToXhtml.xslt internal logic, $isHAnim1 and $isHAnim2 are both true, newNameValue entry for </xsl:text>
                <xsl:value-of select="$nodeName "/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="$nameValue"/>
            </xsl:message>
        </xsl:if>
      
        <xsl:choose>
            <xsl:when test="($nodeName = 'ROUTE') and ((local-name() = 'fromNode') or (local-name() = 'toNode'))">
                <xsl:variable name="attributeValue" select="."/>
                <xsl:choose>
                    <xsl:when test="//*[starts-with(local-name(),'HAnim')][@DEF = $attributeValue]">
                        <!-- apply change, if any -->
                        <xsl:variable name="newNameValue">
                            <xsl:call-template name="newHAnimNameValue">
                                <xsl:with-param name="nameValue"><xsl:value-of select="substring-after($attributeValue,'_')"/></xsl:with-param>
                                <xsl:with-param name="nodeName" ><xsl:value-of select="local-name(//*[starts-with(local-name(),'HAnim')][@DEF = $attributeValue])"/></xsl:with-param>
                            </xsl:call-template>
                        </xsl:variable>
                        <!-- provide value -->
                        <xsl:value-of select='$newNameValue'/>
                        <xsl:if test="not(substring-after($attributeValue,'_') = $newNameValue)">
                        <!-- debug
                            <xsl:message>
                                <xsl:text>[debug] HAnim2 ROUTE check: </xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="$attributeValue"/>
                                <xsl:text>'</xsl:text>
                                <xsl:text> with computed name='</xsl:text>
                                <xsl:value-of select="substring-after($attributeValue,'_')"/>
                                <xsl:text>'</xsl:text>
                                <xsl:text> for target </xsl:text>
                                <xsl:value-of select="local-name(//*[starts-with(local-name(),'HAnim')][@DEF = $attributeValue])"/>
                                <xsl:text>,</xsl:text>
                                <xsl:text> newNameValue='</xsl:text>
                                <xsl:value-of select="$newNameValue"/>
                                <xsl:text>'</xsl:text>
                                <xsl:text> isHAnim1=</xsl:text>
                                <xsl:value-of select="$isHAnim1"/>
                                <xsl:text> isHAnim2=</xsl:text>
                                <xsl:value-of select="$isHAnim2"/>
                           </xsl:message>
                        -->
                        </xsl:if>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$attributeValue"/><!-- no change -->
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:when>
            <xsl:when test="($nodeName = 'HAnimJoint')">
                <xsl:choose>
                    <xsl:when test="($nameValue = 'SIJ')"><xsl:text>sacroiliac</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_ankle')"><xsl:text>l_talocrural</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_talocalcaneal')"><xsl:text>l_talocalcaneonavicular</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_talocalcaneal')"><xsl:text>l_cuneonavicular_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_talocalcaneal')"><xsl:text>l_cuneonavicular_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_subtalar')"><xsl:text>l_tarsometatarsal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_midtarsal')"><xsl:text>l_metatarsophalangeal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_metatarsal')"><xsl:text>l_tarsal_distal_interphalangeal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_talocalcaneal')"><xsl:text>l_cuneonavicular_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_calcaneuscuboid')"><xsl:text>l_calcaneocuboid</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_ankle')"><xsl:text>r_talocrural</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_talocalcaneal')"><xsl:text>r_talocalcaneonavicular</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_talocalcaneal')"><xsl:text>r_cuneonavicular_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_talocalcaneal')"><xsl:text>r_cuneonavicular_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_subtalar')"><xsl:text>r_tarsometatarsal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_midtarsal')"><xsl:text>r_metatarsophalangeal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_metatarsal')"><xsl:text>r_tarsal_distal_interphalangeal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_talocalcaneal')"><xsl:text>r_cuneonavicular_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_calcaneuscuboid')"><xsl:text>r_calcaneocuboid</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_wrist')"><xsl:text>l_radiocarpal</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_wrist')"><xsl:text>r_radiocarpal</xsl:text></xsl:when>
                    <xsl:otherwise><xsl:value-of select="$nameValue"/></xsl:otherwise><!-- no change -->
                </xsl:choose>
            </xsl:when>
            <xsl:when test="($nodeName = 'HAnimSegment')">
                <xsl:choose>
                    <xsl:when test="($nameValue = 'l_hindfoot')"><xsl:text>l_talus</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_midproximal')"><xsl:text>l_metatarsal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_middistal')"><xsl:text>l_tarsal_proximal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_forefoot')"><xsl:text>l_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_calcaneum')"><xsl:text>l_calcaneus</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_hindfoot')"><xsl:text>r_talus</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_midproximal')"><xsl:text>r_metatarsal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_middistal')"><xsl:text>r_tarsal_proximal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_forefoot')"><xsl:text>r_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_calcaneum')"><xsl:text>r_calcaneus</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'head')"><xsl:text>skull</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_hand')"><xsl:text>l_carpal</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_thumb_metacarpal')"><xsl:text>l_metacarpal_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_thumb_proximal')"><xsl:text>l_carpal_proximal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_thumb_distal')"><xsl:text>l_carpal_distal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_index_metacarpal')"><xsl:text>l_metacarpal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_index_proximal')"><xsl:text>l_carpal_proximal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_index_middle')"><xsl:text>l_carpal_middle_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_index_distal')"><xsl:text>l_carpal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_middle_metacarpal')"><xsl:text>l_metacarpal_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_middle_proximal')"><xsl:text>l_carpal_proximal_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_middle_middle')"><xsl:text>l_carpal_middle_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_middle_distal')"><xsl:text>l_carpal_distal_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_ring_metacarpal')"><xsl:text>l_metacarpal_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_ring_proximal')"><xsl:text>l_carpal_proximal_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_ring_middle')"><xsl:text>l_carpal_middle_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_ring_distal')"><xsl:text>l_carpal_distal_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_pinky_metacarpal')"><xsl:text>l_metacarpal_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_pinky_proximal')"><xsl:text>l_carpal_proximal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_pinky_middle')"><xsl:text>l_carpal_middle_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_pinky_distal')"><xsl:text>l_carpal_distal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_hand')"><xsl:text>r_carpal</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_thumb_metacarpal')"><xsl:text>r_metacarpal_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_thumb_proximal')"><xsl:text>r_carpal_proximal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_thumb_distal')"><xsl:text>r_carpal_distal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_index_metacarpal')"><xsl:text>r_metacarpal_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_index_proximal')"><xsl:text>r_carpal_proximal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_index_middle')"><xsl:text>r_carpal_middle_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_index_distal')"><xsl:text>r_carpal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_middle_metacarpal')"><xsl:text>r_metacarpal_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_middle_proximal')"><xsl:text>r_carpal_proximal_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_middle_middle')"><xsl:text>r_carpal_middle_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_middle_distal')"><xsl:text>r_carpal_distal_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_ring_metacarpal')"><xsl:text>r_metacarpal_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_ring_proximal')"><xsl:text>r_carpal_proximal_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_ring_middle')"><xsl:text>r_carpal_middle_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_ring_distal')"><xsl:text>r_carpal_distal_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_pinky_metacarpal')"><xsl:text>r_metacarpal_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_pinky_proximal')"><xsl:text>r_carpal_proximal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_pinky_middle')"><xsl:text>r_carpal_middle_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_pinky_distal')"><xsl:text>r_carpal_distal_phalanx_5</xsl:text></xsl:when>
                    <xsl:otherwise><xsl:value-of select="$nameValue"/></xsl:otherwise><!-- no change -->
                </xsl:choose>                
            </xsl:when>
            <xsl:when test="($nodeName = 'HAnimSite')">
                <xsl:choose>
                    <xsl:when test="($nameValue = 'vertex')"><xsl:text>skull_vertex</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_clavicale')"><xsl:text>l_clavicle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_axilla_ant')"><xsl:text>l_axilla_proximal</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_axilla_post')"><xsl:text>l_axilla_distal</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_clavicale')"><xsl:text>r_clavicle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_axilla_ant')"><xsl:text>r_axilla_proximal</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_axilla_post')"><xsl:text>r_axilla_distal</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'middle back')"><xsl:text>spine_1_middle_back</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'lower back')"><xsl:text>spine_2_lower_back</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'waist_preferred_post')"><xsl:text>waist_preferred_anterior</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'waist_preferred_ant')"><xsl:text>waist_preferred_posterior</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_rib10_midspine')"><xsl:text>l_rib10</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'Left Bustpoint')"><xsl:text>l_thelion</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_rib10_midspine')"><xsl:text>r_rib10</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'Right Bustpoint')"><xsl:text>r_thelion</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'Leftt Anterior Superior Iliac Spine')"><xsl:text>l_asis</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'Left Posterior Superior Iliac Spine')"><xsl:text>l_psis</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'Right Anterior Superior Iliac Spine')"><xsl:text>r_asis</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'Right Posterior Superior Iliac Spine')"><xsl:text>r_psis</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_femoral_lateral_epicn')"><xsl:text>l_femoral_lateral_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_femoral_medial_epicn')"><xsl:text>l_femoral_medial_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_kneecap')"><xsl:text>l_suprapatella</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_trochanter')"><xsl:text>l_trochanterion</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_femoral_lateral_epicn')"><xsl:text>r_femoral_lateral_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_femoral_medial_epicn')"><xsl:text>r_femoral_medial_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_kneecap')"><xsl:text>r_suprapatella</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_trochanter')"><xsl:text>r_trochanterion</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_metatarsal_pha1')"><xsl:text>l_metatarsal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_metatarsal_pha5')"><xsl:text>l_metatarsal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_calcaneum')"><xsl:text>l_calcaneus_posterior</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_metatarsal_pha1')"><xsl:text>r_metatarsal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_metatarsal_pha5')"><xsl:text>r_metatarsal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_calcaneum')"><xsl:text>r_calcaneus_posterior</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_humeral_lateral_epicn')"><xsl:text>l_humeral_lateral_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_humeral_lateral_epicn')"><xsl:text>l_humeral_medial_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_humeral_lateral_epicn')"><xsl:text>r_humeral_lateral_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_humeral_lateral_epicn')"><xsl:text>r_humeral_medial_epicondyle</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_metacarpal_pha2')"><xsl:text>l_metacarpal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_metacarpal_pha5')"><xsl:text>l_metacarpal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_metacarpal_pha2')"><xsl:text>r_metacarpal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_metacarpal_pha5')"><xsl:text>r_metacarpal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'nuchal')"><xsl:text>nuchale</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'belly button')"><xsl:text>navel</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_canthus')"><xsl:text>l_ectocanthus</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_canthus')"><xsl:text>r_ectocanthus</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'chin')"><xsl:text>menton</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'mesosternum')"><xsl:text>mesosternale</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'median plane')"><xsl:text>rear_center_midsagittal_plane</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_shoulder')"><xsl:text>l_chest_midsagittal_plane</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_shoulder')"><xsl:text>r_chest_midsagittal_plane</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_thumb_distal')"><xsl:text>l_carpal_distal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_index_distal')"><xsl:text>l_carpal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_middle_distal')"><xsl:text>l_carpal_distal_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_ring_distal')"><xsl:text>l_carpal_distal_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_pinky_distal')"><xsl:text>l_carpal_distal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_thumb_distal')"><xsl:text>r_carpal_distal_phalanx_1</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_index_distal')"><xsl:text>r_carpal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_middle_distal')"><xsl:text>r_carpal_distal_phalanx_3</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_ring_distal')"><xsl:text>r_carpal_distal_phalanx_4</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_pinky_distal')"><xsl:text>r_carpal_distal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_digit2')"><xsl:text>l_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'l_tarsal_interphalangeal_pha5')"><xsl:text>l_tarsal_distal_phalanx_5</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_digit2')"><xsl:text>r_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                    <xsl:when test="($nameValue = 'r_tarsal_interphalangeal_pha5')"><xsl:text>r_tarsal_distal_phalanx_5</xsl:text></xsl:when>
                    <xsl:otherwise><xsl:value-of select="$nameValue"/></xsl:otherwise><!-- no change -->
                </xsl:choose>                
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$nameValue"/><!-- no change or empty value -->
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
	
    <xsl:template name="attribute-type"> <!-- rule to determine attribute type -->
        <xsl:param name="parentElementDEF" ><xsl:text></xsl:text></xsl:param>
        <xsl:param name="attributeNameFull"><xsl:text></xsl:text></xsl:param>
        
        <xsl:variable name="parentElementName">
            <xsl:choose>
                <xsl:when test="(count(//*[@DEF = $parentElementDEF]) = 1)">
                    <xsl:value-of select="local-name(//*[@DEF = $parentElementDEF])"/>
                </xsl:when>
                <xsl:when test="(count(//*[@DEF = $parentElementDEF]) gt 1)">
                    <xsl:text>MoreThanOneNodeFound</xsl:text>
                        <xsl:message>
                            <xsl:text>[error] more than one node found for DEF='</xsl:text>
                            <xsl:value-of select="$parentElementDEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>NodeNotFound</xsl:text>
                        <xsl:message>
                            <xsl:text>[error] node not found for DEF='</xsl:text>
                            <xsl:value-of select="$parentElementDEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        
        <xsl:variable name="attributeName">
            <xsl:choose>
                <xsl:when test="($parentElementName = 'Script') or ($parentElementName = 'ProtoInstance') or contains($parentElementName, 'Shader')">
                    <xsl:value-of select="$attributeNameFull"/>
                </xsl:when>
                <xsl:when               test="starts-with($attributeNameFull, 'set_')">
                    <xsl:value-of select="substring-after($attributeNameFull, 'set_')"/>
                </xsl:when>
                <xsl:when                  test="ends-with($attributeNameFull, '_changed')">
                    <xsl:value-of select="substring-before($attributeNameFull, '_changed')"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$attributeNameFull"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] attribute-type start, $parentElementDEF=</xsl:text>
            <xsl:value-of select="$parentElementDEF"/>
            <xsl:text>, $attributeNameFull=</xsl:text>
            <xsl:value-of select="$attributeNameFull"/>
            <xsl:text>, $parentElementName=</xsl:text>
            <xsl:value-of select="$parentElementName"/>
        </xsl:message>
        -->
	
        <!-- Note:  these rules are adapted from X3dToVrml97.xslt X3dToJson.xslt X3dToJava.xslt X3dToES5.xslt etc. so be sure to apply any updates in all stylesheets -->

        <xsl:variable name="normalizeSpaceValue" select="normalize-space(string(.))"/>
        <xsl:variable name="localFieldType"> <!-- locally defined field -->
            <xsl:choose>
                <xsl:when test="($parentElementName = 'Script')"><!-- field -->
                    <xsl:value-of select="normalize-space(//Script[@DEF = $parentElementDEF]/field[@name = $attributeName]/@type)"/>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>[debug] Script DEF='</xsl:text>
                        <xsl:value-of select="$parentElementDEF"/>
                        <xsl:text>' field attributeName='</xsl:text>
                        <xsl:value-of select="$attributeName"/>
                        <xsl:text>' @type='</xsl:text>
                        <xsl:value-of select="normalize-space(//Script[@DEF = $parentElementDEF]/field[@name = $attributeName]/@type)"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message> -->
                </xsl:when>
                <xsl:when test="($parentElementName = 'ProtoInstance')"><!-- field -->
                    <xsl:variable name="prototypeName">
                        <xsl:choose>
                            <xsl:when test="(string-length(@name) > 1)">
                                <xsl:value-of      select="@name"/>
                            </xsl:when>
                            <xsl:when test="(string-length(//ProtoInstance[@DEF = $parentElementDEF]/@name) > 1)">
                                <xsl:value-of      select="//ProtoInstance[@DEF = $parentElementDEF]/@name"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>UnknownPrototype</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:variable name="prototypeDefinition">
                        <xsl:choose>
                            <xsl:when test="//ProtoDeclare[@name = $prototypeName]">
                                <xsl:text>ProtoDeclare</xsl:text>
                            </xsl:when>
                            <xsl:when test="//ExternProtoDeclare[@name = $prototypeName]">
                                <xsl:text>ExternProtoDeclare</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>UnknownPrototype</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>[debug] ProtoInstance prototypeName='</xsl:text>
                        <xsl:value-of select="$prototypeName"/>
                        <xsl:text>' prototypeDefinition='</xsl:text>
                        <xsl:value-of select="$prototypeDefinition"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                    -->
                    <xsl:choose>
                        <xsl:when test="($prototypeDefinition = 'ProtoDeclare') and 
                                   (string-length(//ProtoDeclare[@name = $prototypeName]/ProtoInterface/field[@name = $attributeName]/@type) > 0)">
                            <xsl:value-of select="//ProtoDeclare[@name = $prototypeName]/ProtoInterface/field[@name = $attributeName]/@type"/>
                        </xsl:when>
                        <xsl:when test="($prototypeDefinition = 'ProtoDeclare')">
                            <xsl:text>UnknownField</xsl:text>
                        </xsl:when>
                        <xsl:when test="($prototypeDefinition = 'ExternProtoDeclare')">
                            <xsl:text>UnknownFieldTypeExternallyDefined</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>UnknownFieldType</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:when test="(string-length(normalize-space(../@type)) > 0)"><!-- field -->
                    <xsl:value-of select="normalize-space(../@type)"/>
                </xsl:when>
                <xsl:when test="($parentElementName = 'fieldValue')"><!-- fieldValue -->
                    <xsl:variable name="parentProtoInstanceName" select="../../@name"/><!-- if current element is fieldValue -->
                    <xsl:variable name="fieldValueName" select="../@name"/>            <!-- if current element is fieldValue -->
                    <xsl:variable name="fieldValuePriorDeclarationType">
                        <xsl:choose>
                            <xsl:when                 test="//ProtoDeclare[@name = $parentProtoInstanceName]">
                                <xsl:value-of       select="//ProtoDeclare[@name = $parentProtoInstanceName]/ProtoInterface/field[@name = $fieldValueName]/@type"/>
                                
                                <xsl:message>
                                    <xsl:text>     fieldValuePriorDeclarationType=</xsl:text>
                                    <xsl:value-of select="//ProtoDeclare[@name = $parentProtoInstanceName]/ProtoInterface/field[@name = $fieldValueName]/@type"/>
                                </xsl:message>
                            </xsl:when>
                            <xsl:when           test="//ExternProtoDeclare[@name = $parentProtoInstanceName]">
                                <xsl:value-of select="//ExternProtoDeclare[@name = $parentProtoInstanceName]/field[@name = $fieldValueName]/@type"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- FIELD_DECLARATION_NOT_FOUND -->
                                <xsl:message>
                                    <xsl:text>[error] attribute-type: FIELD_DECLARATION_NOT_FOUND, no ProtoDeclare or ExternProtoDeclare found for ProtoInstance name='</xsl:text>
                                    <xsl:value-of select="$parentProtoInstanceName"/>
                                    <xsl:text>' $parentElementName='</xsl:text>
                                    <xsl:value-of select="$parentElementName"/>
                                    <xsl:text>' fieldValue name='</xsl:text>
                                    <xsl:value-of select="$fieldValueName"/>
                                    <xsl:text>', using SFString</xsl:text>
                                </xsl:message>
                                <xsl:text>SFString</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:value-of select="$fieldValuePriorDeclarationType"/>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>[debug] attribute-type: ProtoInstance name='</xsl:text>
                        <xsl:value-of select="$parentProtoInstanceName"/>
                        <xsl:text>' $parentElementName='</xsl:text>
                        <xsl:value-of select="$parentElementName"/>
                        <xsl:text>' fieldValue name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>' $fieldValueName='</xsl:text>
                        <xsl:value-of select="$fieldValueName"/>
                        <xsl:text>' $attributeName='</xsl:text>
                        <xsl:value-of select="$attributeName"/>
                        <xsl:text>' $fieldValuePriorDeclarationType='</xsl:text>
                        <xsl:value-of select="$fieldValuePriorDeclarationType"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                    -->
                </xsl:when>
                <xsl:otherwise>
                    <!-- not found here, maybe later -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>

        <xsl:choose>
            <xsl:when test="starts-with($localFieldType, 'Unknown')">
                <xsl:value-of select="$localFieldType"/>
            </xsl:when>
            <!--
            <xsl:when test="(string-length($localFieldType) = 0)">
                <xsl:text>Unknown</xsl:text>
            </xsl:when>
            -->
            <!-- SFString -->
            <!-- omitted SFString test: field/fieldValue contents of value field are determined by 
               local (Extern)ProtoDeclare/field type definition, not X3D Schema:
               (starts-with($parentElementName,'field') and ($attributeName='value'))      or -->
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
                          ($parentElementName='KeySensor'                  and (($attributeName='keyPress') or ($attributeName='keyRelease'))) or
                          ($parentElementName='StringSensor'               and (($attributeName='enteredText') or ($attributeName='finalText'))) or
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
		  <!-- FontStyle style->glyphStyle renaming rejected, can accept any kind of value for style field, Mantis 1335 -->
		  <!-- SFDouble -->
		  <xsl:when test="($localFieldType='SFDouble')          or 
                          ($parentElementName='unit'      and $attributeName='conversionFactor')">
			  <xsl:text>SFDouble</xsl:text>
		  </xsl:when>
		  <!-- X3D statements (i.e. not nodes): xs:string (including X3D version attribute) -->
		  <xsl:when test="($parentElementName='X3D')     or ($parentElementName='ROUTE')   or ($parentElementName='meta')    or
					      ($parentElementName='EXPORT')  or ($parentElementName='IMPORT')  or ($parentElementName='connect')">
			  <!-- includes X3D version. field/fieldValue type logic handled separately -->
			  <xsl:text>xs:string</xsl:text> 
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
					($attributeName='boolean')           or
					($attributeName='bind')              or
					($attributeName='inputFalse')        or
					($attributeName='inputTrue')         or
					($attributeName='inputNegate')       or
					($attributeName='isActive')          or
					($attributeName='isBound')           or
					($attributeName='isLoaded')            or
					($attributeName='isOver')            or
					($attributeName='isPaused')          or
					($attributeName='triggerTrue')       or
					($parentElementName='BooleanSequencer' and $attributeName='value') or
					($localFieldType='SFBool')           or 
                                        ($attributeName='activate')          or
                                        ($attributeName='bboxDisplay')       or
					($attributeName='ccw')               or
					($attributeName='closed')            or
					($attributeName='convex')            or
					($attributeName='colorPerVertex')    or
					($attributeName='enabled')           or
					($attributeName='dopplerEnabled')    or
					($attributeName='enableHRTF')        or
					($attributeName='global')            or
					($attributeName='normalPerVertex')   or
					($attributeName='on')                or
					($attributeName='load')              or
					($attributeName='loop')              or
					($attributeName='next')              or
					($attributeName='previous')          or
					($attributeName='normalize')         or
					($attributeName='normalizeVelocity') or
					($attributeName='rtpHeaderExpected') or
					($attributeName='shadows')           or
					($attributeName='solid')             or
					($attributeName='spatialize')        or
					($attributeName='trackCurrentView')  or
					($attributeName='uClosed') or ($attributeName='vClosed') or
					($attributeName='viewAll') or
					($attributeName='visible') or
					($parentElementName='AudioClip' and $attributeName='loop') or
					($parentElementName='BooleanSequencer' and $attributeName='value') or
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
					($parentElementName='KeySensor' and ($attributeName='altKey' or $attributeName='controlKey' or $attributeName='shiftKey')) or
					($parentElementName='StringSensor' and ($attributeName='deletionAllowed')) or
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
					($parentElementName='Shape' and $attributeName='castShadow') or
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
					(($parentElementName='ColorInterpolator' or $parentElementName='ColorChaser' or $parentElementName='ColorDamper') and 
                                         ($attributeName='value' or $attributeName='destination')) or
					($localFieldType='SFColor')  or 
					($parentElementName='CartoonVolumeStyle' and ($attributeName='orthogonalColor' or $attributeName='parallelColor')) or
					($parentElementName='ColorChaser' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='ColorDamper' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					(contains($parentElementName,'Light') and $attributeName='color') or
					($parentElementName='FillProperties' and ($attributeName='hatchColor')) or
					(contains($parentElementName,'Fog') and $attributeName='color') or
					(ends-with($parentElementName,'Material') and contains($attributeName,'Color')) or
					($parentElementName='MultiTexture' and $attributeName='color') or
                                        (starts-with($parentElementName,'TextureProjector') and $attributeName='color')">
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
					(($parentElementName='ScalarInterpolator' or $parentElementName='ScalarChaser' or $parentElementName='ScalarDamper') and 
                                         ($attributeName='value' or $attributeName='destination')) or
					($localFieldType='SFFloat')  or 
                                        ends-with($attributeName,'Rate')    or
                                        ($attributeName='absorption')       or
                                        ($attributeName='ambientIntensity') or
					($attributeName='attack')           or
                                        ($attributeName='coneInnerAngle')   or ($attributeName='coneOuterAngle')  or ($attributeName='coneOuterGain')    or
					($attributeName='creaseAngle')      or
                                        ($attributeName='detune')           or
                                        ($attributeName='diffuse')          or
					($attributeName='farDistance')      or ($attributeName='nearDistance')    or
					($attributeName='fraction')         or
					($attributeName='frequency')        or
					($attributeName='gain')             or
					($attributeName='intensity')        or
					($attributeName='interauralDistance') or
					($attributeName='knee')             or
					($attributeName='loopEnd')          or ($attributeName='loopStart')       or
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
					($parentElementName='LoadSensor'           and ($attributeName='progress'))  or
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
					(contains($parentElementName,'BufferAudioSource') and $attributeName='uffer') or
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
                    ($localFieldType='SFTime')              or 
                    contains($attributeName,'Time')         or
                    contains($attributeName,'Duration')     or
                    ($attributeName='cycleInterval')        or
                    ($attributeName='cycleTime')            or
                    ($attributeName='pauseTime')            or
                    ($attributeName='resumeTime')           or
                    ($attributeName='startTime')            or
                    ($attributeName='stopTime')             or
                    ($attributeName='touchTime')            or
                    ($attributeName='triggerTime')          or
                    ($attributeName='time')                 or
                    ($attributeName='duration')             or
                    ($attributeName='elapsedTime')          or
                    ($attributeName='autoRefresh')          or
                    ($attributeName='autoRefreshTimeLimit') or
                    ($attributeName='tau')                  or
                    ($attributeName='timestamp')            or
                    ($attributeName='readInterval')         or
                    ($attributeName='writeInterval')        or
                    ($parentElementName='LoadSensor'     and ($attributeName='loadTime') or ($attributeName='timeOut'))  or
                    ($parentElementName='AudioClip'      and ends-with($attributeName,'Time'))  or
                    ($parentElementName='EspduTransform' and ends-with($attributeName,'Time'))  or
                    ($parentElementName='HAnimMotion'    and $attributeName='frameDuration') or
                    ($parentElementName='MovieTexture'   and ends-with($attributeName,'Time'))"> 
			  <!-- TimeSensor loop & enabled are caught by SFBool tests, all other TimeSensor fields are SFTime -->
			  <xsl:text>SFTime</xsl:text>
		  </xsl:when>
		  <!-- no MFTime -->
		  <!-- SFVec2f -->
		  <xsl:when test="
					(($parentElementName='PositionInterpolator2D' or $parentElementName='PositionChaser2D' or $parentElementName='PositionDamper2D') and 
                                         ($attributeName='value' or $attributeName='destination')) or
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
					(($parentElementName='CoordinateInterpolator2D' or $parentElementName='CoordinateChaser2D' or $parentElementName='CoordinateDamper2D') and 
                                         ($attributeName='value' or $attributeName='destination')) or
					(($parentElementName='TexCoordChaser2D' or $parentElementName='TexCoordDamper2D') and 
                                         ($attributeName='value' or $attributeName='destination')) or
					($localFieldType='MFVec2f')  or 
                                        ($parentElementName='EaseInEaseOut' and $attributeName='easeInEaseOut') or
					($parentElementName='Extrusion' and ($attributeName='crossSection' or $attributeName='scale')) or
					(($parentElementName='CoordinateInterpolator2D' or $parentElementName='PositionInterpolator2D') and $attributeName='keyValue') or
					(($parentElementName='ContourPolyline2D' or $parentElementName='Polypoint2D' or $parentElementName='TextureCoordinate') and $attributeName='point') or
					(($parentElementName='NurbsTextureCoordinate') and $attributeName='controlPoint') or
					(($parentElementName='Polyline2D') and $attributeName='lineSegments') or
					(($parentElementName='SplinePositionInterpolator2D') and ($attributeName='keyValue' or $attributeName='keyVelocity')) or
					($parentElementName='TexCoordChaser2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					($parentElementName='TexCoordDamper2D' and ($attributeName='initialDestination' or $attributeName='initialValue')) or
					(($parentElementName='TriangleSet2D') and $attributeName='vertices')">
			  <xsl:text>MFVec2f</xsl:text>
		  </xsl:when>
		  <!-- MFVec2d -->
		  <xsl:when test="
					($localFieldType='MFVec2d')  or
					(($parentElementName='ContourPolyline2D') or ($parentElementName='NurbsCurve2D') and $attributeName='controlPoint')">
                          <xsl:text>MFVec2d</xsl:text>
		  </xsl:when>
		   
		  <!-- SFVec3d -->
		  <xsl:when test="
					($localFieldType='SFVec3d')  or 
                                        ($attributeName='geovalue') or
                                        ($attributeName='geoCenter') or
					($attributeName='geoCoords') or
					($parentElementName='GeoElevationGrid'   and $attributeName='geoGridOrigin') or
					($parentElementName='GeoLOD'             and $attributeName='center') or
					($parentElementName='GeoProximitySensor' and $attributeName='center') or
					($parentElementName='GeoTouchSensor' and $attributeName='hitGeoCoord') or
					($parentElementName='GeoViewpoint'       and ($attributeName='centerOfRotation' or $attributeName='position'))">
			  <xsl:text>SFVec3d</xsl:text>
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
					(($parentElementName='PositionInterpolator'      or $parentElementName='PositionChaser' or 
                                          $parentElementName='PositionDamper'            or $parentElementName='NormalInterpolator' or 
                                          $parentElementName='NurbsPositionInterpolator' or $parentElementName='GeoPositionInterpolator') and 
                                         ($attributeName='value' or $attributeName='destination')) or
					($localFieldType='SFVec3f')    or
					($attributeName='hitNormal')   or
					($attributeName='hitPoint')    or
					($attributeName='hitTexCoord') or
					($attributeName='trackPoint')  or
                                        ($attributeName='anchorPoint') or
					($attributeName='bboxCenter')  or
					($attributeName='bboxSize')    or
					($attributeName='center')      or
					($attributeName='direction')   or
					($attributeName='location')    or
					($attributeName='position')    or
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
					($parentElementName='PlaneSensor' and $attributeName='offset') or
					($parentElementName='PointProperties' and ($attributeName='attenuation')) or
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
					(starts-with($parentElementName,'TextureProjector') and ($attributeName='direction' or $attributeName='location' or $attributeName='upVector')) or
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
					(($parentElementName='CoordinateInterpolator' or $parentElementName='CoordinateChaser' or $parentElementName='CoordinateDamper') and 
                                         ($attributeName='value' or $attributeName='destination')) or
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
					(($parentElementName='OrientationInterpolator' or $parentElementName='OrientationChaser' or $parentElementName='OrientationDamper' or $parentElementName='NurbsOrientationInterpolator') and 
                                         ($attributeName='value' or $attributeName='destination')) or
					($localFieldType='SFRotation')    or
					($attributeName='rotation')         or
					(not($parentElementName='Extrusion') and ($attributeName='orientation'))      or
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
					($localFieldType='MFVec3f')    or 
                    ($parentElementName='Matrix4VertexAttribute' and $attributeName='value')">
			  <xsl:text>MFMatrix4f</xsl:text>
		  </xsl:when>
		  <!-- SFNode and MFNode are needed for type lookup when checking ROUTE connections -->
		  <!-- SFNode -->
		  <xsl:when test="
                    ($localFieldType='SFNode')    or 
                    (not($parentElementName='MetadataSet')     and  $attributeName='metadata') or
                    ($parentElementName='Shape'            and (($attributeName='appearance')     or ($attributeName='geometry'))) or
                    ($parentElementName='Appearance'       and (($attributeName='material')       or ($attributeName='texture')          or ($attributeName='textureTransform') or ($attributeName='acousticProperties') or
                    ($attributeName='fillProperties') or ($attributeName='lineProperties')  or ($attributeName='pointProperties'))) or
                    ($parentElementName='PhysicalMaterial' and (($attributeName='baseTexture')    or ($attributeName='emissiveTexture') or ($attributeName='metallicRoughnessTexture') or ($attributeName='normalTexture') or ($attributeName='occlusionTexture'))) or
                    ($parentElementName='UnlitMaterial'    and (($attributeName='baseTexture')    or ($attributeName='emissiveTexture')                                                or ($attributeName='normalTexture')))">
			  <xsl:text>SFNode</xsl:text>
		  </xsl:when>
		  <!-- MFNode -->
		  <xsl:when test="
                    ($localFieldType='MFNode')  or 
                    ($attributeName='children') or
                    ($attributeName='level') or
                    ($parentElementName='MetadataSet' and $attributeName='metadata') or
                    ($parentElementName='Appearance'  and $attributeName='shaders')">
			  <xsl:text>MFNode</xsl:text>
		  </xsl:when>
		  <!-- MFInt32 --> <!-- must precede SFInt32 -->
		  <xsl:when test="
					($localFieldType='MFInt32')    or 
            starts-with($attributeName,'numberOfChannels') or 
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
		  <!-- Statements: xs:integer as SFInt32 - TODO schema/spec change? -->
		  <!-- SFInt32 --> <!-- Note that other DIS attibutes must get tested before this, including MFInt32 -->
		  <xsl:when test="
					($parentElementName='IntegerSequencer' and $attributeName='value') or
                                        ($localFieldType='SFInt32')                 or 
                                         ends-with($attributeName,'ID')             or
					($attributeName='bufferLength')             or
					($attributeName='channelSelection')         or
					($attributeName='fftSize')                  or
					($attributeName='frequencyBinCount')        or
					($attributeName='maxChannelCount')          or
                                        ($attributeName='order')                    or
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
                                        (($parentElementName='component') and $attributeName='level')    or 
					($parentElementName='CartoonVolumeStyle' and $attributeName='colorSteps') or
					(contains($parentElementName,'ElevationGrid') and ($attributeName='xDimension' or $attributeName='zDimension')) or
					($parentElementName='FillProperties' and ($attributeName='hatchStyle')) or
					($parentElementName='FloatVertexAttribute' and $attributeName='numComponents') or
					($parentElementName='GeneratedCubeMapTexture' and $attributeName='size') or
					(starts-with($parentElementName,'HAnim') and $attributeName='loa') or
                                        ($parentElementName='HAnimMotion' and (($attributeName='frameIncrement') or ($attributeName='frameIndex') or ($attributeName='startFrame') or ($attributeName='endFrame'))) or
                                        ($parentElementName='KeySensor' and (($attributeName='actionKeyPress') or ($attributeName='actionKeyRelease'))) or
                                        ($parentElementName='IntegerTrigger' and (($attributeName='integerKey') or ($attributeName='triggerValue'))) or
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
				<xsl:when test="($parentElementName='field') or ($parentElementName='fieldValue')">
					<xsl:value-of select="$localFieldType"/>
				</xsl:when>
				<!-- Other statement values require special handling, do not warn here -->
				<xsl:when test="($parentElementName='field') or contains($parentElementName,'Proto') or
                                ($parentElementName='meta')">
					<xsl:text></xsl:text>
				</xsl:when>
				<xsl:when test="preceding::*[(local-name() = $parentElementName) and (starts-with($parentElementName,'Xvl'))]">
					<!-- avoid repetitious warnings, no message.  TODO fix, test is not trapping properly. -->
					<xsl:text></xsl:text>
				</xsl:when>
				<xsl:otherwise>
					<xsl:text>type_UNKNOWN</xsl:text>
					<xsl:message>
						  <xsl:text>[warning] X3dToXhtml.xslt attribute type not found for </xsl:text>
						  <xsl:value-of select="$parentElementName"/>
						  <xsl:text> </xsl:text>
						  <xsl:value-of select="$attributeNameFull"/>
					</xsl:message>
				</xsl:otherwise>
			  </xsl:choose>
		  </xsl:otherwise>
		</xsl:choose>

    </xsl:template>

</xsl:stylesheet>

