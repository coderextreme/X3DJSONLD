<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="title"       content="X3dToX3domX_ITE.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="25 March 2012" />
   <meta name="description" content="XSLT stylesheet to convert X3D source into an HTML5 XHTML page containing the embedded X3D scene using either X3DOM or X_ITE syntax." />
   <meta name="identififer" content="https://www.web3d.org/x3d/stylesheets/X3dToX3domX_ITE.xslt" />
   <meta name="reference"   content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToX3domX_ITE.xslt" />
  </head>

Recommended tools:
- X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- XML Spy https://www.altova.com

X3DOM references

- home          https://x3dom.org
- browser check https://x3dom.org/check
- documentation https://doc.x3dom.org
- Download      https://doc.x3dom.org/gettingStarted
- Node support  https://doc.x3dom.org/author/nodes.html
-               https://andreasplesch.github.io/x3dom/dist/doc/author/nodes.html

-->
<!--
Copyright (c) 2001-2024 held by the author(s).  All rights reserved.

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
<xsl:stylesheet version="2.0" xmlns='http://www.w3.org/1999/xhtml' xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <!-- default parameter values that can be overridden when invoking this stylesheet -->
    <xsl:param name="player"                   >X3DOM</xsl:param> <!-- supported players: X3DOM and X_ITE (formerly Cobweb) -->
    <xsl:param name="x3dHeight"                >450px</xsl:param> <!-- default 16x9 aspect ratio -->
    <xsl:param name="x3dWidth"                 >800px</xsl:param>
    <!-- X3DOM parameters -->
    <xsl:param name="showStatistics"           >false</xsl:param>
    <xsl:param name="showDebugLog"             >false</xsl:param>
    
<!--<xsl:param name="urlX3DOM"                 >https://x3dom.org/download/dev</xsl:param>                   legacy
    <xsl:param name="urlX3DOM"                 >https://x3dom.github.io/x3dom-dev/dist</xsl:param>           alternate
    <xsl:param name="urlX3DOM"                 >https://cdn.jsdelivr.net/gh/x3dom/x3dom-dev/dist</xsl:param> preferred -->

    <xsl:param name="urlX3DOM"                 >https://cdn.jsdelivr.net/gh/x3dom/x3dom-dev/dist</xsl:param> <!-- no trailing / -->
    
    <!-- X_ITE parameters -->
    <xsl:param name="cache"                    >true</xsl:param>
	<!-- also in CreateContentCatalogPages.xslt -->
    <xsl:param name="urlScene"                 ></xsl:param>      <!-- X3D MFString url list -->

    <xsl:param name="urlX_ITE"                >https://cdn.jsdelivr.net/npm/x_ite@latest/dist</xsl:param> <!-- no trailing slash / -->
<!--<xsl:param name="urlX_ITE"                >https://create3000.github.io/code/x_ite</xsl:param>             no trailing slash / -->
    <xsl:param name="versionX_ITE"            >x_ite.min.js</xsl:param>
<!--<xsl:param name="versionX_ITE"            >latest</xsl:param>     -->
<!--<xsl:param name="versionX_ITE"            >latest/dist</xsl:param>-->
<!--<xsl:param name="versionCobweb"           >x_ite@latest/dist</xsl:param>  1/1.28 or 2/2.6 or 3/3.1 or 3/3.2 or 3.3 or 4.0.5 or 4.1.5 4.6.11 or x_ite@latest/dist with no trailing slash / -->
    <xsl:param name="urlWebsiteX_ITE"         >https://create3000.github.io/x_ite</xsl:param>
