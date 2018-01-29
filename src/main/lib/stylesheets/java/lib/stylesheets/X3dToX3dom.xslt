<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="title"       content="X3dToX3dom.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="25 March 2012" />
   <meta name="description" content="XSLT stylesheet to convert X3D source into an HTML5 XHTML page containing the embedded X3D scene using X3DOM syntax." />
   <meta name="identififer" content="http://www.web3d.org/x3d/stylesheets/X3dToX3dom.xslt" />
   <meta name="reference"   content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToX3dom.xslt" />
  </head>

Recommended tools:
- X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
- XML Spy http://www.xmlspy.com

X3DOM references

- home          http://x3dom.org
- browser check http://x3dom.org/check
- documentation http://doc.x3dom.org
- Download      http://doc.x3dom.org/gettingStarted
- Node support  http://doc.x3dom.org/author/nodes.html

--> 
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
<xsl:stylesheet version="2.0" xmlns='http://www.w3.org/1999/xhtml' xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <!-- default parameter values that can be overridden when invoking this stylesheet -->
    <xsl:param name="player"                   >X3DOM</xsl:param> <!-- supported players: X3DOM X_ITE (formerly Cobweb) -->
    <xsl:param name="x3dHeight"                >450px</xsl:param> <!-- default 16x9 aspect ratio -->
    <xsl:param name="x3dWidth"                 >800px</xsl:param>
    <!-- X3DOM parameters -->
    <xsl:param name="showStatistics"           >false</xsl:param>
    <xsl:param name="showDebugLog"             >true</xsl:param>
    <xsl:param name="urlX3DOM"                 >http://www.x3dom.org/download/dev</xsl:param> <!-- no trailing / -->
    <!-- X_ITE parameters -->
    <xsl:param name="cache"                    >true</xsl:param>
	<!-- also in CreateContentCatalogPages.xslt -->
    <xsl:param name="urlScene"                 ></xsl:param>      <!-- X3D MFString url list -->
    <xsl:param name="urlCobweb"                >http://code.create3000.de/x_ite</xsl:param> <!-- no trailing slash / -->
    <xsl:param name="versionCobweb"            >latest/dist</xsl:param> <!-- 1/1.28 or 2/2.6 or 3/3.1 or 3/3.2 or 3.3 or 4.0.5 or latest/dist with no trailing slash / -->
    <!-- Catalog generator and configuration parameters -->
    <xsl:param name="x3dSceneAvailable"        >true</xsl:param> <!-- .x3d source, same file name -->
    <xsl:param name="x3dDocumentationAvailable">true</xsl:param> <!-- .html pretty print, same file name -->
    <xsl:param name="traceEnabled"             >false</xsl:param>
    <xsl:param name="cobwebStyle"              >default</xsl:param><!-- simple or default -->
    
    <xsl:strip-space elements="*"/>
    <xsl:output encoding="UTF-8" media-type="text/xml" indent="yes" cdata-section-elements="Script PackagedShader ShaderPart ShaderProgram" omit-xml-declaration="yes" method="xml"/>

    <xsl:variable name="cobwebRootElement">
        <xsl:choose>
            <xsl:when test="starts-with($versionCobweb,'1')">
                    <xsl:text>X3D</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                    <xsl:text>X3DCanvas</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
		
    <xsl:variable name="lower-case-player" select="translate($player,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/> <!-- XSLT 1 hack -->

    <xsl:variable name="apos">'</xsl:variable>
    <xsl:variable name="quot">"</xsl:variable>
    
    <xsl:variable name="urlSceneQuoted">
        <xsl:choose>
            <xsl:when test="not(contains($urlScene,'&quot;'))">
                <xsl:text>"</xsl:text>
                <xsl:value-of select="normalize-space($urlScene)"/>
                <xsl:text>"</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="normalize-space($urlScene)"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    
    <xsl:variable name="urlSceneUnquoted">
        <xsl:choose>
            <xsl:when test="(contains($urlScene,'&quot;'))">
                <xsl:value-of select="substring-before(substring-after($urlScene,'&quot;'),'.x3d')"/>
                <xsl:text>.x3d</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="normalize-space($urlScene)"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>

    <xsl:template match="/">
        
        <xsl:variable name="fileName">
            <xsl:choose>
                <xsl:when test="//head/meta[@name='title']/@content[.!='*enter FileNameWithNoAbbreviations.x3d here*']">
                    <xsl:value-of select="//head/meta[@name='title']/@content"/>
                </xsl:when>
                <xsl:otherwise>
                    <!-- TODO just use first if an MFString array is found -->
                    <xsl:value-of select="$urlScene"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        
        <!-- debug diagnostics -->
        <xsl:if test="($traceEnabled = 'true')">
            <xsl:message>
                <xsl:text>X3dToX3dom.xslt X3D parameters: </xsl:text>
                <xsl:text>$fileName=</xsl:text>
                <xsl:value-of select="$fileName"/>
                <xsl:text>, $player=</xsl:text>
                <xsl:value-of select="$player"/>
                <xsl:text>, $x3dHeight=</xsl:text>
                <xsl:value-of select="$x3dHeight"/>
                <xsl:text>, $x3dWidth=</xsl:text>
                <xsl:value-of select="$x3dWidth"/>
                <xsl:text>, $traceEnabled=</xsl:text>
                <xsl:value-of select="$traceEnabled"/>
            </xsl:message>
            <xsl:message>
                <xsl:text>X3DOM parameters: </xsl:text>
                <xsl:text>$showStatistics=</xsl:text>
                <xsl:value-of select="$showStatistics"/>
                <xsl:text>, $showDebugLog=</xsl:text>
                <xsl:value-of select="$showDebugLog"/>
                <xsl:text>, $urlX3DOM=</xsl:text>
                <xsl:value-of select="$urlX3DOM"/>
            </xsl:message>
            <xsl:message>
                <xsl:text>X_ITE parameters: </xsl:text>
                <xsl:text>$cache=</xsl:text>
                <xsl:value-of select="$cache"/>
                <xsl:text>, $urlScene=</xsl:text>
                <xsl:value-of select="$urlScene"/>
                <xsl:text>, $urlCobweb=</xsl:text>
                <xsl:value-of select="$urlCobweb"/>
                <xsl:text>/</xsl:text>
                <xsl:value-of select="$versionCobweb"/>
                <xsl:text>, $x3dSceneAvailable=</xsl:text>
                <xsl:value-of select="$x3dSceneAvailable"/>
                <xsl:text>, $x3dDocumentationAvailable=</xsl:text>
                <xsl:value-of select="$x3dDocumentationAvailable"/>
            </xsl:message>
        </xsl:if>
                    
        <!-- header -->
        <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"&gt;</xsl:text>
        <xsl:text>&#10;</xsl:text>

<!-- special player customization in head -->
<xsl:choose>
    <xsl:when test="($lower-case-player = 'x_ite') or ($lower-case-player = 'cobweb')">
        <!-- TODO -->
    </xsl:when>
    <xsl:otherwise> <!-- default X3DOM -->
        <xsl:text>&#10;</xsl:text>
        <xsl:comment> =================================================================== </xsl:comment>
        <xsl:text>&#10;</xsl:text>
        <xsl:comment> embedded X3D scene appears after html/head/script and style entries </xsl:comment>
        <xsl:text>&#10;</xsl:text>
        <xsl:comment> =================================================================== </xsl:comment>
        <xsl:text>&#10;</xsl:text>
    </xsl:otherwise>
