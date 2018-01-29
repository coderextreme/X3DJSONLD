<?xml version="1.0" encoding="UTF-8"?>
<!--
  <head>
   <meta name="title"       content="X3dTidy.xslt" />
   <meta name="creator"     content="Don Brutzman" />
   <meta name="created"     content="28 Decembery 2013" />
   <meta name="description" content="XSLT stylesheet to tidy up problems or issues in X3D source models." />
   <meta name="reference"   content="Decorator design pattern, https://en.wikipedia.org/wiki/Decorator_pattern" />
   <meta name="url"         content="http://www.web3d.org/x3d/stylesheets/X3dTidy.xslt" />
  </head>

Recommended tools:
- X3D-Edit, https://savage.nps.edu/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
- XML Spy http://www.xmlspy.com
-->

<!-- TODO: insert default descriptions, hide GeoOrigin, add HAnim decorations, add comprehensive ROUTE visualization,
           add bounding box visualizations, add other X3D-Edit visualization options
		   correct multiple # signs in individual url addresses
  -->

<!--	xmlns:fo="http://www.w3.org/1999/XSL/Format"	-->
<!--	xmlns:saxon="http://icl.com/saxon" saxon:trace="true"	-->

<!--
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

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

<!-- TODO XSLT version="2.0" -->