<!--<xsl:param name="urlWebsiteX_ITE"         >https://github.com/create3000/x_ite/wiki</xsl:param>-->
<!--<xsl:param name="urlWebsiteX_ITE"         >https://create3000.de/x_ite</xsl:param>  redirection likely, so far https not supported -->
    <!-- Catalog generator and configuration parameters -->
    <xsl:param name="x3dSceneAvailable"        >true</xsl:param> <!-- .x3d source, same file name -->
    <xsl:param name="x3dDocumentationAvailable">true</xsl:param> <!-- .html pretty print, same file name -->
    <xsl:param name="traceEnabled"             >false</xsl:param>
    <xsl:param name="styleX_ITE"              >default</xsl:param><!-- simple or default -->

    <xsl:variable name="x3dVersion" select="normalize-space(//X3D/@version)"/>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersion,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersion,'4')"/>

    <xsl:strip-space elements="*"/>
    <xsl:output encoding="UTF-8" media-type="text/xml" indent="yes" cdata-section-elements="Script ShaderPart ShaderProgram" omit-xml-declaration="yes" method="xml"/>

    <xsl:variable name="rootElementX_ITE">
        <xsl:choose>
            <xsl:when test="starts-with($versionX_ITE,'1')">
                    <xsl:text>X3D</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                    <xsl:text>x3d-canvas</xsl:text><!-- formerly X3DCanvas -->
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>

    <xsl:variable name="lower-case-player" select="translate($player,'ABCDEFGHIJKLMNOPQRSTUVWXYZ','abcdefghijklmnopqrstuvwxyz')"/> <!-- XSLT 1 hack -->

    <xsl:variable name="apos">'</xsl:variable>
    <xsl:variable name="quot">"</xsl:variable>

    <xsl:variable name="urlX3DOM.dev"             >https://x3dom.org/download/dev</xsl:variable> <!-- no trailing / -->
    <xsl:variable name="urlX3DOM.release"         >https://x3dom.org/release</xsl:variable>      <!-- no trailing / -->

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
        <xsl:variable name="x3dWorldInfoTitle">
            <xsl:value-of select="//WorldInfo[1]/@title"/>
        </xsl:variable>

        <!-- debug diagnostics -->
        <xsl:if test="($traceEnabled = 'true')">
            <xsl:message>
                <xsl:text>X3dToX3domX_ITE.xslt X3D parameters: </xsl:text>
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
                <xsl:choose>
                    <xsl:when test="($urlX3DOM = $urlX3DOM.dev)">
                        <xsl:text> (developers release)</xsl:text>
                    </xsl:when>
                    <xsl:when test="($urlX3DOM = $urlX3DOM.release)">
                        <xsl:text> (official release)</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text> (warning: unofficial version)</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:message>
            <xsl:message>
                <xsl:text>X_ITE parameters: </xsl:text>
                <xsl:text>$cache=</xsl:text>
                <xsl:value-of select="$cache"/>
                <xsl:text>, $urlScene=</xsl:text>
                <xsl:value-of select="$urlScene"/>
                <xsl:text>, $urlX_ITE=</xsl:text>
                <xsl:value-of select="$urlX_ITE"/>
                <xsl:text>/</xsl:text>
                <xsl:value-of select="$versionX_ITE"/>
                <xsl:text>, $x3dSceneAvailable=</xsl:text>
                <xsl:value-of select="$x3dSceneAvailable"/>
                <xsl:text>, $x3dDocumentationAvailable=</xsl:text>
                <xsl:value-of select="$x3dDocumentationAvailable"/>
            </xsl:message>
        </xsl:if>

        <!-- header -->
        <!-- https://stackoverflow.com/questions/4666523/xhtml-strict-1-0-target-blank-not-valid
        <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"&gt;</xsl:text> -->
        <!-- https://developer.mozilla.org/en-US/docs/Web/HTML/Quirks_Mode_and_Standards_Mode -->
        <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE html&gt;</xsl:text>
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

        <xsl:variable name="htmlTitle">
            <xsl:if test="(string-length($x3dWorldInfoTitle) > 0)">
                <xsl:value-of select="$x3dWorldInfoTitle"/>
            </xsl:if>
            <xsl:if test="(string-length($fileName) > 0) and not($fileName = $x3dWorldInfoTitle)">
                <xsl:text>, </xsl:text>
                <xsl:value-of select="$fileName"/>
                <xsl:if test="(string-length($x3dWorldInfoTitle) > 0) and ends-with($x3dWorldInfoTitle,'.x3d') and not(contains($x3dWorldInfoTitle,' '))">
                    <xsl:message>
                        <xsl:text>*** Warning, possible mismatch between meta title=</xsl:text>
                        <xsl:value-of select="$fileName"/>
                        <xsl:text> and WorldInfo/@title=</xsl:text>
                        <xsl:value-of select="$x3dWorldInfoTitle"/>
                        <xsl:text> ?</xsl:text>
                    </xsl:message>
                </xsl:if>
            </xsl:if>
            <xsl:text> (</xsl:text>
            <xsl:value-of select="$player"/>
            <!-- <xsl:text> X3dToX3domX_ITE.xslt</xsl:text> -->
            <xsl:text>)</xsl:text>
        </xsl:variable>
        <!-- debug
        <xsl:message>
            <xsl:text>$htmlTitle=</xsl:text>
            <xsl:value-of select="$htmlTitle"/>
        </xsl:message>
        -->
        <html xmlns="http://www.w3.org/1999/xhtml">
            <head>
                <title>
                    <xsl:value-of select="$htmlTitle"/>
                </title>
                <xsl:if test="($lower-case-player = 'x3dom')">
                    <meta http-equiv="X-UA-Compatible" content="chrome=1,IE=edge" />
                </xsl:if>
                <meta http-equiv="Content-Type" content="text/html;charset=utf-8" />
                <!-- TODO reference; can't have both
                <meta charset="UTF-8"/> -->
                <meta name="generator" content="https://www.web3d.org/x3d/stylesheets/X3dToX3domX_ITE.xslt" />

              <!--               Getting started with X3DOM: https://doc.x3dom.org/gettingStarted -->
              <!--                     alternate stylesheet: https://www.x3dom.org/x3dom/example/x3dom.css -->
                <xsl:text>&#10;</xsl:text>

                <!-- jQuery availability: https://developers.google.com/speed/libraries https://stackoverflow.com/questions/12608242/latest-jquery-version-on-googles-cdn -->
                <xsl:variable name="urlJquery">
                    <xsl:text>https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js</xsl:text>
                </xsl:variable>
                <xsl:text>        </xsl:text>
                <xsl:text disable-output-escaping="yes"><![CDATA[<script type="text/javascript" src="]]></xsl:text><xsl:value-of select="$urlJquery"/><xsl:text disable-output-escaping="yes"><![CDATA["></script>]]></xsl:text>
                <xsl:text>&#10;</xsl:text>

                <xsl:choose>
                  <xsl:when test="($lower-case-player = 'x_ite') or ($lower-case-player = 'cobweb')">
                    <xsl:text>        </xsl:text>
                    <xsl:comment> X_ITE developer site: https://create3000.github.io/x_ite </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>        </xsl:text>
                    <link rel="icon" type="image/png"               href="https://create3000.github.io/x_ite/assets/img/favicons/favicon-32x32.png"/>
                    <link rel="icon" type="image/png" sizes="32x32" href="https://create3000.github.io/x_ite/assets/img/favicons/favicon-32x32.png"/>
                    <link rel="icon" type="image/png" sizes="16x16" href="https://create3000.github.io/x_ite/assets/img/favicons/favicon-16x16.png"/>
                    <xsl:text>&#10;</xsl:text>
                    <!-- no longer needed, handled automatically
                    <xsl:text>        </xsl:text>
                    <link rel="stylesheet" type="text/css" href="{$urlX_ITE}/{$versionX_ITE}/x_ite.css" />
                    <xsl:text>&#10;</xsl:text> -->
                    <xsl:text>        </xsl:text>
                    <!-- TODO singleton <script /> tag buggy under Firefox -->
                    <xsl:text disable-output-escaping="yes"><![CDATA[<script type="text/javascript" src="]]></xsl:text><xsl:value-of select="$urlX_ITE"/><xsl:text>/</xsl:text><xsl:value-of select="$versionX_ITE"/><xsl:text disable-output-escaping="yes"><![CDATA["></script>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <!-- separate entry apparently no longer needed
		    <xsl:text>        </xsl:text>
                    <xsl:text disable-output-escaping="yes"><![CDATA[<script type="text/javascript" src="]]></xsl:text><xsl:value-of select="$urlX_ITE"/><xsl:text>/</xsl:text><xsl:value-of select="$versionX_ITE"/><xsl:text disable-output-escaping="yes"><![CDATA[/rigid-body-physics.min.js"></script>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text> -->
                    <xsl:choose>
                            <xsl:when test="($styleX_ITE = 'simple')">
	<style type="text/css">
<xsl:text>
#main {
	width: 768px;
}
</xsl:text><xsl:value-of select="$rootElementX_ITE"/><xsl:text> {
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
         x3d-canvas {
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
         font-family: monospace;
         margin-bottom: 0px;
         }
         .maximize {
         background: none;
         border: none;
         }
</xsl:text>
      <!-- https://stackoverflow.com/questions/14698234/ie-uses-courier-font-when-font-family-monospace-is-used -->
      </style>
      <xsl:text>&#10;</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
              </xsl:when>
              <xsl:otherwise> <!-- default X3DOM head -->
<!--
On 6/19/2013 7:12 AM, Jung, Yvonne wrote:
> Hi Don,
> for your converter stylesheet I really think that linking to the latest dev version is best.
> Only if someone wants to provide an x3dom-based Web app, he/she should use a local copy.
> So, here is the link to all x3dom dev builds: https://www.x3dom.org/download/dev/
> For the extended Profile (i.e., CAD, Geometry2D etc.) you should use the "x3dom-full.js",
> otherwise you can use standard x3dom.js
-->
                    <xsl:comment> Numbered X3DOM release versions: https://www.x3dom.org/download </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:comment> Developer X3DOM release version: https://www.x3dom.org/download/dev </xsl:comment>
                    <xsl:text>&#10;</xsl:text>
                    <link rel="stylesheet" type="text/css" href="{$urlX3DOM}/x3dom.css" />
                    <xsl:text>&#10;</xsl:text>
                    <script         type="text/javascript"  src="{$urlX3DOM}/x3dom-full.js"/>
                    <xsl:text>&#10;</xsl:text><xsl:text>        </xsl:text>
                    <link rel="icon" type="image/png"               href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/tools/X3dEdit4.0/X3dEditModuleSuite/X3dSourceFilePalette/src/org/web3d/x3d/resources/x3dom-whiteOnblue160.png?format=raw"/>
                    <link rel="icon" type="image/png" sizes="32x32" href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/tools/X3dEdit4.0/X3dEditModuleSuite/X3dSourceFilePalette/src/org/web3d/x3d/resources/x3dom-whiteOnblue32.png?format=raw"/>
                    <link rel="icon" type="image/png" sizes="24x24" href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/tools/X3dEdit4.0/X3dEditModuleSuite/X3dSourceFilePalette/src/org/web3d/x3d/resources/x3dom-whiteOnblue24.png?format=raw"/>
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
                        <script         type="text/javascript"  src="https://www.web3d.org/x3d/content/examples/Basic/CAD/x3dom/CADGeometry.js"/>
                    </xsl:if>
                    -->

                    <!-- development testing example: H-Anim component by H-Anim Working Group
                    <xsl:if test="//*[starts-with(local-name(),'HAnim')] or //MetadataBoolean">
                        < ! - - development version, local - - >
                        <script         type="text/javascript"  src="../../content/examples/Basic/HumanoidAnimation/x3dom/HAnimComponent.js"/>
                        < ! - - development version, online - - >
                        <script         type="text/javascript"  src="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/x3dom/HAnimComponent.js"/>
                    </xsl:if>
                    -->
                    <!-- TODO under development: https://github.com/mcgredonps/x3dom/tree/master/src/nodes/DIS -->
                    <xsl:if test="//EspduTransform or //*[starts-with(local-name(),'DISEntity')] or //*[contains(local-name(),'Pdu')]">
                        <!-- development version, local -->
                        <script         type="text/javascript"  src="../../content/examples/Basic/DistributedInteractiveSimulation/x3dom/dis.js"/>
                        <!-- development version, online -->
                        <script         type="text/javascript"  src="https://github.com/mcgredonps/x3dom/dis.js"/>
                    </xsl:if>

                    <!-- Text node support -->
                    <meta name="warning" content="Webfonts must be loaded prior to using Text node in X3D scene... see https://x3dom.org/x3dom/example/x3dom_text.html" />
                    <!-- setup fonts for Text node, in order -->
                    <xsl:call-template name="webFontCss"/>
                    <!-- show a font change, with family in middle to confirm that changes are not failing -->
<style type="text/css" media="screen, print">
.webfont { font-size:200%; font-family:'TYPEWRITER'; color:green;} /* Conversion TODO font families: SANS SERIF TYPEWRITER */
</style>
                    <xsl:call-template name="cssZoomButton"/>
    </xsl:otherwise>
</xsl:choose>

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

             jQuery (".maximize") .attr ("title", "Reduce frame, show console");

             jQuery (".browser") .css ("height", "100%");
             jQuery ("x3d-canvas") .css ("height", "90%");
           }
           else
           {
             jQuery (".frame")
               .css ("position", "inherit")
               .css ("background", "none");

             jQuery (".maximize") .attr ("title", "Full Frame");

             jQuery (".browser") .css ("height", "initial");
             jQuery ("x3d-canvas") .css ("height", "432px");
           }
         }
</xsl:text>
                </script>
                <xsl:text>&#10;</xsl:text>
            </head>
            <body id="htmlBody" onload="toggleFullscreen();">
                <xsl:text>&#10;</xsl:text>
                
        <xsl:variable name="titleString">
            <xsl:choose>
                <xsl:when test="(string-length(//meta[@name = 'title']/@content) > 0)">
                    <xsl:value-of select="//meta[@name = 'title']/@content"/>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="identifier" select="//meta[@name = 'identifier']/@content"/>
        <xsl:variable name="publishedInX3dModelArchives" 
                    select="(string-length($identifier) > 0) and ends-with($identifier,'.x3d') and
                             starts-with($identifier,'https://www.web3d.org/x3d/content/examples/')"/>
        <xsl:variable name="shortcutIconUrl">
            <xsl:choose>
                <xsl:when test="$publishedInX3dModelArchives">
                    <xsl:value-of select="concat(substring-before($identifier,'.x3d'),'Index.html')"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>https://www.web3d.org/x3d/content/examples/X3dResources.html</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="shortcutIconTooltip">
            <xsl:choose>
                <xsl:when test="$publishedInX3dModelArchives">
                    <xsl:text>go to X3D Example Archives model page</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>go to X3D Resources page</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="shortcutIconTarget">
            <xsl:choose>
                <xsl:when test="$publishedInX3dModelArchives">
                    <xsl:text>_top</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>_blank</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <!-- debug
        <xsl:message>
            <xsl:text>[debug] insert-title-bar: titleString=</xsl:text>
            <xsl:value-of select="$titleString"/>
        </xsl:message> -->
        <xsl:if test="(string-length($shortcutIconUrl) > 0)">
                <!-- add shortcut link to upper right corner of page -->
                <span style="position: relative; float: right; margin-right: 10px; font-size: smaller">
                    <xsl:element name="a">
                        <xsl:attribute name="href">
                            <xsl:value-of select="$shortcutIconUrl"/>
                        </xsl:attribute>
                        <xsl:attribute name="target">
                            <xsl:text>_top</xsl:text>
                        </xsl:attribute>
                        <xsl:attribute name="title">
                            <xsl:value-of select="$shortcutIconTooltip"/>
                        </xsl:attribute>
                        <!-- useing firefox for conversion: Inspector > Copy > Image-Data-URL -->
                        <!-- https://stackoverflow.com/questions/10942312/how-to-generate-a-data-uri -->
                        <!-- X3DtextIcon16.png -->
                        <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAABpUlEQVQ4T2NsuZD///f/XwzkAsbM9aH/f/75Rq5+Bsb/QEC2bqBGyg34uHf3fz4nF7gj3sybxSCSlMaw5upisFiIdiyY3rvvMsO58/fBbCNDRQZnJ10wm/Ghtep/scU7GDgUlRgeh3oysFs6MCy3/M1w8MYmiGIle4Ya+24GL992hocPXjHIK4gxXLlwn8EnwIxh2uQUBsbXc2f+/75mIQN/SSPDh+YiBrn9lxhaDpaCNYGAzwx9hi0ZF8EGODpoM5QW+4HFRThjGd58XwwJA5DN/5/eYhBbuhvsEhB4/Okhw9QTbQxff35imOy7HMMAmIFgA54VZDD8ObWbQe7YXXhYHH9yiGHOiS4wf27IFtwGfL939/+rWA8GNudghr+P7zNIz1uBEqu4vKCtW8hQWOjDwPjI0+o/Z0g8OOQfOeoxCNT2MSQ8rGIode1hsJSxwxoG9++/ZDDVKoGEAcgA2W1HwbZ+2rcHHJCnppQyLDjcAxaz0HSDx8KpPdfgruuYmsCQkuRMhYREcVIuzNnw/8f33ygBRwqHccHcU/9//fpLih4UtQCM2snm2Klv7gAAAABJRU5ErkJggg=="/>
                    </xsl:element>
                </span>
            <xsl:text>&#10;</xsl:text>
        </xsl:if>


<xsl:choose>
    <xsl:when test="($lower-case-player = 'x_ite') or ($lower-case-player = 'cobweb')">
        <div id="main" style="margin-left: 40px;">
            <h2>
                <xsl:choose>
                    <xsl:when test="$fileName and X3D/head/meta[@name='identifier']">
                        <xsl:value-of select="$fileName"/>
                        <xsl:text> using X_ITE</xsl:text>
                    </xsl:when>
                    <xsl:when test="$fileName">
                        <xsl:value-of select="$fileName"/>
                        <xsl:text> using X_ITE</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text> X3dToX3domX_ITE.xslt stylesheet conversion to XHTML</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
            </h2>

            <div class="frame">
                <div class="browser">
                    <table>
                        <tr>
                            <td>
                                <span class="references">
                                    <button title="Maximize Frame"
                                            class="maximize"
                                            onclick="toggleFullscreen();">
                                       <img alt="Maximize Frame"
                                            src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAsAAAALCAYAAACprHcmAAAACXBIWXMAAC4jAAAuIwF4pT92AAAAB3RJTUUH4QQNFQk1i7oCawAAALhJREFUGJWV0TFKA2EQBeBn1iqptBJvEFsVjxR0LyB4txQSRCzEeAexsLCJydr4WWQWwjbGBwPzv3nDP/Mm+EBXscAhggb3xW/wGaxt8Y2rEvZxWTx0wWqn4R3HJTzCW/FrbEZJnpKcJ3lJcpLkOlvMkpwmeU1ykeSxny0Yox2M0WLS73CA7ItRkqbycZJ2UL9JMqm8CeaY4rmWuatvb+u9xBnm/3Ij+PrD527X5178g4fBBRfFQ/cL8YlBv40R0JoAAAAASUVORK5CYII="/>
                                    </button>
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>$urlWebsiteX_ITE={$urlWebsiteX_ITE} value-of=</xsl:text>
                                        <xsl:value-of select="$urlWebsiteX_ITE"/>
                                    </xsl:message> -->
                                    <xsl:element name="a">
                                        <xsl:attribute name="href">
                                            <xsl:value-of select="$urlWebsiteX_ITE"/>
                                        </xsl:attribute>
                                        <xsl:attribute name="target">
                                            <xsl:value-of select="_blank"/>
                                        </xsl:attribute>
                                        <xsl:attribute name="title">
                                            <xsl:text>X_ITE website</xsl:text>
                                        </xsl:attribute>
                                        <xsl:text>X_ITE X3D Browser</xsl:text>
                                    </xsl:element>
                                    <xsl:text disable-output-escaping="yes">&#160;<!-- nbsp; --></xsl:text>
                                </span>
                           </td>
                           <td>
                               <!-- note that no . precedes class name webfont here! -->
                               <span class="webfont">
                                   <xsl:text disable-output-escaping="yes">&#160;<!-- nbsp; --></xsl:text>
                                   <xsl:choose>
                                       <xsl:when test="X3D/head/meta[@name='description']">
                                           <!-- counterintuitive but disable-output-escaping="no" is important to preserve HTML-parsable result -->
                                           <xsl:value-of select="X3D/head/meta[@name='description']/@content" disable-output-escaping="no"/><!-- I18N -->
                                       </xsl:when>
                                       <xsl:otherwise>
                                           <xsl:text disable-output-escaping="yes">&#160;<!-- nbsp; --></xsl:text>
                                       </xsl:otherwise>
                                   </xsl:choose>
                               </span>
                                <!-- duplicated button block -->
                                <xsl:if test="(string-length($shortcutIconUrl) > 0)">
                                           <xsl:text disable-output-escaping="yes">&#160;<!-- nbsp; --></xsl:text>
                                           <xsl:text disable-output-escaping="yes">&#160;<!-- nbsp; --></xsl:text>
                                           <xsl:text disable-output-escaping="yes">&#160;<!-- nbsp; --></xsl:text>
                                      <!-- add shortcut link to upper right corner of page -->
                                      <span style="position: relative; float: right; margin-right: 10px; font-size: smaller">
                                          <xsl:element name="a">
                                              <xsl:attribute name="href">
                                                  <xsl:value-of select="$shortcutIconUrl"/>
                                              </xsl:attribute>
                                              <xsl:attribute name="target">
                                                  <xsl:text>_top</xsl:text>
                                              </xsl:attribute>
                                              <xsl:attribute name="title">
                                                  <xsl:value-of select="$shortcutIconTooltip"/>
                                              </xsl:attribute>
                                              <!-- useing firefox for conversion: Inspector > Copy > Image-Data-URL -->
                                              <!-- https://stackoverflow.com/questions/10942312/how-to-generate-a-data-uri -->
                                              <!-- X3DtextIcon16.png -->
                                              <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAABpUlEQVQ4T2NsuZD///f/XwzkAsbM9aH/f/75Rq5+Bsb/QEC2bqBGyg34uHf3fz4nF7gj3sybxSCSlMaw5upisFiIdiyY3rvvMsO58/fBbCNDRQZnJ10wm/Ghtep/scU7GDgUlRgeh3oysFs6MCy3/M1w8MYmiGIle4Ya+24GL992hocPXjHIK4gxXLlwn8EnwIxh2uQUBsbXc2f+/75mIQN/SSPDh+YiBrn9lxhaDpaCNYGAzwx9hi0ZF8EGODpoM5QW+4HFRThjGd58XwwJA5DN/5/eYhBbuhvsEhB4/Okhw9QTbQxff35imOy7HMMAmIFgA54VZDD8ObWbQe7YXXhYHH9yiGHOiS4wf27IFtwGfL939/+rWA8GNudghr+P7zNIz1uBEqu4vKCtW8hQWOjDwPjI0+o/Z0g8OOQfOeoxCNT2MSQ8rGIode1hsJSxwxoG9++/ZDDVKoGEAcgA2W1HwbZ+2rcHHJCnppQyLDjcAxaz0HSDx8KpPdfgruuYmsCQkuRMhYREcVIuzNnw/8f33ygBRwqHccHcU/9//fpLih4UtQCM2snm2Klv7gAAAABJRU5ErkJggg=="/>
                                          </xsl:element>
                                      </span>
                                  <xsl:text>&#10;</xsl:text>
                              </xsl:if>
                           </td>
                       </tr>
                   </table>
                   <xsl:text disable-output-escaping="yes">
&lt;</xsl:text><xsl:value-of select="$rootElementX_ITE"/><xsl:text> src='</xsl:text><xsl:value-of select="$urlSceneUnquoted"/><xsl:text disable-output-escaping="yes">'&gt;
	&lt;p&gt;&lt;b&gt;Display error: X3D model not shown.&lt;/b&gt;&lt;/p&gt;
	&lt;p&gt;Your HTML browser does not appear to support all features required by the
	&lt;a href="</xsl:text><xsl:value-of select="$urlWebsiteX_ITE"/><xsl:text disable-output-escaping="yes">" target="_blank"&gt;X_ITE&lt;/a&gt; X3D player!&lt;/p&gt;
&lt;/</xsl:text><xsl:value-of select="$rootElementX_ITE"/><xsl:text disable-output-escaping="yes">&gt;
</xsl:text>
                    <div class="references">
                        <xsl:text disable-output-escaping="yes">&amp;nbsp;&amp;nbsp; &amp;nbsp; Original X3D model: </xsl:text>
                        <xsl:element name="a">
                            <xsl:attribute name="href">
                                <xsl:value-of select="$urlScene"/>
                            </xsl:attribute>
                            <xsl:attribute name="target">
                                <xsl:value-of select="_blank"/>
                            </xsl:attribute>
                            <xsl:attribute name="title">
                                <xsl:value-of select="$urlScene"/>
                            </xsl:attribute>
                            <xsl:value-of select="$urlScene"/>
                        </xsl:element>
                    </div>
                    <xsl:variable name="urlCatalog">
                        <xsl:value-of select="substring-before(//X3D/head/meta[@name='identifier']/@content,'.x3d')"/>
                        <xsl:text>Index.html</xsl:text>
                    </xsl:variable>
                    <xsl:if test="(string-length($urlCatalog) > 0)">
                        <div class="references">
                            <xsl:text>X3D Examples Archive: </xsl:text>
                            <xsl:element name="a">
                                <xsl:attribute name="href">
                                    <xsl:value-of select="$urlCatalog"/>
                                </xsl:attribute>
                                <xsl:attribute name="target">
                                    <xsl:value-of select="_blank"/>
                                </xsl:attribute>
                                <xsl:attribute name="title">
                                    <xsl:value-of select="$urlScene"/>
                                    <xsl:text> catalog index</xsl:text>
                                </xsl:attribute>
                                <xsl:value-of select="$urlCatalog"/>
                            </xsl:element>
                        </div>
                    </xsl:if>
                </div><!-- browser -->
            </div><!-- frame -->
            <div>
               <h3>X_ITE Console</h3>
               <pre class="x_ite-console"></pre>
            </div>
        </div><!-- main -->
    </xsl:when>
    <xsl:otherwise> <!-- default X3DOM -->
                <table style="width:96%" id="htmlPageHeader">
                    <tr>
                        <td style="text-align:left;">
                            <h2>
                                <xsl:choose>
                                    <xsl:when test="$fileName and X3D/head/meta[@name='identifier']">
                                        <xsl:value-of select="$fileName"/>
                                        <xsl:text> using X3DOM</xsl:text>
                                    </xsl:when>
                                    <xsl:when test="$fileName">
                                        <xsl:value-of select="$fileName"/>
                                        <xsl:text> using X3DOM</xsl:text>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:text> X3dToX3domX_ITE.xslt stylesheet conversion to XHTML</xsl:text>
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
                                 reference: https://www.w3schools.com/tags/att_input_checked.asp -->
                            <span title="Overlay scene performance statistics">
                                <xsl:text>statistics</xsl:text>
                            </span>
                            <xsl:text>, </xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:variable name="checkedShowDebugLog">
                                <xsl:if test="($showDebugLog = 'true')">
                                    <!-- note not attribute=value form! -->
                                    <!-- https://developer.mozilla.org/en-US/docs/Web/HTML/Element/input/checkbox -->
                                    <xsl:text>checked</xsl:text>
                                </xsl:if>
                            </xsl:variable>
                            <!-- <input id="checkBoxShowDebugLogs" type="checkbox" value="Display debugger logs" onclick="toggleShowDebugLogs();"/>omitted 'check' and so off -->
                            <xsl:element name="input">
                                <xsl:attribute name="id"     ><xsl:text>checkBoxShowDebugLogs</xsl:text></xsl:attribute>
                                <xsl:attribute name="type"   ><xsl:text>checkbox</xsl:text></xsl:attribute>
                                <xsl:attribute name="value"  ><xsl:text>Display debugger logs</xsl:text></xsl:attribute>
                                <xsl:attribute name="onclick"><xsl:text>toggleShowDebugLogs();</xsl:text></xsl:attribute>
                                <xsl:if test="($showDebugLog = 'true')">
                                    <xsl:attribute name="checked"><xsl:value-of select="$checkedShowDebugLog"/></xsl:attribute>
                                </xsl:if>
                            </xsl:element>
                            <span title="Show meta information and debug logs">
                                <xsl:text>info &amp; logs</xsl:text>
                            </span>
							<xsl:text>, </xsl:text>
							<a href="https://www.x3dom.org" onclick="target='_blank';">X3DOM home</a>
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
                                            <!-- counterintuitive but disable-output-escaping="no" is important to preserve HTML-parsable result -->
                                            <xsl:value-of select="X3D/head/meta[@name='description']/@content" disable-output-escaping="no"/><!-- I18N -->
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:text disable-output-escaping="yes">&#160;<!-- nbsp; --></xsl:text>
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
                    <xsl:text disable-output-escaping="yes">&#160;</xsl:text>
                </p>
                <!-- output table of X3D scene metadata -->
                <table style="border:0px solid; border-spacing:0px; margin:auto; margin-top:20px;margin-left:5%;">
                    <xsl:if test="//X3D/head/meta">
                        <tr style="background-color:silver; border-color:silver;">
                            <th style="text-align:right;">
                                <xsl:text disable-output-escaping="yes">X3D&#160;Scene </xsl:text>
                            </th>
                            <th style="text-align:left;">
                                <xsl:text disable-output-escaping="yes"> &#160; </xsl:text>
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
                                                     (starts-with($lower-case-address,'https://www.web3d.org/x3d/content/examples/') or
                                                      starts-with($lower-case-address,'https://x3dgraphics.com/examples/') or
                                                      starts-with($lower-case-address,'https://savage.nps.edu/savage/') or
                                                      starts-with($lower-case-address,'https://savagedefense.nps.navy.mil/savagedefense/'))">
                            <tr style="background-color:silver; border-color:silver;">
                                <td style="text-align:right;color:green;">
                                    <i>
                                        <xsl:text>X3D Examples Archive</xsl:text>
                                    </i>
                                </td>
                                <td>
									<xsl:text disable-output-escaping="yes"> &#160; </xsl:text>
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
                                                <xsl:text>/</xsl:text>
                                                <xsl:value-of select="substring-before($fileName,'.x3d')"/>
                                                <xsl:text>Index.html</xsl:text>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:value-of select="$base-address"/>
                                                <xsl:value-of select="substring-before($fileName,'.x3d')"/>
                                                <xsl:text>Index.html</xsl:text>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:variable>
                                    <!--
                                    <xsl:variable name="examplesIndexUrl">
                                        <xsl:choose>
                                            <xsl:when  test="(string-length($archiveUrl) > 0))">
                                                <br />
                                                <xsl:value-of select="$archiveUrl"/>
                                                <xsl:text>/</xsl:text>
                                                <xsl:value-of select="$fileName"/>
                                                <xsl:text>Index.html</xsl:text>
                                            </xsl:when>
                                            <xsl:otherwise>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:variable> -->
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
									<xsl:with-param name="inputValue" select="normalize-space(@content)"/>
								</xsl:call-template>
							</xsl:variable>
                            <tr>
                                <td style="text-align:right;color:green">
                                    <xsl:value-of select="$attributeName"/>
                                </td>
                                <td>
                                        <xsl:text disable-output-escaping="yes"> &#160; </xsl:text>
                                </td>
                                <td>
                                    <xsl:choose>
                                        <xsl:when test="starts-with($attributeContent,'http') or starts-with($attributeContent,'ftp') or
                                                        contains($attributeContent,'.txt')    or contains($attributeContent,'.html')  or
                                                        contains($attributeContent,'.xhtml')  or contains($attributeContent,'.htm')   or
                                                        contains($attributeContent,'.x3d')    or contains($attributeContent,'.png')   or contains($attributeContent,'.apng')   or
                                                        contains($attributeContent,'.jpg')    or contains($attributeContent,'.mpg')   or
                                                        contains($attributeContent,'.pdf')    or contains($attributeContent,'.js')    or

                                                        contains($attributeContent, '.pdf')  or
                                                        contains($attributeContent, '.ppt')  or
                                                        contains($attributeContent, '.pptx') or
                                                        contains($attributeContent, '.htm')  or
                                                        contains($attributeContent, '.html') or
                                                        contains($attributeContent, '.css')  or
                                                        contains($attributeContent, '.au')   or
                                                        contains($attributeContent, '.aiff') or
                                                        contains($attributeContent, '.midi') or
                                                        contains($attributeContent, '.mp3')  or
                                                        contains($attributeContent, '.mp4')  or
                                                        contains($attributeContent, '.m4a')  or
                                                        contains($attributeContent, '.mpeg') or
                                                        contains($attributeContent, '.rdf')  or
                                                        contains($attributeContent, '.owl')  or
                                                        contains($attributeContent, '.ttl')  or
                                                        contains($attributeContent, '.xml')  or
                                                        contains($attributeContent, '.xslt') or
                                                        contains($attributeContent, '.java') or
                                                        contains($attributeContent, '.json') or
                                                        contains($attributeContent, '.py')   or
                                                        contains($attributeContent, '.x3d')  or
                                                        contains($attributeContent, '.html') or
                                                        contains($attributeContent, '.htm')  or
                                                        contains($attributeContent, '.svg')  or
                                                        contains($attributeContent, '.3dm')  or
                                                        contains($attributeContent, '.blend') or
                                                        contains($attributeContent, '.bvh')  or
                                                        contains($attributeContent, '.dwg')  or
                                                        contains($attributeContent, '.dxf')  or
                                                        contains($attributeContent, '.gltf') or
                                                        contains($attributeContent, '.glb')  or
                                                        contains($attributeContent, '.igs')  or
                                                        contains($attributeContent, '.igse') or
                                                        contains($attributeContent, '.stp')  or
                                                        contains($attributeContent, '.step') or
                                                        contains($attributeContent, '.ply')  or
                                                        contains($attributeContent, '.stl')  or
                                                        contains($attributeContent, '.txt')  or
                                                        contains($attributeContent, '.vsd')  or
                                                        contains($attributeContent, '.vsdx')  or

                                                        contains($attributeContent,'.css')    or starts-with($attributeName,'title')  or
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
                                <xsl:text disable-output-escaping="yes">&#160;</xsl:text>
                            </td>
                        </tr>
                        <tr style="background-color:silver;border-color:silver;">
                            <th style="text-align:right;">
                                <xsl:text disable-output-escaping="yes"> HTML&#160;Browser </xsl:text>
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
                                <xsl:text> Partially supported nodes</xsl:text>
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
												<xsl:text>https://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
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
												<xsl:text>https://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
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
                                                <xsl:text>https://www.web3d.org/x3d/tooltips/X3dTooltips.html#</xsl:text>
                                                <xsl:text>Text</xsl:text>
                                        </xsl:attribute>
                                        <xsl:attribute name="target">
                                                <xsl:text>_blank</xsl:text>
                                        </xsl:attribute>
                                        <span style="color:orange; text-decoration-color:orange; moz-text-decoration-color:orange;">
                                                <b><xsl:text>Text</xsl:text></b>
                                        </span></xsl:element>
                                    <xsl:text> node:</xsl:text>
                                    <xsl:text> for example use, see </xsl:text>
                                    <a href="https://x3dom.org/x3dom/example/x3dom_text.html" onclick="target='x3dom';">X3DOM Text and FontStyle Example</a>
                                </xsl:if>
                                <xsl:text> </xsl:text>
                            </td>
                        </tr>
                        <tr style="text-align:center; background-color:silver;border-color:silver; padding:6px;">
                            <td colspan="3" style="cellpadding:3px">
                                <xsl:text disable-output-escaping="yes"> &#160;&#160;&#160; </xsl:text>
                                <!-- anchor target attribute replaced as shown below -->
                                <xsl:text>References: </xsl:text>
                                <a href="https://doc.x3dom.org/tutorials/basics/sound/example.html"        onclick="target='_blank';">X3DOM browser check</a>,
                                <a href="https://www.x3dom.org"                                            onclick="target='_blank';">X3DOM home</a>,
                                <a href="https://doc.x3dom.org"                                            onclick="target='_blank';">X3DOM documentation</a>,
                            <!--<a href="https://doc.x3dom.org/author/nodes.html"                          onclick="target='_blank';">X3DOM list of supported nodes</a>
                                <a href="https://andreasplesch.github.io/x3dom/dist/doc/author/nodes.html" onclick="target='_blank';">X3DOM list of supported nodes</a>,-->
                                <a href="https://x3dom.github.io/x3dom-dev/dist/doc/author/nodes.html" onclick="target='_blank';">X3DOM list of supported nodes</a>,
                                and
                                <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html"  onclick="target='_blank';">X3D Resources</a>
                                <!-- apparently old but thorough: https://examples.x3dom.org/simpleExamples.html -->
                                <xsl:text disable-output-escaping="yes"> &#160;&#160;&#160; </xsl:text>
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
                      not((local-name()='containerField' and string(.)='tangent')          and (local-name(..)='Tangent')) and
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
                ." >
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
                    <xsl:text> </xsl:text>
					<!-- apparently namespace-prefix attributes on X3D element can't be added without inducing error
					<xsl:choose>
						<xsl:when test="(local-name() = 'xsd')">
							<xsl:text>xmlns:</xsl:text>
						</xsl:when>
						<xsl:when test="(local-name() = 'noNamespaceSchemaLocation')">
							<xsl:text>xsd:</xsl:text>
						</xsl:when>
					</xsl:choose>
					-->
                    <xsl:value-of select="local-name()"/>
					<xsl:text>=</xsl:text>
					<xsl:value-of select="$attributeDelimiter"/>
					<xsl:call-template name="escape-special-characters">
						<xsl:with-param name="inputValue" select="."/>
					</xsl:call-template>
					<xsl:value-of select="$attributeDelimiter"/>
        </xsl:if>
    </xsl:template>

    <xsl:template match="*">
			<xsl:if test="local-name() = 'X3D'">
				<xsl:comment> Conversion note: the following HTML button is overlaid on top of the page </xsl:comment>
				<xsl:text>&#10;</xsl:text>
				<button id="toggleZoomButton" onclick="toggleZoom(this); return false;">Zoom</button>
				<xsl:text>&#10;</xsl:text>
			</xsl:if>
            <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
            <xsl:value-of select="local-name(.)"/>
            <!-- X3D node attributes -->
            <xsl:if test="local-name() = 'X3D'">
                <xsl:text> id='rootX3dElement'</xsl:text>
                <!-- https://x3dom.org/docs-old/configuration.html -->
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
        <!-- next are X3D node children, following contained head section -->
    </xsl:template>

    <xsl:template name="webFontCss">
        <xsl:comment> X3DOM first needs Web Fonts displayed in HTML page when an X3D Text node is included </xsl:comment>
        <xsl:text>&#10;</xsl:text>
        <xsl:comment> adapted from https://x3dom.org/x3dom/example/x3dom_text.html and https://web.mit.edu/jmorzins/www/fonts.html </xsl:comment>
        <xsl:text>&#10;</xsl:text>
        
<!-- Andreas reports that default fonts no long require configuration, 
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
</xsl:text></style> -->
    </xsl:template>

    <xsl:template name="cssZoomButton">
        <xsl:comment> Button zoom adapted from https://x3dom.org/docs/dev/tutorial/styling.html </xsl:comment>
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

<xsl:comment> https://x3dom.org/docs/dev/api.html and https://x3dom.org/docs/dev/configuration.html </xsl:comment>
<!-- Also     https://developer.mozilla.org/en-US/docs/Web/API/window.navigator?redirectlocale=en-US&redirectslug=DOM%2Fwindow.navigator -->
<!--          https://doc.x3dom.org/documentation/tutorials/css-integration-2 -->
<xsl:text>&#10;</xsl:text>

<script type="text/javascript"><xsl:text>
var zoomed = false;
var showStatistics = </xsl:text><xsl:value-of select="not($showStatistics)"/><xsl:text>;
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
//              x3d_element.runtime.debug(showDebugLog); // blocked by CORB (Cross-Origin Read Blocking)
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
//              x3d_element.runtime.debug(false); // blocked by CORB (Cross-Origin Read Blocking)
                document.getElementById("details").hidden = true;
                // TODO how to hide browser interface?
        }
        zoomed = !zoomed; // toggle

        x3d_element.style.height = new_height;
        x3d_element.style.width  = new_width;
}

    // Browser information table adapted from https://www.w3schools.com/js/js_window_navigator.asp

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

    <!-- X3DOM nightly list of supported nodes https://x3dom.org/x3dom/test/functional/dumpNodeTypeTree.html -->
    <!-- X3DOM spreadsheet inventory           https://www.web3d.org/specifications/X3dNodeInventoryComparison.pdf -->
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
 ($nodename='BooleanFilter') or
 ($nodename='BooleanSequencer') or
 ($nodename='BooleanToggle') or
 ($nodename='BooleanTrigger') or
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
 ($nodename='CoordinateDouble') or
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
 ($nodename='fieldValue') or
 ($nodename='IS') or
 ($nodename='connect') or
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
 ($nodename='IndexedQuadSet') or
 ($nodename='IndexedTriangleSet') or
 ($nodename='IndexedTriangleStripSet') or
 ($nodename='Inline') or
 ($nodename='IntegerSequencer') or
 ($nodename='IntegerTrigger') or
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
 ($nodename='ParticleSet') or
 ($nodename='PhysicalMaterial') or
 ($nodename='PixelTexture') or
 ($nodename='PixelTexture3D') or
 ($nodename='PlaneSensor') or
 ($nodename='PointLight') or
 ($nodename='PointProperties') or
 ($nodename='PointSet') or
 ($nodename='Polyline2D') or
 ($nodename='Polypoint2D') or
 ($nodename='PositionChaser') or
 ($nodename='PositionChaser2D') or
 ($nodename='PositionDamper') or
 ($nodename='PositionDamper2D') or
 ($nodename='PositionInterpolator') or
 ($nodename='PositionInterpolator2D') or
 ($nodename='ProjectionVolumeStyle') or
 ($nodename='ExternProtoDeclare') or
 ($nodename='ProtoDeclare') or
 ($nodename='ProtoBody') or
 ($nodename='ProtoInterface') or
 ($nodename='ProtoInstance') or
 ($nodename='QuadSet') or
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
 ($nodename='Tangent') or
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
 ($nodename='Timerigger') or
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
            <xsl:when test="( string-length($nodename) > 0) and
(($nodename='BooleanFilter') or
 ($nodename='BooleanSequencer') or
 ($nodename='BooleanToggle') or
 ($nodename='BooleanTrigger') or
 ($nodename='IntegerSequencer') or
 ($nodename='IntegerTrigger') or
 ($nodename='TimeTrigger'))">
                <!-- Event Utilities component -->
                <!-- https://andreasplesch.github.io/x3dom/dist/doc/author/nodes.html -->
                <!-- https://web3d.org/pipermail/x3d-public_web3d.org/2023-September/019631.html -->
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
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
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
            <xsl:when test="contains($inputString,$apos) and not(contains(substring-before($inputString,$apos),$quot)) and not(contains(substring-before($inputString,$apos),'&#60;'))">
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

</xsl:stylesheet>