</xsl:choose>

        <html xmlns="http://www.w3.org/1999/xhtml">
            <head>
                <title>
                    <xsl:choose>
                        <xsl:when test="$fileName">
                            <xsl:value-of select="$fileName"/>
                        </xsl:when>
                        <xsl:otherwise>
                        </xsl:otherwise>
                    </xsl:choose>
					<xsl:text> (X3dToX3dom.xslt </xsl:text>
					<xsl:value-of select="$player"/>
					<xsl:text>)</xsl:text>
                </title>
                <meta http-equiv="X-UA-Compatible" content="chrome=1,IE=edge" />
                <meta http-equiv="Content-Type" content="text/html;charset=utf-8" />
            <!-- TD <meta charset="utf-8"/> -->
                <meta name="generator" content="http://www.web3d.org/x3d/stylesheets/X3dToX3dom.xslt" />

              <!--               Getting started with X3DOM: http://doc.x3dom.org/gettingStarted -->
              <!--                     alternate stylesheet: http://www.x3dom.org/x3dom/example/x3dom.css -->
              <xsl:text>&#10;</xsl:text>
              <xsl:choose>
                  <xsl:when test="($lower-case-player = 'x_ite') or ($lower-case-player = 'cobweb')">
                    <xsl:comment> X_ITE developer site: http://create3000.de/x_ite </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>      </xsl:text>
                    <link rel="stylesheet" type="text/css" href="{$urlCobweb}/{$versionCobweb}/x_ite.css" />
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>      </xsl:text>
                    <!-- TODO singleton <script /> tag buggy under Firefox -->
                    <!-- <script type="text/javascript" src="https://cdn.rawgit.com/create3000/cobweb/master/stable/1/{$versionCobweb}/x_ite.min.js"></script> -->
                    <xsl:text disable-output-escaping="yes"><![CDATA[<script type="text/javascript" src="]]></xsl:text><xsl:value-of select="$urlCobweb"/><xsl:text>/</xsl:text><xsl:value-of select="$versionCobweb"/><xsl:text disable-output-escaping="yes"><![CDATA[/x_ite.min.js"></script>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
					<!-- jQuery availability: https://developers.google.com/speed/libraries https://stackoverflow.com/questions/12608242/latest-jquery-version-on-googles-cdn -->
					<xsl:variable name="urlJquery">
						<xsl:text>https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js</xsl:text>
					</xsl:variable>
					<xsl:text disable-output-escaping="yes"><![CDATA[<script type="text/javascript" src="]]></xsl:text><xsl:value-of select="$urlJquery"/><xsl:text disable-output-escaping="yes"><![CDATA["></script>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
					<xsl:choose>
						<xsl:when test="($cobwebStyle = 'simple')">
	<style type="text/css">
<xsl:text>
#main {
	width: 768px;
}
</xsl:text><xsl:value-of select="$cobwebRootElement"/><xsl:text> {
    /* Format 16:9 */
    width: 100%;
    height: 432px;
}
.references {
    padding: 5px;
    background: lightgray;
}
.references p {
    margin: 0;
}
</xsl:text>
</style>
						</xsl:when>
						<xsl:otherwise>      
	<style type="text/css">
		<xsl:text>
         @import url(https://fonts.googleapis.com/css?family=PT+Sans:400,400italic,700,700italic);
         html, body {
         margin: 0px;
         padding: 0px;
         border: 0px;
         height: 100%;
         }
         body {
         font-family: PT Sans, sans;
         line-height: 1.3;
         color: white;
         background: #313131;
         }
         h1, h2 {
         margin-top: 0px;
         }
         a {
         text-decoration: none;
         color: #ffe32d;
         outline: 0;
         }
         a:hover {
         text-decoration: underline;
         }
         a:before {
         display: inline-block;
         width: 0;
         height: 0;
         border-style: solid;
         border-width: 3px 0 3px 5px;
         border-color: transparent transparent transparent #ffe32d;
         }
         #main {
         background: #414141;
         width: 768px;
         min-height: 100%;
         border-right: 80px solid #313131;
         outline: 40px solid #414141;
         }
         .frame {
         }
         .browser {
         box-shadow: 0px 2px 12px 1px rgba(0, 0, 0, 0.95);
         }
         X3DCanvas {
         /* Format 16:9 */
         width: 100%;
         height: 432px;
         }
         .references {
         padding: 5px;
         background: black;
         }
         .references p {
         margin: 0;
         }
         .x_ite-console {
         margin-bottom: 0px;
         }
         .maximize {
         background: none;
         border: none;
         }
</xsl:text>
      </style>
      <script type="text/javascript">
		<xsl:text>
         var fullscreen = false;
         
         function toggleFullscreen ()
         {
           fullscreen = !fullscreen;
           
           if (fullscreen)
           {
             jQuery (".frame")
               .css ("position", "fixed")
               .css ("top", "0px")
               .css ("left", "0px")
               .css ("bottom", "0px")
               .css ("right", "0px")
               .css ("background", "#313131");
                
             jQuery (".maximize") .attr ("title", "Minimize Frame");
         
             jQuery (".browser") .css ("height", "100%");
             jQuery ("X3DCanvas") .css ("height", "90%");
           }
           else
           {
             jQuery (".frame")
               .css ("position", "inherit")
               .css ("background", "none");
               
             jQuery (".maximize") .attr ("title", "Maximize Frame");
         
             jQuery (".browser") .css ("height", "initial");
             jQuery ("X3DCanvas") .css ("height", "432px");
           }
         }
</xsl:text>
      </script>
						</xsl:otherwise>
					</xsl:choose>
                  </xsl:when>
                  <xsl:otherwise> <!-- default X3DOM head -->
<!--
On 6/19/2013 7:12 AM, Jung, Yvonne wrote:
> Hi Don,
> for your converter stylesheet I really think that linking to the latest dev version is best.
> Only if someone wants to provide an x3dom-based Web app, he/she should use a local copy.
> So, here is the link to all x3dom dev builds: http://www.x3dom.org/download/dev/
> For the extended Profile (i.e., CAD, Geometry2D etc.) you should use the "x3dom-full.js",
> otherwise you can use standard x3dom.js
-->
                    <xsl:comment> Numbered X3DOM release versions: http://www.x3dom.org/download </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:comment> Developer X3DOM release version: http://www.x3dom.org/download/dev </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    <link rel="stylesheet" type="text/css" href="{$urlX3DOM}/x3dom.css" />
                    <xsl:text>&#10;</xsl:text>
                    <script         type="text/javascript"  src="{$urlX3DOM}/x3dom-full.js"/>
                    <xsl:text>&#10;</xsl:text>
                  </xsl:otherwise>
              </xsl:choose>

<!-- special player customization in head -->
<xsl:choose>
    <xsl:when test="($lower-case-player = 'x_ite') or ($lower-case-player = 'cobweb')">
        <!-- TODO -->
    </xsl:when>
    <xsl:otherwise> <!-- default X3DOM -->
                  
                    <!-- New X3DOM components development entries are placed placed _after_ X3DOM script link above, so that any updates in x3dom-full.js take precedence -->

                    <!-- development testing example: CAD component by CAD Working Group, successfully completed and integrated into X3DOM -->
                    <!--
                    <xsl:if test="//*[starts-with(local-name(),'CAD')] or //QuadSet or //IndexedQuadSet">
                        <script         type="text/javascript"  src="http://www.web3d.org/x3d/content/examples/Basic/CAD/x3dom/CADGeometry.js"/>
                    </xsl:if>
                    -->

                    <!-- development testing example: H-Anim component by H-Anim Working Group
                    <xsl:if test="//*[starts-with(local-name(),'HAnim')] or //MetadataBoolean">
                        < ! - - development version, local - - >
                        <script         type="text/javascript"  src="../../content/examples/Basic/HumanoidAnimation/x3dom/HAnimComponent.js"/>
                        < ! - - development version, online - - >
                        <script         type="text/javascript"  src="http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/x3dom/HAnimComponent.js"/>
                    </xsl:if>
                    -->
                    <!-- TODO under development: https://github.com/mcgredonps/x3dom/tree/master/src/nodes/DIS -->
                    <xsl:if test="//EspduTransform or //*[starts-with(local-name(),'DISEntity')] or //*[contains(local-name(),'Pdu')]">
                        <!-- development version, local -->
                        <script         type="text/javascript"  src="../../content/examples/Basic/DistributedInteractiveSimulation/x3dom/dis.js"/>
                        <!-- development version, online -->
                        <script         type="text/javascript"  src="http://github.com/mcgredonps/x3dom/dis.js"/>
                    </xsl:if>

                    <!-- Text node support -->
                    <meta name="warning" content="Webfonts must be loaded prior to using Text node in X3D scene... see http://x3dom.org/x3dom/example/x3dom_text.html" />
                    <!-- setup fonts for Text node, in order -->
                    <xsl:call-template name="webFontCss"/>
                    <!-- show a font change, with family in middle to confirm that changes are not failing -->
<style type="text/css" media="screen, print">
.webfont { font-size:200%; font-family:'TYPEWRITER'; color:green;} /* Conversion TODO font families: SANS SERIF TYPEWRITER */
</style>
                    <xsl:call-template name="cssZoomButton"/>
    </xsl:otherwise>
</xsl:choose>
            </head>
            <body id="htmlBody">
                <xsl:text>&#10;</xsl:text>
                    
<xsl:choose>
    <xsl:when test="($lower-case-player = 'x_ite') or ($lower-case-player = 'cobweb')">
						<div id="main" style="margin-left: 40px;">
                            <h2>
                                <xsl:choose>
                                    <xsl:when test="$fileName and X3D/head/meta[@name='identifier']">
                                        <xsl:value-of select="$fileName"/>
                                    </xsl:when>
                                    <xsl:when test="$fileName">
                                        <xsl:value-of select="$fileName"/>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:text> X3dToX3dom.xslt stylesheet conversion to XHTML</xsl:text>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </h2>
				
                            <div class="frame">
                                <div class="browser">
                                            <!-- note that no . precedes class name webfont here! -->
                                            <span class="webfont">
                                                    <xsl:choose>
                                                            <xsl:when test="X3D/head/meta[@name='description']">
                                                                            <xsl:value-of select="X3D/head/meta[@name='description']/@content" disable-output-escaping="yes"/><!-- I18N -->
                                                            </xsl:when>
                                                            <xsl:otherwise>
                                                                    <xsl:text disable-output-escaping="yes">&amp;nbsp;</xsl:text>
                                                            </xsl:otherwise>
                                                    </xsl:choose>
                                            </span>
                                            <div class="references">
                                                    <p><a href='{$urlSceneUnquoted}'>Original X3D scene</a></p>
                                            </div>
                                            <xsl:text disable-output-escaping="yes">
&lt;</xsl:text><xsl:value-of select="$cobwebRootElement"/><xsl:text> url='</xsl:text><xsl:value-of select="$urlSceneQuoted"/><xsl:text disable-output-escaping="yes">'&gt;
	&lt;p&gt;&lt;b&gt;Display error: X3D model not shown.&lt;/b&gt;&lt;/p&gt;
	&lt;p&gt;Your HTML browser does not appear to support all features required by the
	&lt;a href="http://create3000.de/x_ite" target="_blank"&gt;X_ITE&lt;/a&gt; X3D player!&lt;/p&gt;
&lt;/</xsl:text><xsl:value-of select="$cobwebRootElement"/><xsl:text disable-output-escaping="yes">&gt;
</xsl:text>
                                            <div class="references" style="text-align: right;">
                                             <p>
                                                    <!-- 4-arrow "full screen" button -->
                                                    <button title="Maximize Frame" class="maximize" onclick="toggleFullscreen ();"><img alt="Maximize Frame" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAsAAAALCAYAAACprHcmAAAACXBIWXMAAC4jAAAuIwF4pT92AAAAB3RJTUUH4QQNFQk1i7oCawAAALhJREFUGJWV0TFKA2EQBeBn1iqptBJvEFsVjxR0LyB4txQSRCzEeAexsLCJydr4WWQWwjbGBwPzv3nDP/Mm+EBXscAhggb3xW/wGaxt8Y2rEvZxWTx0wWqn4R3HJTzCW/FrbEZJnpKcJ3lJcpLkOlvMkpwmeU1ykeSxny0Yox2M0WLS73CA7ItRkqbycZJ2UL9JMqm8CeaY4rmWuatvb+u9xBnm/3Ij+PrD527X5178g4fBBRfFQ/cL8YlBv40R0JoAAAAASUVORK5CYII="/></button>
                                                    <a href="http://create3000.de/x_ite" target="_blank">X_ITE X3D Player</a>
                                             </p>
                                            </div>
                                    </div>
                                </div>
                                <div>
                                   <p class="x_ite-console"></p>
                                </div>
                            </div>
    </xsl:when>
    <xsl:otherwise> <!-- default X3DOM -->
                <table style="width:96%" id="htmlPageHeader">
                    <tr>
                        <td style="text-align:left;">
                            <h2>
                                <xsl:choose>
                                    <xsl:when test="$fileName and X3D/head/meta[@name='identifier']">
                                        <xsl:value-of select="$fileName"/>
                                    </xsl:when>
                                    <xsl:when test="$fileName">
                                        <xsl:value-of select="$fileName"/>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:text> X3dToX3dom.xslt stylesheet conversion to XHTML</xsl:text>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </h2>
                        </td>
                        <td id="checkBoxCell" style="text-align:right">
                            <xsl:text> (</xsl:text>
                            <xsl:if test="($x3dSceneAvailable = 'true')">
                                <!-- offer link to available scene -->
                                <xsl:element name="a">
                                    <xsl:attribute name="href">
                                        <xsl:value-of select="X3D/head/meta[@name='identifier']/@content"/>
                                    </xsl:attribute>
                                    <xsl:attribute name="title">
                                        <xsl:text>View .x3d scene</xsl:text>
                                    </xsl:attribute>
                                    <xsl:text>.x3d scene</xsl:text>
                                </xsl:element>
                                <xsl:text>, </xsl:text>
                                <xsl:text>&#10;</xsl:text>
                            </xsl:if>
                            <xsl:if test="($x3dDocumentationAvailable = 'true')">
                                <!-- offer link to available pretty-print documentation -->
                                <xsl:element name="a">
                                    <xsl:attribute name="href">
                                        <!-- throws error if more than one identifier found, added check to QA tests -->
                                        <xsl:value-of select="concat(substring-before(X3D/head/meta[@name='identifier'][1]/@content,'.x3d'),'.html')"/>
                                    </xsl:attribute>
                                    <xsl:attribute name="title">
                                        <xsl:text>View .html pretty-print source</xsl:text>
                                    </xsl:attribute>
                                    <xsl:text>pretty-print source</xsl:text>
                                </xsl:element>
                                <xsl:text>, </xsl:text>
                                <xsl:text>&#10;</xsl:text>
                            </xsl:if>
                            <!-- duplicative link, simple use checkbox
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:text>#details</xsl:text>
                                </xsl:attribute>
                                <xsl:text>details</xsl:text>
                            </xsl:element>
                            <xsl:text>, </xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            -->
                            <xsl:variable name="checkedShowStatistics">
                                <xsl:if test="$showStatistics">
                                    <xsl:text>checked</xsl:text>
                                </xsl:if>
                            </xsl:variable>
                            <input id="checkBoxOverlayStatistics" type="checkbox" value="Overlay scene statistics" onclick="toggleOverlayStatistics();"/>
                            <!-- initial status of box checked is controlled by whether attribute is present, rather than defined value.  therefore omit:
                                 checked="{$checkedShowStatistics}" 
                                 reference: http://www.w3schools.com/tags/att_input_checked.asp -->
                            <span title="Overlay scene performance statistics">
                                <xsl:text>statistics</xsl:text>
                            </span>
                            <xsl:text>, </xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:variable name="checkedShowDebugLog">
                                <xsl:if test="$showDebugLog">
                                    <xsl:text>checked</xsl:text>
                                </xsl:if>
                            </xsl:variable>
                            <input id="checkBoxShowDebugLogs" type="checkbox" value="Display debugger logs" checked="{$checkedShowDebugLog}" onclick="toggleShowDebugLogs();"/>
                            <span title="Show meta information and debug logs">
                                <xsl:text>info &amp; logs</xsl:text>
                            </span>
							<xsl:text>, </xsl:text>
							<a href="http://www.x3dom.org" onclick="target='_blank';">X3DOM Player</a>
                            <xsl:text>)</xsl:text>
                        </td>
                    </tr>
                    <tr>
                        <td colspan="2">
                            <p>
                                <!-- note that no . precedes class name webfont here! -->
                                <span class="webfont">
                                    <xsl:choose>
                                        <xsl:when test="X3D/head/meta[@name='description']">
                                                <xsl:value-of select="X3D/head/meta[@name='description']/@content" disable-output-escaping="yes"/><!-- I18N -->
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:text disable-output-escaping="yes">&amp;nbsp;</xsl:text>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </span>
                            </p>
                        </td>
                    </tr>

                </table>
                <xsl:text>&#10;</xsl:text>
                
                <!-- X3D scene is inserted here -->
                <!-- n.b. if the following rule is missing, then nothing else from the X3D scene gets processed!! -->
                <div>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:comment> ================================ </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:comment> embedded X3D scene appears here: </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    
                    <xsl:apply-templates select="*" />
                    
                    <xsl:text>&#10;</xsl:text>
                    <xsl:comment> ================================ </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                </div>
                
                <xsl:text>&#10;</xsl:text>
                <!--
                <table width="96%">
                    <tr>
                        <td align="left">
                            <xsl:text> Details </xsl:text>
                        </td>
                        <td align="right">
                            to
                            <a href="#htmlBody">
                                top
                            </a>
                        </td>
                    </tr>
                </table>
                -->
                
                <div id="details">
    
                <!-- Clear CSS float property to resume expected layout behavior -->
                <!-- vertical whitespace -->
                <p style="clear:both;">
                    <xsl:text disable-output-escaping="yes">&amp;nbsp;</xsl:text>
                </p>
                <!-- output table of X3D scene metadata -->
                <table style="border:0px solid; border-spacing:0px; margin:auto; margin-top:20px;margin-left:5%;">
                    <xsl:if test="//X3D/head/meta">
                        <tr style="background-color:silver; border-color:silver;">
                            <th style="text-align:right;">
                                <xsl:text disable-output-escaping="yes">X3D&amp;nbsp;Scene </xsl:text>
                            </th>
                            <th style="text-align:left;">
                                <xsl:text disable-output-escaping="yes"> &amp;nbsp; </xsl:text>
                            </th>
                            <th style="text-align:left;">
                                <xsl:text> Metadata </xsl:text>
                            </th>
                        </tr>
                        <!-- reference: X3dTidy.xslt -->
                        <xsl:variable name="metaIdentifierContent" select="normalize-space(//X3D/head/meta[@name='identifier'][1]/@content)"/>
                        <xsl:variable name="base-address">
                            <xsl:call-template name="find-base-address">
                                <xsl:with-param name="url" select="$metaIdentifierContent"/>
                            </xsl:call-template>
                        </xsl:variable>
                        <xsl:variable name="lower-case-address" select="translate($base-address,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/>
                        <xsl:if test="(string-length($metaIdentifierContent) > 0) and
                                                     (starts-with($lower-case-address,'http://www.web3d.org/x3d/content/examples/') or
                                                      starts-with($lower-case-address,'http://x3dgraphics.com/examples/') or
                                                      starts-with($lower-case-address,'https://savage.nps.edu/savage/') or
                                                      starts-with($lower-case-address,'https://savagedefense.nps.navy.mil/savagedefense/'))">
                            <tr style="background-color:silver; border-color:silver;">
                                <td style="text-align:right;color:green;">
                                    <i>
                                        <xsl:text>archive</xsl:text>
                                    </i>
                                </td>
                                <td>
									<xsl:text disable-output-escaping="yes"> &amp;nbsp; </xsl:text>
                                </td>
                                <td>
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>Last character of identifier: '</xsl:text>
                                        <xsl:value-of select="substring($base-address,string-length($base-address))"/>
                                        <xsl:text>' and substring: </xsl:text>
                                        <xsl:value-of select="substring($base-address,1,string-length($base-address)-1)"/>
                                    </xsl:message>
                                    -->
                                    <xsl:variable name="archiveUrl">
                                        <xsl:choose>
                                            <xsl:when  test="(substring($base-address,string-length($base-address)) = '/')">
                                                <!-- strip trailing slash character -->
                                                <xsl:value-of select="substring($base-address,1,string-length($base-address)-1)"/>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:value-of select="$base-address"/>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:variable>
                                    <i>
                                        <a href="{$archiveUrl}"><xsl:value-of select="$archiveUrl"/></a>
                                    </i>
                                </td>
                            </tr>
                        </xsl:if>
                        <xsl:for-each select="//X3D/head/meta">
                            <xsl:variable name="attributeName"    select="normalize-space(@name)"/>
                            <xsl:variable name="attributeContent">
								<xsl:call-template name="escape-special-characters">
									<xsl:with-param name="inputString" select="normalize-space(@content)"/>
								</xsl:call-template>
							</xsl:variable>
                            <tr>
                                <td style="text-align:right;color:green">
                                    <xsl:value-of select="$attributeName"/>
                                </td>
								<td>
									<xsl:text disable-output-escaping="yes"> &amp;nbsp; </xsl:text>
								</td>
                                <td>
                                    <xsl:choose>
                                        <xsl:when test="starts-with($attributeContent,'http') or starts-with($attributeContent,'ftp') or
                                                        contains($attributeContent,'.txt')    or contains($attributeContent,'.html')  or
                                                        contains($attributeContent,'.xhtml')  or contains($attributeContent,'.htm')   or
                                                        contains($attributeContent,'.x3d')    or contains($attributeContent,'.png')   or
                                                        contains($attributeContent,'.jpg')    or contains($attributeContent,'.mpg')   or
                                                        contains($attributeContent,'.pdf')    or contains($attributeContent,'.js')    or
                                                        contains($attributeContent,'.css')    or starts-with($attributeName,'title')   or
                                                        starts-with($attributeName,'Image')   or starts-with($attributeName,'MovingImage')">
                                            <a href="{$attributeContent}"><xsl:value-of select="$attributeContent"/></a>
                                        </xsl:when>
                                        <xsl:when test="contains($attributeContent,'http')">
                                            <xsl:variable name="prefix"  select="substring-before($attributeContent,'http')"/>
                                            <xsl:variable name="address" select="substring-after ($attributeContent,$prefix)"/>
                                            <xsl:value-of select="$prefix"/><a href="{$address}"><xsl:value-of select="$address"/></a>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:value-of select="$attributeContent" disable-output-escaping="yes"/>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </td>
                            </tr>
                        </xsl:for-each>
                        <!-- now script inserts browser information during initialization -->
                        <tr>
                            <td colspan="3">
                                <xsl:text disable-output-escaping="yes">&amp;nbsp;</xsl:text>
                            </td>
                        </tr>
                        <tr style="background-color:silver;border-color:silver;">
                            <th style="text-align:right;">
                                <xsl:text disable-output-escaping="yes"> HTML&amp;nbsp;Browser </xsl:text>
                            </th>
							<th></th>
                            <th style="text-align:left;">
                                <xsl:text> Information </xsl:text>
                            </th>
                        </tr>
                        <tr>
                            <td style="text-align:right;">
                                <xsl:text> Browser code name: </xsl:text>
                            </td>
							<td></td>
                            <td id="browserCodeName"/>
                        </tr>
                        <tr>
                            <td style="text-align:right;">
                                <xsl:text> Browser application name: </xsl:text>
                            </td>
							<td></td>
                            <td id="browserAppName"/>
                        </tr>
                        <tr>
                            <td style="text-align:right;">
                                <xsl:text> Browser version: </xsl:text>
                            </td>
							<td></td>
                            <td id="browserAppVersion"/>
                        </tr>
                        <tr>
                            <td style="text-align:right;">
                                <xsl:text> Cookies enabled: </xsl:text>
                            </td>
							<td></td>
                            <td id="browserCookieEnabled"/>
                        </tr>
                        <tr>
                            <td style="text-align:right;">
                                <xsl:text> Platform: </xsl:text>
                            </td>
							<td></td>
                            <td id="browserPlatform"/>
                        </tr>
                        <tr>
                            <td style="text-align:right;">
                                <xsl:text> User Agent: </xsl:text>
                            </td>
							<td></td>
                            <td id="browserUserAgent"/>
                        </tr>
                        <tr>
                            <td style="text-align:right;">
                                <xsl:text> System language: </xsl:text>
                            </td>
							<td></td>
                            <td id="browserSystemLanguage"/>
                        </tr>
                    </xsl:if>
                    
            <tr>
                <td colspan="3">
                <!-- output table of nodes supported by X3DOM border-collapse:collapse;-->
                <xsl:if test="//X3D//Scene/*">
                    <div id="htmlPageFooter">
                    <table border="1" style="float:left; margin:auto; margin-top:20px; border:1px solid black;">
                        <caption style="text-align:center;background-color:silver;border-color:silver; padding:4px;">
                            <b>X3DOM node coverage</b>
                        </caption>
                        <tr style="text-align:center; padding:4px; border:1px solid black;">
                            <th>
                                <xsl:text> Supported nodes found </xsl:text>
                            </th>
                            <th>
                                <xsl:text> Unsupported nodes found </xsl:text>
                            </th>
                            <th>
                                <xsl:text> Partial support</xsl:text>
                            </th>
                        </tr>
                        
                        <tr style="border:1px solid black;">
                            <!-- Nodes supported by X3DOM -->
                            <td style="text-align:left;vertical-align:text-top;padding:4px;">
								<xsl:for-each select="//X3D//*[not(local-name()='text') and not(local-name()='Text')]">
									<xsl:sort select="local-name()" order="ascending" case-order="lower-first"/>

									<xsl:variable name="nodeName" select="local-name()"/>
									<xsl:variable name="supported">
										<xsl:call-template name="x3dom-supported-node">
											<xsl:with-param name="name" select="$nodeName"/>
										</xsl:call-template>
									</xsl:variable>

									 <!-- debug: 
									<xsl:text>Testing </xsl:text>
									<xsl:value-of select="local-name()"/>
									<xsl:text>... </xsl:text>
						<xsl:text> (preceding=</xsl:text>
						<xsl:value-of select="local-name(preceding::node()[1])"/>
						<xsl:text>)</xsl:text>
									<br />
									-->
									<!-- XSLT preceding:: axis does not include ancestors! -->
									<xsl:if test="($supported = 'true') and not(preceding::node()[local-name()=$nodeName])
																		and not( ancestor::node()[local-name()=$nodeName])">
										<xsl:element name="a">
											<xsl:attribute name="href">
												<xsl:text>http://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
												<xsl:value-of select="$nodeName"/>
											</xsl:attribute>
											<xsl:attribute name="target">
												<xsl:text>_blank</xsl:text>
											</xsl:attribute>
											<span style="color:green; text-decoration-color:green; moz-text-decoration-color:green;">
												<xsl:value-of select="$nodeName"/>
											</span>
										</xsl:element>
										<br />
									</xsl:if>
								</xsl:for-each>
                                <xsl:text> </xsl:text>
                            </td>
                            <!-- Nodes not supported by X3DOM -->
                            <td style="text-align:left;vertical-align:text-top;padding:4px;">
								<xsl:for-each select="//X3D//Scene//*[not(local-name()='text') and not(local-name()='Text')]">
									<xsl:sort select="local-name()" order="ascending" case-order="lower-first"/>

									<xsl:variable name="nodeName" select="local-name()"/>
									<xsl:variable name="supported">
										<xsl:call-template name="x3dom-supported-node">
											<xsl:with-param name="name" select="$nodeName"/>
										</xsl:call-template>
									</xsl:variable>

									<xsl:if test="($supported = 'false') and not(preceding::node()[local-name()=$nodeName])
																		 and not( ancestor::node()[local-name()=$nodeName])">
										<xsl:element name="a">
											<xsl:attribute name="href">
												<xsl:text>http://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
												<xsl:value-of select="$nodeName"/>
											</xsl:attribute>
											<xsl:attribute name="target">
												<xsl:text>_blank</xsl:text>
											</xsl:attribute>
											<span style="color:red; text-decoration-color:red; moz-text-decoration-color:red;">
												<xsl:value-of select="$nodeName"/>
											</span>
										</xsl:element>
										<br />
									</xsl:if>
								</xsl:for-each>
                                <xsl:text> </xsl:text>
                            </td>
                            <!-- Warnings about X3DOM node support -->
                            <td style="text-align:left;vertical-align:text-top;padding:4px;">
                                <xsl:if test="//X3D//Scene//Text">
                                    <xsl:element name="a">
										<xsl:attribute name="href">
											<xsl:text>http://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
											<xsl:text>Text</xsl:text>
										</xsl:attribute>
										<xsl:attribute name="target">
											<xsl:text>_blank</xsl:text>
										</xsl:attribute>
										<span style="color:orange; text-decoration-color:orange; moz-text-decoration-color:orange;">
											<b><xsl:text>Text</xsl:text></b>
										</span>
									</xsl:element>
									<br />
                                    <xsl:text>: for example use, see </xsl:text>
                                    <a href="http://x3dom.org/x3dom/example/x3dom_text.html" onclick="target='x3dom';">X3DOM Text Example</a>
                                </xsl:if>
                                <xsl:text> </xsl:text>
                            </td>
                        </tr>
                        <tr style="text-align:center; background-color:silver;border-color:silver; padding:6px;">
                            <td colspan="3" style="cellpadding:3px">
                                <xsl:text disable-output-escaping="yes"> &amp;nbsp;&amp;nbsp;&amp;nbsp; </xsl:text>
                                <!-- anchor target attribute replaced as shown below -->
                                <xsl:text>References: </xsl:text>
                                <a href="http://www.x3dom.org/check"                                   onclick="target='_blank';">X3DOM browser check</a>,
                                <a href="http://www.x3dom.org"                                         onclick="target='_blank';">X3DOM home</a>,
                                <a href="http://doc.x3dom.org"                                         onclick="target='_blank';">X3DOM documentation</a>,
                                <a href="http://x3dom.org/x3dom/test/functional/dumpNodeTypeTree.html" onclick="target='_blank';">X3DOM list of supported nodes</a>,
                                and
                                <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html"  onclick="target='_blank';">X3D Resources</a>
                                <!-- apparently old but thorough: http://examples.x3dom.org/simpleExamples.html -->
                                <xsl:text disable-output-escaping="yes"> &amp;nbsp;&amp;nbsp;&amp;nbsp; </xsl:text>
                            </td>
                        </tr>
                    </table>
                    <xsl:text>&#10;</xsl:text>   
                    </div>
                </xsl:if>
                <xsl:text>&#10;</xsl:text>    
                        </td>
                    </tr>
                </table>
                </div>  <!-- id="details" -->    
                <xsl:text>&#10;</xsl:text>
    </xsl:otherwise>
</xsl:choose>
            </body>
        </html>
    </xsl:template>
	
    <xsl:template match="@*">
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
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
					<xsl:text>=</xsl:text>
					<xsl:value-of select="$attributeDelimiter"/>
					<xsl:call-template name="escape-special-characters">
						<xsl:with-param name="inputString" select="."/>
					</xsl:call-template>
					<xsl:value-of select="$attributeDelimiter"/>
        </xsl:if>
    </xsl:template>
	
    <xsl:template match="*">
            <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
            <xsl:value-of select="local-name(.)"/>
            <!-- X3D node attributes -->
            <xsl:if test="local-name() = 'X3D'">
                <xsl:text> id='rootX3dElement'</xsl:text>
                <!-- http://x3dom.org/docs-old/configuration.html -->
                <xsl:text> showStat='</xsl:text><xsl:value-of select="$showStatistics"/><xsl:text>'</xsl:text>
                <xsl:text> showLog='</xsl:text><xsl:value-of select="$showDebugLog"/><xsl:text>'</xsl:text>
                <xsl:text> showProgress='</xsl:text>bar<xsl:text>'</xsl:text>
                <!--
                <xsl:text> PrimitiveQuality='</xsl:text>High<xsl:text>'</xsl:text>
                <xsl:text> x='0px'</xsl:text>
                <xsl:text> y='0px'</xsl:text>
                <xsl:text> width='600px'</xsl:text>
                <xsl:text> height='400px'</xsl:text>
                <xsl:text> altImg='helloX3D-alt.png'</xsl:text>
                -->
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:choose>
                <xsl:when test="@USE">
                    <xsl:apply-templates select="@USE" />
                </xsl:when>
                <xsl:otherwise>
                    <!--Conversion TODO filter default attributes -->
                    <xsl:apply-templates select="@*" />
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="*">
                    <!-- open element, process children, close element -->
                    <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:apply-templates select="*" />
                    <xsl:text disable-output-escaping="yes">&lt;/</xsl:text>
                    <xsl:value-of select="local-name(.)"/>
                    <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <!-- singleton element, no children-->
                    <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        <xsl:text>&#10;</xsl:text>

        <xsl:if test="local-name() = 'head'">
            <xsl:comment> Conversion note: the following HTML button is overlaid on top of the X3D scene </xsl:comment>
            <xsl:text>&#10;</xsl:text>
            <button id="toggleZoomButton" onclick="toggleZoom(this); return false;">Zoom</button>
            <xsl:text>&#10;</xsl:text>
        </xsl:if>
        
        <!-- next are X3D node children, following contained head section -->
    </xsl:template>
    
    <xsl:template name="webFontCss">
        <xsl:comment> X3DOM needs Web Fonts when an X3D Text node is included </xsl:comment>
        <xsl:text>&#10;</xsl:text>
        <xsl:comment> adapted from http://x3dom.org/x3dom/example/x3dom_text.html and http://web.mit.edu/jmorzins/www/fonts.html </xsl:comment>
        <xsl:text>&#10;</xsl:text>
<style type="text/css"><xsl:text>
/* ============================================================================= */
@font-face {
  font-family: 'SERIF'; /* default original */
  font-style: normal;
  font-weight: 700;
  src: local('Roman'), url('Roman.ttf') format('truetype');
}
@font-face {
  font-family: 'SERIF'; /* default alternate */
  font-style: normal;
  font-weight: 700;
  src: local('Times New Roman'), local('TimesNewRoman'), url('Times New Roman.ttf') format('truetype');
}
/* ============================================================================= */
@font-face {
  font-family: 'SANS'; /* default original */
  font-style: normal;
  font-weight: 400;
  src: local('Arial'), url('Arial.ttf') format('truetype');
}
@font-face {
  font-family: 'SANS'; /* default alternate */
  font-style: normal;
  font-weight: 400;
  src: local('Helvetica'), url('Helvetica.ttf') format('truetype');
}
/* ============================================================================= */
@font-face {
  font-family: 'TYPEWRITER'; /* default original */
  font-style: normal;
  font-weight: 900;
  src: local('Courier'), url('Courier.ttf') format('truetype');
}
@font-face {
  font-family: 'TYPEWRITER'; /* default alternate */
  font-style: normal;
  font-weight: 900;
  src: local('Courier New'), url('Courier New.ttf') format('truetype');
}
/* ============================================================================= */
</xsl:text></style>
    </xsl:template>
    
    <xsl:template name="cssZoomButton">
        <xsl:comment> Button zoom adapted from http://x3dom.org/docs/dev/tutorial/styling.html </xsl:comment>
        <xsl:text>&#10;</xsl:text>
<style type="text/css"><xsl:text>

html {width:100%;height:100%;margin:0;padding:0;}
body {margin:0;padding:10px;width:100%;height:100%;}

#rootX3dElement {
    height: </xsl:text>
<xsl:value-of select="$x3dHeight"/>
<xsl:if test="not(contains($x3dHeight,'px'))"><xsl:text>px</xsl:text>
</xsl:if>
<xsl:text>;
    width:  </xsl:text><xsl:value-of select="$x3dWidth"/>
<xsl:if test="not(contains($x3dHeight,'px'))"><xsl:text>px</xsl:text>
</xsl:if>
<xsl:text>;
    border: none;
    display: block;
    position:relative;
    background:#000;
}

#toggleZoomButton {
    position: absolute;
    float: left;
    z-index: 1;
    top: 0px;
    left: 0px;
    width: 10em;
    height: 2em;
    border: none;
    background-color: #202021;
    color: #ccc;
}

#toggleZoomButton:hover {
    background-color:blue;
}
</xsl:text></style>