<xsl:stylesheet version="2.0" exclude-result-prefixes="ds saxon"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:ds="http://www.w3.org/2000/09/xmldsig#"
                xmlns:saxon="http://icl.com/saxon" saxon:trace="no">
    <!--        
                xmlns="http://www.w3.org/TR/xhtml1/strict"
                xmlns:fn="http://www.w3.org/2005/xpath-functions" -->
    
    <!-- Default parameter values can be overridden when invoking this stylesheet -->
    <xsl:param name="conversionRequired"          ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="title"                       ><xsl:text><!-- default title value for file name is empty --></xsl:text></xsl:param>
    <xsl:param name="modifyX3dVersion"            ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="revisedX3dVersion"           ><xsl:text>3.3</xsl:text></xsl:param>
    <xsl:param name="reviseCurrentDate"           ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="fixDateFormats"              ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="fixMFStringQuotes"           ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="fixGeoSystemMetadata"        ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="fixMetaNamesMatchDublinCore" ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="replaceBlackEmissiveColor"   ><xsl:text>true</xsl:text></xsl:param>
    <!-- Expand local url array to include online addresses -->
    <xsl:param name="fixUrlAdditionHttpAddresses" ><xsl:text>true</xsl:text></xsl:param>
    <!-- note that url quotes are always appended if needed -->
    <xsl:param name="appendWrlAfterX3dAddresses"  ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="prependX3dBeforeWrlAddresses"><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="defaultUrlAddress"           ><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
    <!-- $baseUrlAvailable false means that stylesheet is being used by servlet, or else styled results won't be in original directory: -->
    <xsl:param name="baseUrlAvailable"            ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="changeJavascriptEcmascript"  ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="insertMissingEcmascript"     ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="insertMissingMetaLicense"    ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="licenseLink"                 ><xsl:text>http://www.web3d.org/x3d/content/examples/license.html</xsl:text></xsl:param>
    
    <xsl:param name="HAnimGeometryRemove"         ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="HAnimSkeletonIllustrate"     ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="HAnimSiteIllustrate"         ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="HAnimViewpointIllustrate"    ><xsl:text>false</xsl:text></xsl:param>
    <!-- TODO unimplemented -->
    <xsl:param name="HAnimAddBoneSegments"        ><xsl:text>false</xsl:text></xsl:param>
    <!-- HAnimHumanoid visualization report parameters: -->
    <xsl:param name="jointColor"             ><xsl:text>1 0.5 0</xsl:text></xsl:param>
    <xsl:param name="segmentColor"           ><xsl:text>1 1 0</xsl:text></xsl:param>
    <xsl:param name="siteColor"              ><xsl:text>1 0 0</xsl:text></xsl:param>
    <xsl:param name="siteViewpointColor"     ><xsl:text>0 0 1</xsl:text></xsl:param>
    
    <!-- TODO other X3D-Edit visualization parameters -->
    
    <!-- Determine eligibility for tasks -->
                                          
    <xsl:variable name="metaIdentifierContent" select="normalize-space(//X3D/head/meta[@name='identifier']/@content)"/>
    <xsl:variable name="base-address">
        <xsl:call-template name="find-base-address">
            <xsl:with-param name="url" select="$metaIdentifierContent"/>
        </xsl:call-template>
    </xsl:variable>
    <xsl:variable name="defaultUrlLocation">
        <xsl:choose>
            <xsl:when test="string-length($defaultUrlAddress) > 0">
                <xsl:value-of select="normalize-space($defaultUrlAddress)"/>
                <!-- add / character if needed -->
                <xsl:if test="(substring(normalize-space($defaultUrlAddress),string-length(normalize-space($defaultUrlAddress))) != '/')">
                    <xsl:text>/</xsl:text>
                </xsl:if>
            </xsl:when>
            <xsl:when test="(string-length($metaIdentifierContent) > 0)">
                <xsl:value-of select="$base-address"/>
                <!-- append / character if needed (but should not be necessary if find-base-address works as planned) -->
                <xsl:if test="(substring($base-address,string-length($base-address)) != '/')">
                    <xsl:text>/</xsl:text>
                </xsl:if>
            </xsl:when>
            <xsl:otherwise>
                <!-- empty string -->
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
	<!-- TODO still need updated XSLT engine in Netbeans :(
	http://www.sixtree.com.au/articles/2013/formatting-dates-and-times-using-xslt-2.0-and-xpath/
	http://stackoverflow.com/questions/919692/how-to-execute-xslt-2-0-with-ant
	-->
    <xsl:variable name="todaysDate">
		<xsl:value-of select="format-date(current-date(), '[D1] [MNn] [Y0001]')"/>
    </xsl:variable> 
    <!-- not used:  
    <xsl:variable name="fixableUrlFound"
                  select="count(//*[(string-length(.) > 0) and 
                                    ((not(contains(.,'&quot;'))) or 
                                     (not(contains(.,'http') or contains(.,'https') or
                                          contains(.,'ftp')  or contains(.,'sftp'))))]) > 0"/>
                                          
    and ($fixableUrlFound='true')-->
    <xsl:variable name="performUrlModifications"
                  select="(($fixUrlAdditionHttpAddresses='true') or ($fixMFStringQuotes='true')) and
                          (not(//meta[contains(@name,'Tidy')][contains(@content,'fixUrlAdditionHttpAddresses=false')])) and
                          (not(//meta[contains(@name,'Tidy')][contains(@content,'fixMFStringQuotes=false')]))">
    </xsl:variable>
    <xsl:variable name="performModifications"
                  select="($performUrlModifications)">
    </xsl:variable>
    <xsl:variable name="performTidy"
                  select="($conversionRequired='true') and
                          not(//meta[contains(@name,'Tidy')][(@content='ignore' or @content='false')])">
    </xsl:variable>

    <!-- start - - - - - - - - - - - - - - - - - - - - - - - -->
    <xsl:template match="/">
        
        <!-- Diagnostics
            no longer used:
            <xsl:text>, $fixableUrlFound=</xsl:text>
            <xsl:value-of select="$fixableUrlFound"/>
            
        <xsl:message>
            <xsl:text>Invocation $performTidy=</xsl:text>
            <xsl:value-of select="$performTidy"/>
            <xsl:text>, $conversionRequired=</xsl:text>
            <xsl:value-of select="$conversionRequired"/>
        </xsl:message>
            
        <xsl:message>
            <xsl:text>Invocation $conversionRequired=</xsl:text>
            <xsl:value-of select="$conversionRequired"/>
            <xsl:text>, $fixMFStringQuotes=</xsl:text>
            <xsl:value-of select="$fixMFStringQuotes"/>
        </xsl:message>
        <xsl:message>
            <xsl:text>Invocation $fixUrlAdditionHttpAddresses=</xsl:text>
            <xsl:value-of select="$fixUrlAdditionHttpAddresses"/>
            <xsl:text>, $performUrlModifications=</xsl:text>
            <xsl:value-of select="$performUrlModifications"/>
        </xsl:message>
        <xsl:message>
            <xsl:text>Invocation </xsl:text>
            <xsl:text disable-output-escaping="yes">&lt;meta name='identifier' content='</xsl:text>
            <xsl:value-of select="$metaIdentifierContent"/>
            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
            <xsl:text>, $defaultUrlLocation=</xsl:text>
            <xsl:value-of select="$defaultUrlLocation"/>
        </xsl:message>
            -->
            <!--
            <xsl:text>, $base-address=</xsl:text>
            <xsl:value-of select="$base-address"/>
            <xsl:text>, substring($base-address,</xsl:text>
            <xsl:value-of select="string-length($base-address)"/>
            <xsl:text>)=</xsl:text>
            <xsl:value-of select="substring($base-address,string-length($base-address))"/> 
            -->
        <xsl:call-template name="X3dDocument"/>

    </xsl:template>
        
    <xsl:variable name="x3dVersion">
        <xsl:choose>
            <xsl:when test="(//meta[contains(@name,'Tidy')][contains(@content,'modifyX3dVersion=false')])">
                <!-- no change -->
                <xsl:value-of select="normalize-space(//X3D/@version)"/>
            </xsl:when>
			<!-- first HAnim hands, feet.  TODO not working properly yet. -->
            <xsl:when test="($modifyX3dVersion = 'true') and not(starts-with(//X3D/@version,'4')) and
							((//HAnimHumanoid//*[contains(@name,'midcarpal') or contains(@name,'talus')]) or
							 (//meta[(@name = 'title')][contains(lower-case(@content),'hand') or contains(lower-case(@content),'foot')] and count(//HAnimHumanoid) > 0))">
				<!-- TODO Projective Texture Modeling (PTM) and other X3D v4 extensions -->
                <xsl:text>4.0</xsl:text>
                <xsl:message>
				    <xsl:text>*** modifyX3dVersion: need to change version to 4.0 (original version='</xsl:text>
                    <xsl:value-of select="//X3D/@version"/>
                    <xsl:text>')</xsl:text>
                </xsl:message>
            </xsl:when>
			<xsl:when test="($modifyX3dVersion = 'true') and ($revisedX3dVersion != //X3D/@version)">
                <xsl:value-of select="$revisedX3dVersion"/>
                <xsl:message>
                    <xsl:text>*** modifyX3dVersion: change version to </xsl:text>
                    <xsl:value-of select="$revisedX3dVersion"/>
                    <xsl:text> (original version='</xsl:text>
                    <xsl:value-of select="//X3D/@version"/>
                    <xsl:text>')</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="(string-length(normalize-space(//X3D/@version)) > 0)">
                <!-- no change -->
                <xsl:value-of select="normalize-space(//X3D/@version)"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>3.3</xsl:text>
                <xsl:message>
                    <xsl:text>*** reset X3D version: 3.3</xsl:text>
                    <xsl:text> (original version='</xsl:text>
                    <xsl:value-of select="//X3D/@version"/>
                    <xsl:text>')</xsl:text>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    
    <xsl:strip-space elements="*"/>
    <!-- TODO add flexibility to handle X3D embedded using X3DOM within HTML page, likely via an external stylesheet -->
    <xsl:output encoding="UTF-8" media-type="text/xml" indent="yes" cdata-section-elements="Script" omit-xml-declaration="yes" method="xml"/>
    <!-- cdata-section-elements="Script PackagedShader ShaderPart ShaderProgram" -->
    <!-- output document is empty unless conversion is performed -->

    <!-- start - - - - - - - - - - - - - - - - - - - - - - - -->
    <xsl:template name="X3dDocument">

        <xsl:text disable-output-escaping="yes">&lt;?xml version="1.0" encoding="UTF-8"?&gt;</xsl:text>
        <!-- line break after XML header line -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:choose>
          <xsl:when test="($x3dVersion='3.0') or ($x3dVersion='3.1') or ($x3dVersion='3.2') or ($x3dVersion='3.3') or ($x3dVersion='4.0')">
              <!-- final DOCTYPE: -->
              <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D </xsl:text>
              <xsl:value-of select="$x3dVersion"/>
              <xsl:text disable-output-escaping="yes">//EN&quot; &quot;http://www.web3d.org/specifications/x3d-</xsl:text>
              <xsl:value-of select="$x3dVersion"/>
              <xsl:text disable-output-escaping="yes">.dtd&quot;&gt;</xsl:text>
              <xsl:text>&#10;</xsl:text>
              <!-- transitional DOCTYPE for 3.0, 3.1 unused:
&lt;!DOCTYPE X3D PUBLIC &quot;http://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
          </xsl:when>
          <xsl:otherwise>
              <xsl:message>No recognized X3D version found, using DOCTYPE v3.3</xsl:message>
              <xsl:comment>No recognized X3D version found, using DOCTYPE v3.3</xsl:comment>
              <!-- final DOCTYPE: -->
              <xsl:text disable-output-escaping="yes">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</xsl:text>
              <xsl:text>&#10;</xsl:text>
              <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 3.3//EN&quot; &quot;http://www.web3d.org/specifications/x3d-3.3.dtd&quot;&gt;</xsl:text>
              <xsl:text>&#10;</xsl:text>
              <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;http://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
          </xsl:otherwise>
		</xsl:choose>
        
        <!-- Decide whether to convert or not -->
        <xsl:choose>
            <xsl:when test="($performTidy=false())">
                <xsl:message>X3dTidy.xslt:  no node conversion performed, copied source document.</xsl:message>
                <xsl:copy-of select="@* | * | comment() | processing-instruction()"/>
                <!-- line break at end: no
                <xsl:text>&#10;</xsl:text> -->
            </xsl:when>
            <xsl:otherwise>
                <!-- recurse to handle all document nodes, attributes and text blocks.  TODO  | text() | node() ? -->
                <xsl:apply-templates select="* | comment() | processing-instruction()" />
				<!-- line break after last line -->
				<xsl:text>&#10;</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
      
    </xsl:template>

    <!-- add custom meta tags for this generator to existing head section -->
    <xsl:template match="head" >
        <!-- TODO omit namespace output -->
		<!-- indent -->
        <xsl:text>  </xsl:text>
		<!-- for some unknown reason, saxon is putting namespace values on the head element.  this brute-force workaround avoids them. -->
        <xsl:text disable-output-escaping="yes">&lt;head&gt;</xsl:text>
        <xsl:text>&#10;</xsl:text>

            <!-- component, unit, comments prior to meta elements -->
            <xsl:choose>
                <xsl:when test="node()[not(local-name()='meta')]">
                    <!-- debug <xsl:comment>rule 1, component</xsl:comment> -->
                    <!-- component, unit elements go first - in that order -->
                    <xsl:apply-templates select="comment()[following-sibling::component]"/>
                    <xsl:apply-templates select="component"/>
                    <!-- debug <xsl:comment>rule 1.5, unit</xsl:comment> -->
                    <xsl:apply-templates select="comment()[not(following-sibling::component)][following-sibling::unit]"/>
                    <xsl:apply-templates select="unit"/>
                    <!-- debug <xsl:comment>rule 1.6, solo comment before meta</xsl:comment> -->
                    <xsl:apply-templates select="comment()[not(following-sibling::component)][not(following-sibling::unit)][following-sibling::meta]"/>
                </xsl:when>
                <xsl:when test="not(*)">
                    <!-- debug <xsl:comment>rule 2</xsl:comment> -->
                    <xsl:apply-templates select="comment() | processing-instruction()" /> <!-- TODO | text() | node() -->
                </xsl:when>
            </xsl:choose>
            
            <!-- followed by ordered processing of contained meta elements -->
            <xsl:choose>
                <!-- first handle meta title element: insert if missing (and title name is provided as a stylesheet parameter) -->
                <xsl:when test="not(meta[@name='title']) and (string-length($title) > 0)">
                    <!-- debug <xsl:comment>rule 3</xsl:comment> -->
                    <!-- indent -->
                    <xsl:text>    </xsl:text>
                    <xsl:text disable-output-escaping="yes">&lt;meta content='</xsl:text>
                    <xsl:value-of select="$title"/>
                    <xsl:text disable-output-escaping="yes">' name='title'/&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** insert: &lt;meta content='</xsl:text>
                        <xsl:value-of select="$title"/>
                        <xsl:text disable-output-escaping="yes">' name='title'/&gt;</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:otherwise>
                    <!-- debug <xsl:comment>rule 4</xsl:comment> -->
                    <!-- if meta title exists, put it first -->
                    <xsl:apply-templates select="meta[@name='title']"/>
                    <xsl:if test="meta[@name='title'] and not(meta[1][@name='title'])">
                        <xsl:message>
                            <xsl:text disable-output-escaping="yes">*** move to top: &lt;meta content='</xsl:text>
                            <xsl:value-of select="meta[@name='title']/@content"/>
                            <xsl:text disable-output-escaping="yes">' name='title'/&gt;</xsl:text>
                        </xsl:message>
                    </xsl:if>
                    <xsl:if test="(count(meta[@name='title']) > 1)">
                        <xsl:message>
                            <xsl:text disable-output-escaping="yes">*** warning: multiple &lt;meta name='title'/&gt; elements found</xsl:text>
                        </xsl:message>
                    </xsl:if>
                </xsl:otherwise>
            </xsl:choose>
            <!-- now process all other contained meta elements, comments -->
            <!-- debug <xsl:comment>rule 5</xsl:comment> -->
            <xsl:apply-templates select="meta[not(@name='title')] | comment()[not(following-sibling::component)][not(following-sibling::unit)][not(following-sibling::meta[1])]" />
            
            <!-- post processing of meta tags, e.g. append license if missing -->
            <xsl:if test="not(meta[@name='license']) and $insertMissingMetaLicense and (string-length($licenseLink) > 0) and
                          not(meta[@name='creator'][contains(@content, 'Planet 9 Studios')]) and
                         (not(//meta[contains(@name,'Tidy')][contains(@content,'insertMissingMetaLicense=false')]))">
                <xsl:variable name="licenseMetaTag">
                    <xsl:text disable-output-escaping="yes">&lt;meta content='</xsl:text>
                    <xsl:value-of select="$licenseLink"/>
                    <xsl:text disable-output-escaping="yes">' name='license'/&gt;</xsl:text>
                </xsl:variable>
                <xsl:text>    </xsl:text>
                <xsl:value-of select="$licenseMetaTag" disable-output-escaping="yes"/>
                <xsl:text>&#10;</xsl:text>
                <xsl:message>
                    <xsl:text>*** insertMissingMetaLicense: </xsl:text>
                    <xsl:value-of select="$licenseMetaTag" disable-output-escaping="yes"/>
                </xsl:message>
            </xsl:if>
            <!-- unused features:  possible to add meta tags for this converter, if not found already... however this changes file size if no other changes made. -->
            <!--
            <xsl:if test="$performModifications and not(meta[@name='generator'][content='http://www.web3d.org/x3d/stylesheets/X3dTidy.xslt'])">
                <xsl:text>    </xsl:text>
                <xsl:text disable-output-escaping="yes">&lt;meta name="generator" content="http://www.web3d.org/x3d/stylesheets/X3dTidy.xslt"/&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:variable name="xsl-vendor" select="system-property('xsl:vendor')"/>
            <xsl:if test="$performModifications and not(meta[@name='generator'][content='XSLT processor {$xsl-vendor}'])">
                <xsl:text>    </xsl:text>
                <meta name="generator" content="XSLT processor {$xsl-vendor}"/>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            <xsl:if test="$performModifications and not(meta[@name='generator'][content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dTidy.xslt'])">
                <xsl:text>    </xsl:text>
                <meta name="generator" content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dTidy.xslt"/>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
            -->
		<!-- indent -->
        <xsl:text>  </xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;/head&gt;</xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:template>

    <!-- TODO problem with validation under some XSLT engines:
         process xmlns:ds attributes (in X3D element)
    <xsl:template match="@xmlns:ds" >
        <xsl:copy/> 
    </xsl:template> -->

    <!-- process XML digital signature elements/nodes -->
    <xsl:template match="ds:*" >
        <!-- indent -->
        <xsl:for-each select="ancestor::*">
            <xsl:text>  </xsl:text>
        </xsl:for-each>
        <!-- not working
        <xsl:copy>
            <xsl:apply-templates select="@* | * | comment() | text()"/>
        </xsl:copy>
        <xsl:text>&#10;</xsl:text> -->        
        <xsl:text disable-output-escaping="yes">&lt;ds:</xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:for-each select="@*">
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>'</xsl:text>
        </xsl:for-each>
        <!-- TODO validation problem
        <xsl:for-each select="ds:@*">
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>'</xsl:text>
        </xsl:for-each>
        -->
        <xsl:variable name="containsText" select="not(normalize-space(text()) = '') and not(normalize-space(text()) = ' ')"/>
        <xsl:choose>
            <xsl:when test="* or comment() or $containsText">
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                <xsl:if test="not($containsText)">
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
                <xsl:apply-templates select="comment()"/>
                <xsl:value-of select="text()" disable-output-escaping="yes"/><!-- I18N -->
                <!-- no mixed content likely -->
                <xsl:apply-templates select="*"/>
                <xsl:if test="not($containsText)">
                    <!-- indent -->
                    <xsl:for-each select="ancestor::*">
                        <xsl:text>  </xsl:text>
                    </xsl:for-each>
                </xsl:if>
                <xsl:text disable-output-escaping="yes">&lt;/ds:</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- process all elements/nodes -->
    <xsl:template match="*">
        <!-- indent -->
        <xsl:for-each select="ancestor::*">
            <xsl:text>  </xsl:text>
        </xsl:for-each>
        <xsl:choose>
            <xsl:when test="(count(* | comment() | text()[string-length(normalize-space(.)) > 0]) > 0) or 
                            (((local-name()='HAnimSegment') or (local-name()='HAnimSite')) and not(string-length(@USE) > 0) and 
                             (($HAnimSkeletonIllustrate='true') or ($HAnimSiteIllustrate='true')))">
                <!-- open tag for current element, which itself is a parent -->
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="local-name()"/>
                <!-- handle attribute(s) if any -->
                <xsl:call-template name="process-attributes-in-order"/>
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>
		
                <!-- handle current node and its children, if any -->
                <xsl:choose>
                    <xsl:when test="(local-name()='Script') and (string-length(normalize-space(text())) > 0) and not(string-length(@USE) > 0)">
                        <!-- handle Script nodes -->
						
						<!-- handle children of current node first, without special treatment -->
						<xsl:apply-templates select="* | comment()"/>
								
                        <xsl:variable name="scriptLength">
                            <xsl:call-template name="find-position-last-character-before-whitespace">
                                <xsl:with-param name="string" select="."/>
                            </xsl:call-template>
                        </xsl:variable>
                        <xsl:text disable-output-escaping="yes">&lt;![CDATA[</xsl:text>
                        <xsl:text>&#10;</xsl:text>

                        <xsl:variable name="ScriptReference">
                            <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:if test="@DEF">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                            </xsl:if>
                            <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                        </xsl:variable>

                        <xsl:for-each select="text()">
                            <xsl:choose>
                                <xsl:when test="(normalize-space(.)='' or normalize-space(.)=' ') and preceding::field"></xsl:when><!--<xsl:text>// stripped LF before field&#10;</xsl:text> -->
                                <xsl:when test="(normalize-space(.)='' or normalize-space(.)=' ') and following::field"></xsl:when><!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
                                <xsl:when test="starts-with(normalize-space(.),'ecmascript') or 
                                                starts-with(normalize-space(.),'javascript') or 
                                             (string-length(normalize-space(.)) > 1)">
                                    <!-- avoid adding an additional line feed each time this code block is processed -->
                                    <xsl:choose>
                                        <xsl:when test="starts-with(normalize-space(.),'ecmascript:')">
                                            <xsl:text>ecmascript:</xsl:text>
                                            <xsl:value-of select="substring-after(substring(.,1,$scriptLength),'ecmascript:')" disable-output-escaping="yes"/>
                                        </xsl:when>
                                        <!-- append missing colon -->
                                        <xsl:when test="starts-with(normalize-space(.),'ecmascript ')">
                                            <xsl:text>ecmascript:</xsl:text>
                                            <xsl:value-of select="substring-after(substring(.,1,$scriptLength),'ecmascript')" disable-output-escaping="yes"/>
                                            <xsl:message>
                                                <xsl:text>*** error: change </xsl:text>
                                                <xsl:value-of select="$ScriptReference" disable-output-escaping="yes"/>
                                                <xsl:text> CDATA prefix from 'ecmascript' to 'ecmascript:' </xsl:text>
                                            </xsl:message>
                                        </xsl:when>
                                        <xsl:when test="(starts-with(normalize-space(.),'javascript') and ($changeJavascriptEcmascript = 'true')) and
                                                        (not(//meta[contains(@name,'Tidy')][contains(@content,'changeJavascriptEcmascript=false')]))">
                                            <xsl:text>ecmascript:</xsl:text>
                                            <xsl:choose>
                                                <xsl:when test="starts-with(normalize-space(.),'javascript:')">
                                                    <xsl:value-of select="substring-after(substring(.,1,$scriptLength),'javascript:')" disable-output-escaping="yes"/>
                                                </xsl:when>
                                                <!-- otherwise started with javascript but no colon -->
                                                <xsl:otherwise>
                                                     <xsl:value-of select="substring-after(substring(.,1,$scriptLength),'javascript')" disable-output-escaping="yes"/>
                                                </xsl:otherwise>
                                            </xsl:choose>
                                            <xsl:message>
                                                <xsl:text>*** error: change </xsl:text>
                                                <xsl:value-of select="$ScriptReference" disable-output-escaping="yes"/>
                                                <xsl:text> CDATA prefix from 'javascript:' to 'ecmascript:' </xsl:text>
                                            </xsl:message>
                                        </xsl:when>
                                        <xsl:when test="not(starts-with(normalize-space(.),'ecmascript:') and ($insertMissingEcmascript = 'true')) and
                                                        (not(//meta[contains(@name,'Tidy')][contains(@content,'insertMissingEcmascript=false')]))">
                                            <xsl:text>ecmascript:</xsl:text>

                                            <xsl:value-of select="." disable-output-escaping="yes"/>
                                            <xsl:message>
                                                <xsl:text>*** error: </xsl:text>
                                                <xsl:value-of select="$ScriptReference" disable-output-escaping="yes"/>
                                                <xsl:text> CDATA prefix, insert missing 'ecmascript:' prefix </xsl:text>
                                            </xsl:message>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:value-of select="." disable-output-escaping="yes"/>
                                            <xsl:if test="string-length(normalize-space(.)) > 0">
                                                <xsl:message>
                                                    <xsl:text>*** warning, </xsl:text>
                                                    <xsl:value-of select="$ScriptReference" disable-output-escaping="yes"/>
                                                    <xsl:text> has questionable CDATA section </xsl:text>
                                                </xsl:message>
                                            </xsl:if>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                    <!--
                                    <xsl:call-template name="escape-lessthan-characters">
                                        <xsl:with-param name="inputString" select=""/>
                                    </xsl:call-template>
                                    -->
                                </xsl:when>
                                <!-- usable text found, need to convert '<' to &lt; -->
                                <xsl:otherwise>
                                    <xsl:call-template name="escape-lessthan-characters">
                                        <xsl:with-param name="inputString" select="."/>
                                    </xsl:call-template>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:for-each>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text disable-output-escaping="yes">]]&gt;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:when>
                    <!-- TODO Handle HAnim nodes following patterns established in X3dToXhtml.xslt generation of HAnim table. -->
                    
                    <!-- apparently not needed 
                    <xsl:when test="(local-name()='HAnimHumanoid') and not(string-length(@USE) > 0)">
                        
                    </xsl:when>
                    <xsl:when test="(local-name()='HAnimJoint') and not(string-length(@USE) > 0)">
                        
                    </xsl:when>
                    -->
                    <xsl:when test="(local-name()='HAnimHumanoid') and not(string-length(@USE) > 0) and not($HAnimGeometryRemove='true')">
						<!-- first handle children of current node (including USE node) without special treatment -->
						<xsl:apply-templates select="* | comment()"/> <!--  | text() -->
						<xsl:variable name="hanimHumanoidName" select="@name"/>
						<!-- find and add any missing joints, segments, sites USE nodes at top level of this HAnimHumanoid -->
						<xsl:for-each select="//*[(local-name() = 'HAnimJoint') or (local-name() = 'HAnimSegment') or (local-name() = 'HAnimSite')]">
							<xsl:sort select="local-name()"/>
							<!--
							<xsl:message>
								<xsl:text>*** trace: </xsl:text>
								<xsl:value-of select="local-name()"/>
								<xsl:text> DEF='</xsl:text>
								<xsl:value-of select="@DEF"/>
								<xsl:text>' containerField='</xsl:text>
								<xsl:value-of select="@containerField"/>
								<xsl:text>'</xsl:text>
							</xsl:message>
							-->
							<xsl:choose>
								<!-- check this skeleton node, all should have DEF and none should have USE -->
								<xsl:when test="not(parent::*[local-name() = 'HAnimHumanoid']) and (parent::*[local-name() = 'HAnimSite'][@containerField = 'viewpoints'])">
									<xsl:if test="not(string-length(@DEF) > 0)">
										<xsl:message>
											<xsl:text>*** error: no DEF found for skeleton descendant node &lt;</xsl:text>
											<xsl:value-of select="local-name()"/>
											<xsl:text> name='</xsl:text>
											<xsl:value-of select="@name"/>
											<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
										</xsl:message>
									</xsl:if>
									<xsl:if test="(string-length(@USE) > 0)">
										<xsl:message>
											<xsl:text>*** error: unexpected USE found for skeleton descendant node &lt;</xsl:text>
											<xsl:value-of select="local-name()"/>
											<xsl:text> USE='</xsl:text>
											<xsl:value-of select="@USE"/>
											<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
										</xsl:message>
									</xsl:if>
								</xsl:when>
								<!-- check top-level USE node, check if corresponding DEF node found -->
								<xsl:when test="(parent::*[local-name() = 'HAnimHumanoid']) and (string-length(@USE) > 0)">
									<xsl:variable name="currentNodeType" select="local-name()"/>
									<xsl:variable name="currentNodeUSE"  select="@USE"/>
									<xsl:if test="not(..//*[local-name() = $currentNodeType][@DEF = $currentNodeUSE])">
										<xsl:message>
											<xsl:text>*** error: no corresponding &lt;</xsl:text>
											<xsl:value-of select="local-name()"/>
											<xsl:text> DEF='</xsl:text>
											<xsl:value-of select="$currentNodeUSE"/>
											<xsl:text disable-output-escaping="yes">'/&gt; found for &lt;HAnimHumanoid name='</xsl:text>
											<xsl:value-of select="$hanimHumanoidName"/>
											<xsl:text disable-output-escaping="yes">'&gt; &lt;</xsl:text>
											<xsl:value-of select="local-name()"/>
											<xsl:text> USE='</xsl:text>
											<xsl:value-of select="$currentNodeUSE"/>
											<xsl:text>' containerField='</xsl:text>
											<xsl:value-of select="@containerField"/>
											<xsl:text disable-output-escaping="yes">'/&gt; &gt;/HAnimHumanoid&lt;</xsl:text>
										</xsl:message>
									</xsl:if>
								</xsl:when>
								<!-- check top-level HAnimSite node, special case -->
								<xsl:when test="(parent::*[local-name() = 'HAnimHumanoid']) and (local-name() = 'HAnimSite')">
									<xsl:if test="not(Viewpoint)">
										<xsl:message>
											<xsl:text>*** error: no child Viewpoint found for top-level &lt;</xsl:text>
											<xsl:value-of select="local-name()"/>
											<xsl:text> DEF='</xsl:text>
											<xsl:value-of select="@DEF"/>
											<xsl:text> name='</xsl:text>
											<xsl:value-of select="@name"/>
											<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
										</xsl:message>
									</xsl:if>
								</xsl:when>
								<xsl:otherwise>
									<xsl:variable name="nodeType" select="local-name()"/>
									<xsl:variable name="nodeDEF"  select="@DEF"/>
									<xsl:variable name="expectedContainerField">
										<xsl:choose>
											<xsl:when test="(local-name() = 'HAnimJoint')">
												<xsl:text>joints</xsl:text>
											</xsl:when>
											<xsl:when test="(local-name() = 'HAnimSegment')">
												<xsl:text>segments</xsl:text>
											</xsl:when>
											<xsl:when test="(local-name() = 'HAnimSite')">
												<xsl:text>sites</xsl:text>
											</xsl:when>
										</xsl:choose>
									</xsl:variable>
									<xsl:if test="not(ancestor::*[local-name() = 'HAnimHumanoid']/*[local-name() = $nodeType][@containerField = $expectedContainerField][@USE = $nodeDEF])">
										<xsl:choose>
											<xsl:when test="(string-length(@DEF) = 0)">
												<!-- no DEF node found for this skeleton node, simply report it -->
												<xsl:message>
													<xsl:text disable-output-escaping="yes">*** error: DEF missing for skeleton node &lt;</xsl:text>
													<xsl:value-of select="local-name()"/>
													<xsl:text> name='</xsl:text>
													<xsl:value-of select="@name"/>
													<xsl:text>' containerField='</xsl:text>
													<xsl:value-of select="@containerField"/>
													<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
													<xsl:text> within </xsl:text>
													<xsl:text disable-output-escaping="yes">&lt;HAnimHumanoid name='</xsl:text>
													<xsl:value-of select="$hanimHumanoidName"/>
													<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
												</xsl:message>
											</xsl:when>
											<xsl:otherwise>
												<!-- no top-level USE node found for this skeleton node, so add it -->
												<xsl:message>
													<xsl:text disable-output-escaping="yes">*** error: no top-level &lt;</xsl:text>
													<xsl:value-of select="local-name()"/>
													<xsl:text> USE='</xsl:text>
													<xsl:value-of select="@DEF"/>
													<xsl:text>' containerField='</xsl:text>
													<xsl:value-of select="$expectedContainerField"/>
													<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
													<xsl:text> was found, adding it to </xsl:text>
													<xsl:text disable-output-escaping="yes">&lt;HAnimHumanoid name='</xsl:text>
													<xsl:value-of select="$hanimHumanoidName"/>
													<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
												</xsl:message>
												<xsl:text disable-output-escaping="yes">&lt;</xsl:text>
												<xsl:value-of select="local-name()"/>
												<xsl:text> USE='</xsl:text>
												<xsl:value-of select="@DEF"/>
												<xsl:text>' containerField='</xsl:text>
												<xsl:value-of select="$expectedContainerField"/>
												<xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
												<xsl:text>&#10;</xsl:text>
											</xsl:otherwise>
										</xsl:choose>
									</xsl:if>
								</xsl:otherwise>
							</xsl:choose>
						</xsl:for-each>
                    </xsl:when>
                    <xsl:when test="($HAnimGeometryRemove='true')">

                        <xsl:choose>
                            <xsl:when test="ancestor::HAnimHumanoid">
                                <!-- handle only HAnim children of current node (including USE node), stripping Shape and Grouping nodes, etc. -->
                                <xsl:apply-templates select="*[starts-with(local-name(),'HAnim')] | Viewpoint |
                                                             comment()[not(contains(.,'visualization shape')) and not(contains(.,'visualization sphere')) and not(contains(.,'visualization line segment'))]"/> <!--  | text() -->
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- handle children of current node (including USE node) without special treatment -->
                                <xsl:apply-templates select="* | comment()"/> <!--  | text() -->
                            </xsl:otherwise>
                        </xsl:choose>

                    </xsl:when>
                    <xsl:when test="(local-name()='HAnimSegment') and not(string-length(@USE) > 0) and ($HAnimSkeletonIllustrate='true')">
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
                        <!-- If no geometry found, insert suggested HAnimJointShape -->
                        <xsl:if test="not(Transform/Shape)">
                            <!-- draw Joint shape -->
                            <xsl:comment>
                                <xsl:text>&lt;</xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> name='</xsl:text>
                                <xsl:value-of select="../@name"/>
                                <xsl:text>'/&gt; visualization sphere is placed within &lt;</xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text> name='</xsl:text>
                                <xsl:value-of select="@name"/>
                                <xsl:text>'/&gt; </xsl:text>
                            </xsl:comment>
                            <xsl:text>&#10;</xsl:text>
                            <TouchSensor description='{$HanimJointTooltip}'/>
                            <Transform translation='{../@center}'>
                                <xsl:choose>
                                    <xsl:when test="not(//*[@DEF='HAnimJointShape']) and (local-name(../..)='HAnimHumanoid')">
                                        <Shape DEF='HAnimJointShape'>
                                            <Sphere radius='0.006'/> 
                                            <xsl:choose>
                                                <xsl:when test="not(//*[@DEF='HAnimJointAppearance']) and (position() = 1) and (count(preceding::HAnimJoint) = 0)">
                                                    <Appearance DEF='HAnimJointAppearance'>
                                                        <Material diffuseColor='{$jointColor}' transparency='0.5'/> 
                                                    </Appearance>
                                                </xsl:when>
                                                <xsl:otherwise>
                                                    <Appearance USE='HAnimJointAppearance'/>  
                                                </xsl:otherwise>
                                            </xsl:choose>
                                        </Shape>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <Shape USE='HAnimJointShape'/>
                                    </xsl:otherwise>
                                </xsl:choose>
                            </Transform>
                        </xsl:if>
                        <!-- Insert suggested LineSet visualization -->
                        <xsl:if test="not(Shape/LineSet) and not(Shape/IndexedLineSet)">
                            <!-- draw line segment from beginning to end of segment; note ILS is not pickable and will not show the tooltip -->
                            
                            <xsl:apply-templates select="comment()"/>
                            <!-- draw line geometry from parent Joint to peer points, if any -->
                            <xsl:for-each select="../HAnimJoint">
                                <xsl:text>&#10;</xsl:text>
                                <xsl:comment> 
                                    <xsl:text>HAnimSegment visualization line segment from parent &lt;</xsl:text>
                                    <xsl:value-of select="local-name(..)"/>
                                    <xsl:text> name='</xsl:text>
                                    <xsl:value-of select="../@name"/>
                                    <xsl:text>'/&gt; to &lt;</xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text> name='</xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text>'/&gt; </xsl:text>
                               </xsl:comment>
                                <xsl:text>&#10;</xsl:text>
                                <Shape>
                                    <!-- LineSet visualization -->
                                    <LineSet vertexCount='2'>
                                        <Coordinate point='{../@center}, {@center}'/>
                                        <!-- Color for line geometry -->
                                        <xsl:choose>
                                            <xsl:when test="not(//*[@DEF='HAnimSegmentLineColorRGBA']) and (position() = 1) and (local-name(../..)='HAnimHumanoid') and (count(preceding::HAnimJoint) = 0)">
                                                <!-- use transparency to indicate parent/child of line segment -->
                                                <ColorRGBA DEF='HAnimSegmentLineColorRGBA' color='{$segmentColor} 1, {$segmentColor} 0'/>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <ColorRGBA USE='HAnimSegmentLineColorRGBA'/>  
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </LineSet>
                                </Shape>
                            </xsl:for-each>
                            <!-- draw line geometry from parent Joint to peer sites, if any -->
                            <xsl:for-each select="HAnimSite[not(Viewpoint)]"> <!-- no Viewpoint child -->
                                <xsl:text>&#10;</xsl:text>
                                <xsl:comment> 
                                    <xsl:text>HAnimSite visualization line segment from ancestor &lt;</xsl:text>
                                    <xsl:value-of select="local-name(../..)"/>
                                    <xsl:text> name='</xsl:text>
                                    <xsl:value-of select="../../@name"/>
                                    <xsl:text>'/&gt; to &lt;</xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text> name='</xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text>'/&gt;</xsl:text>
                                </xsl:comment>
                                <xsl:text>&#10;</xsl:text>
                                <Shape>
                                    <!-- LineSet visualization -->
                                    <LineSet vertexCount='2'>
                                        <Coordinate point='{../../@center}, {@translation}'/>
                                        <!-- Color for line geometry -->
                                        <xsl:choose>
                                            <xsl:when test="not(//*[@DEF='HAnimSiteLineColorRGBA']) and (position() = 1) and (local-name(../../../..)='HAnimHumanoid') and (count(preceding::HAnimSite) = 0)">
                                                <!-- use transparency to indicate parent/child of line segment -->
                                                <ColorRGBA DEF='HAnimSiteLineColorRGBA' color='{$siteColor} 1, {$siteColor} 0'/>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <ColorRGBA USE='HAnimSiteLineColorRGBA'/>  
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </LineSet>
                                </Shape>
                            </xsl:for-each>
                            <xsl:for-each select="HAnimSite[Viewpoint]"> <!-- HAnimSite with Viewpoint child -->
                                <xsl:text>&#10;</xsl:text>
                                <xsl:comment> 
                                    <xsl:text>HAnimSite/Viewpoint visualization line segment from ancestor &lt;</xsl:text>
                                    <xsl:value-of select="local-name(../..)"/>
                                    <xsl:text> name='</xsl:text>
                                    <xsl:value-of select="../../@name"/>
                                    <xsl:text>'/&gt; to &lt;</xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text> name='</xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text>'/&gt;</xsl:text>
                                </xsl:comment>
                                <xsl:text>&#10;</xsl:text>
                                <Shape>
                                    <!-- LineSet visualization -->
                                    <LineSet vertexCount='2'>
                                        <Coordinate point='{../../@center}, {@translation}'/>
                                        <!-- Color for line geometry -->
                                        <xsl:choose>
                                            <xsl:when test="not(//*[@DEF='HAnimSiteViewpointLineColorRGBA']) and (position() = 1) and (count(preceding::HAnimSite/Viewpoint) = 0)"> <!-- and ((local-name(..)='HAnimHumanoid') or (local-name(../../../..)='HAnimHumanoid'))  -->
                                                <!-- use transparency to indicate parent/child of line segment -->
                                                <ColorRGBA DEF='HAnimSiteViewpointLineColorRGBA' color='{$siteViewpointColor} 1, {$siteViewpointColor} 0'/>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <ColorRGBA USE='HAnimSiteViewpointLineColorRGBA'/>  
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </LineSet>
                                </Shape>
                                <!-- TODO need to account for Viewpoint position, direction -->
                            </xsl:for-each>
                        </xsl:if>
                        
                        <xsl:apply-templates select="*"/>
                    </xsl:when>
                    <!--
                    <xsl:when test="(local-name(..)='HAnimHumanoid') and (local-name()='HAnimSite') and (Viewpoint) and not(string-length(@USE) > 0)">
                        
                    </xsl:when>
                    -->
                    <xsl:when test="(local-name()='HAnimSite') and not(string-length(@USE) > 0) and (($HAnimSkeletonIllustrate='true') or ($HAnimSiteIllustrate='true'))">
                        <xsl:apply-templates select="comment()"/>
                        <xsl:comment> HAnimSite visualization shape </xsl:comment>
                        <!-- tooltip for HAnimSite visualization -->
                        <TouchSensor description='{local-name()} {@name}'/>
                        <xsl:choose>
                            <xsl:when test="not(//*[@DEF='HAnimSiteShape']) and (position() = 1) and (count(preceding::HAnimSite) = 0)">
                                <Shape DEF='HAnimSiteShape'> 
                                    <IndexedFaceSet DEF='DiamondIFS' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1' creaseAngle='0.5' solid='false'>
                                        <Coordinate point='0 0.008 0 -0.008 0 0 0 0 0.008 0.008 0 0 0 0 -0.008 0 -0.008 0'/>
                                    </IndexedFaceSet>
                                    <Appearance> 
                                        <Material diffuseColor='{$siteColor}'/> 
                                    </Appearance> 
                                </Shape>
                            </xsl:when>
                            <xsl:otherwise>
                                <Shape USE='HAnimSiteShape'/>
                            </xsl:otherwise>
                        </xsl:choose>
                        
                        <xsl:apply-templates select="*"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- handle children of current node (including USE node) without special treatment -->
                        <xsl:apply-templates select="* | comment()"/> <!--  | text() -->
                    </xsl:otherwise>
                </xsl:choose>
                
                <!-- indent -->
                <xsl:for-each select="ancestor::*">
                    <xsl:text>  </xsl:text>
                </xsl:for-each>
                <!-- close tag for this element -->
                <xsl:text disable-output-escaping="yes">&lt;/</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>

                <!-- current node and contained content complete -->
            </xsl:when>
            <!-- no longer performed due to schema change: insert name of ProtoInstance if missing for a USE node -->
            <xsl:otherwise>
                <!-- singleton tag, no children, no contained script -->
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="local-name()"/>
                <!-- handle attribute(s) if any -->
                <xsl:call-template name="process-attributes-in-order"/>
                                <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                
                <!-- special case:  top-level HAnimSite/Viewpoint, show Viewpoint and visualization geometry -->
                <xsl:if test="(local-name()='Viewpoint') and (ancestor::HAnimHumanoid) and not(string-length(@USE) > 0) and (($HAnimSkeletonIllustrate='true') or ($HAnimViewpointIllustrate='true'))">
                    <xsl:comment> HAnimSite/Viewpoint visualization shape </xsl:comment>
                    <!-- tooltip for HAnimSite visualization, allow user selection of Viewpoint -->
                    <Anchor description='{local-name(..)} {../@DEF} Viewpoint' url='&quot;#{@DEF}&quot;'>
                        <LOD forceTransitions='true' range='0.04'>
                            <WorldInfo info='&quot;hide diamond when close&quot;'/>
                            <xsl:choose>
                                <xsl:when test="not(//*[@DEF='HAnimSiteViewpointShape']) and (position() = 1) and (count(preceding::HAnimSite/Viewpoint) = 0)">
                                    <!-- this diamond is more prominent (slightly larger and partially transparent) in case it is coincident with other HAnimJoint nodes -->
                                    <Shape DEF='HAnimSiteViewpointShape'> 
                                        <IndexedFaceSet DEF='SiteViewpointDiamondIFS' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1' creaseAngle='0.5'>
                                            <Coordinate point='0 0.010 0 -0.010 0 0 0 0 0.010 0.010 0 0 0 0 -0.010 0 -0.010 0'/>
                                        </IndexedFaceSet>
                                        <Appearance> 
                                            <Material diffuseColor='{$siteViewpointColor}' transparency='0.6'/> 
                                        </Appearance> 
                                    </Shape>
                                </xsl:when>
                                <xsl:otherwise>
                                    <Shape USE='HAnimSiteViewpointShape'/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </LOD>
                    </Anchor>
                </xsl:if>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="process-attributes-in-order">
		<!-- debug
			<xsl:message>
				<xsl:text disable-output-escaping="yes"> * </xsl:text>
				<xsl:value-of select="local-name(.)"/>
			</xsl:message>
		-->
        <!-- this template is shared among X3dToXhtml.xslt and X3dTidy.xslt -->
        <xsl:choose>
            <xsl:when test="(string-length(@USE) > 0)">
                <!-- no other attributes allowed with USE except containerField; show DEF to propagate error if there -->
                <xsl:apply-templates select="@DEF"/>
                <xsl:apply-templates select="@USE"/>
                <xsl:apply-templates select="@containerField"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='USE') and (local-name()!='containerField')]" />
                <!-- TODO: X3D specification clarification to require this field for ProtoInstance
                <xsl:if test="(local-name()='ProtoInstance')">
                    <xsl:apply-templates select="@name"/>
                </xsl:if> -->
                <xsl:if test="(string-length(@DEF) > 0)">
                    <xsl:message>
                        <xsl:text>*** error: found both DEF and USE together: </xsl:text>
                        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> DEF=</xsl:text>
                        <xsl:value-of select="@DEF"/>
                        <xsl:text> USE=</xsl:text>
                        <xsl:value-of select="@USE"/>
                        <xsl:if test="(string-length(@containerField) > 0)">
                            <xsl:text> containerField=</xsl:text>
                            <xsl:value-of select="@containerField"/>
                        </xsl:if>
                        <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                        <xsl:text disable-output-escaping="yes">, ignoring other attributes</xsl:text>
                    </xsl:message>
                </xsl:if>
            </xsl:when>
            <xsl:when test="(local-name()='X3D')">
                <xsl:apply-templates select="@profile" />
                <xsl:apply-templates select="@version" />
                <xsl:apply-templates select="@*[(local-name()!='profile') and (local-name()!='version')]" />
                <!-- handle namespace attributes -->
                <!-- xsl:apply-templates select="@xsd:noNamespaceSchemaLocation" />
                <xsl:apply-templates select="@noNamespaceSchemaLocation" />-->
            </xsl:when>
            <!-- handle specially ordered cases next -->
            <!-- stick with canonical form to support version-control diffing-->
            <xsl:when test="local-name()='meta'">
                <xsl:apply-templates select="@content" />
                <xsl:apply-templates select="@name" />
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='content')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='ROUTE'">
                <xsl:apply-templates select="@fromField"/>
                <xsl:apply-templates select="@fromNode"/>
                <xsl:apply-templates select="@toField"/>
                <xsl:apply-templates select="@toNode"/>
            </xsl:when>
            <xsl:when test="local-name()='ElevationGrid' or local-name()='GeoElevationGrid'">
                <xsl:apply-templates select="@DEF | @containerField "/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and
                                                (local-name()!='height') and (local-name()!='colorIndex')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@colorIndex"/>
                <xsl:apply-templates select="@height"/>
            </xsl:when>
            <xsl:when test="local-name()='IndexedFaceSet' or local-name()='IndexedLineSet'">
                <xsl:apply-templates select="@DEF | @containerField "/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and
                                                not(contains(local-name(), 'Index'))]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[contains(local-name(), 'Index')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <!-- X3dTidy checks to insert additional attributes go here -->
            <!-- Material for line geometry: copy diffuseColor value to emissiveColor if default (black) or missing -->
            <xsl:when test="(local-name(.)='Material') and ((../../PointSet) or (../../LineSet) or (../../IndexedLineSet) or (../../Arc2D) or (../../ArcClose2D) or (../../Circle2D))
                            and not(../../*/Color) and not(../../*/ColorRGBA) and not(IS/connect[@nodeField='emissiveColor'])">
                <xsl:apply-templates select="@DEF | @containerField "/>
                <xsl:choose>
                    <xsl:when test="($replaceBlackEmissiveColor = 'true') and (string-length(@diffuseColor) > 0) and 
                                    (not(@emissiveColor) or (string-length(@emissiveColor) = 0) or (@emissiveColor='0 0 0')) and
                                    (not(@diffuseColor='0 0 0') and not(@diffuseColor='0.0 0.0 0.0')) and
                                    (not(//meta[contains(@name,'Tidy')][contains(@content,'replaceBlackEmissiveColor=false')]))">
                        <xsl:if test="not(@diffuseColor='0.8 0.8 0.8') and not(@diffuseColor='.8 .8 .8')">
                            <xsl:text> diffuseColor='</xsl:text>
                            <xsl:value-of select="@diffuseColor"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> emissiveColor='</xsl:text>
                        <xsl:value-of select="@diffuseColor"/>
                        <xsl:text>'</xsl:text>
                        <xsl:apply-templates select="@*[not(local-name()='DEF') and not(local-name()='containerField') and not(local-name()='diffuseColor') and not(local-name()='emissiveColor')]">
                            <xsl:sort select="." order="ascending" data-type="text"/>
                        </xsl:apply-templates>
                        <xsl:message>
                            <xsl:text>*** fix emissiveColor for </xsl:text>
                            <xsl:choose>
                                <xsl:when test="(../../PointSet)">
                                    <xsl:text>point</xsl:text>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text>line</xsl:text>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:text> geometry: assigned emissiveColor='</xsl:text>
                            <xsl:value-of select="@diffuseColor"/>
                            <xsl:text>' to match diffuseColor value</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:apply-templates select="@*[not(local-name()='DEF') and not(local-name()='containerField')]">
                            <xsl:sort select="." order="ascending" data-type="text"/>
                        </xsl:apply-templates>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:when>
            <xsl:when test="local-name()='IMPORT'">
                <xsl:apply-templates select="@importedDEF"/>
                <xsl:apply-templates select="@inlineDEF"/>
                <xsl:apply-templates select="@AS"/>
            </xsl:when>
            <xsl:when test="local-name()='EXPORT'">
                <xsl:apply-templates select="@localDEF"/>
                <xsl:apply-templates select="@AS"/>
            </xsl:when>
            <xsl:when test="contains(local-name(),'Proto')">
                <xsl:apply-templates select="@appinfo"/>
                <xsl:apply-templates select="@DEF"/>
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='appinfo') and (local-name()!='name')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='field' or local-name()='fieldValue'">
                <xsl:apply-templates select="@accessType"/>
                <xsl:apply-templates select="@appinfo"/>
                <xsl:apply-templates select="@documentation"/>
                <xsl:apply-templates select="@name"/>
                <xsl:apply-templates select="@type"/>
                <xsl:apply-templates select="@value"/>
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='type') and (local-name()!='value') and (local-name()!='accessType') and (local-name()!='appinfo') and (local-name()!='documentation')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="contains(local-name(),'connect')">
                <!-- IS/connect -->
                <xsl:apply-templates select="@nodeField"/>
                <xsl:apply-templates select="@protoField"/>
            </xsl:when>
            <!-- otherwise not a special case, process DEF first and urls/containerField last -->
            <xsl:otherwise>
                <xsl:apply-templates select="@DEF"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and not(contains(local-name(), 'url') or contains(local-name(), 'Url'))]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[contains(local-name(), 'url') or contains(local-name(), 'Url')]">
                    <xsl:sort select="." order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@containerField"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template match="@url | @backUrl | @frontUrl | @leftUrl | @rightUrl | @topUrl | @bottomUrl " >
        <xsl:variable name="result">
            <xsl:variable name="containsQuote" select="contains(.,'&quot;')"/>
            <xsl:variable name="quoteCount"    select="string-length(.) - string-length(translate(., '&quot;', ''))"/>
            <!-- debug
            <xsl:message>
                <xsl:text>@</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> $performUrlModifications=</xsl:text>
                <xsl:value-of select="$performUrlModifications"/>
                <xsl:text>, $containsQuote=</xsl:text>
                <xsl:value-of select="$containsQuote"/>
                <xsl:text>, $quoteCount=</xsl:text>
                <xsl:value-of select="$quoteCount"/>
            </xsl:message>
            -->
            <xsl:variable name="isX3D" select="contains(.,'.x3d')  or contains(.,'.wrl') or contains(.,'.x3dv') or contains(.,'.x3db') or contains(.,'.json') or contains(.,'.x3de') or
                                               contains(.,'.x3dz') or contains(.,'.wrz') or contains(.,'.x3d.gz') or contains(.,'.wrl.gz')"/>
            <xsl:variable name="basepathname">
                <xsl:choose>
                    <xsl:when test="not($isX3D)">
                        <xsl:value-of select="translate(.,'&quot;','')"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:call-template name="find-pathname-without-extension-if-x3d">
                            <xsl:with-param name="pathname" select="translate(.,'&quot;','')"/>
                        </xsl:call-template>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <!-- debug
            <xsl:message>
                <xsl:text>$basepathname=</xsl:text>
                <xsl:value-of select="$basepathname"/>
            </xsl:message> -->
            <xsl:variable name="containsSimpleX3dBookmark" select="starts-with(normalize-space(.),'#') or starts-with(normalize-space(.),'&quot;#')"/>
            <xsl:variable name="X3dBookmark">
                <xsl:choose>
                    <xsl:when test="not(contains(.,'#'))">
                        <xsl:text></xsl:text><!-- default value is empty -->
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>#</xsl:text>
                        <xsl:value-of select="substring-after(translate(., '&quot;', ''),'#')"/>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <!-- debug
            <xsl:message>
                <xsl:text>$X3dBookmark=</xsl:text>
                <xsl:value-of select="$X3dBookmark"/>
            </xsl:message> -->
            <!-- X3dTidy fixUrlAdditionHttpAddresses -->
            <xsl:choose>
                <xsl:when test="(string-length(normalize-space(.)) = 0)">
                    <!-- empty string: ignore attribute and return without creating output (thus matching canonical form) -->
                </xsl:when>
                <xsl:when test="(//meta[contains(@name,'Tidy')][contains(@content,'fixUrlAdditionHttpAddresses=false')])">
                    <!-- output without change -->
                </xsl:when>
                <xsl:when test="not($performUrlModifications) or not($fixUrlAdditionHttpAddresses='true') or
                                (string-length($basepathname) = 0) or (string-length($defaultUrlLocation) = 0) or
                                contains(.,'ecmascript:') or contains(.,'javascript:') or contains(.,'vrmlscript:') or
                                contains(.,'http://') or contains(.,'https://') or contains(.,'ftp://') or contains(.,'sftp://') or contains(.,'mailto:')">
                    <!-- this covers several base cases: no change in url -->
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text>
                    <xsl:call-template name="escape-special-characters">
                        <xsl:with-param name="inputString" select="."/>
                    </xsl:call-template>
                    <xsl:text>'</xsl:text>
                </xsl:when>
                <xsl:when test="($quoteCount > 2) and not($containsSimpleX3dBookmark)">
                    <!-- avoid changes when multiple quoted SFString values appear in this MFString url -->
                    <!-- TODO tokenize and iterate? -->
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text>
                    <xsl:call-template name="escape-special-characters">
                        <xsl:with-param name="inputString" select="."/>
                    </xsl:call-template>
                    <xsl:text>'</xsl:text>
                </xsl:when>
                <xsl:when test="$containsSimpleX3dBookmark">
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text>
                    <xsl:if test="not($containsQuote)">
                       <xsl:text>"</xsl:text>
                    </xsl:if>
                    <xsl:call-template name="escape-special-characters">
                        <xsl:with-param name="inputString" select="."/>
                    </xsl:call-template>
                    <xsl:if test="not($containsQuote)">
                        <xsl:text>"</xsl:text>
                    </xsl:if>
                    <xsl:text>'</xsl:text>
                </xsl:when>
                <xsl:when test="($performUrlModifications)">
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text>
                    <!-- similar output blocks found in @url, @* -->
                    <xsl:choose>
                        <!-- TODO test if this case is malformed, then maybe do not touch? -->
                        <xsl:when test='contains(.,"&apos;") and not($containsQuote)'>
                            <xsl:text>" </xsl:text>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputString" select="$basepathname"/>
                            </xsl:call-template>
                            <xsl:text>"</xsl:text>
                        </xsl:when>
                        <!-- image, sound, movie or other non-X3D asset -->
                        <xsl:when test="not(contains(.,'.wrl')) and not(contains(.,'.x3d'))">
                            <xsl:text>"</xsl:text>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputString" select="$basepathname"/>
                            </xsl:call-template>
                            <xsl:text>"</xsl:text>
                            <xsl:if test="not(contains(.,'http://') or contains(.,'https://') or contains(.,'ftp://') or contains(.,'sftp://'))">
                                <xsl:text> "</xsl:text>
                                <xsl:value-of select="$defaultUrlLocation"/>
                                <xsl:value-of select="$basepathname"/>
                                <xsl:text>"</xsl:text>
                            </xsl:if>
                            <xsl:text>'</xsl:text>
                        </xsl:when>
                        <xsl:when test="not($containsQuote)">
                            <xsl:text>'</xsl:text>
                            <xsl:if test="(substring(.,string-length(.)-3,4) = '.wrl') or (contains(.,'.wrl#')) and not(contains(.,'.x3d')) and 
                                          ($prependX3dBeforeWrlAddresses='true') and
                                          (not(//meta[contains(@name,'Tidy')][contains(@content,'prependX3dBeforeWrlAddresses=false')]))">
                                <xsl:text>"</xsl:text>
                                <xsl:value-of select="$basepathname"/>
                                <xsl:text>.x3d</xsl:text>
                                <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                <xsl:text>"</xsl:text>
                                <xsl:if test="($fixUrlAdditionHttpAddresses = 'true') and (string-length($defaultUrlLocation) > 0) and not(contains(.,':/'))">
                                    <!-- append online address -->
                                    <xsl:text> "</xsl:text>
                                    <xsl:value-of select="$defaultUrlLocation"/>
                                    <xsl:value-of select="$basepathname"/>
                                    <xsl:text>.x3d</xsl:text>
                                    <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                    <xsl:text>" </xsl:text>
                                </xsl:if>
                            </xsl:if>
                            <xsl:text>"</xsl:text>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputString" select="$basepathname"/>
                            </xsl:call-template>
                            <xsl:if test="$isX3D">
                                <xsl:choose>
                                    <xsl:when test="contains(.,'.x3d')">
                                        <xsl:text>.x3d</xsl:text>
                                    </xsl:when>
                                    <xsl:when test="contains(.,'.wrl')">
                                        <xsl:text>.wrl</xsl:text>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                            </xsl:if>
                            <xsl:text>"</xsl:text>
                            <xsl:if test="($fixUrlAdditionHttpAddresses = 'true') and (string-length($defaultUrlLocation) > 0) and not(contains(.,':/'))">
                                <!-- append online address -->
                                <xsl:text> "</xsl:text>
                                <xsl:value-of select="$defaultUrlLocation"/>
                                <xsl:call-template name="escape-special-characters">
                                    <xsl:with-param name="inputString" select="$basepathname"/>
                                </xsl:call-template>
                                <xsl:if test="$isX3D">
                                    <xsl:choose>
                                        <xsl:when test="contains(.,'.x3d')">
                                            <xsl:text>.x3d</xsl:text>
                                        </xsl:when>
                                        <xsl:when test="contains(.,'.wrl')">
                                            <xsl:text>.wrl</xsl:text>
                                        </xsl:when>
                                    </xsl:choose>
                                    <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                </xsl:if>
                                <xsl:text>"</xsl:text>
                            </xsl:if>
                            <xsl:if test="(substring(.,string-length(.)-3,4) = '.x3d') or (contains(.,'.x3d#')) and not(contains(.,'.wrl')) and 
                                          ($appendWrlAfterX3dAddresses='true') and
                                          (not(//meta[contains(@name,'Tidy')][contains(@content,'appendWrlAfterX3dAddresses=false')]))">
                                <xsl:text> "</xsl:text>
                                <xsl:value-of select="$basepathname"/>
                                <xsl:text>.wrl</xsl:text>
                                <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                <xsl:text>"</xsl:text>
                                <xsl:if test="($fixUrlAdditionHttpAddresses = 'true') and (string-length($defaultUrlLocation) > 0) and not(contains(.,':/'))">
                                    <!-- append online address -->
                                    <xsl:text> "</xsl:text>
                                    <xsl:value-of select="$defaultUrlLocation"/>
                                    <xsl:value-of select="$basepathname"/>
                                    <xsl:text>.wrl</xsl:text>
                                    <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                    <xsl:text>"</xsl:text>
                                </xsl:if>
                            </xsl:if>
                            <xsl:text>'</xsl:text>
                        </xsl:when>
                        <xsl:when test="$containsQuote and not(contains(.,':/'))">
                            <xsl:text>'</xsl:text>
                            <xsl:if test="((substring(translate(., '&quot;', ''),string-length(translate(., '&quot;', ''))-3,4) = '.wrl') or (contains(.,'.wrl#'))) and not(contains(.,'.x3d')) and 
                                          ($prependX3dBeforeWrlAddresses='true') and
                                          (not(//meta[contains(@name,'Tidy')][contains(@content,'prependX3dBeforeWrlAddresses=false')]))">
                                <xsl:text>"</xsl:text>
                                <xsl:value-of select="$basepathname"/>
                                <xsl:text>.x3d</xsl:text>
                                <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                <xsl:text>"</xsl:text>
                                <xsl:if test="($fixUrlAdditionHttpAddresses = 'true') and (string-length($defaultUrlLocation) > 0) and not(contains(.,':/'))">
                                    <!-- append online address -->
                                    <xsl:text> "</xsl:text>
                                    <xsl:value-of select="$defaultUrlLocation"/>
                                    <xsl:value-of select="$basepathname"/>
                                    <xsl:text>.x3d</xsl:text>
                                    <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                    <xsl:text>" </xsl:text>
                                </xsl:if>
                            </xsl:if>
                            <xsl:text>"</xsl:text>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputString" select="$basepathname"/>
                            </xsl:call-template>
                            <xsl:if test="$isX3D">
                                <xsl:choose>
                                    <xsl:when test="contains(.,'.x3d')">
                                        <xsl:text>.x3d</xsl:text>
                                    </xsl:when>
                                    <xsl:when test="contains(.,'.wrl')">
                                        <xsl:text>.wrl</xsl:text>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                            </xsl:if>
                            <xsl:text>"</xsl:text>
                            <xsl:if test="($fixUrlAdditionHttpAddresses = 'true') and (string-length($defaultUrlLocation) > 0) and not(contains(.,':/'))">
                                <xsl:text> "</xsl:text>
                                <xsl:value-of select="$defaultUrlLocation"/>
                                    <!-- assumes a well-quoted string, omit leading quote substring(normalize-space(.),2)-->
                               <!--  <xsl:call-template name="escape-special-characters">
                                    <xsl:with-param name="inputString" select="translate(.,'&quot;','')"/>
                                </xsl:call-template>
                                no close quote needed since provided url has them -->
                                <xsl:value-of select="translate($basepathname,'&quot;','')"/>
                                <xsl:if test="$isX3D">
                                    <xsl:choose>
                                        <xsl:when test="contains(.,'.x3d')">
                                            <xsl:text>.x3d</xsl:text>
                                        </xsl:when>
                                        <xsl:when test="contains(.,'.wrl')">
                                            <xsl:text>.wrl</xsl:text>
                                        </xsl:when>
                                    </xsl:choose>
                                    <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                </xsl:if>
                                <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                <xsl:text>"</xsl:text>
                            </xsl:if>
                            <xsl:if test="(substring(.,string-length(.)-4,4) = '.x3d') or (contains(.,'.x3d#')) and 
                                          ($appendWrlAfterX3dAddresses='true') and
                                          (not(//meta[contains(@name,'Tidy')][contains(@content,'appendWrlAfterX3dAddresses=false')]))">
                                <xsl:text> "</xsl:text>
                                <xsl:value-of select="$basepathname"/>
                                <xsl:text>.wrl</xsl:text>
                                <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                <xsl:text>"</xsl:text>
                                <xsl:if test="($fixUrlAdditionHttpAddresses = 'true') and (string-length($defaultUrlLocation) > 0) and not(contains(.,':/'))">
                                    <!-- append online address -->
                                    <xsl:text> "</xsl:text>
                                    <xsl:value-of select="$defaultUrlLocation"/>
                                    <xsl:value-of select="$basepathname"/>
                                    <xsl:text>.wrl</xsl:text>
                                    <xsl:value-of select="$X3dBookmark"/><!-- if any -->
                                    <xsl:text>"</xsl:text>
                                </xsl:if>
                            </xsl:if>
                            <xsl:text>'</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>'</xsl:text>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputString" select="."/>
                            </xsl:call-template>
                            <xsl:text>'</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:otherwise>
                    <!-- output without change -->
                </xsl:otherwise>
            </xsl:choose>
            <!-- conversion (if any) complete, saved as $result -->
        </xsl:variable>
        <!-- in general, do NOT normalize attribute result since it contains significant leading whitespace -->
        <!-- report change, if any (must strip url='' from result) -->
        <xsl:variable name="originalConstruct">
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text>='</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>'</xsl:text>
        </xsl:variable>
        <xsl:if test="(string-length(.) > 0) and (. != substring($result,7,string-length($result)-7)) and not($result = $originalConstruct)">
            <xsl:message>
                <xsl:text disable-output-escaping="yes">  &lt;</xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> DEF='</xsl:text>
                <xsl:value-of select="../@DEF"/>
                <xsl:text disable-output-escaping="yes">'&gt;</xsl:text>
            </xsl:message>
            <xsl:message>
                <xsl:text>    original</xsl:text>
                <xsl:value-of select="$originalConstruct"/>
            </xsl:message>
            <!-- debug
            <xsl:message>
                <xsl:text> </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>'</xsl:text>
            </xsl:message>
            <xsl:message>
                <xsl:text>substring($result,7,string-length($result)-7))=</xsl:text>
                <xsl:value-of select="substring($result,7,string-length($result)-7)"/>
            </xsl:message> -->
            <xsl:message>
                <xsl:text>*** revision </xsl:text>
                <xsl:value-of select="$result"/>
            </xsl:message>
        </xsl:if>
        <xsl:value-of select="$result"/>
    </xsl:template>

    <xsl:template match="@*" >
		<!-- debug
			<xsl:message>
				<xsl:text disable-output-escaping="yes"> </xsl:text>
				<xsl:value-of select="local-name(.)"/>
				<xsl:text>='</xsl:text>
				<xsl:value-of select="."/>
				<xsl:text disable-output-escaping="yes">'</xsl:text>
			</xsl:message>
		-->
		<xsl:choose>
			<xsl:when test="(local-name(..)='ProtoInstance') and (local-name(.)='name') and (string-length(../@USE) > 0)">
				<!-- no attribute output -->
				<xsl:message>
					<xsl:text>*** revision: remove superfluous field name='</xsl:text>
					<xsl:value-of select="."/>
					<xsl:text>' from &lt;ProtoInstance USE='</xsl:text>
					<xsl:value-of select="../@USE"/>
					<xsl:text>' containerField='</xsl:text>
					<xsl:value-of select="../@containerField"/>
					<xsl:text>'/&gt;</xsl:text>
				</xsl:message>
			</xsl:when>
			<xsl:otherwise>
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
                      select="not((local-name(..)='FloatVertexAttribute') and
                      ((local-name()='numComponents' and (.='4')))) and
                      not((local-name(..)='ShaderPart' or local-name(..)='ShaderProgram') and
                      ((local-name()='type' and (.='VERTEX'))))" />
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
        <!-- provide attribute output only if it is not a default value, or if scene has a digital signature -->
        <!-- note that if digital signature is present, all attributes are included (including default values) and
                       order of attributes may change, but that should be OK according to Post Schema Validation Infoset (PSVI) -->
        <xsl:if test="
                (count(//ds:Signature) > 0) or
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
                .)" >
            <!-- attribute of interest found, show it -->
            <xsl:text> </xsl:text>
			
			<xsl:variable name="attributeName"       select="local-name()"/>
		    <xsl:variable name="parentElementName"   select="local-name(..)"/>
            <xsl:variable name="fieldValueName"    select="../@name"/>
            <xsl:variable name="protoInstanceName" select="(../../@name)"/>
            <xsl:variable name="fieldValueType1"   select="      //ProtoDeclare[@name = $protoInstanceName][1]/ProtoInterface/field[@name=$fieldValueName][1]/@type"/>
            <xsl:variable name="fieldValueType2"   select="//ExternProtoDeclare[@name = $protoInstanceName][1]               /field[@name=$fieldValueName][1]/@type"/>
            <!-- only one of these should be available -->
            <xsl:variable name="fieldValueType"    select="concat($fieldValueType1,$fieldValueType2)"/>
			<xsl:variable name="isMFString"
					    select="
					((local-name()='value') and ((../@type='MFString') or (contains(local-name(../..),'Proto') and ($fieldValueType='MFString')))) or
					 (local-name()='url') or ends-with(local-name(),'Url') or
					 (  ../@name = 'url') or ends-with(  ../@name,  'Url') or (local-name()='geoSystem') or
					($attributeName='forceOutput') or
					($attributeName='objectType')  or
					($parentElementName='Anchor' and $attributeName='parameter') or
					($parentElementName='CollisionCollection' and $attributeName='appliedParameters') or
					($parentElementName='Contact' and $attributeName='appliedParameters') or
					(contains($parentElementName,'FontStyle') and ($attributeName='family' or $attributeName='justify')) or
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
					($parentElementName='WorldInfo' and $attributeName='info')"/>
            <xsl:if test="(local-name(..)='X3D' and local-name()='noNamespaceSchemaLocation')">
                <!-- xmlns:xsd attribute typically not seen, so insert it -->
                <xsl:text>xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance'</xsl:text>
                <!-- insert namespace prefix -->
                <xsl:text> xsd:</xsl:text>
            </xsl:if>
            <!-- fix attribute name if incorrect -->
            <xsl:choose>
                <xsl:when test="(local-name() = 'mustOutput')">
                    <xsl:text>forceOutput</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>: change attribute name mustOutput to forceOutput</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:otherwise>
                    <!-- output attribute: name='value' -->
                    <xsl:value-of select="local-name()"/>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>=</xsl:text>
            <!-- attribute value start -->
            <xsl:text>'</xsl:text>
            <!-- keep output form simple, consistent, canonical -->
            <!-- *** apply attribute value overrides, if any *** -->
            <xsl:choose>
                <xsl:when test="(local-name(..)='X3D') and (local-name()='version')">
                    <xsl:value-of select="$x3dVersion"/>
                </xsl:when>
                <xsl:when test="(local-name(..)='X3D') and (local-name()='noNamespaceSchemaLocation')">
                    <xsl:text>http://www.web3d.org/specifications/x3d-</xsl:text>
                    <xsl:value-of select="$x3dVersion"/>
                    <xsl:text>.xsd</xsl:text>
                </xsl:when>
                <!-- fix geoSystem values as appropriate -->
                <xsl:when test="(starts-with(local-name(..),'Geo') or (local-name(..)='EspduTransform') or (local-name(..)='ReceiverPdu') or (local-name(..)='SignalPdu') or (local-name(..)='TransmitterPdu'))
                                and (local-name(.)='geoSystem') and 
                                ($fixGeoSystemMetadata='true') and
                                (not(//meta[contains(@name,'Tidy')][contains(@content,'fixGeoSystemMetadata=false')]))">
                    <xsl:variable name="newGeoSystem">
                        <!-- geoSystem is type MFString so ensure that it is quoted -->
                        <xsl:if test="not(starts-with(.,'&quot;'))">
                            <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                        </xsl:if>
                        <xsl:choose>
                            <!-- GCC may become deprecated, use GC. http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes -->
                            <xsl:when test="contains(.,'GCC')">
                                <xsl:value-of select="substring-before(.,'GCC')"/>
                                <xsl:text>GC</xsl:text>
                                <xsl:value-of select="substring-after (.,'GCC')"/>
                            </xsl:when>
                            <!-- GDC may become deprecated, use GD. http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes -->
                            <xsl:when test="contains(.,'GDC')">
                                <xsl:value-of select="substring-before(.,'GDC')"/>
                                <xsl:text>GD</xsl:text>
                                <xsl:value-of select="substring-after (.,'GDC')"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- no change -->
                                <xsl:value-of select="."/>
                            </xsl:otherwise>
                        </xsl:choose>
						<!-- TODO ensure intermediate values are also quoted -->
                        <xsl:if test="not(substring(., string-length(.)) = '&quot;')"> <!-- ends-with -->
                            <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                        </xsl:if>
                    </xsl:variable>
                    <xsl:value-of select="normalize-space($newGeoSystem)"/>
                    <xsl:if test="not(. = normalize-space($newGeoSystem))">
                        <xsl:message>
                            <xsl:text>*** fixGeoSystemMetadata: change geoSystem='</xsl:text>
                            <xsl:value-of select="."/>
                            <xsl:text>' to geoSystem='</xsl:text>
                            <xsl:value-of select="normalize-space($newGeoSystem)"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                    </xsl:if>
                </xsl:when>
                <!-- fix common misnomers -->
                <xsl:when test="(local-name(..)='meta') and (local-name(.)='name') and 
                                (not($fixMetaNamesMatchDublinCore='true') or
                                 (//meta[contains(@name,'Tidy')][contains(@content,'fixMetaNamesMatchDublinCore=false')]))">
                    <!-- no change -->
                    <xsl:value-of select="local-name()"/>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name(.)='name') and (.='filename' or .='file')">
                    <xsl:text>title</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='title'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name(.)='name') and (.='changed' or .='revised' or .='updated')">
                    <xsl:text>modified</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='modified'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name(.)='name') and (.='url')">
                    <xsl:text>identifier</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='identifier'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name(.)='name') and (.='image')">
                    <xsl:text>Image</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='Image'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($reviseCurrentDate = 'true') and (local-name(..)='meta') and (local-name(.)='content') and (../@name='modified')">
                    <xsl:value-of select="$todaysDate"/>
                    <xsl:message>
                        <xsl:text>*** revision: &lt;meta name='modified' content='</xsl:text>
                        <xsl:value-of select="$todaysDate"/>
                        <xsl:text>'/&gt;</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- fix meta dates  and contains(substring-after(.,'/'),'/')-->
                <xsl:when test="($fixDateFormats='true') and (local-name(..)='meta') and (local-name(.)='content') and 
                                ((../@name='created') or (../@name='translated') or (../@name='modified')) and
                                (not(//meta[contains(@name,'Tidy')][contains(@content,'fixDateFormats=false')])) and
                                not(starts-with(.,'*enter date of '))"> <!-- default values from newScene.x3d -->
                    <xsl:variable name="newDate">
                        <xsl:call-template name="fix-date-format">
                            <xsl:with-param name="value" select="normalize-space(.)"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <xsl:choose>
                        <xsl:when test="not(normalize-space(.) = $newDate)">
                            <!-- provide revised value as output, then report -->
                            <xsl:value-of select="$newDate"/>
                            <xsl:message>
                                <xsl:text>*** fixDateFormats: change meta name='</xsl:text>
                                <xsl:value-of select="../@name"/>
                                <xsl:text>' content='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text>' to content='</xsl:text>
                                <xsl:value-of select="$newDate"/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- original value with normalized whitespace as output -->
                            <xsl:value-of select="normalize-space(.)"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <!-- fix wrapper quotes -->
                <xsl:when test="((local-name(..)='Viewpoint' or contains(local-name(..),'Sensor')) and (local-name(.)='description')) and starts-with(.,'&quot;') and (substring(.,string-length(.)) = '&quot;')">
                    <xsl:call-template name="escape-special-characters">
                        <xsl:with-param name="inputString" select="substring(.,2,(string-length(.)-2))"/>
                    </xsl:call-template>
                    <xsl:message>
                        <xsl:text>*** fixWrapperQuotes: remove extraneous initial/final quote marks from SFString field, now </xsl:text>
                        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name(.)"/>
                        <xsl:text disable-output-escaping="yes">='</xsl:text>
                        <xsl:value-of select="substring(.,2,(string-length(.)-2))"/>
                        <xsl:text disable-output-escaping="yes">'</xsl:text>
                        <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="starts-with(normalize-space(.),'*') and (substring(normalize-space(.), string-length(normalize-space(.))-1) = '*')"> <!-- ends-with -->
                    <xsl:value-of select="."/>
                    <xsl:message>
                        <xsl:text>*** attribute check: found template default, may need to fix </xsl:text>
                        <xsl:text> &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:if test="string-length(../@name) > 0">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="../@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                        <xsl:text>/&gt;</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- fix unquoted MFString -->
                <xsl:when test="$isMFString and not(contains(.,'&quot;'))">
					<xsl:text disable-output-escaping="yes">&quot;</xsl:text>
					<xsl:value-of select="."/>
					<xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                    <xsl:message>
                        <xsl:text>*** attribute check: found unquoted MFString value, fixed it by wrapping quotation marks </xsl:text>
                        <xsl:text> &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:if test="string-length(../@name) > 0">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="../@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
						<xsl:text>='</xsl:text>
						<xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                        <xsl:value-of select="."/>
						<xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                        <xsl:text>'</xsl:text>
                        <xsl:text>/&gt;</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- fix fieldValue quotes for MFString -->
                <xsl:when test="(local-name(..)='fieldValue') and (local-name(.)='value')">
                    <xsl:variable name="protoInstanceName" select="../../@name"/>
                    <xsl:variable name="fieldValueName"    select="../@name"/>
                    <xsl:variable name="fieldType">
                        <xsl:choose>
                            <xsl:when           test="/X3D/Scene//ProtoDeclare      [@name = $protoInstanceName]">
                                <xsl:value-of select="/X3D/Scene//ProtoDeclare      [@name = $protoInstanceName]/ProtoInterface/field[@name = $fieldValueName]/@type"/>
                            </xsl:when>
                            <xsl:when           test="/X3D/Scene//ExternProtoDeclare[@name = $protoInstanceName]">
                                <xsl:value-of select="/X3D/Scene//ExternProtoDeclare[@name = $protoInstanceName]/field[@name = $fieldValueName]/@type"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>matching ProtoDeclare or ExternProtoDeclare declaration not found</xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>Found </xsl:text>
                        <xsl:value-of select="count(/X3D/Scene//ProtoDeclare)"/>
                        <xsl:text> ProtoDeclare statements and </xsl:text>
                        <xsl:value-of select="count(/X3D/Scene//ExternProtoDeclare)"/>
                        <xsl:text> ExternProtoDeclare statements</xsl:text>
                    </xsl:message>
                    <xsl:message>
                        <xsl:text>$protoInstanceName='</xsl:text>
                        <xsl:value-of select="$protoInstanceName"/>
                        <xsl:text>', $fieldValueName='</xsl:text>
                        <xsl:value-of select="$fieldValueName"/>
                        <xsl:text>', $fieldType=</xsl:text>
                        <xsl:value-of select="$fieldType"/>
                        <xsl:text>', value='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                    -->
                    <xsl:choose>
                        <xsl:when test="($fieldType = 'MFString')">
                            <xsl:if test="not(starts-with(normalize-space(.),'&quot;'))">
                                <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                                <xsl:message>
                                    <xsl:text disable-output-escaping="yes">*** fieldValue type checks: wrap &quot;quotation marks&quot; around MFString value, </xsl:text>
                                    <xsl:text disable-output-escaping="yes">&lt;ProtoInstance name='</xsl:text>
                                    <xsl:value-of select="$protoInstanceName"/>
                                    <xsl:text>' </xsl:text>
                                    <xsl:value-of select="$fieldValueName"/>
                                    <xsl:text>='</xsl:text>
                                    <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                                    <xsl:call-template name="escape-special-characters">
                                        <xsl:with-param name="inputString" select="."/>
                                    </xsl:call-template>
                                    <xsl:text>'</xsl:text>
                                    <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                                    <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                                </xsl:message>
                            </xsl:if>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputString" select="."/>
                            </xsl:call-template>
                            <xsl:if test="not(substring(normalize-space(.),string-length(normalize-space(.))) = '&quot;')">
                                <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputString" select="."/>
                            </xsl:call-template>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <!-- fix index values when -1 sentinel is missing follow-on space character -->
                <xsl:when test="((local-name()='index') or ends-with(local-name(),'Index')) and (contains(., '-11') or contains(., '-12') or contains(., '-13') or contains(., '-14') or contains(., '-15') or contains(., '-16') or contains(., '-17') or contains(., '-18') or contains(., '-19') or contains(., '-10'))">
					<xsl:variable name="result">
						<xsl:for-each select="tokenize(., '\s')">
							<xsl:choose>
								<xsl:when test="starts-with(.,'-1')">
									<xsl:text>-1 </xsl:text><!-- insert space -->
									<xsl:value-of select="substring-after(.,'-1')"/>
									<xsl:text> </xsl:text>
								</xsl:when>
								<xsl:otherwise>
									<xsl:value-of select="."/>
									<xsl:text> </xsl:text>
								</xsl:otherwise>
							</xsl:choose>
						</xsl:for-each>
					</xsl:variable>
					<xsl:value-of select="normalize-space($result)"/>
					<xsl:message>
						<xsl:text>*** index-array sentinel checks: insert missing space character after -1 value(s), </xsl:text>
                        <xsl:text> &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:if test="string-length(../@name) > 0">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="../@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="string-length(../@DEF) > 0">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="../@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
						<xsl:text>='</xsl:text>
                        <xsl:value-of select="normalize-space($result)"/>
                        <xsl:text>'</xsl:text>
                        <xsl:text>/&gt;</xsl:text>
					</xsl:message>
				</xsl:when>
                <xsl:when test="(local-name(..)='TextureProperties') and contains(../@minificationFilter,'MIPMAP') and (local-name(.)='generateMipMaps') and not(.='true')">
                    <xsl:text>true</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixTexturePropertiesGenerateMipMaps: change generateMipMaps='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to generateMipMaps='true' in order to support @minificationFilter='</xsl:text>
                        <xsl:value-of select="../@minificationFilter"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
					<!-- TODO how to handle case where generateMipMaps is not defined and has devalue value of false? -->
                </xsl:when>
                <!-- new fixes: other new attribute-value rules go here -->
                <!-- TODO add other MFString attributes, handle fixMFStringQuotes setting accordingly -->
                <xsl:otherwise>
                    <xsl:call-template name="escape-special-characters">
                        <xsl:with-param name="inputString" select="."/>
                    </xsl:call-template>
                </xsl:otherwise>
            </xsl:choose>
            <!-- attribute value complete -->
            <xsl:text>'</xsl:text>
            <!-- similar output blocks found in @url, @*
            <xsl:variable name="containsQuote" select="contains(.,'&quot;')"/>
            <xsl:choose>
                <xsl:when test='contains(.,"&apos;") and not($containsQuote)'>
                    <xsl:text>"</xsl:text>
                    <xsl:call-template name="escape-lessthan-characters">
                        <xsl:with-param name="inputString" select="."/>
                    </xsl:call-template>
                    <xsl:text>"</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>'</xsl:text>
                    <xsl:call-template name="escape-lessthan-characters">
                        <xsl:with-param name="inputString" select="."/>
                    </xsl:call-template>
                    <xsl:text>'</xsl:text>
                </xsl:otherwise>
            </xsl:choose> -->
        </xsl:if>
        <!-- end if filtering of default attribute values -->
		</xsl:otherwise>
		</xsl:choose>
    </xsl:template>

    <xsl:template name="escape-special-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:call-template name="escape-solitary-backslash">
            <xsl:with-param name="inputString">
                <xsl:call-template name="escape-apostrophe-characters">
                    <xsl:with-param name="inputString">
                        <xsl:call-template name="escape-lessthan-characters">
                            <xsl:with-param name="inputString">
                                <!-- keep escape-ampersand-characters innermost so it doesn't get overzealous about escaped apostrophes or less-than characters -->
                                <xsl:call-template name="escape-ampersand-characters">
                                        <xsl:with-param name="inputString" select="$inputString"/>
                                </xsl:call-template>
                            </xsl:with-param>
                        </xsl:call-template>
                    </xsl:with-param>
                </xsl:call-template>
            </xsl:with-param>
        </xsl:call-template>
    </xsl:template>

    <xsl:template name="escape-lessthan-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:message><xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/></xsl:message> -->
        <xsl:choose>
            <!-- handle preceding &quot; marks first
            <xsl:when test="contains($inputString,'&quot;') and not(contains(substring-before($inputString,'&quot;'),'&#60;'))">
                <xsl:value-of select="substring-before($inputString,'&quot;')"/>
                <xsl:text disable-output-escaping="no">&quot;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters">
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&quot;')"/>
                </xsl:call-template>
            </xsl:when> -->
            <!-- &#60; is &lt; -->
            <xsl:when test="contains($inputString,'&#60;')">
                <xsl:value-of select="substring-before($inputString,'&#60;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="no">&amp;</xsl:text>
                <xsl:text disable-output-escaping="no">lt;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&#60;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-ampersand-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:choose>
            <!-- probably do not have to worry about solo cases with stray ampersands, because they are badly formed XML and will not parse: 
                 and (starts-with(substring-after($inputString,'&amp;'),' ') or substring-after($inputString,''))-->
            <!-- first pass through escaped ampersand character, but only if other ampersand codes do not precede it -->
            <xsl:when test="contains($inputString,'&amp;amp;') and not(contains(substring-before($inputString,'&amp;amp;'),'&amp;'))">
                <xsl:value-of select="substring-before($inputString,'&amp;amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">amp;</xsl:text>
               <!-- <xsl:text disable-output-escaping="yes">amp;</xsl:text>-->
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;#38;') and not(contains(substring-before($inputString,'&amp;#38;'),'&amp;'))">
                <xsl:value-of select="substring-before($inputString,'&amp;amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">#38;</xsl:text>
               <!-- <xsl:text disable-output-escaping="yes">amp;</xsl:text>-->
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;')">
                <xsl:value-of select="substring-before($inputString,'&amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">amp;</xsl:text> 
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'&amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-apostrophe-characters">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:message><xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/></xsl:message> -->
        <!-- debug: 
        <xsl:variable name="apostrophe"><xsl:text disable-output-escaping="yes">'</xsl:text></xsl:variable>
             <xsl:message>
                    <xsl:text>$apostrophe</xsl:text>
                    <xsl:text>=</xsl:text>
                    <xsl:value-of select="$apostrophe" disable-output-escaping="yes"/>
             </xsl:message> -->
        <xsl:choose>
            <xsl:when test='contains($inputString,"&apos;")'>
                <xsl:value-of select='substring-before($inputString,"&apos;")' disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">apos;</xsl:text>
                <xsl:call-template name="escape-apostrophe-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select='substring-after($inputString,"&apos;")'/>
                </xsl:call-template>
            </xsl:when><!--
            <xsl:when test='contains($inputString,$apostrophe)'>
                <xsl:message>
                    <xsl:text>...found  </xsl:text>
                    <xsl:value-of select="$apostrophe" disable-output-escaping="no"/>
                    <xsl:text>$apostrophe</xsl:text>
                    <xsl:value-of select="$apostrophe" disable-output-escaping="no"/>
                    <xsl:text>: </xsl:text>
                    <xsl:value-of select="$inputString"/>
                </xsl:message>
                <xsl:value-of select='substring-before($inputString,$apostrophe)'/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="no" >apos;</xsl:text>
                <xsl:call-template name="escape-apostrophe-characters">
                    <xsl:with-param name="inputString" select='substring-after($inputString,$apostrophe)'/>
                </xsl:call-template>
            </xsl:when>-->
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-solitary-backslash">
        <xsl:param name="inputString"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- \ = &#92; -->
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:choose>
            <xsl:when test="contains($inputString,'\') and ((normalize-space($inputString)='&#92;') or starts-with(normalize-space($inputString),'\ '))">
                <xsl:value-of select="substring-before($inputString,'\')"/>
                <xsl:text disable-output-escaping="yes">\</xsl:text>
                <xsl:call-template name="escape-solitary-backslash"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'\')"/>
                </xsl:call-template>
            </xsl:when>
            <!-- TODO confirm... handle backslash \ with escaping \\ -->
            <xsl:when test="contains($inputString,'\\') and ((normalize-space($inputString)='&#92;') or starts-with(normalize-space($inputString),'\\ '))">
                <xsl:value-of select="substring-before($inputString,'\\')"/>
                <xsl:text disable-output-escaping="yes">\</xsl:text>
                <xsl:call-template name="escape-solitary-backslash"> <!-- tail recursion -->
                    <xsl:with-param name="inputString" select="substring-after($inputString,'\\')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <!-- ****** XML processing-instruction - TODO experimental.  what about DTDs? ******
    <xsl:template match="processing-instruction()">
       <xsl:copy> 
           <xsl:apply-templates select="@*"/> 
           <xsl:apply-templates/> 
       </xsl:copy>
    </xsl:template> -->

    <!-- ****** XML node - TODO experimental.  what about DTDs? ******
    <xsl:template match="node()">
       <xsl:copy> 
           <xsl:apply-templates select="@*"/> 
           <xsl:apply-templates/> 
       </xsl:copy>
    </xsl:template> -->

    <!-- ****** XML text ****** -->
    <!-- none expected, this is designed to catch errors -->
    <xsl:template match="text()[not(local-name(..)='Script')]">
      <!-- XML text is likely from digital signature nodes - try to swallow blank lines between tags and pass through other text here -->
      <xsl:if test="not(normalize-space(.) = '') and not(normalize-space(.) = ' ')">
            <xsl:value-of select="." disable-output-escaping="yes"/>
            <xsl:message>
                <xsl:text>unexpected text found</xsl:text>
                <xsl:value-of select="." disable-output-escaping="yes"/>
            </xsl:message>
      </xsl:if>
    </xsl:template>

    <!-- ****** XML comments ****** -->
    <xsl:template match="comment()">
        <!-- indent -->
        <xsl:for-each select="ancestor::*">
            <xsl:text>  </xsl:text>
        </xsl:for-each>
        <xsl:text disable-output-escaping="yes">&lt;!-- </xsl:text>
        <xsl:value-of select="normalize-space(.)" disable-output-escaping="yes"/>
        <xsl:text disable-output-escaping="yes"> --&gt;</xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:template>

    <!-- ****** XML processing-instruction ****** -->
    <xsl:template match="processing-instruction()">
        <span title="XML processing instruction, hidden as a comment"><code><xsl:text>&lt;-- </xsl:text></code><xsl:value-of select="."/><code><xsl:text> --&gt;&#10;</xsl:text></code></span>
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

    <!-- ****** find-pathname-without-extension-if-x3d:  callable template (recursive function) ****** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="find-pathname-without-extension-if-x3d">
        <xsl:param name="pathname"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <!-- debug
        <xsl:message>
            <xsl:text>$pathname=</xsl:text>
            <xsl:value-of select="$pathname"/>
        </xsl:message> -->
        <xsl:variable name="basename">
            <xsl:choose>
                <xsl:when test="contains(normalize-space($pathname),'ecmascript:')">
                    <xsl:text></xsl:text>
                </xsl:when>
                <xsl:when test="starts-with(normalize-space($pathname),'./') or starts-with(normalize-space($pathname),'&quot;./')">
                    <xsl:value-of select="substring-after($pathname,'./')"/>
                </xsl:when>
                <xsl:when test="starts-with(normalize-space($pathname),'.\\') or starts-with(normalize-space($pathname),'&quot;.\\')">
                    <xsl:value-of select="substring-after($pathname,'.\\')"/>
                </xsl:when>
                <xsl:when test="starts-with(normalize-space($pathname),'.\')  or starts-with(normalize-space($pathname),'&quot;.\')">
                    <xsl:value-of select="substring-after($pathname,'.\')"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$pathname"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="isX3D" select="contains($basename,'.wrl') or contains($basename,'.x3d') or contains($basename,'.x3dv') or contains($basename,'.x3db')"/>
        <!-- debug
        <xsl:message>
            <xsl:text>$basename=</xsl:text>
            <xsl:value-of select="$basename"/>
        </xsl:message> -->
        <xsl:choose>
            <xsl:when test="(string-length($basename) = 0)">
                <!-- return blank -->
                <xsl:text></xsl:text>
            </xsl:when>
            <xsl:when test="not(contains($basename,'.')) or 
                            (starts-with($basename,'../')    and not(contains(substring-after($basename,'../'),   '.'))) or 
                            (starts-with($basename,'../../') and not(contains(substring-after($basename,'../../'),'.')))">
                <!-- found, return value -->
                <xsl:value-of select="$basename"/>
            </xsl:when>
            <xsl:when test="(substring($basename,string-length($basename),1) = '.')">
                <!-- found, return value -->
                <xsl:value-of select="substring($basename,1,string-length($basename)-1)"/>
            </xsl:when>
            <xsl:otherwise>
                <!-- recurse -->
                <xsl:call-template name="find-pathname-without-extension-if-x3d">
                    <xsl:with-param name="pathname" select="substring($basename,1,string-length($basename)-1)"/>
                </xsl:call-template>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- ****** find-position-last-character-before-whitespace:  callable template (recursive function) ****** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="find-position-last-character-before-whitespace">
        <xsl:param name="string"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <xsl:variable name="lastCharacter" select="substring($string,string-length($string),3)"/>
        <!-- debug
        <xsl:message>
            <xsl:text>$lastCharacter($string)='</xsl:text>
            <xsl:value-of select="$lastCharacter"/>
            <xsl:text>'</xsl:text>
        </xsl:message> -->
        <xsl:choose>
            <xsl:when test="string-length(normalize-space($string)) = 0">
                <!-- return value -->
                <xsl:text>0</xsl:text>
            </xsl:when>
            <xsl:when test="string-length(normalize-space($lastCharacter)) > 0">
                <!-- return value -->
                <xsl:value-of select="string-length($string)"/>
            </xsl:when>
            <xsl:otherwise>
                <!-- recurse -->
                <xsl:call-template name="find-position-last-character-before-whitespace">
                    <xsl:with-param name="string" select="substring($string,1,string-length($string)-1)"/>
                </xsl:call-template>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <!-- ****** URL-ize-MFString-elements:  callable template (recursive function) ****** -->
    <!-- follows examples in Michael Kay's _XSLT_, first edition, pp. 551-554 -->
    <xsl:template name="URL-ize-MFString-elements">
        <xsl:param name="list"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
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
                                                   and not(contains($nextURL, 'ftp://')) and not(contains($nextURL,'./')) and not(contains($nextURL,'.\'))">
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

    <!-- change dates of form 1/1/90 to 1 January 1990 -->
    <xsl:template name="fix-date-format">
        <xsl:param name="value"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
                        
        <xsl:variable name="month" select="substring-before($value,'/')"/>
        <xsl:variable name="day" select="substring-before(substring-after($value,'/'),'/')"/>
        <xsl:variable name="year" select="substring-after(substring-after($value,'/'),'/')"/>
        <!-- debug
        <xsl:message>
            <xsl:text>$month=</xsl:text>
            <xsl:value-of select="$month"/>
            <xsl:text>, $day=</xsl:text>
            <xsl:value-of select="$day"/>
            <xsl:text>, $year=</xsl:text>
            <xsl:value-of select="$year"/>
        </xsl:message> -->
        <xsl:variable name="day2">
            <xsl:choose>
                <!-- swap month and day values if needed -->
                <xsl:when test="(number($month) > 12) and (number($month) &lt; 32)">
                    <xsl:choose>
                        <xsl:when test="(string-length($month) = 2) and starts-with($month,'0')">
                            <!-- strip leading 0 -->
                            <xsl:value-of select="substring-after($month,'0')"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$month"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:choose>
                        <xsl:when test="(string-length($day) = 2) and starts-with($day,'0')">
                            <!-- strip leading 0 -->
                            <xsl:value-of select="substring-after($day,'0')"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$day"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="month2">
            <xsl:choose>
                <!-- swap month and day values if needed -->
                <xsl:when test="(number($month) > 12) and (number($month) &lt; 32)">
                    <xsl:value-of select="$day"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="$month"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:choose>
            <!-- check month/date order when month is spelled out -->
            <xsl:when test="(string-length(normalize-space(translate($value,'/,.-0123456789',''))) > 0)">
                <xsl:variable name="normalizedValue" select="normalize-space(translate($value,'/,.-',' '))"/>
                <xsl:variable name="value1" select="substring-before($normalizedValue,' ')"/>
                <xsl:variable name="value3" select="substring-after (substring-after($normalizedValue,' '),' ')"/>
                <xsl:variable name="value2">
                    <xsl:choose>
                        <xsl:when test="(string-length($value3) = 0)">
                            <!-- no third value exists -->
                            <xsl:value-of select="substring-after($normalizedValue,' ')"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- third value exists -->
                            <xsl:value-of select="substring-before(substring-after($normalizedValue,' '),' ')"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                <!-- debug
                <xsl:message>
                    <xsl:text>$value1=</xsl:text>
                    <xsl:value-of select="$value1"/>
                    <xsl:text>, $value2=</xsl:text>
                    <xsl:value-of select="$value2"/>
                    <xsl:text>, $value3=</xsl:text>
                    <xsl:value-of select="$value3"/>
                </xsl:message> -->
                <xsl:choose>
                    <!-- long entries with additional descriptive text included are ignored, no change -->
                    <xsl:when test="(normalize-space($value) = '*enter date*')">
                        <xsl:value-of select="$value"/>
                        <xsl:message>
                            <xsl:text>*** fix-date-format: found template default, need to fix </xsl:text>
                            <xsl:text> &lt;</xsl:text>
                            <xsl:value-of select="local-name(..)"/>
                            <xsl:if test="string-length(../@name) > 0">
                                <xsl:text> name='</xsl:text>
                                <xsl:value-of select="../@name"/>
                                <xsl:text>'</xsl:text>
                            </xsl:if>
                            <xsl:text> </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text>='</xsl:text>
                            <xsl:value-of select="$value"/>
                            <xsl:text>'</xsl:text>
                            <xsl:text>/&gt;</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <!-- long entries with additional descriptive text included are ignored, no change -->
                    <xsl:when test="(string-length(normalize-space($value)) > string-length(normalize-space(concat($value1,' ',$value2,' ',$value3))))">
                        <xsl:value-of select="$value"/>
                    </xsl:when>
                    <!-- value3 is empty: use '1' as day of month, value1 as month, value2 as year -->
                    <xsl:when test="(string-length($value1) > 0) and (string-length($value2) > 0) and (string-length($value3) = 0)">
                        <xsl:text>1 </xsl:text>
                        <xsl:value-of select="$value1"/>
                        <xsl:text> </xsl:text>
                        <xsl:choose>
                            <xsl:when test="($value2 >= 50) and ($value2 &lt;= 99)">
                                <xsl:text>19</xsl:text>
                                <xsl:value-of select="$value2"/>
                            </xsl:when>
                            <xsl:when test="($value2 >= 0) and ($value2 &lt;= 50)">
                                <xsl:text>20</xsl:text>
                                <xsl:value-of select="$value2"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$value2"/>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:when>
                    <!-- value1 holds spelled-out month -->
                    <xsl:when test="(string-length(normalize-space(translate($value1,'0123456789',''))) > 0)">
                        <xsl:choose>
                            <xsl:when test="(string-length($value2) = 2) and starts-with($value2,'0')">
                                <!-- strip leading 0 -->
                                <xsl:value-of select="substring-after($value2,'0')"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$value2"/>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="$value1"/>
                        <xsl:text> </xsl:text>
                        <xsl:choose>
                            <xsl:when test="(number($value3) >= 50) and (number($value3) &lt;= 99)">
                                <xsl:text>19</xsl:text>
                                <xsl:value-of select="$value3"/>
                            </xsl:when>
                            <xsl:when test="(number($value3) >= 0) and (number($value3) &lt;= 50)">
                                <xsl:text>20</xsl:text>
                                <xsl:value-of select="$value3"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$value3"/>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:when>
                    <!-- value2 holds spelled-out month -->
                    <xsl:when test="(string-length(translate(normalize-space($value2),'0123456789','')) > 0)">
                        <xsl:choose>
                            <xsl:when test="(string-length($value1) = 2) and starts-with($value1,'0')">
                                <!-- strip leading 0 -->
                                <xsl:value-of select="substring-after($value1,'0')"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$value1"/>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="$value2"/>
                        <xsl:text> </xsl:text>
                        <xsl:choose>
                            <xsl:when test="(number($value3) >= 50) and (number($value3) &lt;= 99)">
                                <xsl:text>19</xsl:text>
                                <xsl:value-of select="$value3"/>
                            </xsl:when>
                            <xsl:when test="(number($value3) >= 0) and (number($value3) &lt;= 50)">
                                <xsl:text>20</xsl:text>
                                <xsl:value-of select="$value3"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$value3"/>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:when>
                    <!-- not sure, no change -->
                    <xsl:otherwise>
                        <xsl:value-of select="$value"/>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:when>
            <!-- no change to make since no day2/month2/year found -->
            <xsl:when test="(string-length($day2) = 0) or (string-length($month2) = 0) or (string-length($year) = 0)">
                <xsl:value-of select="$value"/>
            </xsl:when>
            <!-- check for illegal month/date numeric value -->
            <xsl:when test="(number($month2) > 12) or (number($day2) > 31) or (1 > number($month2)) or (1 > number($day2))">
                <xsl:value-of select="$value"/>
                <xsl:message>
                    <xsl:text>   date contains illegal numeric value, not fixable by this function</xsl:text>
                </xsl:message>
            </xsl:when>
            <!-- output date, converting numeric month to name of month -->
            <xsl:otherwise>
                <xsl:value-of select="$day2"/>
                <xsl:text> </xsl:text>
                <!-- XSLT 1, http://stackoverflow.com/questions/1207098/xslt-stylesheet-changing-text-to-upper-case -->
                <xsl:variable name="lowercase" select="'abcdefghijklmnopqrstuvwxyz'" />
                <xsl:variable name="uppercase" select="'ABCDEFGHIJKLMNOPQRSTUVWXYZ'" />
                <xsl:choose>
                    <xsl:when test="($month2 = 1) or (translate($month2,$lowercase,$uppercase) = 'JAN')">
                        <xsl:text>January</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 2) or (translate($month2,$lowercase,$uppercase) = 'FEB')">
                        <xsl:text>February</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 3) or (translate($month2,$lowercase,$uppercase) = 'MAR')">
                        <xsl:text>March</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 4) or (translate($month2,$lowercase,$uppercase) = 'APR')">
                        <xsl:text>April</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 5) or (translate($month2,$lowercase,$uppercase) = 'MAY')">
                        <xsl:text>May</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 6) or (translate($month2,$lowercase,$uppercase) = 'JUN')">
                        <xsl:text>June</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 7) or (translate($month2,$lowercase,$uppercase) = 'JUL')">
                        <xsl:text>July</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 8) or (translate($month2,$lowercase,$uppercase) = 'AUG')">
                        <xsl:text>August</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 9) or (translate($month2,$lowercase,$uppercase) = 'SEP')">
                        <xsl:text>September</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 10) or (translate($month2,$lowercase,$uppercase) = 'OCT')">
                        <xsl:text>October</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 11) or (translate($month2,$lowercase,$uppercase) = 'NOV')">
                        <xsl:text>November</xsl:text>
                    </xsl:when>
                    <xsl:when test="($month2 = 12) or (translate($month2,$lowercase,$uppercase) = 'DEC')">
                        <xsl:text>December</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>(*** unknown, error ***)</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- append year to day, month -->
                <xsl:text> </xsl:text>
                <xsl:choose>
                    <xsl:when test="(number($year) >= 50) and (number($year) &lt;= 99)">
                        <xsl:text>19</xsl:text>
                        <xsl:value-of select="$year"/>
                    </xsl:when>
                    <xsl:when test="(number($year) >= 0) and (number($year) &lt;= 50)">
                        <xsl:text>20</xsl:text>
                        <xsl:value-of select="$year"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="$year"/>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- day month year complete -->
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

</xsl:stylesheet>