<xsl:comment> http://x3dom.org/docs/dev/api.html and http://x3dom.org/docs/dev/configuration.html </xsl:comment>
<!-- Also     https://developer.mozilla.org/en-US/docs/Web/API/window.navigator?redirectlocale=en-US&redirectslug=DOM%2Fwindow.navigator -->
<!--          http://www.x3dom.org/documentation/tutorials/css-integration-2 -->
<xsl:text>&#10;</xsl:text>

<script type="text/javascript"><xsl:text>
var zoomed = false;
var showStatistics = </xsl:text><xsl:value-of select="$showStatistics"/><xsl:text>;
var showDebugLog   = </xsl:text><xsl:value-of select="$showDebugLog"/><xsl:text>;

function toggleZoom(button) {

        var new_height;
        var new_width;
        var x3d_element;
        
        htmlBody       = document.getElementById('htmlBody');
        htmlPageHeader = document.getElementById('htmlPageHeader');
        htmlPageFooter = document.getElementById('htmlPageFooter');
        x3d_element    = document.getElementById('rootX3dElement');

        if (zoomed) // previous value
        {
                // unzoom
                new_height = "</xsl:text><xsl:value-of select="$x3dHeight"/><xsl:text>";
                new_width  = "</xsl:text><xsl:value-of select="$x3dWidth"/><xsl:text>";
                button.innerHTML = "Zoom";
                htmlPageHeader.style.display = "table-row";
                htmlPageFooter.style.display = "table-row";
                document.getElementById('checkBoxCell').style="text-align:right";
                htmlBody.style.padding = "10px";
                x3d_element.showStat   = showStatistics;
                x3d_element.showLog    = showDebugLog;
                x3d_element.runtime.debug(showDebugLog);
                document.getElementById("details").hidden = (!showDebugLog);
        } else {
                // zoom
                new_height = "100%";
                new_width  = "100%";
                button.innerHTML = "Unzoom";
                htmlPageHeader.style.display = "none";
                htmlPageFooter.style.display = "none";
                htmlBody.style.padding = "0px";
                x3d_element.showStat   = false;
                x3d_element.showLog    = false;
                x3d_element.runtime.debug(false);
                document.getElementById("details").hidden = true;
                // TODO how to hide browser interface?
        }
        zoomed = !zoomed; // toggle

        x3d_element.style.height = new_height;
        x3d_element.style.width  = new_width;
}
                    
    // Browser information table adapted from http://www.w3schools.com/js/js_window_navigator.asp
    
    document.addEventListener("DOMContentLoaded", function()
    {
        document.getElementById("browserCodeName"      ).innerHTML = navigator.appCodeName;
        document.getElementById("browserAppName"       ).innerHTML = navigator.appName;
        document.getElementById("browserAppVersion"    ).innerHTML = navigator.appVersion;
        document.getElementById("browserCookieEnabled" ).innerHTML = navigator.cookieEnabled;
        document.getElementById("browserPlatform"      ).innerHTML = navigator.platform;
        document.getElementById("browserUserAgent"     ).innerHTML = navigator.userAgent;
    if (navigator.systemLanguage)
        document.getElementById("browserSystemLanguage").innerHTML = navigator.systemLanguage;
    else
        document.getElementById("browserSystemLanguage").innerHTML = navigator.language;
    }, false);

function toggleOverlayStatistics()
{
        showStatistics = !showStatistics; // toggle
        x3d_element = document.getElementById('rootX3dElement');
        x3d_element.runtime.statistics(showStatistics);
}
function toggleShowDebugLogs()
{
        showDebugLog  = !showDebugLog; // toggle
        x3d_element = document.getElementById('rootX3dElement');
        x3d_element.runtime.debug(showDebugLog);
        document.getElementById("details").hidden = (!showDebugLog);
}
</xsl:text></script>
    </xsl:template>
    
    <!-- X3DOM nightly list of supported nodes http://x3dom.org/x3dom/test/functional/dumpNodeTypeTree.html -->
    <!-- X3DOM spreadsheet inventory           http://www.web3d.org/specifications/X3dNodeInventoryComparison.pdf -->
    <xsl:template name="x3dom-supported-node">
        <xsl:param name="name"/>
        <xsl:variable name="nodename" select="(normalize-space($name))"/><!--Conversion TODO lower-case -->
        <xsl:choose>
            <xsl:when test="( string-length($nodename) > 0) and
(($nodename='Anchor') or
 ($nodename='Appearance') or
 ($nodename='Arc2D') or
 ($nodename='ArcClose2D') or
 ($nodename='AudioClip') or
 ($nodename='Background') or
 ($nodename='BallJoint') or
 ($nodename='Billboard') or
 ($nodename='BlendedVolumeStyle') or
 ($nodename='BoundaryEnhancementVolumeStyle') or
 ($nodename='Box') or
 ($nodename='CADAssembly') or 
 ($nodename='CADFace') or
 ($nodename='CADLayer') or
 ($nodename='CADPart') or
 ($nodename='CartoonVolumeStyle') or
 ($nodename='Circle2D') or
 ($nodename='ClipPlane') or
 ($nodename='CollidableShape') or
 ($nodename='Collision') or
 ($nodename='CollisionCollection') or
 ($nodename='CollisionSensor') or
 ($nodename='Color') or
 ($nodename='ColorChaser') or
 ($nodename='ColorDamper') or
 ($nodename='ColorInterpolator') or
 ($nodename='ColorRGBA') or
 ($nodename='component') or
 ($nodename='ComposedCubeMapTexture') or
 ($nodename='ComposedShader') or
 ($nodename='ComposedTexture3D') or
 ($nodename='ComposedVolumeStyle') or
 ($nodename='Cone') or
 ($nodename='Coordinate') or
 ($nodename='CoordinateDamper') or
 ($nodename='CoordinateInterpolator') or
 ($nodename='Cylinder') or
 ($nodename='CylinderSensor') or
 ($nodename='DirectionalLight') or
 ($nodename='Disk2D') or
 ($nodename='DoubleAxisHingeJoint') or
 ($nodename='EdgeEnhancementVolumeStyle') or
 ($nodename='ElevationGrid') or
 ($nodename='Extrusion') or
 ($nodename='field') or
 ($nodename='FloatVertexAttribute') or
 ($nodename='Fog') or
 ($nodename='FontStyle') or
 ($nodename='GeneratedCubeMapTexture') or
 ($nodename='GeoCoordinate') or
 ($nodename='GeoElevationGrid') or
 ($nodename='GeoLocation') or
 ($nodename='GeoLOD') or
 ($nodename='GeoMetadata') or
 ($nodename='GeoOrigin') or
 ($nodename='GeoPositionInterpolator') or
 ($nodename='GeoTransform') or
 ($nodename='GeoViewpoint') or
 ($nodename='Group') or
 ($nodename='HAnimDisplacer') or
 ($nodename='HAnimHumanoid') or
 ($nodename='HAnimJoint') or
 ($nodename='HAnimSegment') or
 ($nodename='HAnimSite') or
 ($nodename='head') or
 ($nodename='ImageTexture') or
 ($nodename='ImageTexture3D') or
 ($nodename='IndexedFaceSet') or
 ($nodename='IndexedLineSet') or
 ($nodename='IndexedQuadSet ') or
 ($nodename='IndexedTriangleSet') or
 ($nodename='IndexedTriangleStripSet') or
 ($nodename='Inline') or
 ($nodename='IsoSurfaceVolumeData') or
 ($nodename='LineProperties') or
 ($nodename='LineSet') or
 ($nodename='LOD') or
 ($nodename='Material') or
 ($nodename='meta') or
 ($nodename='MetadataBoolean') or
 ($nodename='MetadataDouble') or
 ($nodename='MetadataFloat') or
 ($nodename='MetadataInteger') or
 ($nodename='MetadataSet') or
 ($nodename='MetadataString') or
 ($nodename='MotorJoint') or
 ($nodename='MovieTexture') or
 ($nodename='MultiTexture') or
 ($nodename='MultiTextureCoordinate') or
 ($nodename='NavigationInfo') or
 ($nodename='Normal') or
 ($nodename='NormalInterpolator') or
 ($nodename='OpacityMapVolumeStyle') or
 ($nodename='OrientationChaser') or
 ($nodename='OrientationDamper') or
 ($nodename='OrientationInterpolator') or
 ($nodename='OrthoViewpoint') or
 ($nodename='PixelTexture') or
 ($nodename='PixelTexture3D') or
 ($nodename='PlaneSensor') or
 ($nodename='PointLight') or
 ($nodename='PointSet') or
 ($nodename='Polyline2D') or
 ($nodename='Polypoint2D') or
 ($nodename='PositionChaser') or
 ($nodename='PositionChaser2D') or
 ($nodename='PositionDamper') or
 ($nodename='PositionDamper2D') or
 ($nodename='PositionInterpolator') or
 ($nodename='ProjectionVolumeStyle') or
 ($nodename='QuadSet ') or
 ($nodename='Rectangle2D') or
 ($nodename='RigidBody') or
 ($nodename='RigidBodyCollection') or
 ($nodename='ROUTE') or
 ($nodename='ScalarChaser') or
 ($nodename='ScalarDamper') or
 ($nodename='ScalarInterpolator') or
 ($nodename='Scene') or
 ($nodename='SegmentedVolumeData') or
 ($nodename='ShadedVolumeStyle') or
 ($nodename='ShaderPart') or
 ($nodename='Shape') or
 ($nodename='SilhouetteEnhancementVolumeStyle') or
 ($nodename='SingleAxisHingeJoint') or
 ($nodename='SliderJoint') or
 ($nodename='Sound') or
 ($nodename='Sphere') or
 ($nodename='SphereSensor') or
 ($nodename='SplinePositionInterpolator') or
 ($nodename='SpotLight') or
 ($nodename='StaticGroup') or
 ($nodename='Switch') or
 ($nodename='TexCoordDamper2D') or
 ($nodename='Text') or
 ($nodename='TextureCoordinate') or
 ($nodename='TextureCoordinate3D') or
 ($nodename='TextureCoordinateGenerator') or
 ($nodename='TextureProperties') or
 ($nodename='TextureTransform') or
 ($nodename='TextureTransform3D') or
 ($nodename='TextureTransformMatrix3D') or
 ($nodename='TimeSensor') or
 ($nodename='ToneMappedVolumeStyle') or
 ($nodename='TouchSensor') or
 ($nodename='Transform') or
 ($nodename='TriangleSet') or
 ($nodename='TriangleSet2D') or
 ($nodename='TwoSidedMaterial') or
 ($nodename='UniversalJoint') or
 ($nodename='Viewpoint') or
 ($nodename='VolumeData') or
 ($nodename='WorldInfo') or
 ($nodename='X3D'))">
                <xsl:text>true</xsl:text>
            </xsl:when>
            <xsl:when test="( string-length($nodename) > 0) and
(($nodename='CADLayer') or
 ($nodename='CADAssembly') or
 ($nodename='CADPart') or
 ($nodename='CADFace') or
 ($nodename='IndexedQuadSet') or
 ($nodename='QuadSet'))">
                <!-- CAD Geometry component -->
                <xsl:text>true</xsl:text>
            </xsl:when>
<!-- x3dom stubs

 ($nodename='GeoProximitySensor') or
 ($nodename='Geospatial') or
 ($nodename='GeoTouchSensor') or
 
 -->
            <xsl:otherwise>
                <xsl:text>false</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <!-- ****** find-base-address:  callable template (recursive function) ****** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="find-base-address">
        <xsl:param name="url"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug
        <xsl:message>
            <xsl:text>$url=</xsl:text>
            <xsl:value-of select="$url"/>
        </xsl:message> -->
        <xsl:choose>
            <xsl:when test="not(contains($url,'/'))">
                <!-- return value -->
                <xsl:value-of select="$url"/>
            </xsl:when>
            <xsl:when test="(substring($url,string-length($url),1) = '/')">
                <!-- return value -->
                <xsl:value-of select="$url"/>
            </xsl:when>
            <xsl:otherwise>
                <!-- recurse -->
                <xsl:call-template name="find-base-address">
                    <xsl:with-param name="url" select="substring($url,1,string-length($url)-1)"/>
                </xsl:call-template>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-special-characters">
        <xsl:param name="inputString" select="0"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
		<xsl:variable name="apos">'</xsl:variable>
		<xsl:variable name="quot">"</xsl:variable>
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
            <xsl:when test="contains($inputString,$apos) and not(contains(substring-before($inputString,$apos),$quot)) and not(contains(substring-before($inputString,$apos),'&#60;'))">
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

</xsl:stylesheet>
