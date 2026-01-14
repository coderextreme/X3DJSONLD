<?xml version="1.0" encoding="UTF-8"?>
<!--
Copyright (c) 1995-2026 held by the author(s).  All rights reserved.

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
   <meta name="title"       content="X3dTidy.xslt" />
   <meta name="creator"     content="Don Brutzman" />
   <meta name="created"     content="28 Decembery 2013" />
   <meta name="description" content="XSLT stylesheet to tidy up problems or issues in X3D source models." />
   <meta name="reference"   content="Decorator design pattern, https://en.wikipedia.org/wiki/Decorator_pattern" />
   <meta name="url"         content="https://www.web3d.org/x3d/stylesheets/X3dTidy.xslt" />
  </head>

Recommended tools:
- X3D-Edit, https://www.web3d.org/x3d/tools/X3D-Edit
- SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, https://saxon.sourceforge.net
- XML Spy https://www.xmlspy.com
-->

<!-- TODO: insert default descriptions, add HAnim decorations, add comprehensive ROUTE visualization,
           add bounding box visualizations, add other X3D-Edit visualization options
		   correct multiple # signs in individual url addresses,
           profile component and level checks,
           omit trailing decimal points if followed by whitespace, e.g. 0. to 0 (see X3dToTurtle.xslt)
           insert 0 if missing from negative fraction,      e.g -.123 to -0.123 (see X3dToTurtle.xslt)
  -->

<!--	xmlns:fo="http://www.w3.org/1999/XSL/Format"	-->
<!--	xmlns:saxon="http://icl.com/saxon" saxon:trace="true"	-->

<xsl:stylesheet version="2.0" exclude-result-prefixes="ds saxon"
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:ds ="http://www.w3.org/2000/09/xmldsig#"
		xmlns:fn ="http://www.w3.org/2005/xpath-functions"
		xmlns:saxon="http://saxon.sf.net/">
    
    <!-- https://www.saxonica.com/html/documentation12/extensions/attributes -->
    <!--        
                xmlns="http://www.w3.org/TR/xhtml1/strict"
                xmlns:fn="http://www.w3.org/2005/xpath-functions" -->
    
    <!-- Default parameter values can be overridden when invoking this stylesheet -->
    <xsl:param name="conversionRequired"           ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="title"                        ><xsl:text><!-- default title value for file name is empty --></xsl:text></xsl:param>
    <xsl:param name="modifyX3dVersion"             ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="revisedX3dVersion"            ><xsl:text></xsl:text></xsl:param><!-- empty for no change, otherwise 3.0 3.1 3.2 3.3 4.0 -->
    <xsl:param name="reviseCurrentDate"            ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="fixDateFormats"               ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="fixMFStringQuotes"            ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="fixGeoSystemMetadata"         ><xsl:text>true</xsl:text></xsl:param>
    <!-- TODO fixHAnimHumanoidMetadataDefault -->
    <xsl:param name="fixMetaNamesMatchDublinCore"  ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="omitNegativeScaleValues"      ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="omitObsoleteAttributes"       ><xsl:text>true</xsl:text></xsl:param><!-- TODO add to X3D-Edit -->
    <!-- prependWorldInfoIfMissing values: true, false, or can also provide name to use -->
    <xsl:param name="prependWorldInfoIfMissing"    ><xsl:text>true</xsl:text></xsl:param><!-- TODO add to X3D-Edit -->
    <xsl:param name="replaceBlackEmissiveColor"    ><xsl:text>true</xsl:text></xsl:param>
    <!-- Expand local url array to include online addresses -->
    <xsl:param name="fixUrlAdditionHttpAddresses"  ><xsl:text>true</xsl:text></xsl:param>
    <!-- note that url quotes are always appended if needed -->
    <xsl:param name="appendWrlAfterX3dAddresses"   ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="prependX3dBeforeWrlAddresses" ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="defaultUrlAddress"            ><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
    <!-- baseUrlAvailable false means that stylesheet is being used by servlet, or else styled results won't be in original directory: -->
    <xsl:param name="baseUrlAvailable"             ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="changeJavascriptEcmascript"   ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="insertMissingEcmascript"      ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="insertMissingMetaLicense"     ><xsl:text>true</xsl:text></xsl:param>
    <xsl:param name="licenseLink"                  ><xsl:text>https://www.web3d.org/x3d/content/examples/license.html</xsl:text></xsl:param>
    
    <xsl:param name="removeDuplicateIndexesIFS_ILS"><xsl:text>true</xsl:text></xsl:param>
    <!-- watch out, the following two settings can interact if applied simultaneously, may need to run twice.  TODO fix.  -->
    <xsl:param name="removeNormals"                ><xsl:text>false</xsl:text></xsl:param><!-- TODO X3D-Edit interface -->
    <xsl:param name="removeColors"                 ><xsl:text>false</xsl:text></xsl:param><!-- TODO X3D-Edit interface -->
    
    <xsl:param name="HAnimGeometryRemove"          ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="HAnimSkeletonIllustrate"      ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="HAnimSiteIllustrate"          ><xsl:text>false</xsl:text></xsl:param>
    <xsl:param name="HAnimViewpointIllustrate"     ><xsl:text>false</xsl:text></xsl:param>
    
    <!-- HAnimHumanoid visualization report parameters: -->
    <xsl:param name="jointColor"                   ><xsl:text>1 0.5 0</xsl:text></xsl:param>
    <xsl:param name="segmentColor"                 ><xsl:text>1 1 0</xsl:text></xsl:param>
    <xsl:param name="siteColor"                    ><xsl:text>1 0 0</xsl:text></xsl:param>
    <xsl:param name="siteViewpointColor"           ><xsl:text>0 0 1</xsl:text></xsl:param>
    <!-- TODO unimplemented -->
    <xsl:param name="HAnimAddBoneSegments"         ><xsl:text>false</xsl:text></xsl:param>
    
    <!-- TODO other X3D-Edit visualization parameters -->
    
    <!-- Determine eligibility for tasks -->
    
    <xsl:variable name="apos"><xsl:text>'</xsl:text></xsl:variable>
    <xsl:variable name="quot"><xsl:text>"</xsl:text></xsl:variable>
                                          
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
	https://stackoverflow.com/questions/919692/how-to-execute-xslt-2-0-with-ant
	-->
    <xsl:variable name="todaysDate">
		<xsl:value-of select="format-date(current-date(), '[D1] [MNn] [Y0001]')"/>
    </xsl:variable> 
    <!-- not used:  
    <xsl:variable name="fixableUrlFound"
                  select="count(//*[(string-length(string(.)) > 0) and 
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
        
    <xsl:variable name="x3dVersionProvided" select="normalize-space(//X3D/@version)"/>
    
    <xsl:variable name="x3dVersionNeeded">
        <xsl:choose>
            <xsl:when test="(//meta[contains(@name,'Tidy')][contains(@content,'modifyX3dVersion=false')])">
                <!-- no change -->
                <xsl:value-of select="$x3dVersionProvided"/>
                <!-- debug <xsl:message><xsl:text>x3dVersionProvided branch 1</xsl:text></xsl:message> -->
            </xsl:when>
            <xsl:when test="($modifyX3dVersion = 'true') and (starts-with($x3dVersionProvided,'3') or starts-with($x3dVersionProvided,'4'))">
                <!-- forced change -->
                <xsl:value-of select="$x3dVersionProvided"/>
                <!-- debug <xsl:message><xsl:text>x3dVersionProvided branch 2</xsl:text></xsl:message> -->
            </xsl:when>
			<!-- first HAnim hands, feet.  TODO not working properly yet. -->
            <xsl:when test="not(starts-with($x3dVersionProvided,'4')) and
							(count(//HAnimHumanoid[starts-with(@version, '2') or (number(@loa) > -1)]) > 0)">
                <!--  or
                (count((//HAnimHumanoid//*[contains(@name,'midcarpal') or contains(@name,'talus')]) > 0) or
                (//meta[(@name = 'title')][contains(lower-case(@content),'hand') or contains(lower-case(@content),'foot')] and count(//HAnimHumanoid) > 0))"> -->
                <!-- TODO Projective Texture Modeling (PTM) and other X3D v4 extensions -->
                <xsl:text>4.0</xsl:text>
                <xsl:message>
                    <xsl:text>*** $x3dVersionNeeded: HAnimHumanoid version 2 requires X3D version 4.0 (original version='</xsl:text>
                    <xsl:value-of select="$x3dVersionProvided"/>
                    <xsl:text>')</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="($modifyX3dVersion = 'true') and ($revisedX3dVersion != $x3dVersionProvided) and (starts-with($revisedX3dVersion,'3') or starts-with($revisedX3dVersion,'4'))">
                <xsl:value-of select="$revisedX3dVersion"/>
                <!-- debug -->
                <xsl:message>
                    <xsl:text>*** $x3dVersionNeeded: change version to </xsl:text>
                    <xsl:value-of select="$revisedX3dVersion"/>
                    <xsl:text> (original version='</xsl:text>
                    <xsl:value-of select="$x3dVersionProvided"/>
                    <xsl:text>')</xsl:text>
                </xsl:message>
                <!-- debug <xsl:message><xsl:text>x3dVersionProvided branch 4</xsl:text></xsl:message> -->
            </xsl:when>
            <xsl:when test="(string-length(normalize-space($x3dVersionProvided)) > 0)">
                <!-- no change -->
                <xsl:value-of select="normalize-space($x3dVersionProvided)"/>
                <!-- debug <xsl:message><xsl:text>x3dVersionProvided branch 5</xsl:text></xsl:message> -->
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>4.0</xsl:text>
                <!-- debug -->
                <xsl:message>
                    <xsl:text>*** $x3dVersionNeeded: reset X3D version to 4.0</xsl:text>
                    <xsl:text> (original version='</xsl:text>
                    <xsl:value-of select="$x3dVersionProvided"/>
                    <xsl:text>')</xsl:text>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:variable>
    <xsl:variable name="isX3D3" select="starts-with($x3dVersionProvided,'3')"/>
    <xsl:variable name="isX3D4" select="starts-with($x3dVersionProvided,'4')"/>
        
    <xsl:strip-space elements="*"/>
    <!-- TODO add flexibility to handle X3D embedded using X3DOM within HTML page, likely via an external stylesheet -->
    <xsl:output encoding="UTF-8" media-type="text/xml" indent="yes" cdata-section-elements="Script ShaderPart ShaderProgram" omit-xml-declaration="yes" method="xml"/>
    <!-- output document is empty unless conversion is performed -->

    <!-- start - - - - - - - - - - - - - - - - - - - - - - - -->
    <xsl:template name="X3dDocument">

        <!-- debug
        <xsl:message>
            <xsl:text>*** $x3dVersionNeeded=</xsl:text>
            <xsl:value-of select="$x3dVersionNeeded"/>
            <xsl:text>, original version=</xsl:text>
            <xsl:value-of select="$x3dVersionProvided"/>
        </xsl:message> -->
                  
        <xsl:text disable-output-escaping="yes">&lt;?xml version="1.0" encoding="UTF-8"?&gt;</xsl:text>
        <!-- line break after XML header line -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:choose>
          <xsl:when test="($x3dVersionNeeded='3.0') or ($x3dVersionNeeded='3.1') or ($x3dVersionNeeded='3.2') or ($x3dVersionNeeded='3.3') or 
                          ($x3dVersionNeeded='4.0') or ($x3dVersionNeeded='4.1')">
              <!-- final DOCTYPE: -->
              <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D </xsl:text>
              <xsl:value-of select="$x3dVersionNeeded"/>
              <xsl:text disable-output-escaping="yes">//EN&quot; &quot;https://www.web3d.org/specifications/x3d-</xsl:text>
              <xsl:value-of select="$x3dVersionNeeded"/>
              <xsl:text disable-output-escaping="yes">.dtd&quot;&gt;</xsl:text>
              <xsl:text>&#10;</xsl:text>
              <!-- transitional DOCTYPE for 3.0, 3.1 unused:
&lt;!DOCTYPE X3D PUBLIC &quot;/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
          </xsl:when>
          <xsl:otherwise>
              <xsl:message>No recognized X3D version found, using DOCTYPE v4.0</xsl:message>
              <xsl:comment>No recognized X3D version found, using DOCTYPE v4.0</xsl:comment>
              <!-- final DOCTYPE: -->
              <xsl:text disable-output-escaping="yes">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</xsl:text>
              <xsl:text>&#10;</xsl:text>
              <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE X3D PUBLIC &quot;ISO//Web3D//DTD X3D 4.0//EN&quot; &quot;https://www.web3d.org/specifications/x3d-4.0.dtd&quot;&gt;</xsl:text>
              <xsl:text>&#10;</xsl:text>
              <!-- transitional DOCTYPE:
&lt;!DOCTYPE X3D PUBLIC &quot;https://www.web3d.org/specifications/x3d-3.0.dtd&quot; &quot;file:///www.web3d.org/specifications/x3d-3.0.dtd&quot;&gt;
-->
          </xsl:otherwise>
		</xsl:choose>
        
        <!-- Decide whether to convert or not -->
        <xsl:choose>
            <xsl:when test="($performTidy=false())">
                <xsl:message>X3dTidy.xslt:  performTidy=false and so no node conversion performed, simply copied source document.</xsl:message>
                <xsl:copy-of select="@* | * | comment() | processing-instruction()"/>
                <!-- line break at end: not needed
                <xsl:text>&#10;</xsl:text> -->
            </xsl:when>
            <xsl:otherwise>
                <!-- recurse to handle all document nodes, attributes and text blocks.  TODO  | text() | node() ? -->
                <xsl:apply-templates select="@* | * | comment() | processing-instruction()" />
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
            <xsl:if test="$performModifications and not(meta[@name='generator'][content='https://www.web3d.org/x3d/stylesheets/X3dTidy.xslt'])">
                <xsl:text>    </xsl:text>
                <xsl:text disable-output-escaping="yes">&lt;meta name="generator" content="https://www.web3d.org/x3d/stylesheets/X3dTidy.xslt"/&gt;</xsl:text>
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
        <xsl:for-each select="ancestor::*">
            <xsl:text>  </xsl:text><!-- indent -->
        </xsl:for-each>
        
        <!-- diagnostic
        <xsl:variable name="hanimVersion" select="ancestor-or-self::HAnimHumanoid/@version"/>
        <xsl:if test="(string-length($hanimVersion) > 0) and (local-name() = 'HAnimHumanoid')">
            <xsl:message>
                <xsl:text>*** $hanimVersion=</xsl:text>
                <xsl:value-of select="$hanimVersion"/>
            </xsl:message>
        </xsl:if> -->
        <!-- first root node within Scene: if no WorldInfo with title (for window display) found, then add one -->
        <xsl:if test="(local-name(..)='Scene') and (count(preceding-sibling::*) = 0) and 
                      ((count(//WorldInfo) = 0) or (local-name() = 'WorldInfo')) and 
                      (string-length($prependWorldInfoIfMissing) > 0) and not($prependWorldInfoIfMissing = 'false') ">
            <xsl:variable name="WorldInfoTitle">
                <xsl:choose>
                    <xsl:when test="($prependWorldInfoIfMissing = 'true') and preceding::meta[@name = 'title']">
                        <xsl:value-of select="preceding::meta[@name = 'title']/@content"/>
                        <!-- debug diagnostic
                        <xsl:message>
                            <xsl:text>*** Found meta title=</xsl:text>
                            <xsl:value-of select="preceding::meta[@name = 'title']/@content"/>
                        </xsl:message> -->
                    </xsl:when>
                    <xsl:when test="not($prependWorldInfoIfMissing = 'true')">
                        <!-- use provided value -->
                        <xsl:value-of select="$prependWorldInfoIfMissing"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>*TODO add title*</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <xsl:if test="(count(//WorldInfo[string-length(@title) > 0]) = 0)">
                    <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                    <xsl:text>WorldInfo title="</xsl:text>
                    <xsl:value-of select="$WorldInfoTitle"/>
                    <xsl:text>"</xsl:text>
                    <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <!-- indent -->
                    <xsl:for-each select="ancestor::*">
                        <xsl:text>  </xsl:text>
                    </xsl:for-each>
                    <xsl:message>
                        <xsl:text>*** prepend &lt;WorldInfo title='</xsl:text>
                        <xsl:value-of select="$WorldInfoTitle"/>
                        <xsl:text>'/&gt;</xsl:text>
                    </xsl:message>
            </xsl:if>
        </xsl:if>
        
        <xsl:variable name="correctedCapitalizationElementName">
            <xsl:choose>
                <!-- *** start: NodeName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->
                <xsl:when test="(lower-case(local-name()) = 'acousticproperties') and not(local-name() = 'AcousticProperties')"><xsl:text>AcousticProperties</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'analyser') and not(local-name() = 'Analyser')"><xsl:text>Analyser</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'anchor') and not(local-name() = 'Anchor')"><xsl:text>Anchor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'appearance') and not(local-name() = 'Appearance')"><xsl:text>Appearance</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'arc2d') and not(local-name() = 'Arc2D')"><xsl:text>Arc2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'arcclose2d') and not(local-name() = 'ArcClose2D')"><xsl:text>ArcClose2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'audioclip') and not(local-name() = 'AudioClip')"><xsl:text>AudioClip</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'audiodestination') and not(local-name() = 'AudioDestination')"><xsl:text>AudioDestination</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'background') and not(local-name() = 'Background')"><xsl:text>Background</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'balljoint') and not(local-name() = 'BallJoint')"><xsl:text>BallJoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'billboard') and not(local-name() = 'Billboard')"><xsl:text>Billboard</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'biquadfilter') and not(local-name() = 'BiquadFilter')"><xsl:text>BiquadFilter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'blendedvolumestyle') and not(local-name() = 'BlendedVolumeStyle')"><xsl:text>BlendedVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'booleanfilter') and not(local-name() = 'BooleanFilter')"><xsl:text>BooleanFilter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'booleansequencer') and not(local-name() = 'BooleanSequencer')"><xsl:text>BooleanSequencer</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'booleantoggle') and not(local-name() = 'BooleanToggle')"><xsl:text>BooleanToggle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'booleantrigger') and not(local-name() = 'BooleanTrigger')"><xsl:text>BooleanTrigger</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'boundaryenhancementvolumestyle') and not(local-name() = 'BoundaryEnhancementVolumeStyle')"><xsl:text>BoundaryEnhancementVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'boundedphysicsmodel') and not(local-name() = 'BoundedPhysicsModel')"><xsl:text>BoundedPhysicsModel</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'box') and not(local-name() = 'Box')"><xsl:text>Box</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bufferaudiosource') and not(local-name() = 'BufferAudioSource')"><xsl:text>BufferAudioSource</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cadassembly') and not(local-name() = 'CADAssembly')"><xsl:text>CADAssembly</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cadface') and not(local-name() = 'CADFace')"><xsl:text>CADFace</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cadlayer') and not(local-name() = 'CADLayer')"><xsl:text>CADLayer</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cadpart') and not(local-name() = 'CADPart')"><xsl:text>CADPart</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cartoonvolumestyle') and not(local-name() = 'CartoonVolumeStyle')"><xsl:text>CartoonVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channelmerger') and not(local-name() = 'ChannelMerger')"><xsl:text>ChannelMerger</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channelselector') and not(local-name() = 'ChannelSelector')"><xsl:text>ChannelSelector</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channelsplitter') and not(local-name() = 'ChannelSplitter')"><xsl:text>ChannelSplitter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'circle2d') and not(local-name() = 'Circle2D')"><xsl:text>Circle2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'clipplane') and not(local-name() = 'ClipPlane')"><xsl:text>ClipPlane</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'collidableoffset') and not(local-name() = 'CollidableOffset')"><xsl:text>CollidableOffset</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'collidableshape') and not(local-name() = 'CollidableShape')"><xsl:text>CollidableShape</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'collision') and not(local-name() = 'Collision')"><xsl:text>Collision</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'collisioncollection') and not(local-name() = 'CollisionCollection')"><xsl:text>CollisionCollection</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'collisionsensor') and not(local-name() = 'CollisionSensor')"><xsl:text>CollisionSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'collisionspace') and not(local-name() = 'CollisionSpace')"><xsl:text>CollisionSpace</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'color') and not(local-name() = 'Color')"><xsl:text>Color</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colorchaser') and not(local-name() = 'ColorChaser')"><xsl:text>ColorChaser</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colordamper') and not(local-name() = 'ColorDamper')"><xsl:text>ColorDamper</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colorinterpolator') and not(local-name() = 'ColorInterpolator')"><xsl:text>ColorInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colorrgba') and not(local-name() = 'ColorRGBA')"><xsl:text>ColorRGBA</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'composedcubemaptexture') and not(local-name() = 'ComposedCubeMapTexture')"><xsl:text>ComposedCubeMapTexture</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'composedshader') and not(local-name() = 'ComposedShader')"><xsl:text>ComposedShader</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'composedtexture3d') and not(local-name() = 'ComposedTexture3D')"><xsl:text>ComposedTexture3D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'composedvolumestyle') and not(local-name() = 'ComposedVolumeStyle')"><xsl:text>ComposedVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cone') and not(local-name() = 'Cone')"><xsl:text>Cone</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coneemitter') and not(local-name() = 'ConeEmitter')"><xsl:text>ConeEmitter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'contact') and not(local-name() = 'Contact')"><xsl:text>Contact</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'contour2d') and not(local-name() = 'Contour2D')"><xsl:text>Contour2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'contourpolyline2d') and not(local-name() = 'ContourPolyline2D')"><xsl:text>ContourPolyline2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'convolver') and not(local-name() = 'Convolver')"><xsl:text>Convolver</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coordinate') and not(local-name() = 'Coordinate')"><xsl:text>Coordinate</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coordinatechaser') and not(local-name() = 'CoordinateChaser')"><xsl:text>CoordinateChaser</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coordinatedamper') and not(local-name() = 'CoordinateDamper')"><xsl:text>CoordinateDamper</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coordinatedouble') and not(local-name() = 'CoordinateDouble')"><xsl:text>CoordinateDouble</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coordinateinterpolator') and not(local-name() = 'CoordinateInterpolator')"><xsl:text>CoordinateInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coordinateinterpolator2d') and not(local-name() = 'CoordinateInterpolator2D')"><xsl:text>CoordinateInterpolator2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cylinder') and not(local-name() = 'Cylinder')"><xsl:text>Cylinder</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cylindersensor') and not(local-name() = 'CylinderSensor')"><xsl:text>CylinderSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'disentitymanager') and not(local-name() = 'DISEntityManager')"><xsl:text>DISEntityManager</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'disentitytypemapping') and not(local-name() = 'DISEntityTypeMapping')"><xsl:text>DISEntityTypeMapping</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'delay') and not(local-name() = 'Delay')"><xsl:text>Delay</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'directionallight') and not(local-name() = 'DirectionalLight')"><xsl:text>DirectionalLight</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'disk2d') and not(local-name() = 'Disk2D')"><xsl:text>Disk2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'doubleaxishingejoint') and not(local-name() = 'DoubleAxisHingeJoint')"><xsl:text>DoubleAxisHingeJoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'dynamicscompressor') and not(local-name() = 'DynamicsCompressor')"><xsl:text>DynamicsCompressor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'easeineaseout') and not(local-name() = 'EaseInEaseOut')"><xsl:text>EaseInEaseOut</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'edgeenhancementvolumestyle') and not(local-name() = 'EdgeEnhancementVolumeStyle')"><xsl:text>EdgeEnhancementVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'elevationgrid') and not(local-name() = 'ElevationGrid')"><xsl:text>ElevationGrid</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'environmentlight') and not(local-name() = 'EnvironmentLight')"><xsl:text>EnvironmentLight</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'espdutransform') and not(local-name() = 'EspduTransform')"><xsl:text>EspduTransform</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'explosionemitter') and not(local-name() = 'ExplosionEmitter')"><xsl:text>ExplosionEmitter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'extrusion') and not(local-name() = 'Extrusion')"><xsl:text>Extrusion</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fillproperties') and not(local-name() = 'FillProperties')"><xsl:text>FillProperties</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'floatvertexattribute') and not(local-name() = 'FloatVertexAttribute')"><xsl:text>FloatVertexAttribute</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fog') and not(local-name() = 'Fog')"><xsl:text>Fog</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fogcoordinate') and not(local-name() = 'FogCoordinate')"><xsl:text>FogCoordinate</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fontstyle') and not(local-name() = 'FontStyle')"><xsl:text>FontStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'forcephysicsmodel') and not(local-name() = 'ForcePhysicsModel')"><xsl:text>ForcePhysicsModel</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'gain') and not(local-name() = 'Gain')"><xsl:text>Gain</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'generatedcubemaptexture') and not(local-name() = 'GeneratedCubeMapTexture')"><xsl:text>GeneratedCubeMapTexture</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geocoordinate') and not(local-name() = 'GeoCoordinate')"><xsl:text>GeoCoordinate</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geoelevationgrid') and not(local-name() = 'GeoElevationGrid')"><xsl:text>GeoElevationGrid</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geolod') and not(local-name() = 'GeoLOD')"><xsl:text>GeoLOD</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geolocation') and not(local-name() = 'GeoLocation')"><xsl:text>GeoLocation</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geometadata') and not(local-name() = 'GeoMetadata')"><xsl:text>GeoMetadata</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geoorigin') and not(local-name() = 'GeoOrigin')"><xsl:text>GeoOrigin</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geopositioninterpolator') and not(local-name() = 'GeoPositionInterpolator')"><xsl:text>GeoPositionInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geoproximitysensor') and not(local-name() = 'GeoProximitySensor')"><xsl:text>GeoProximitySensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geotouchsensor') and not(local-name() = 'GeoTouchSensor')"><xsl:text>GeoTouchSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geotransform') and not(local-name() = 'GeoTransform')"><xsl:text>GeoTransform</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geoviewpoint') and not(local-name() = 'GeoViewpoint')"><xsl:text>GeoViewpoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'group') and not(local-name() = 'Group')"><xsl:text>Group</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hanimdisplacer') and not(local-name() = 'HAnimDisplacer')"><xsl:text>HAnimDisplacer</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hanimhumanoid') and not(local-name() = 'HAnimHumanoid')"><xsl:text>HAnimHumanoid</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hanimjoint') and not(local-name() = 'HAnimJoint')"><xsl:text>HAnimJoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hanimmotion') and not(local-name() = 'HAnimMotion')"><xsl:text>HAnimMotion</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hanimsegment') and not(local-name() = 'HAnimSegment')"><xsl:text>HAnimSegment</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hanimsite') and not(local-name() = 'HAnimSite')"><xsl:text>HAnimSite</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'imagecubemaptexture') and not(local-name() = 'ImageCubeMapTexture')"><xsl:text>ImageCubeMapTexture</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'imagetexture') and not(local-name() = 'ImageTexture')"><xsl:text>ImageTexture</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'imagetexture3d') and not(local-name() = 'ImageTexture3D')"><xsl:text>ImageTexture3D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'indexedfaceset') and not(local-name() = 'IndexedFaceSet')"><xsl:text>IndexedFaceSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'indexedlineset') and not(local-name() = 'IndexedLineSet')"><xsl:text>IndexedLineSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'indexedquadset') and not(local-name() = 'IndexedQuadSet')"><xsl:text>IndexedQuadSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'indexedtrianglefanset') and not(local-name() = 'IndexedTriangleFanSet')"><xsl:text>IndexedTriangleFanSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'indexedtriangleset') and not(local-name() = 'IndexedTriangleSet')"><xsl:text>IndexedTriangleSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'indexedtrianglestripset') and not(local-name() = 'IndexedTriangleStripSet')"><xsl:text>IndexedTriangleStripSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'inline') and not(local-name() = 'Inline')"><xsl:text>Inline</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'integersequencer') and not(local-name() = 'IntegerSequencer')"><xsl:text>IntegerSequencer</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'integertrigger') and not(local-name() = 'IntegerTrigger')"><xsl:text>IntegerTrigger</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'isosurfacevolumedata') and not(local-name() = 'IsoSurfaceVolumeData')"><xsl:text>IsoSurfaceVolumeData</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'keysensor') and not(local-name() = 'KeySensor')"><xsl:text>KeySensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lod') and not(local-name() = 'LOD')"><xsl:text>LOD</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'layer') and not(local-name() = 'Layer')"><xsl:text>Layer</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'layerset') and not(local-name() = 'LayerSet')"><xsl:text>LayerSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'layout') and not(local-name() = 'Layout')"><xsl:text>Layout</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'layoutgroup') and not(local-name() = 'LayoutGroup')"><xsl:text>LayoutGroup</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'layoutlayer') and not(local-name() = 'LayoutLayer')"><xsl:text>LayoutLayer</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'linepicksensor') and not(local-name() = 'LinePickSensor')"><xsl:text>LinePickSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lineproperties') and not(local-name() = 'LineProperties')"><xsl:text>LineProperties</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lineset') and not(local-name() = 'LineSet')"><xsl:text>LineSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'listenerpointsource') and not(local-name() = 'ListenerPointSource')"><xsl:text>ListenerPointSource</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'loadsensor') and not(local-name() = 'LoadSensor')"><xsl:text>LoadSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'localfog') and not(local-name() = 'LocalFog')"><xsl:text>LocalFog</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'material') and not(local-name() = 'Material')"><xsl:text>Material</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'matrix3vertexattribute') and not(local-name() = 'Matrix3VertexAttribute')"><xsl:text>Matrix3VertexAttribute</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'matrix4vertexattribute') and not(local-name() = 'Matrix4VertexAttribute')"><xsl:text>Matrix4VertexAttribute</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metadataboolean') and not(local-name() = 'MetadataBoolean')"><xsl:text>MetadataBoolean</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metadatadouble') and not(local-name() = 'MetadataDouble')"><xsl:text>MetadataDouble</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metadatafloat') and not(local-name() = 'MetadataFloat')"><xsl:text>MetadataFloat</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metadatainteger') and not(local-name() = 'MetadataInteger')"><xsl:text>MetadataInteger</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metadataset') and not(local-name() = 'MetadataSet')"><xsl:text>MetadataSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metadatastring') and not(local-name() = 'MetadataString')"><xsl:text>MetadataString</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'microphonesource') and not(local-name() = 'MicrophoneSource')"><xsl:text>MicrophoneSource</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'motorjoint') and not(local-name() = 'MotorJoint')"><xsl:text>MotorJoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'movietexture') and not(local-name() = 'MovieTexture')"><xsl:text>MovieTexture</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'multitexture') and not(local-name() = 'MultiTexture')"><xsl:text>MultiTexture</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'multitexturecoordinate') and not(local-name() = 'MultiTextureCoordinate')"><xsl:text>MultiTextureCoordinate</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'multitexturetransform') and not(local-name() = 'MultiTextureTransform')"><xsl:text>MultiTextureTransform</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'navigationinfo') and not(local-name() = 'NavigationInfo')"><xsl:text>NavigationInfo</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normal') and not(local-name() = 'Normal')"><xsl:text>Normal</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tangent') and not(local-name() = 'Tangent')"><xsl:text>Tangent</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normalinterpolator') and not(local-name() = 'NormalInterpolator')"><xsl:text>NormalInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbscurve') and not(local-name() = 'NurbsCurve')"><xsl:text>NurbsCurve</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbscurve2d') and not(local-name() = 'NurbsCurve2D')"><xsl:text>NurbsCurve2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbsorientationinterpolator') and not(local-name() = 'NurbsOrientationInterpolator')"><xsl:text>NurbsOrientationInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbspatchsurface') and not(local-name() = 'NurbsPatchSurface')"><xsl:text>NurbsPatchSurface</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbspositioninterpolator') and not(local-name() = 'NurbsPositionInterpolator')"><xsl:text>NurbsPositionInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbsset') and not(local-name() = 'NurbsSet')"><xsl:text>NurbsSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbssurfaceinterpolator') and not(local-name() = 'NurbsSurfaceInterpolator')"><xsl:text>NurbsSurfaceInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbssweptsurface') and not(local-name() = 'NurbsSweptSurface')"><xsl:text>NurbsSweptSurface</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbsswungsurface') and not(local-name() = 'NurbsSwungSurface')"><xsl:text>NurbsSwungSurface</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbstexturecoordinate') and not(local-name() = 'NurbsTextureCoordinate')"><xsl:text>NurbsTextureCoordinate</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'nurbstrimmedsurface') and not(local-name() = 'NurbsTrimmedSurface')"><xsl:text>NurbsTrimmedSurface</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'opacitymapvolumestyle') and not(local-name() = 'OpacityMapVolumeStyle')"><xsl:text>OpacityMapVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'orientationchaser') and not(local-name() = 'OrientationChaser')"><xsl:text>OrientationChaser</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'orientationdamper') and not(local-name() = 'OrientationDamper')"><xsl:text>OrientationDamper</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'orientationinterpolator') and not(local-name() = 'OrientationInterpolator')"><xsl:text>OrientationInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'orthoviewpoint') and not(local-name() = 'OrthoViewpoint')"><xsl:text>OrthoViewpoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'oscillatorsource') and not(local-name() = 'OscillatorSource')"><xsl:text>OscillatorSource</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'packagedshader') and not(local-name() = 'PackagedShader')"><xsl:text>PackagedShader</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'particlesystem') and not(local-name() = 'ParticleSystem')"><xsl:text>ParticleSystem</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'periodicwave') and not(local-name() = 'PeriodicWave')"><xsl:text>PeriodicWave</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'physicalmaterial') and not(local-name() = 'PhysicalMaterial')"><xsl:text>PhysicalMaterial</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pickablegroup') and not(local-name() = 'PickableGroup')"><xsl:text>PickableGroup</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pixeltexture') and not(local-name() = 'PixelTexture')"><xsl:text>PixelTexture</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pixeltexture3d') and not(local-name() = 'PixelTexture3D')"><xsl:text>PixelTexture3D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'planesensor') and not(local-name() = 'PlaneSensor')"><xsl:text>PlaneSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointemitter') and not(local-name() = 'PointEmitter')"><xsl:text>PointEmitter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointlight') and not(local-name() = 'PointLight')"><xsl:text>PointLight</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointpicksensor') and not(local-name() = 'PointPickSensor')"><xsl:text>PointPickSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointproperties') and not(local-name() = 'PointProperties')"><xsl:text>PointProperties</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointset') and not(local-name() = 'PointSet')"><xsl:text>PointSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'polyline2d') and not(local-name() = 'Polyline2D')"><xsl:text>Polyline2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'polylineemitter') and not(local-name() = 'PolylineEmitter')"><xsl:text>PolylineEmitter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'polypoint2d') and not(local-name() = 'Polypoint2D')"><xsl:text>Polypoint2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'positionchaser') and not(local-name() = 'PositionChaser')"><xsl:text>PositionChaser</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'positionchaser2d') and not(local-name() = 'PositionChaser2D')"><xsl:text>PositionChaser2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'positiondamper') and not(local-name() = 'PositionDamper')"><xsl:text>PositionDamper</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'positiondamper2d') and not(local-name() = 'PositionDamper2D')"><xsl:text>PositionDamper2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'positioninterpolator') and not(local-name() = 'PositionInterpolator')"><xsl:text>PositionInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'positioninterpolator2d') and not(local-name() = 'PositionInterpolator2D')"><xsl:text>PositionInterpolator2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'primitivepicksensor') and not(local-name() = 'PrimitivePickSensor')"><xsl:text>PrimitivePickSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'programshader') and not(local-name() = 'ProgramShader')"><xsl:text>ProgramShader</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'projectionvolumestyle') and not(local-name() = 'ProjectionVolumeStyle')"><xsl:text>ProjectionVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'protoinstance') and not(local-name() = 'ProtoInstance')"><xsl:text>ProtoInstance</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'proximitysensor') and not(local-name() = 'ProximitySensor')"><xsl:text>ProximitySensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'quadset') and not(local-name() = 'QuadSet')"><xsl:text>QuadSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'receiverpdu') and not(local-name() = 'ReceiverPdu')"><xsl:text>ReceiverPdu</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rectangle2d') and not(local-name() = 'Rectangle2D')"><xsl:text>Rectangle2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rigidbody') and not(local-name() = 'RigidBody')"><xsl:text>RigidBody</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rigidbodycollection') and not(local-name() = 'RigidBodyCollection')"><xsl:text>RigidBodyCollection</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'scalarchaser') and not(local-name() = 'ScalarChaser')"><xsl:text>ScalarChaser</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'scalardamper') and not(local-name() = 'ScalarDamper')"><xsl:text>ScalarDamper</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'scalarinterpolator') and not(local-name() = 'ScalarInterpolator')"><xsl:text>ScalarInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'screenfontstyle') and not(local-name() = 'ScreenFontStyle')"><xsl:text>ScreenFontStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'screengroup') and not(local-name() = 'ScreenGroup')"><xsl:text>ScreenGroup</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'script') and not(local-name() = 'Script')"><xsl:text>Script</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'segmentedvolumedata') and not(local-name() = 'SegmentedVolumeData')"><xsl:text>SegmentedVolumeData</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shadedvolumestyle') and not(local-name() = 'ShadedVolumeStyle')"><xsl:text>ShadedVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shaderpart') and not(local-name() = 'ShaderPart')"><xsl:text>ShaderPart</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shaderprogram') and not(local-name() = 'ShaderProgram')"><xsl:text>ShaderProgram</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shape') and not(local-name() = 'Shape')"><xsl:text>Shape</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'signalpdu') and not(local-name() = 'SignalPdu')"><xsl:text>SignalPdu</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'silhouetteenhancementvolumestyle') and not(local-name() = 'SilhouetteEnhancementVolumeStyle')"><xsl:text>SilhouetteEnhancementVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'singleaxishingejoint') and not(local-name() = 'SingleAxisHingeJoint')"><xsl:text>SingleAxisHingeJoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'sliderjoint') and not(local-name() = 'SliderJoint')"><xsl:text>SliderJoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'sound') and not(local-name() = 'Sound')"><xsl:text>Sound</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'spatialsound') and not(local-name() = 'SpatialSound')"><xsl:text>SpatialSound</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'sphere') and not(local-name() = 'Sphere')"><xsl:text>Sphere</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'spheresensor') and not(local-name() = 'SphereSensor')"><xsl:text>SphereSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'splinepositioninterpolator') and not(local-name() = 'SplinePositionInterpolator')"><xsl:text>SplinePositionInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'splinepositioninterpolator2d') and not(local-name() = 'SplinePositionInterpolator2D')"><xsl:text>SplinePositionInterpolator2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'splinescalarinterpolator') and not(local-name() = 'SplineScalarInterpolator')"><xsl:text>SplineScalarInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'spotlight') and not(local-name() = 'SpotLight')"><xsl:text>SpotLight</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'squadorientationinterpolator') and not(local-name() = 'SquadOrientationInterpolator')"><xsl:text>SquadOrientationInterpolator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'staticgroup') and not(local-name() = 'StaticGroup')"><xsl:text>StaticGroup</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'streamaudiodestination') and not(local-name() = 'StreamAudioDestination')"><xsl:text>StreamAudioDestination</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'streamaudiosource') and not(local-name() = 'StreamAudioSource')"><xsl:text>StreamAudioSource</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stringsensor') and not(local-name() = 'StringSensor')"><xsl:text>StringSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'surfaceemitter') and not(local-name() = 'SurfaceEmitter')"><xsl:text>SurfaceEmitter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'switch') and not(local-name() = 'Switch')"><xsl:text>Switch</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texcoordchaser2d') and not(local-name() = 'TexCoordChaser2D')"><xsl:text>TexCoordChaser2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texcoorddamper2d') and not(local-name() = 'TexCoordDamper2D')"><xsl:text>TexCoordDamper2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'text') and not(local-name() = 'Text')"><xsl:text>Text</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturebackground') and not(local-name() = 'TextureBackground')"><xsl:text>TextureBackground</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturecoordinate') and not(local-name() = 'TextureCoordinate')"><xsl:text>TextureCoordinate</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturecoordinate3d') and not(local-name() = 'TextureCoordinate3D')"><xsl:text>TextureCoordinate3D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturecoordinate4d') and not(local-name() = 'TextureCoordinate4D')"><xsl:text>TextureCoordinate4D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturecoordinategenerator') and not(local-name() = 'TextureCoordinateGenerator')"><xsl:text>TextureCoordinateGenerator</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'textureprojector') and not(local-name() = 'TextureProjector')"><xsl:text>TextureProjector</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'textureprojectorparallel') and not(local-name() = 'TextureProjectorParallel')"><xsl:text>TextureProjectorParallel</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'textureproperties') and not(local-name() = 'TextureProperties')"><xsl:text>TextureProperties</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturetransform') and not(local-name() = 'TextureTransform')"><xsl:text>TextureTransform</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturetransform3d') and not(local-name() = 'TextureTransform3D')"><xsl:text>TextureTransform3D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturetransformmatrix3d') and not(local-name() = 'TextureTransformMatrix3D')"><xsl:text>TextureTransformMatrix3D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'timesensor') and not(local-name() = 'TimeSensor')"><xsl:text>TimeSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'timetrigger') and not(local-name() = 'TimeTrigger')"><xsl:text>TimeTrigger</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tonemappedvolumestyle') and not(local-name() = 'ToneMappedVolumeStyle')"><xsl:text>ToneMappedVolumeStyle</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'touchsensor') and not(local-name() = 'TouchSensor')"><xsl:text>TouchSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transform') and not(local-name() = 'Transform')"><xsl:text>Transform</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transformsensor') and not(local-name() = 'TransformSensor')"><xsl:text>TransformSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transmitterpdu') and not(local-name() = 'TransmitterPdu')"><xsl:text>TransmitterPdu</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'trianglefanset') and not(local-name() = 'TriangleFanSet')"><xsl:text>TriangleFanSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'triangleset') and not(local-name() = 'TriangleSet')"><xsl:text>TriangleSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'triangleset2d') and not(local-name() = 'TriangleSet2D')"><xsl:text>TriangleSet2D</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'trianglestripset') and not(local-name() = 'TriangleStripSet')"><xsl:text>TriangleStripSet</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'twosidedmaterial') and not(local-name() = 'TwoSidedMaterial')"><xsl:text>TwoSidedMaterial</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'universaljoint') and not(local-name() = 'UniversalJoint')"><xsl:text>UniversalJoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'unlitmaterial') and not(local-name() = 'UnlitMaterial')"><xsl:text>UnlitMaterial</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'viewpoint') and not(local-name() = 'Viewpoint')"><xsl:text>Viewpoint</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'viewpointgroup') and not(local-name() = 'ViewpointGroup')"><xsl:text>ViewpointGroup</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'viewport') and not(local-name() = 'Viewport')"><xsl:text>Viewport</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'visibilitysensor') and not(local-name() = 'VisibilitySensor')"><xsl:text>VisibilitySensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'volumedata') and not(local-name() = 'VolumeData')"><xsl:text>VolumeData</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'volumeemitter') and not(local-name() = 'VolumeEmitter')"><xsl:text>VolumeEmitter</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'volumepicksensor') and not(local-name() = 'VolumePickSensor')"><xsl:text>VolumePickSensor</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'waveshaper') and not(local-name() = 'WaveShaper')"><xsl:text>WaveShaper</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'windphysicsmodel') and not(local-name() = 'WindPhysicsModel')"><xsl:text>WindPhysicsModel</xsl:text></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'worldinfo') and not(local-name() = 'WorldInfo')"><xsl:text>WorldInfo</xsl:text></xsl:when>
                <!-- *** finish: NodeName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->
            </xsl:choose>
        </xsl:variable>
        
        <xsl:variable name="elementName">
            <xsl:choose>
                <xsl:when test="(local-name(..) = 'MetadataSet') and ((../@name = 'HAnimHumanoid.info') or (../@name = 'GeoMetadata.summary')) and
                                 starts-with(local-name(), 'Metadata') and not(local-name() = 'MetadataFloat') and
                                ((@name = 'height') or (@name = 'weight') or (@name = 'resolution'))">
                    <xsl:text>MetadataFloat</xsl:text>
                    <xsl:message>
                        <xsl:text>*** for contained element in MetadataSet name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>' change metadata element type from </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> to MetadataFloat for name='</xsl:text>
                        <xsl:value-of select="@name"/>
                        <xsl:text>' value='</xsl:text>
                        <xsl:value-of select="@value"/>
                        <xsl:text>' </xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(string-length($correctedCapitalizationElementName) > 0)">
                    <xsl:value-of select="$correctedCapitalizationElementName"/>
                    <xsl:message>
                        <xsl:text>*** &lt;</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:if test="(string-length(@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@USE) > 0)">
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@name) > 0)">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text>/&gt;</xsl:text>
                        <xsl:text> element capitalization-case mismatch, correct CamelCase naming is </xsl:text>
                        <xsl:value-of select="$correctedCapitalizationElementName"/>
                    </xsl:message>
                </xsl:when>
                <!-- corrected element name -->
                <xsl:when test="(local-name() = 'BufferAudio') or (local-name() = 'ListenerPoint') or (local-name() = 'Microphone') or (local-name() = 'Oscillator')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>Source</xsl:text>
                    <xsl:message>
                        <xsl:text>*** corrected element naming </xsl:text>
                        <xsl:text>&lt;</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:if test="(string-length(@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@USE) > 0)">
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@name) > 0)">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text>/&gt;</xsl:text>
                        <xsl:text> element naming mismatch, correct CamelCase naming is </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>Source</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name() = 'AudioSource')">
                    <xsl:text>BufferOrStream?</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:message>
                        <xsl:text>*** corrected element naming needed: </xsl:text>
                        <xsl:text>&lt;</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:if test="(string-length(@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@USE) > 0)">
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text>/&gt;</xsl:text>
                        <xsl:text> change to BufferAudioSource or StreamAudioSource </xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name() = 'StreamAudio')">
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>DestinationOrSource?</xsl:text>
                    <xsl:message>
                        <xsl:text>*** corrected element naming needed: </xsl:text>
                        <xsl:text>&lt;</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:if test="(string-length(@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@USE) > 0)">
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text>/&gt;</xsl:text>
                        <xsl:text> change to StreamAudioDestination or StreamAudioSource </xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="local-name()"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:choose>
            <xsl:when test="(count(* | comment() | text()[string-length(normalize-space(string(.))) > 0]) > 0) or 
                            (((local-name()='HAnimSegment') or (local-name()='HAnimSite')) and not(string-length(@USE) > 0) and 
                             (($HAnimSkeletonIllustrate='true') or ($HAnimSiteIllustrate='true')))">
                <xsl:choose>
                    <xsl:when test="(local-name()='HAnimSegment') and (local-name(..)='HAnimJoint') and (count(../Transform) = 1) and not(preceding-sibling::HAnimSegment)">
                        <!-- this HAnimSegment already handled by following case for mismatched positioning -->
                        <xsl:message>
                            <xsl:text disable-output-escaping="yes">*** skip repetition for mismatched positioning of HAnimSegment child geometry</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- open tag for current element, which itself is a parent -->
                        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <!-- handle attribute(s) if any -->
                        <xsl:call-template name="process-attributes-in-order"/>
                        <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                
                        <!-- special case: split HAnimHumanoid info field (name=value pairs) into MetadataSet collection -->
                        <xsl:if test="(local-name() = 'HAnimHumanoid') and (string-length(@info) > 0) and contains(@info,'&quot;') and contains(@info,'=') and starts-with(@version,'2')">
                            <xsl:message>
                                <xsl:text>*** warning: HAnimHumanoid info array values split into matching MetadataSet structure</xsl:text>
                            </xsl:message>
                            <xsl:text>      </xsl:text>
                            <xsl:comment>
                                <xsl:text> original HAnimHumanoid info='</xsl:text>
                                <xsl:value-of select="@info"/>
                                <xsl:text>'</xsl:text>
                            </xsl:comment>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text>      </xsl:text>
                            <xsl:element name="MetadataSet">
                                <xsl:attribute name="containerField"><xsl:text>metadata</xsl:text></xsl:attribute>
                                <xsl:attribute name="name"          ><xsl:text>HAnimHumanoid.info</xsl:text></xsl:attribute>
                                <xsl:attribute name="reference"     ><xsl:text>https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid</xsl:text></xsl:attribute>
                                <xsl:comment>https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4.1-CD/Part01/components/hanim.html#HAnimHumanoid</xsl:comment>
                                
                                <xsl:for-each select="tokenize(@info, '&quot;\s*(,)?\s*&quot;')">
                                    <xsl:sort select="normalize-space(string(.))" order="ascending"/>
                                    
                                    <xsl:variable name="infoNameValuePair"  select="normalize-space(string(.))"/>
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>*** found info token...</xsl:text>
                                    </xsl:message> -->
                                    <xsl:variable name="elementName">
                                        <xsl:choose>
                                            <xsl:when test="starts-with($infoNameValuePair,'height') or 
                                                            starts-with($infoNameValuePair,'weight')">
                                                <xsl:text>MetadataFloat</xsl:text>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:text>MetadataString</xsl:text>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:variable>
                                <xsl:text>        </xsl:text>
                                    <xsl:element name="{$elementName}">
                                        <xsl:choose>
                                            <xsl:when test="not(contains($infoNameValuePair,'='))">
                                                <xsl:message>
                                                    <xsl:text>*** error: HAnimHumanoid info array name=value pair '</xsl:text>
                                                    <xsl:value-of select="$infoNameValuePair"/>
                                                    <xsl:text>' is missing equal sign (= character) and cannot be split</xsl:text>
                                                </xsl:message>
                                                <xsl:attribute name="info{position()}">
                                                    <!-- MFString array values with single values do not need to be quoted, see Mantis 1320 -->
                                                    <xsl:call-template name="strip-surrounding-quotes">
                                                        <xsl:with-param name="value" select="$infoNameValuePair"/>
                                                    </xsl:call-template>
                                                </xsl:attribute>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:variable name="infoName"  select="normalize-space(translate(substring-before($infoNameValuePair,'='),'&quot;',''))"/>
                                                <xsl:variable name="infoValue" select="normalize-space(          substring-after ($infoNameValuePair,'='))"/>
                                                <xsl:attribute name="name"  select="$infoName"/>
                                                <xsl:variable name="optionalQuoteCharacter">
                                                    <xsl:choose>
                                                        <!-- ensure unambiguous, this is an MFString value -->
                                                        <xsl:when test="($infoName = 'humanoidVersion')">
                                                            <xsl:text>"</xsl:text>
                                                        </xsl:when>
                                                        <xsl:otherwise>
                                                            <!-- MFString array values with single values do not need to be quoted, see Mantis 1320 -->
                                                        </xsl:otherwise>
                                                    </xsl:choose>
                                                </xsl:variable>
                                                <xsl:attribute name="value">
                                                    <xsl:value-of select="$optionalQuoteCharacter"/>
                                                    <xsl:call-template name="strip-surrounding-quotes">
                                                        <xsl:with-param name="value" select="$infoValue"/>
                                                    </xsl:call-template>
                                                    <xsl:value-of select="$optionalQuoteCharacter"/>
                                                </xsl:attribute>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                        <xsl:choose>
                                            <xsl:when test="$isX3D3">
                                                <xsl:attribute name="containerField">
                                                    <xsl:text>value</xsl:text>
                                                </xsl:attribute>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <!-- TODO may become optional in X3D4 -->
                                                <xsl:attribute name="containerField">
                                                    <xsl:text>value</xsl:text>
                                                </xsl:attribute>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:element><!-- $elementName, MetadataString or MetadataFloat etc. -->
                                </xsl:for-each>
                                <xsl:text>      </xsl:text>
                            </xsl:element><!-- MetadataSet -->
                            <xsl:text>&#10;</xsl:text>
                        </xsl:if>
                
                        <!-- TODO special case: split GeoMetadata summary field ("name" "value" string pairs) into MetadataSet collection-->
                        <xsl:if test="false() and (local-name() = 'GeoMetadata') and (string-length(@summary) > 0) and contains(@summary,'&quot;')">
                            <xsl:message>
                                <xsl:text>*** warning: GeoMetadata summary array values split into matching MetadataSet structure</xsl:text>
                            </xsl:message>
                            <xsl:comment>
                                <xsl:text>original GeoMetadata summary='</xsl:text>
                                <xsl:value-of select="@summary"/>
                                <xsl:text>'</xsl:text>
                            </xsl:comment>
                            <xsl:element name="MetadataSet">
                                <xsl:attribute name="containerField"><xsl:text>metadata</xsl:text></xsl:attribute>
                                <xsl:attribute name="name"          ><xsl:text>GeoMetadata.summary</xsl:text></xsl:attribute>
                                <xsl:attribute name="reference"     ><xsl:text>https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/geospatial.html#GeoMetadata</xsl:text></xsl:attribute>
                                
                                <xsl:for-each select="tokenize(@summary, '&quot;\s*(,)?\s*&quot;')">
                                    <xsl:sort select="normalize-space(string(.))" order="ascending"/>
                                    
                                    <xsl:variable name="summaryNameValuePair"  select="normalize-space(string(.))"/>
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>*** found info token...</xsl:text>
                                    </xsl:message> -->
                                    <xsl:variable name="elementName">
                                        <xsl:choose>
                                            <xsl:when test="starts-with($summaryNameValuePair,'resolution')">
                                                <xsl:text>MetadataFloat</xsl:text>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:text>MetadataString</xsl:text>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:variable>
                                    <xsl:element name="{$elementName}">
                                        <xsl:choose>
                                            <xsl:when test="not(contains($summaryNameValuePair,'='))">
                                                <xsl:message>
                                                    <xsl:text>*** error: GeoMetadata summary array name=value pair '</xsl:text>
                                                    <xsl:value-of select="$summaryNameValuePair"/>
                                                    <xsl:text>' is missing equal sign (= character) and cannot be split</xsl:text>
                                                </xsl:message>
                                                <xsl:attribute name="info{position()}">
                                                    <!-- MFString array values with single values do not need to be quoted, see Mantis 1320 -->
                                                    <xsl:call-template name="strip-surrounding-quotes">
                                                        <xsl:with-param name="value" select="$summaryNameValuePair"/>
                                                    </xsl:call-template>
                                                </xsl:attribute>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <xsl:variable name="infoName"  select="normalize-space(translate(substring-before($summaryNameValuePair,'='),'&quot;',''))"/>
                                                <xsl:variable name="infoValue" select="normalize-space(          substring-after ($summaryNameValuePair,'='))"/>
                                                <xsl:attribute name="name"  select="$infoName"/>
                                                <xsl:variable name="optionalQuoteCharacter">
                                                    <xsl:choose>
                                                        <!-- ensure unambiguous, this is an MFString value -->
                                                        <xsl:when test="($infoName = 'dataUrl')">
                                                            <xsl:text>"</xsl:text>
                                                        </xsl:when>
                                                        <xsl:otherwise>
                                                            <!-- MFString array values with single values do not need to be quoted, see Mantis 1320 -->
                                                        </xsl:otherwise>
                                                    </xsl:choose>
                                                </xsl:variable>
                                                <xsl:attribute name="value">
                                                    <xsl:value-of select="$optionalQuoteCharacter"/>
                                                    <xsl:call-template name="strip-surrounding-quotes">
                                                        <xsl:with-param name="value" select="$infoValue"/>
                                                    </xsl:call-template>
                                                    <xsl:value-of select="$optionalQuoteCharacter"/>
                                                </xsl:attribute>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                        <xsl:choose>
                                            <xsl:when test="$isX3D3">
                                                <xsl:attribute name="containerField">
                                                    <xsl:text>value</xsl:text>
                                                </xsl:attribute>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <!-- TODO may become optional in X3D4 -->
                                                <xsl:attribute name="containerField">
                                                    <xsl:text>value</xsl:text>
                                                </xsl:attribute>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:element><!-- $elementName, MetadataString or MetadataFloat etc. -->
                                </xsl:for-each>
                            </xsl:element><!-- MetadataSet -->
                            <xsl:text>&#10;</xsl:text>
                        </xsl:if>
                         
                       <!-- warn regarding atypical programming language code -->
                        <xsl:choose>
                            <xsl:when test="(local-name()='Script') and (contains(@url,'.class&quot;') or contains(@url,'.java&quot;') or contains(@url,'.jar&quot;'))">
                                <xsl:message>
                                    <xsl:text>*** warning: Script </xsl:text>
                                    <xsl:text> contains reference to Java code in url='</xsl:text>
                                    <xsl:value-of select="@url"/>
                                    <xsl:text>'</xsl:text>
                                </xsl:message>
                            </xsl:when>
                            <xsl:when test="(local-name()='Script') and (contains(@url,'.py&quot;'))">
                                <xsl:message>
                                    <xsl:text>*** warning: Script </xsl:text>
                                    <xsl:text> contains reference to Python code in url='</xsl:text>
                                    <xsl:value-of select="@url"/>
                                    <xsl:text>'</xsl:text>
                                </xsl:message>
                            </xsl:when>
                        </xsl:choose>

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
                                        <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and preceding::field"></xsl:when><!--<xsl:text>// stripped LF before field&#10;</xsl:text> -->
                                        <xsl:when test="(normalize-space(string(.))='' or normalize-space(string(.))=' ') and following::field"></xsl:when><!--<xsl:text>// stripped LF after  field&#10;</xsl:text> -->
                                        <xsl:when test="starts-with(normalize-space(string(.)),'ecmascript') or 
                                                        starts-with(normalize-space(string(.)),'javascript') or 
                                                     (string-length(normalize-space(string(.))) > 1)">
                                            <!-- avoid adding an additional line feed each time this code block is processed -->
                                            <xsl:choose>
                                                <xsl:when test="starts-with(normalize-space(string(.)),'ecmascript:')">
                                                    <xsl:text>ecmascript:</xsl:text>
                                                    <xsl:value-of select="substring-after(substring(.,1,$scriptLength),'ecmascript:')" disable-output-escaping="yes"/>
                                                </xsl:when>
                                                <!-- append missing colon -->
                                                <xsl:when test="starts-with(normalize-space(string(.)),'ecmascript ')">
                                                    <xsl:text>ecmascript:</xsl:text>
                                                    <xsl:value-of select="substring-after(substring(.,1,$scriptLength),'ecmascript')" disable-output-escaping="yes"/>
                                                    <xsl:message>
                                                        <xsl:text>*** error: change </xsl:text>
                                                        <xsl:value-of select="$ScriptReference" disable-output-escaping="yes"/>
                                                        <xsl:text> CDATA prefix from 'ecmascript' to 'ecmascript:' </xsl:text>
                                                    </xsl:message>
                                                </xsl:when>
                                                <xsl:when test="(starts-with(normalize-space(string(.)),'javascript') and ($changeJavascriptEcmascript = 'true')) and
                                                                (not(//meta[contains(@name,'Tidy')][contains(@content,'changeJavascriptEcmascript=false')]))">
                                                    <xsl:text>ecmascript:</xsl:text>
                                                    <xsl:choose>
                                                        <xsl:when test="starts-with(normalize-space(string(.)),'javascript:')">
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
                                                <xsl:when test="not(starts-with(normalize-space(string(.)),'ecmascript:') and ($insertMissingEcmascript = 'true')) and
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
                                                    <xsl:if test="string-length(normalize-space(string(.))) > 0">
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
                                                <xsl:with-param name="inputValue" select=""/>
                                            </xsl:call-template>
                                            -->
                                        </xsl:when>
                                        <!-- usable text found, need to convert '<' to &lt; -->
                                        <xsl:otherwise>
                                            <xsl:call-template name="escape-lessthan-characters">
                                                <xsl:with-param name="inputValue" select="."/>
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
                                <!-- first handle children of current HAnimHumanoid node (except USE node) without special treatment -->
                                <xsl:apply-templates select="*[not(string-length(@USE) > 0)] | comment()"/> <!--  | text() -->
                                <!-- next handle USE node children of current node, but only if a corresponding DEF node is present (that may have changed for HAnim1 to HAnim2 conversion -->
                                <xsl:for-each select="*[(string-length(@USE) > 0)]">
                                        <xsl:sort select="local-name()" order="ascending"/>
                                        <xsl:sort select="concat(substring-after(@USE,'_l_'),substring-after(@USE,'_r_'))" order="ascending"/>
                                        <xsl:sort select="not(ends-with(@USE,'_root') or contains(@USE,'_l_') or contains(@USE,'_r_'))" order="ascending"/>
                                        <xsl:sort select="ends-with(@USE,'_root')" order="ascending"/>
                                        
                                    <xsl:variable name="USEname" select="normalize-space(@USE)"/>
                                    <!-- debug
                                    <xsl:message>
                                        <xsl:text>*** warning: looping on </xsl:text>
                                    </xsl:message> -->
                                    <xsl:choose>
                                        <xsl:when test="(count(//*[@DEF = $USEname]) = 0)">
                                            <xsl:message>
                                                <xsl:text>*** found </xsl:text>
                                                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                                                <xsl:value-of select="local-name()"/>
                                                <xsl:text> USE='</xsl:text>
                                                <xsl:value-of select="@USE"/>
                                                <xsl:text>'</xsl:text>
                                                <xsl:if test="(string-length(@containerField) gt 0)">
                                                    <xsl:text> containerField='</xsl:text>
                                                    <xsl:value-of select="@containerField"/>
                                                    <xsl:text>'</xsl:text>
                                                </xsl:if>
                                                <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                                                <xsl:text> with no corresponding DEF node, ignored</xsl:text>
                                            </xsl:message>
                                        </xsl:when>
                                        <xsl:when test="not(preceding-sibling::*[@USE = $USEname])">
                                             <xsl:apply-templates select="."/>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:message>
                                                <xsl:text>*** warning: omitting duplicate </xsl:text>
                                                <xsl:text disable-output-escaping="yes">'&lt;</xsl:text>
                                                <xsl:value-of select="local-name()"/>
                                                <xsl:text> USE='</xsl:text>
                                                <xsl:value-of select="@USE"/>
                                                <xsl:text>'</xsl:text>
                                                <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                                                <xsl:text> under parent </xsl:text>
                                                <xsl:text disable-output-escaping="yes">'&lt;</xsl:text>
                                                <xsl:text>HAnimHumanoid DEF='</xsl:text>
                                                <xsl:value-of select="../@DEF"/>
                                                <xsl:text>' name='</xsl:text>
                                                <xsl:value-of select="../@name"/>
                                                <xsl:text>'</xsl:text>
                                                <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                            </xsl:message>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:for-each>
                                    
                                <xsl:variable name="hanimHumanoidName" select="@name"/>
                                <!-- find and add any missing USE nodes at top level of this HAnimHumanoid for joints, segments, sites -->
                                <xsl:for-each select="//*[(local-name() = 'HAnimJoint') or (local-name() = 'HAnimSegment') or (local-name() = 'HAnimSite')]">
                                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                                    <xsl:sort select="@DEF" order="ascending" data-type="text"/>
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
                                    <xsl:variable name="expectedContainerField">
                                        <xsl:choose>
                                            <xsl:when test="(local-name(..) = 'GeoLOD') and not(local-name() = 'GeoOrigin') and not(starts-with(local-name(), 'Metadata'))">
                                                <xsl:text>rootNode</xsl:text>
                                            </xsl:when>
                                            <!-- HAnimJoint containerField might be joints or skeleton, so careful comparison here -->
                                            <xsl:when test="(local-name() = 'HAnimJoint') and (local-name(..) = 'HAnimHumanoid') and
                                                            (string-length(@USE) > 0) and not(@containerField = 'skeleton')">
                                                <xsl:text>joints</xsl:text>
                                            </xsl:when>
                                            <xsl:when test="(local-name() = 'HAnimSegment') and (local-name(..) = 'HAnimHumanoid')">
                                                <xsl:text>segments</xsl:text>
                                            </xsl:when>
                                            <xsl:when test="(local-name() = 'HAnimSite') and (local-name(..) = 'HAnimHumanoid')">
                                                <xsl:text>sites</xsl:text>
                                            </xsl:when>
                                            <xsl:when test="starts-with(local-name(), 'Metadata') and ((local-name(..) = 'HAnimHumanoid') or (local-name(..) = 'GeoMetadata'))">
                                                <xsl:text>metadata</xsl:text>
                                            </xsl:when>
                                            <xsl:when test="(local-name() = 'Analyser') or (local-name() = 'AudioDestination') or (local-name() = 'BiquadFilter') or (local-name() = 'BufferAudioSource') or (local-name() = 'ChannelMerger') or (local-name() = 'ChannelSelector') or (local-name() = 'ChannelSplitter') or (local-name() = 'Convolver') or (local-name() = 'Delay') or (local-name() = 'DynamicsCompressor') or (local-name() = 'Gain') or (local-name() = 'ListenerPointSource') or (local-name() = 'MicrophoneSource') or (local-name() = 'OscillatorSource') or (local-name() = 'SpatialSound') or (local-name() = 'StreamAudioDestination') or (local-name() = 'StreamAudioSource') or (local-name() = 'WaveShaper')">
                                                <xsl:text>children</xsl:text>
                                            </xsl:when>
                                            <xsl:when test="((local-name() = 'AudioClip') or (local-name() = 'MovieTexture')) and
                                                            ((local-name(..) = 'Analyser') or (local-name(..) = 'AudioDestination') or (local-name(..) = 'BiquadFilter') or (local-name(..) = 'BufferAudioSource') or (local-name(..) = 'ChannelMerger') or (local-name(..) = 'ChannelSelector') or (local-name(..) = 'ChannelSplitter') or (local-name(..) = 'Convolver') or (local-name(..) = 'Delay') or (local-name(..) = 'DynamicsCompressor') or (local-name(..) = 'Gain') or (local-name(..) = 'ListenerPointSource') or (local-name(..) = 'MicrophoneSource') or (local-name(..) = 'OscillatorSource') or (local-name(..) = 'SpatialSound') or (local-name(..) = 'StreamAudioDestination') or (local-name(..) = 'StreamAudioSource') or (local-name(..) = 'WaveShaper'))">
                                                <xsl:text>children</xsl:text>
                                                <xsl:if test="(@containerField = 'source') or (@containerField = 'texture') or (string-length(@containerField) = 0)">
                                                    <xsl:message>
                                                        <xsl:text>*** containerField incorrect #1 for </xsl:text>
                                                        <xsl:value-of select="local-name()"/>
                                                        <xsl:text> with parent </xsl:text>
                                                        <xsl:value-of select="local-name(..)"/>
                                                        <xsl:text>, reset to children</xsl:text>
                                                    </xsl:message>
                                                </xsl:if>
                                            </xsl:when>
                                            <!-- HAnimHumanoid can contain HAnimJoint with containerField = joints or skeleton -->
                                            <!-- HAnimHumanoid can contain HAnimSite  with containerField = sites, skeleton or viewpoints -->
                                            <!-- HAnimHumanoid can contain X3DCoordinateNode with containerField = skinCoord or skinBindingCoords -->
                                            <!-- HAnimHumanoid can contain X3DNormalNode with containerField = skinNormal or skinBindingNormals -->
                                            <xsl:otherwise>
                                                <xsl:call-template name="fieldNameChanges"/>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:variable>
                                    <!-- debug
                                    <xsl:if test="(string-length($expectedContainerField) = 0) and (local-name(..) = 'HAnimHumanoid')">
                                        <xsl:message>
                                            <xsl:text>*** containerField not defined for</xsl:text>
                                            <xsl:value-of select="local-name()"/>
                                            <xsl:text> with parent HAnimHumanoid</xsl:text>
                                        </xsl:message>
                                    </xsl:if>
                                    -->
                                    <xsl:choose>
                                        <!-- check each node in skeleton, all should have DEF and none should have USE -->
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
                                        <!-- check top-level USE node within HAnimHumanoid, check if corresponding DEF node found -->
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
                                    </xsl:choose>
                                    <!-- continue checking even if one of preceding tests report problems -->
                                    <xsl:choose>
                                        <!-- check if containerField present for top-level HAnimHumanoid contained USE -->
                                        <xsl:when test="(parent::*[local-name() = 'HAnimHumanoid']) and (string-length(@USE) > 0) and 
                                                        ((local-name() = 'HAnimJoint') or (local-name() = 'HAnimSegment') or (local-name() = 'HAnimSite')) and
                                                        ((string-length(@containerField) = 0) or (@containerField = 'children'))">
                                                <!-- cannot use prior variable $expectedContainerField because not defined yet -->
                                                <xsl:variable name="newExpectedContainerField">
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
                                                <xsl:message>
                                                    <xsl:text>*** error: HAnimHumanoid DEF='</xsl:text>
                                                    <xsl:value-of select="@DEF"/>
                                                    <xsl:text>' / </xsl:text>
                                                    <xsl:value-of select="local-name()"/>
                                                    <xsl:text> USE='</xsl:text>
                                                    <xsl:value-of select="@USE"/>
                                                    <xsl:text>' has incorrect containerField definition (default is 'children'), ass containerField='</xsl:text>
                                                    <xsl:value-of select="$newExpectedContainerField"/>
                                                    <xsl:text disable-output-escaping="yes">'</xsl:text>
                                                </xsl:message>
                                                <!-- TODO this fix didn't go where desired, need to fix -->
                                                <xsl:text> containerField='</xsl:text>
                                                <xsl:value-of select="$newExpectedContainerField"/>
                                                <xsl:text>'</xsl:text>
                                        </xsl:when>
                                        <!-- check top-level HAnimSite node, special case -->
                                        <xsl:when test="(parent::*[local-name() = 'HAnimHumanoid']) and (local-name() = 'HAnimSite') and
                                                        (string-length(@USE) = 0) and ends-with(@name,'_view')">
                                            <xsl:if test="not(Viewpoint)">
                                                <xsl:message>
                                                    <xsl:text>*** warning: no child Viewpoint found for top-level &lt;</xsl:text>
                                                    <xsl:value-of select="local-name()"/>
                                                    <xsl:text> DEF='</xsl:text>
                                                    <xsl:value-of select="@DEF"/>
                                                    <xsl:text>' name='</xsl:text>
                                                    <xsl:value-of select="@name"/>
                                                    <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                                </xsl:message>
                                            </xsl:if>
                                        </xsl:when>  
                                        <xsl:otherwise>
                                            <xsl:variable name="nodeType" select="local-name()"/>
                                            <xsl:variable name="nodeDEF"  select="@DEF"/>
                                            <!-- check some special cases that are unambiguously fixable -->
                                            <xsl:if test="(string-length($expectedContainerField) > 0) and not($expectedContainerField = @containerField)">
                                                <!-- debug
                                                <xsl:message>
                                                    <xsl:text>*** containerField mismatch - found it #1 </xsl:text>
                                                    <xsl:value-of select="local-name()"/>
                                                    <xsl:text> DEF='</xsl:text>
                                                    <xsl:value-of select="@DEF"/>
                                                    <xsl:if test="(string-length(@name) > 0)">
                                                        <xsl:text>' name='</xsl:text>
                                                        <xsl:value-of select="@name"/>
                                                    </xsl:if>
                                                    <xsl:text>' containerField='</xsl:text>
                                                    <xsl:value-of select="@containerField"/>
                                                    <xsl:text>'</xsl:text>
                                                    <xsl:text> expectedContainerField='</xsl:text>
                                                    <xsl:value-of select="$expectedContainerField"/>
                                                    <xsl:text>'</xsl:text>
                                                </xsl:message>
                                                -->
                                            </xsl:if>
                                            <xsl:if test="not(ancestor::*[local-name() = 'HAnimHumanoid']/*[local-name() = $nodeType][@USE = $nodeDEF])">
                                                <!-- not corresponding USE node found under ancestor HAnimHumanoid -->
                                                <xsl:choose>
                                                    <xsl:when test="(string-length(@USE) = 0) and (string-length(@name) = 0)">
                                                        <!-- no name node found for this skeleton node, simply report it -->
                                                        <xsl:message>
                                                            <xsl:text disable-output-escaping="yes">*** error: name missing for node contained in HAnimHumanoid &lt;</xsl:text>
                                                            <xsl:value-of select="local-name()"/>
                                                            <xsl:text> name='</xsl:text>
                                                            <xsl:value-of select="@name"/>
                                                            <xsl:text>' DEF='</xsl:text>
                                                            <xsl:value-of select="@DEF"/><!-- in case it is there -->
                                                            <xsl:text>' containerField='</xsl:text>
                                                            <xsl:value-of select="@containerField"/>
                                                            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                                            <xsl:text> within ancestor </xsl:text>
                                                            <xsl:text disable-output-escaping="yes">&lt;HAnimHumanoid name='</xsl:text>
                                                            <xsl:value-of select="$hanimHumanoidName"/>
                                                            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                                        </xsl:message>
                                                    </xsl:when>
                                                    <xsl:when test="(string-length(@DEF) = 0) and (string-length(@name) > 0)">
                                                        <!-- no top-level USE node found for this skeleton node, but no DEF found either so can't add it -->
                                                        <xsl:message>
                                                            <xsl:text disable-output-escaping="yes">*** error: no top-level &lt;</xsl:text>
                                                            <xsl:value-of select="local-name()"/>
                                                            <xsl:text> USE='</xsl:text>
                                                            <xsl:text>prefix_</xsl:text>
                                                            <xsl:value-of select="@name"/>
                                                            <xsl:text>' containerField='</xsl:text>
                                                            <xsl:value-of select="$expectedContainerField"/>
                                                            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                                            <xsl:text> was found for name='</xsl:text>
                                                            <xsl:value-of select="@name"/>
                                                            <xsl:text>' was found, but cannot add it to ancestor </xsl:text>
                                                            <xsl:text disable-output-escaping="yes">&lt;HAnimHumanoid name='</xsl:text>
                                                            <xsl:value-of select="$hanimHumanoidName"/>
                                                            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                                            <xsl:text> since no DEF found either </xsl:text>
                                                            <!-- fix both DEF and USE if name found -->
                                                        </xsl:message>
                                                        <xsl:text>        </xsl:text>
                                                        <xsl:comment>
                                                            <xsl:text disable-output-escaping="yes"> missing USE </xsl:text>
                                                            <xsl:value-of select="local-name()"/>
                                                            <xsl:text> USE='</xsl:text>
                                                            <xsl:value-of select="@DEF"/>
                                                            <xsl:text>' containerField='</xsl:text>
                                                            <xsl:value-of select="$expectedContainerField"/>
                                                            <xsl:text disable-output-escaping="yes">'/&gt; </xsl:text>
                                                        </xsl:comment>
                                                        <xsl:text>&#10;</xsl:text>
                                                    </xsl:when>
                                                    <xsl:when test="(string-length(@DEF) = 0)">
                                                        <!-- no top-level USE node found for this skeleton node, but no DEF found either so can't add it -->
                                                    </xsl:when>
                                                    <xsl:otherwise>
                                                        <!-- no top-level USE node found for this HAnimHumanoid child node, so add it -->
                                                        <!-- cannot use prior variable $expectedContainerField because node did not exist yet -->
                                                        <xsl:variable name="newExpectedContainerField">
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
                                                        <xsl:message>
                                                            <xsl:text disable-output-escaping="yes">*** error: no top-level &lt;</xsl:text>
                                                            <xsl:value-of select="local-name()"/>
                                                            <xsl:text> USE='</xsl:text>
                                                            <xsl:value-of select="@DEF"/>
                                                            <xsl:text>' containerField='</xsl:text>
                                                            <xsl:value-of select="$newExpectedContainerField"/>
                                                            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                                            <xsl:text> was found, adding it to ancestor </xsl:text>
                                                            <xsl:text disable-output-escaping="yes">&lt;HAnimHumanoid name='</xsl:text>
                                                            <xsl:value-of select="$hanimHumanoidName"/>
                                                            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                                        </xsl:message>
                                                        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                                                        <xsl:value-of select="local-name()"/>
                                                        <xsl:text> USE='</xsl:text>
                                                        <xsl:value-of select="@DEF"/>
                                                        <xsl:text>' containerField='</xsl:text>
                                                        <xsl:value-of select="$newExpectedContainerField"/>
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
                            <xsl:when test="(local-name()='HAnimJoint') and not(string-length(@USE) > 0) and (count(Transform) = 1)">
                                <!-- mismatched positioning of HAnimSegment child geometry relative to parent HAnimJoint -->
                                <xsl:message>
                                    <xsl:text disable-output-escaping="yes">*** error: &lt;</xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text> DEF='</xsl:text>
                                    <xsl:value-of select="@DEF"/>
                                    <xsl:text>' name='</xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text>' center='</xsl:text>
                                    <xsl:value-of select="@center"/>
                                    <xsl:text disable-output-escaping="yes">'&gt; contains immediate child </xsl:text>
                                    <xsl:text disable-output-escaping="yes">&lt;Transform</xsl:text>
                                    <xsl:text> DEF='</xsl:text>
                                    <xsl:value-of select="Transform/@DEF"/>
                                    <xsl:text>' translation='</xsl:text>
                                    <xsl:value-of select="Transform/@translation"/>
                                    <xsl:text disable-output-escaping="yes">'&gt; node, moving it into first child &lt;HAnimSegment</xsl:text>
                                    <xsl:text> DEF='</xsl:text>
                                    <xsl:value-of select="HAnimSegment[1]/@DEF"/>
                                    <xsl:text>' name='</xsl:text>
                                    <xsl:value-of select="HAnimSegment[1]/@name"/>
                                    <xsl:text>'&gt;</xsl:text>
                                </xsl:message>
                                <!-- corrected constructs -->
                                <xsl:variable name="firstHAnimSegmentName">
                                    <xsl:choose>
                                        <xsl:when test="(string-length(HAnimSegment[1]/@name) > 0)">
                                            <xsl:value-of select="HAnimSegment[1]/@name"/>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <xsl:message>
                                                <xsl:text disable-output-escaping="yes">*** error: missing that first child, also inserted &lt;HAnimSegment name='</xsl:text>
                                                <xsl:text disable-output-escaping="yes">segmentNameNeededTODO-</xsl:text>
                                                <xsl:value-of select="count(preceding::*)"/><!-- unique -->
                                                <xsl:text disable-output-escaping="yes">'&gt;</xsl:text>
                                            </xsl:message>
                                            <xsl:text>segmentNameNeededTODO-</xsl:text>
                                            <xsl:value-of select="count(preceding::*)"/><!-- unique -->
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:variable>
                                <xsl:variable name="firstHAnimSegmentDEF">
                                    <xsl:choose>
                                        <xsl:when test="(string-length(HAnimSegment[1]/@DEF) > 0)">
                                            <xsl:value-of select="HAnimSegment[1]/@DEF"/>
                                        </xsl:when>
                                        <xsl:otherwise>
                                            <!-- debug 
                                            <xsl:message>
                                                <xsl:text>    DEF='</xsl:text>
                                                <xsl:value-of select="substring-before(ancestor::HAnimHumanoid/@DEF,'_')"/>
                                                <xsl:text>_</xsl:text>
                                                <xsl:value-of select="$firstHAnimSegmentName"/>
                                                <xsl:text disable-output-escaping="yes">'&gt;</xsl:text>
                                            </xsl:message>
                                            -->
                                            <xsl:value-of select="substring-before(ancestor::HAnimHumanoid/@DEF,'_')"/>
                                            <xsl:text>_</xsl:text>
                                            <xsl:value-of select="$firstHAnimSegmentName"/>
                                        </xsl:otherwise>
                                    </xsl:choose>
                                </xsl:variable>
                                <xsl:text disable-output-escaping="yes">&lt;HAnimSegment DEF='</xsl:text>
                                <xsl:value-of select="$firstHAnimSegmentDEF"/>
                                <xsl:text disable-output-escaping="yes">' name='</xsl:text>
                                <xsl:value-of select="$firstHAnimSegmentName"/>
                                <xsl:text disable-output-escaping="yes">'</xsl:text>
                                <xsl:apply-templates select="HAnimSegment[1]/@*[not(local-name()='DEF')][not(local-name()='name')]">
                                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                                </xsl:apply-templates>
                                <xsl:text disable-output-escaping="yes">&gt; </xsl:text>
                                <xsl:apply-templates select="Transform"/><!-- move current too-high child Transform into subtree -->
                                <xsl:apply-templates select="HAnimSegment[1]/Transform"/><!-- plus any other contained Transform nodes go here, side by side -->
                                <xsl:apply-templates select="HAnimSegment[1]/*[not(local-name() = 'Transform')]"/><!-- plus any other contained children nodes -->
                                <xsl:text disable-output-escaping="yes">&lt;/HAnimSegment&gt;</xsl:text>
                                <xsl:choose>
                                    <xsl:when test="HAnimSegment">
                                        <xsl:apply-templates select="*[preceding-sibling::HAnimSegment[1]][not(local-name() = 'Transform')]"/>
                                        <xsl:apply-templates select="*[following-sibling::HAnimSegment[1]][not(local-name() = 'Transform')]"/>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:apply-templates select="*[not(local-name() = 'Transform')]"/>
                                    </xsl:otherwise>
                                </xsl:choose>
                                <!-- then recurse on others
                                <xsl:apply-templates select="*[not((local-name()='HAnimSegment') and (@name = $firstHAnimSegmentName)) and not(local-name() = 'Transform')]"/>< ! - - remainder of subtree -->
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
                            <xsl:when test="(local-name()='Scene') or (local-name()='ProtoBody')">
                                <!-- do not sort top-level nodes or comments, Metadata nodes may be interspersed -->
                                <xsl:apply-templates select="* | comment()"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- some sorting may be needed to maintain correct ordering of XML child nodes -->
                                <!-- handle initial comments -->
                                <xsl:apply-templates select="comment()[count(preceding-sibling::*) = 0]"/>
                                <!-- handle children of current node (including USE node) without special treatment, in preferred order of SFNode fields first -->
                                <xsl:if test="(count(*[(local-name() = 'field') or (local-name() = 'fieldValue')]) > 0)">
                                    <xsl:apply-templates select="*[(local-name() = 'field') or (local-name() = 'fieldValue')] | comment()[count(preceding-sibling::*) > 0]"/>
                                </xsl:if>
                                <xsl:apply-templates select="*[local-name() = 'IS']"/>
                                <xsl:apply-templates select="*[starts-with(local-name(), 'Metadata') and (@containerField = 'metadata')]"/>
                                <xsl:apply-templates select="*[local-name() = 'GeoOrigin']"/>
                                <!-- and now the remainder, with some fancy footwork to avoid duplicating comments -->
                                <xsl:choose>
                                    <xsl:when test="(count(*[(local-name() = 'field') or (local-name() = 'fieldValue')]) > 0)">
                                        <xsl:apply-templates select="*[not((local-name() = 'field') or (local-name() = 'fieldValue'))]
                                                                      [not(local-name() = 'IS')]
                                                                      [not(starts-with(local-name(), 'Metadata') and (@containerField = 'metadata'))]
                                                                      [not(local-name() = 'GeoOrigin')]"/> <!--  no comment() since already handled -->
                                    </xsl:when>
                                    <xsl:when test="(count(*[(local-name() = 'Normal')]) > 0) and
                                                    ($removeNormals = 'true')">
                                        <xsl:if test="($removeColors = 'true') and
                                                      (count(*[starts-with(local-name(), 'Color')]) > 0)">
                                            <xsl:message>
                                                <xsl:text>*** simultaneous removeNormals and removeColors can have unintended side effects on each other, you may need to run X3dTidy twice to remove everything</xsl:text>
                                            </xsl:message>
                                        </xsl:if>
                                        <!-- Normal information is easily calculated by GPU and so can unnecessarily add to file size -->
                                        <!-- same as following block, but omitting Normal -->
                                        <xsl:apply-templates select="*[not((local-name() = 'field') or (local-name() = 'fieldValue'))]
                                                                      [not(local-name() = 'Normal')]
                                                                      [not(local-name() = 'IS')]
                                                                      [not(starts-with(local-name(), 'Metadata') and (@containerField = 'metadata'))]
                                                                      [not(local-name() = 'GeoOrigin')] | comment()[count(preceding-sibling::*) > 0]"/> <!--  | text() -->
                                        <xsl:message>
                                            <xsl:text>*** removeNormals: found and omitted </xsl:text>
                                            <xsl:text>Normal node: </xsl:text>
                                            <xsl:text>IndexedFaceSet</xsl:text>
                                            <xsl:if test="(string-length(@DEF)  > 0)">
                                               <xsl:text> DEF='</xsl:text>
                                               <xsl:value-of select="@DEF"/>
                                               <xsl:text>'</xsl:text>
                                            </xsl:if>
                                            <xsl:text> / </xsl:text>
                                            <xsl:text>Normal</xsl:text>
                                            <xsl:choose>
                                                <xsl:when test="(string-length(Normal/@DEF)  > 0)">
                                                   <xsl:text> DEF='</xsl:text>
                                                   <xsl:value-of select="Normal/@DEF"/>
                                                   <xsl:text>'</xsl:text>
                                                </xsl:when>
                                                <xsl:when test="(string-length(Normal/@USE)  > 0)">
                                                   <xsl:text> USE='</xsl:text>
                                                   <xsl:value-of select="Normal/@USE"/>
                                                   <xsl:text>'</xsl:text>
                                                </xsl:when>
                                            </xsl:choose>
                                        </xsl:message>
                                    </xsl:when>
                                    <xsl:when test="(count(*[starts-with(local-name(), 'Color')]) > 0) and
                                                    ($removeColors = 'true')">
                                        <xsl:variable name="hasNonzeroColorIndexValues" select="(string-length(normalize-space(translate(@colorIndex,'0',''))) > 0)"/>
                                        <!-- debug
                                        <xsl:message>
                                            <xsl:text disable-output-escaping="yes">node precondition: $hasNonzeroColorIndexValues=</xsl:text>
                                            <xsl:value-of select="$hasNonzeroColorIndexValues"/>
                                        </xsl:message> -->
                                        <xsl:choose>
                                            <xsl:when test="$hasNonzeroColorIndexValues"> 
                                                <xsl:message>
                                                    <xsl:text disable-output-escaping="yes">*** removeColors: since colorIndex has nonzero values, </xsl:text>
                                                    <xsl:value-of select="local-name(*[starts-with(local-name(), 'Color')][1])"/>
                                                    <xsl:text disable-output-escaping="yes"> node not removed</xsl:text>
                                                </xsl:message>
                                                <xsl:apply-templates select="*"/>
                                            </xsl:when>
                                            <xsl:otherwise>
                                                <!-- Simple color nodes are not needed if a Material node is present-->
                                                <!-- same as following block, but omitting Color and ColorRGBA -->
                                                <xsl:apply-templates select="*[not((local-name() = 'field') or (local-name() = 'fieldValue'))]
                                                                              [not(local-name() = 'Color')]
                                                                              [not(local-name() = 'ColorRGBA')]
                                                                              [not(local-name() = 'IS')]
                                                                              [not(starts-with(local-name(), 'Metadata'))]
                                                                              [not(local-name() = 'GeoOrigin')] | comment()[count(preceding-sibling::*) > 0]"/> <!--  | text() -->
                                                <xsl:message>
                                                    <xsl:text>*** removeColors: found and omitted duplicative </xsl:text>
                                                    <xsl:text>Color node: </xsl:text>
                                                    <xsl:text>IndexedFaceSet</xsl:text>
                                                    <xsl:if test="(string-length(@DEF)  > 0)">
                                                       <xsl:text> DEF='</xsl:text>
                                                       <xsl:value-of select="@DEF"/>
                                                       <xsl:text>'</xsl:text>
                                                    </xsl:if>
                                                    <xsl:text> / </xsl:text>
                                                    <xsl:choose>
                                                        <xsl:when test="Color">
                                                            <xsl:text>Color</xsl:text>
                                                        </xsl:when>
                                                        <xsl:when test="ColorRGBA">
                                                            <xsl:text>ColorRGBA</xsl:text>
                                                        </xsl:when>
                                                    </xsl:choose>
                                                    <xsl:choose>
                                                        <xsl:when test="(string-length(Color/@DEF)  > 0)">
                                                            <xsl:text> DEF='</xsl:text>
                                                            <xsl:value-of select="Color/@DEF"/>
                                                            <xsl:text>' color='</xsl:text>
                                                       <xsl:value-of select="@color"/>
                                                       <xsl:text>'</xsl:text>
                                                        </xsl:when>
                                                        <xsl:when test="(string-length(Color/@USE)  > 0)">
                                                            <xsl:text> USE='</xsl:text>
                                                            <xsl:value-of select="Color/@USE"/>
                                                            <xsl:text>'</xsl:text>
                                                        </xsl:when>
                                                        <xsl:when test="(string-length(ColorRGBA/@DEF)  > 0)">
                                                            <xsl:text>ColorRGBA</xsl:text>
                                                            <xsl:text> DEF='</xsl:text>
                                                            <xsl:value-of select="ColorRGBA/@DEF"/>
                                                            <xsl:text>' color='</xsl:text>
                                                       <xsl:value-of select="@color"/>
                                                       <xsl:text>'</xsl:text>
                                                        </xsl:when>
                                                        <xsl:when test="(string-length(ColorRGBA/@USE)  > 0)">
                                                            <xsl:text>ColorRGBA</xsl:text>
                                                            <xsl:text> USE='</xsl:text>
                                                            <xsl:value-of select="ColorRGBA/@USE"/>
                                                            <xsl:text>'</xsl:text>
                                                        </xsl:when>
                                                    </xsl:choose>
                                                </xsl:message>
                                            </xsl:otherwise>
                                        </xsl:choose>
                                    </xsl:when>
                                    <xsl:otherwise>
                                        <xsl:apply-templates select="*[not((local-name() = 'field') or (local-name() = 'fieldValue'))]
                                                                      [not(local-name() = 'IS')]
                                                                      [not(starts-with(local-name(), 'Metadata') and (@containerField = 'metadata'))]
                                                                      [not(local-name() = 'GeoOrigin')] | comment()[count(preceding-sibling::*) > 0]"/> <!--  | text() -->
                                    </xsl:otherwise>
                                </xsl:choose>
                            </xsl:otherwise>
                        </xsl:choose>

                        <xsl:for-each select="ancestor::*">
                            <xsl:text>  </xsl:text>
                        </xsl:for-each><!-- indent -->
                        <!-- close tag for this element -->
                        <xsl:text disable-output-escaping="yes">&lt;/</xsl:text>
                        <xsl:value-of select="$elementName"/>
                        <xsl:text disable-output-escaping="yes">&gt;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <!-- current node and contained content complete -->
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:when>
            <xsl:otherwise>
                <!-- singleton tag, no children, no contained script -->
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="$elementName"/>
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

        <!-- post-processing -->
        <xsl:if test="(local-name()='HAnimHumanoid')">
            <!-- used in X3dTidy.xslt and X3dToXhtml.xslt -->
            <xsl:variable name="isHAnim1" select="$isX3D3 and (starts-with(@version,'1') or (string-length(@version) = 0))"/>
            <xsl:variable name="isHAnim2" select="$isX3D4 and  starts-with(@version,'2')"/>
            <xsl:if test="($isHAnim1 = true()) and ($isHAnim2 = true())">
                <xsl:message>
                    <xsl:text>*** error in X3dTidy.xslt internal logic, $isHAnim1 and $isHAnim2 are both true, HAnimHumanoid post-processing </xsl:text>
                </xsl:message>
            </xsl:if>
            <xsl:message>
                <!-- debug
                <xsl:text>*** output-humanoid-tree HAnimHumanoid commencing</xsl:text>
                <xsl:text>&#10;</xsl:text>
                -->
                <xsl:call-template name="output-humanoid-tree">
                    <xsl:with-param name="currentNode" select="self::node()"/>
                    <xsl:with-param name="treeMargin"><xsl:text></xsl:text></xsl:with-param>
                </xsl:call-template>
            </xsl:message>
        </xsl:if>
    </xsl:template>

    <xsl:template name="process-attributes-in-order">
        <!-- debug
        <xsl:if test="(local-name() = 'AudioClip')">
            <xsl:message>
                <xsl:text disable-output-escaping="yes"> * process-attributes-in-order </xsl:text>
                <xsl:value-of select="local-name()"/>
            </xsl:message>
        </xsl:if>
        -->
        
        <xsl:variable name="isHAnim"  select="starts-with(local-name(),'HAnim')"/>
        <xsl:variable name="isHAnim1" select="$isX3D3 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'1') or (string-length(@version) = 0)])"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'2')])"/>
        <xsl:if test="($isHAnim1 = true()) and ($isHAnim2 = true())">
            <xsl:message>
                <xsl:text>*** error in X3dTidy.xslt internal logic, $isHAnim1 and $isHAnim2 cannot both be true at same time, process-attributes-in-order entry </xsl:text>
            </xsl:message>
        </xsl:if>
        <xsl:variable name="DEF"      select="@DEF"/>
        <xsl:variable name="USE"      select="@USE"/>
        <xsl:variable name="fromNode" select="@fromNode"/>
        <xsl:variable name="toNode"   select="@toNode"/>
        <xsl:variable name="nameValue">
            <xsl:choose>
                <!-- first check DEF node for name if this is a USE node -->
                <xsl:when test="(string-length($USE) > 0) and
                                (string-length(//*[@DEF=$USE][1]/@name) > 1)"><!-- [1] avoids XSLT typing difficulty, only one DEF is expected -->
                    <xsl:value-of      select="//*[@DEF=$USE][1]/@name"/>
                </xsl:when>
                <!-- next check DEF node for name if this is a ROUTE fromNode attribute -->
                <xsl:when test="(string-length($fromNode) > 0) and
                                (string-length(//*[@DEF=$fromNode][1]/@name) > 1)">
                    <xsl:value-of      select="//*[@DEF=$fromNode][1]/@name"/>
                </xsl:when>
                <!-- next check DEF node for name if this is a ROUTE toNode attribute -->
                <xsl:when test="(string-length($toNode) > 0) and
                                (string-length(//*[@DEF=$toNode][1]/@name) > 1)">
                    <xsl:value-of      select="//*[@DEF=$toNode][1]/@name"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="@name"/><!-- same name from current node, if any -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="hanimSuffixDEF">
            <xsl:choose>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($DEF,'_pt')">
                    <xsl:text>_pt</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($DEF,'_tip')">
                    <xsl:text>_tip</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($DEF,'_view')">
                    <xsl:text>_view</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="hanimSuffixName">
            <xsl:choose>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_pt')">
                    <xsl:text>_pt</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_tip')">
                    <xsl:text>_tip</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_view')">
                    <xsl:text>_view</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <!-- debug
        <xsl:message>
            <xsl:if test="(string-length($hanimSuffixName) = 0) and (string-length($hanimSuffixDEF) > 0)">
                <xsl:text>$hanimSuffixDEF=</xsl:text>
                <xsl:value-of select="$hanimSuffixDEF"/>
                <xsl:text>, $hanimSuffixName=</xsl:text>
                <xsl:value-of select="$hanimSuffixName"/>
                <xsl:text> #1</xsl:text>
            </xsl:if>
        </xsl:message> -->
        <xsl:variable name="hanimAliasReplacementName">
            <xsl:call-template name="newHAnimNameValue">
                <xsl:with-param name="nameValue">
                    <xsl:value-of select="$nameValue"/>
                    <!-- mismatched suffixes diagnostic and correction; HAnimSite DEF has expected suffix but @name has none -->
                    <xsl:if test="(string-length($hanimSuffixName) = 0) and (string-length($hanimSuffixDEF) > 0)">
                        <xsl:value-of select="$hanimSuffixDEF"/>
                        <xsl:message>
                            <xsl:text>*** </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="$DEF"/>
                            <xsl:text>' has suffix '</xsl:text>
                            <xsl:value-of select="$hanimSuffixDEF"/>
                            <xsl:text>' but name='</xsl:text>
                            <xsl:value-of select="$nameValue"/>
                            <xsl:text>' has no suffix, thus append '</xsl:text>
                            <xsl:value-of select="$hanimSuffixDEF"/>
                            <xsl:text>' when constructing new name value #1</xsl:text>
                            <xsl:text> (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
                        </xsl:message>
                    </xsl:if>
                </xsl:with-param>
                <xsl:with-param name="nodeName" ><xsl:value-of select="local-name()"/></xsl:with-param>
            </xsl:call-template>
        </xsl:variable>
        <xsl:variable name="rootHumanoidDEF">
            <xsl:choose>
                <!-- direct ancestor -->
                <xsl:when    test="(count(ancestor-or-self::*[local-name() = 'HAnimHumanoid']/HAnimJoint) > 0)">
                    <xsl:value-of select="ancestor-or-self::*[local-name() = 'HAnimHumanoid']/HAnimJoint/@DEF"/>
                </xsl:when>
                <!-- first humanoid appearing anywhere in current scene -->
                <xsl:when test="(count(//HAnimHumanoid/HAnimJoint) > 0)">
                    <xsl:value-of select="//HAnimHumanoid/HAnimJoint/@DEF"/>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="rootHumanoidName">
            <xsl:choose>
                <!-- direct ancestor -->
                <xsl:when    test="(count(ancestor-or-self::*[local-name() = 'HAnimHumanoid']/HAnimJoint) > 0)">
                    <xsl:value-of select="ancestor-or-self::*[local-name() = 'HAnimHumanoid']/HAnimJoint/@name"/>
                </xsl:when>
                <!-- first humanoid appearing anywhere in current scene -->
                <xsl:when test="(count(//HAnimHumanoid/HAnimJoint) > 0)">
                    <xsl:value-of select="//HAnimHumanoid/HAnimJoint/@name"/>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="prefixHAnimHumanoidName">
            <xsl:choose>
                <xsl:when test="(string-length($rootHumanoidName) > 0) and
                                                       ends-with($rootHumanoidDEF,$rootHumanoidName)">
                    <xsl:value-of       select="substring-before($rootHumanoidDEF,$rootHumanoidName)"/>
                    <xsl:if test="not(ends-with(substring-before($rootHumanoidDEF,$rootHumanoidName),'_'))">
                        <xsl:text>_</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>hanim_</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="newDEFvalue">
            <xsl:choose>
                <xsl:when test="(string-length($nameValue) = 0)">
                    <xsl:value-of select="@DEF"/>
                </xsl:when>
                <xsl:when test="($hanimAliasReplacementName = $nameValue)">
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$nameValue)"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$hanimAliasReplacementName)"/>
                </xsl:otherwise>
            </xsl:choose>
            <!-- mismatched suffixes diagnostic and correction; HAnimSite DEF has expected suffix but @name has none -->
            <xsl:if test="(string-length($hanimSuffixName) = 0) and (string-length($hanimSuffixDEF) > 0)">
                <xsl:value-of select="$hanimSuffixDEF"/>
                <xsl:message>
                    <xsl:text>*** </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> DEF='</xsl:text>
                    <xsl:value-of select="$DEF"/>
                    <xsl:text>' has suffix '</xsl:text>
                    <xsl:value-of select="$hanimSuffixDEF"/>
                    <xsl:text>' but name='</xsl:text>
                    <xsl:value-of select="$nameValue"/>
                    <xsl:text>' has no suffix, thus append '</xsl:text>
                    <xsl:value-of select="$hanimSuffixDEF"/>
                    <xsl:text>' when constructing new  DEF value #2</xsl:text>
                    <xsl:text> (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
                </xsl:message>
            </xsl:if>
        </xsl:variable>
        <xsl:variable name="newUSEvalue">
            <xsl:choose>
                <xsl:when test="$isHAnim and (string-length($nameValue) > 0) and ($hanimAliasReplacementName = $nameValue)">
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$nameValue)"/>
                    <!-- <xsl:message><xsl:text>test5</xsl:text></xsl:message> -->
                </xsl:when>
                <xsl:when test="(string-length($nameValue) = 0) and ((local-name() = 'USE') or (local-name() = 'fromNode') or (local-name() = 'toNode'))">
                    <xsl:value-of select="."/>
                    <!-- <xsl:message><xsl:text>test6</xsl:text></xsl:message> -->
                </xsl:when>
                <xsl:when test="(string-length($nameValue) = 0)">
                    <xsl:value-of select="."/>
                    <!-- <xsl:message><xsl:text>test7</xsl:text></xsl:message> -->
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$hanimAliasReplacementName)"/>
                    <!-- <xsl:message><xsl:text>test8</xsl:text></xsl:message> -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <!-- debug
        <xsl:if test="((local-name() = 'USE') or (local-name() = 'fromNode') or (local-name() = 'toNode'))">
            <xsl:message>
                <xsl:text>version 1 $newUSEvalue=</xsl:text>
                <xsl:value-of select="$newUSEvalue"/>
            </xsl:message>
        </xsl:if>
        -->
        <xsl:variable name="hasHAnim" select="(count(//*[starts-with(local-name(..),'HAnim')]) > 0)"/>
        
        <!-- debug
        <xsl:message>
            <xsl:text>*** $hasHAnim=</xsl:text>
            <xsl:value-of select="$hasHAnim"/>
        </xsl:message>
        <xsl:if test="$isHAnim">
            <xsl:message>
                <xsl:text>*** process-attributes-in-order </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:if test="(string-length(@name) > 0)">
                    <xsl:text> @DEF='</xsl:text>
                    <xsl:value-of select="@DEF"/>
                    <xsl:text>' @name='</xsl:text>
                    <xsl:value-of select="@name"/>
                </xsl:if>
                <xsl:if test="(string-length(@USE) > 0)">
                    <xsl:text> @USE='</xsl:text>
                    <xsl:value-of select="@USE"/>
                </xsl:if>
                <xsl:text>' $hanimAliasReplacementName='</xsl:text>
                <xsl:value-of select="$hanimAliasReplacementName"/>
                <xsl:text>' $newDEFvalue='</xsl:text>
                <xsl:value-of select="$newDEFvalue"/>
                <xsl:text>' $rootHumanoidDEF='</xsl:text>
                <xsl:value-of select="$rootHumanoidDEF"/>
                <xsl:text>' $rootHumanoidName='</xsl:text>
                <xsl:value-of select="$rootHumanoidName"/>
                <xsl:text>' $prefixHAnimHumanoidName='</xsl:text>
                <xsl:value-of select="$prefixHAnimHumanoidName"/>
                <xsl:text>'</xsl:text>
            </xsl:message>
        </xsl:if> -->
        <!-- this template is shared among X3dToXhtml.xslt and X3dTidy.xslt -->
        <xsl:choose>
            <xsl:when test="(string-length(@USE) > 0)">
                <!-- no other attributes allowed with USE except containerField; show DEF to propagate error if it is there -->
                <xsl:apply-templates select="@DEF">
                    <xsl:with-param name="prefixHAnimHumanoidName"  select="$prefixHAnimHumanoidName"/>
                    <xsl:with-param name=    "isHAnim1" select="$isHAnim1"/>
                    <xsl:with-param name=    "isHAnim2" select="$isHAnim2"/>
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                
                <!-- debug
                <xsl:if test="(local-name() = 'ProtoInstance')">
                    <xsl:message>
                        <xsl:text>*** reached this point... local-name()=</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> USE='</xsl:text>
                        <xsl:value-of select="@USE"/>
                        <xsl:text>' name='</xsl:text>
                        <xsl:value-of select="@name"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:if> -->
                
                <xsl:choose>
                    <!-- insert name of ProtoInstance if missing for a USE node, plus other attributes -->
                    <xsl:when test="(local-name() = 'ProtoInstance') and (string-length(@USE) > 0)">
                        <xsl:variable name="USEname" select="@USE"/>
                        <xsl:variable name="protoName">
                            <xsl:choose>
                                <xsl:when test="(string-length(@name) > 0)">
                                    <xsl:value-of select="@name"/>
                                </xsl:when>
                                <xsl:when test="(string-length(//ProtoInstance[@DEF = $USEname][1]/@name) > 0)">
                                    <xsl:value-of select="//ProtoInstance[@DEF = $USEname][1]/@name"/>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text>PrototypeNameNotFound</xsl:text>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:variable>
                        <xsl:variable name="addNameAttribute">
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="$USEname"/>
                            <xsl:text>'</xsl:text>
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="$protoName"/>
                            <xsl:text>'</xsl:text>
                            <!--
                            <xsl:if test="(string-length(@containerField) > 0) and not(@containerField = 'children')">
                                <xsl:text> containerField='</xsl:text>
                                <xsl:value-of select="@containerField"/>
                                <xsl:text>'</xsl:text>
                            </xsl:if>
                                -->
                        </xsl:variable>
                        <xsl:value-of select="$addNameAttribute"/>
                        <xsl:message>
                            <xsl:text disable-output-escaping="yes">*** &lt;ProtoInstance USE='</xsl:text>
                            <xsl:value-of select="$USEname"/>
                            <xsl:if test="(string-length(@containerField) > 0) and not(@containerField = 'children')">
                                <xsl:text disable-output-escaping="yes">' containerField='</xsl:text>
                                <xsl:value-of select="@containerField"/>
                            </xsl:if>
                            <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                            <xsl:text> is missing name field, searched for ProtoInstance DEF='</xsl:text>
                            <xsl:value-of select="$USEname"/>
                            <xsl:text disable-output-escaping="yes">'</xsl:text>
                            <xsl:choose>
                                <xsl:when test="(string-length($protoName) > 0)">
                                    <xsl:text disable-output-escaping="yes">, found DEF name for</xsl:text>
                                    <xsl:value-of select="$addNameAttribute"/>
                                </xsl:when>
                                <xsl:when test="(count(//ProtoInstance[@DEF = $USEname][1]) = 0)">
                                    <xsl:text disable-output-escaping="yes"> but did not find corresponding ProtoInstance</xsl:text>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text disable-output-escaping="yes"> but did not find corresponding name</xsl:text>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:message>
                    </xsl:when>
                    <xsl:when test="$isHAnim and (string-length($nameValue) > 0) and not(ends-with(@USE,$nameValue)) or (@USE = $nameValue) or (@DEF = concat('_',$nameValue))">
                        <xsl:message>
                            <xsl:text>*** </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> mismatched USE-name pair USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>' for original name='</xsl:text>
                            <xsl:value-of select="$nameValue"/>
                            <xsl:text>', resetting to USE='</xsl:text>
                            <xsl:value-of select="$prefixHAnimHumanoidName"/>
                            <xsl:value-of select="$nameValue"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                        <xsl:text> USE='</xsl:text>
                        <xsl:value-of select="$prefixHAnimHumanoidName"/>
                        <xsl:value-of select="$nameValue"/>
                        <xsl:if test="not(ends-with($nameValue, $hanimSuffixDEF))">
                            <xsl:value-of select="$hanimSuffixDEF"/>
                        </xsl:if>
                        <xsl:text>'</xsl:text>
                    </xsl:when>
                    <xsl:when test="$hasHAnim and (local-name() = 'ROUTE') and (string-length($nameValue) > 0) and (string-length($prefixHAnimHumanoidName) > 0)">
                        <!--  and not(ends-with(@toNode,$nameValue)) or (@toNode = $nameValue) or (@toNode = concat('_',$nameValue)) -->
                        <xsl:message>
                            <xsl:text>*** </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> mismatched toNode-name pair toNode='</xsl:text>
                            <xsl:value-of select="@toNode"/>
                            <xsl:text>' for original name='</xsl:text>
                            <xsl:value-of select="$nameValue"/>
                            <xsl:text>', resetting to toNode='</xsl:text>
                            <xsl:value-of select="$prefixHAnimHumanoidName"/>
                            <xsl:value-of select="$nameValue"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                        <xsl:text> toNode='</xsl:text>
                        <xsl:value-of select="$prefixHAnimHumanoidName"/>
                        <xsl:value-of select="$nameValue"/>
                        <xsl:text>'</xsl:text>
                    </xsl:when>
                    <!-- TODO fromNode-USE -->
                    <xsl:when test="($isHAnim2 = true()) and (string-length($newUSEvalue) > 0) and not($newUSEvalue = @USE) and not(string-length($newUSEvalue) = @DEF)">
                        <!-- update name to HAnim2 -->
                        <xsl:text> USE='</xsl:text>
                        <xsl:value-of select='$newUSEvalue'/>
                        <xsl:text>'</xsl:text>
                        <xsl:message>
                            <xsl:text>*** HAnim2 USE replaced: </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>' replaced with updated newUSEvalue='</xsl:text>
                            <xsl:value-of select='$newUSEvalue'/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text> USE='</xsl:text>
                        <xsl:value-of select='@USE'/>
                        <xsl:text>'</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                
                <xsl:apply-templates select="@containerField"/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='USE') and (local-name()!='containerField')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
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
                <xsl:apply-templates select="@profile"/>
                <!-- adjust X3D version if needed -->
                <xsl:choose>
                    <xsl:when test="(string-length($x3dVersionNeeded) > 0)">
                        <xsl:text disable-output-escaping="yes"> version='</xsl:text>
                        <xsl:value-of select="$x3dVersionNeeded"/>
                        <xsl:text disable-output-escaping="yes">'</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:apply-templates select="@version"/>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:apply-templates select="@*[(local-name()!='profile') and (local-name()!='version')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <!-- handle namespace attributes -->
                <!-- xsl:apply-templates select="@xsd:noNamespaceSchemaLocation" />
                <xsl:apply-templates select="@noNamespaceSchemaLocation" />-->
            </xsl:when>
            <xsl:when test="starts-with(local-name(),'HAnim')">
                <xsl:variable name="rootHumanoidDEF"  select="ancestor-or-self::HAnimHumanoid/HAnimJoint/@DEF"/>
                <xsl:variable name="rootHumanoidName" select="ancestor-or-self::HAnimHumanoid/HAnimJoint/@name"/>
                <!-- debug
                <xsl:message>
                    <xsl:text>*** [</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> DEF naming rules] @DEF='</xsl:text>
                    <xsl:value-of select="@DEF"/>
                    <xsl:text>' $rootHumanoidDEF='</xsl:text>
                    <xsl:value-of select="$rootHumanoidDEF"/>
                    <xsl:text>' @name='</xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text>' $rootHumanoidName='</xsl:text>
                    <xsl:value-of select="$rootHumanoidName"/>
                    <xsl:text>'</xsl:text>
                </xsl:message> -->
                <xsl:choose>
                    <xsl:when test="not(ends-with(@DEF,@name)) or (@DEF = @name) or (@DEF = concat('_',@name))">
                        <xsl:message>
                            <xsl:text>*** </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> mismatched DEF-name pair DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>' for name='</xsl:text>
                            <xsl:value-of select="@name"/>
                            <xsl:text>', renamed to DEF='</xsl:text>
                            <xsl:value-of select="$prefixHAnimHumanoidName"/>
                            <xsl:value-of select="@name"/>
                            <xsl:if test="not(ends-with(@name, $hanimSuffixDEF))">
                                <xsl:value-of select="$hanimSuffixDEF"/>
                            </xsl:if>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="$prefixHAnimHumanoidName"/>
                        <xsl:value-of select="@name"/>
                        <xsl:if test="not(ends-with(@name, $hanimSuffixDEF))">
                                <xsl:value-of select="$hanimSuffixDEF"/>
                        </xsl:if>
                        <xsl:text>'</xsl:text>
                        <!-- TODO consider matching rule for ROUTE fromNode toNode -->
                    </xsl:when>
                    <xsl:when test="($isHAnim2 = true()) and not($newDEFvalue = @DEF) and not(string-length($newDEFvalue) = 0)">
                        <!-- update name to HAnim2 -->
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select='$newDEFvalue'/>
                        <xsl:text>'</xsl:text>
                        <xsl:message>
                            <xsl:text>*** HAnim2  DEF replaced: </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>' replaced with updated newDEFvalue='</xsl:text>
                            <xsl:value-of select='$newDEFvalue'/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select='@DEF'/>
                        <xsl:text>'</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <!-- remainder of HAnim node attributes -->
                <xsl:choose>
                    <xsl:when test="(local-name()='HAnimHumanoid') and not (string-length(@USE) > 0)">
                        <!-- all attributes except DEF, version, info -->
                        <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='version') and (local-name()!='info')]">
                            <xsl:with-param name="prefixHAnimHumanoidName"  select="$prefixHAnimHumanoidName"/>
                            <xsl:with-param name=    "isHAnim1" select="$isHAnim1"/>
                            <xsl:with-param name=    "isHAnim2" select="$isHAnim2"/>
                            <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                        </xsl:apply-templates>
                        <!-- HAnimHumanoid version check: report if mismatched with respect to X3D version, without change -->
                        <xsl:choose>
                            <xsl:when test="//X3D[starts-with(@version,'3')] and starts-with(@version,'2')">
                                <xsl:message>
                                    <xsl:text>*** [diagnostic] HAnimHumanoid version='</xsl:text>
                                     <xsl:value-of select="@version"/>
                                    <xsl:text>' requires changing X3D from version='</xsl:text>
                                     <xsl:value-of select="//X3D/@version"/>
                                    <xsl:text>' to version='4.0'</xsl:text>
                                </xsl:message>
                            </xsl:when>
                            <xsl:when test="//X3D[starts-with(@version,'4')] and (starts-with(@version,'1') or (string-length(@version) = 0))">
                                <xsl:message>
                                    <xsl:text>*** [diagnostic] consider upgrading HAnimHumanoid model from version='</xsl:text>
                                     <xsl:value-of select="@version"/>
                                    <xsl:text>' to version='2.0' (matching X3D version='</xsl:text>
                                     <xsl:value-of select="$x3dVersionProvided"/>
                                    <xsl:text>')</xsl:text>
                                </xsl:message>
                            </xsl:when>
                        </xsl:choose>
                        <xsl:apply-templates select="@version"/><!-- retain HAnimHumanoid version as is -->
                        
                        <xsl:choose>
                            <xsl:when test="not(starts-with(@version,'2'))">
                                <xsl:if test="(string-length(@info) > 0) and contains(@info,'&quot;')">
                                    <xsl:apply-templates select="@*[(local-name() = 'info')]"/>
                                </xsl:if>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- omit info attribute which is split into matching MetadataSet, handled separately in this stylesheet -->
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:apply-templates select="@*[(local-name()!='DEF')]">
                            <xsl:with-param name="prefixHAnimHumanoidName"  select="$prefixHAnimHumanoidName"/>
                            <xsl:with-param name=    "isHAnim1" select="$isHAnim1"/>
                            <xsl:with-param name=    "isHAnim2" select="$isHAnim2"/>
                            <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                        </xsl:apply-templates>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:when>
            <!-- handle specially ordered cases next -->
            <!-- stick with canonical form to support version-control diffing-->
            <xsl:when test="local-name()='meta'">
                <xsl:apply-templates select="@content" />
                <xsl:apply-templates select="@name" />
                <xsl:apply-templates select="@*[(local-name()!='name') and (local-name()!='content')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='ROUTE'">
                <xsl:apply-templates select="@fromField"/>
                <xsl:apply-templates select="@fromNode">
                    <xsl:with-param name="prefixHAnimHumanoidName"  select="$prefixHAnimHumanoidName"/>
                    <xsl:with-param name=    "isHAnim1" select="$isHAnim1"/>
                    <xsl:with-param name=    "isHAnim2" select="$isHAnim2"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@toField"/>
                <xsl:apply-templates select="@toNode">
                    <xsl:with-param name="prefixHAnimHumanoidName"  select="$prefixHAnimHumanoidName"/>
                    <xsl:with-param name=    "isHAnim1" select="$isHAnim1"/>
                    <xsl:with-param name=    "isHAnim2" select="$isHAnim2"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="local-name()='ElevationGrid' or local-name()='GeoElevationGrid'">
                <xsl:apply-templates select="@DEF | @containerField "/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and
                                                (local-name()!='height') and (local-name()!='colorIndex')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@colorIndex"/>
                <xsl:apply-templates select="@height"/>
            </xsl:when>
            <xsl:when test="local-name()='IndexedFaceSet' or local-name()='IndexedLineSet'">
                <xsl:apply-templates select="@DEF | @containerField "/>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <!-- X3dTidy checks to insert additional attributes go here -->
            <!-- Material for line geometry: copy diffuseColor value to emissiveColor if default (black) or missing -->
            <!-- TODO what about PhysicalMaterial? -->
            <xsl:when test="(local-name()='Material') and ((../../PointSet) or (../../LineSet) or (../../IndexedLineSet) or (../../Arc2D) or (../../ArcClose2D) or (../../Circle2D))
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
                            <xsl:sort select="local-name()" order="ascending" data-type="text"/>
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
                            <xsl:sort select="local-name()" order="ascending" data-type="text"/>
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
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
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
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
            </xsl:when>
            <xsl:when test="contains(local-name(),'connect')">
                <!-- IS/connect -->
                <xsl:apply-templates select="@nodeField"/>
                <xsl:apply-templates select="@protoField"/>
            </xsl:when>
            <!-- otherwise not a special case, process DEF first and urls/containerField last -->
            <xsl:otherwise>
                <xsl:apply-templates select="@DEF">
                    <xsl:with-param name="prefixHAnimHumanoidName"  select="$prefixHAnimHumanoidName"/>
                    <xsl:with-param name=    "isHAnim1" select="$isHAnim1"/>
                    <xsl:with-param name=    "isHAnim2" select="$isHAnim2"/>
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[(local-name()!='DEF') and (local-name()!='containerField') and not(contains(local-name(), 'url') or contains(local-name(), 'Url'))]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@*[contains(local-name(), 'url') or contains(local-name(), 'Url')]">
                    <xsl:sort select="local-name()" order="ascending" data-type="text"/>
                </xsl:apply-templates>
                <xsl:apply-templates select="@containerField"/>
            </xsl:otherwise>
        </xsl:choose>
        <!-- debug
        <xsl:if test="(local-name() = 'AudioClip')">
            <xsl:message>
                    <xsl:text>*** made it to test for containerField missing... </xsl:text>
                    <xsl:value-of select="local-name(..)"/>
                    <xsl:text>/</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> @containerField='</xsl:text>
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>' and string-length(@containerField)=</xsl:text>
                    <xsl:value-of select="string-length(@containerField)"/>
            </xsl:message>
        </xsl:if>
        -->
        <!-- AudioClip requires special detection since incorrect default containerField='source' may be filled in by XML processor and we need to fix it -->
        <xsl:if test="(not(@containerField) or (string-length(@containerField) = 0) or (local-name() = 'AudioClip')) 
                       and not(local-name() = 'X3D') and not(local-name() = 'meta') and not(local-name() = 'Scene') and not(local-name() = 'ROUTE')">
            <!-- since Saxon is expanding containerField values from DTD, this branch is likely not reached by relevant nodes -->
            <!-- debug
            <xsl:message>
                <xsl:text>*** containerField missing... handle it #5 </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text>/</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text> containerField='</xsl:text>
                <xsl:value-of select="@containerField"/>
                <xsl:text>'</xsl:text>
            </xsl:message>
            -->
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
                    <xsl:when test="(local-name() = 'Analyser') or (local-name() = 'AudioDestination') or (local-name() = 'BiquadFilter') or (local-name() = 'BufferAudioSource') or (local-name() = 'ChannelMerger') or (local-name() = 'ChannelSelector') or (local-name() = 'ChannelSplitter') or (local-name() = 'Convolver') or (local-name() = 'Delay') or (local-name() = 'DynamicsCompressor') or (local-name() = 'Gain') or (local-name() = 'ListenerPointSource') or (local-name() = 'MicrophoneSource') or (local-name() = 'OscillatorSource') or (local-name() = 'SpatialSound') or (local-name() = 'StreamAudioDestination') or (local-name() = 'StreamAudioSource') or (local-name() = 'WaveShaper')">
                        <xsl:text>children</xsl:text>
                    </xsl:when>
                    <xsl:when test="((local-name() = 'AudioClip') or (local-name() = 'MovieTexture')) and
                                    ((local-name(..) = 'Analyser') or (local-name(..) = 'AudioDestination') or (local-name(..) = 'BiquadFilter') or (local-name(..) = 'BufferAudioSource') or (local-name(..) = 'ChannelMerger') or (local-name(..) = 'ChannelSelector') or (local-name(..) = 'ChannelSplitter') or (local-name(..) = 'Convolver') or (local-name(..) = 'Delay') or (local-name(..) = 'DynamicsCompressor') or (local-name(..) = 'Gain') or (local-name(..) = 'ListenerPointSource') or (local-name(..) = 'MicrophoneSource') or (local-name(..) = 'OscillatorSource') or (local-name(..) = 'SpatialSound') or (local-name(..) = 'StreamAudioDestination') or (local-name(..) = 'StreamAudioSource') or (local-name(..) = 'WaveShaper'))">
                            <xsl:text>children</xsl:text>
                            <xsl:if test="(@containerField = 'source') or (@containerField = 'texture') or (string-length(@containerField) = 0)">
                                <xsl:message>
                                    <xsl:text>*** containerField incorrect #2 for </xsl:text>
                                    <xsl:value-of select="local-name(..)"/>
                                    <xsl:text>/</xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text>, reset to children</xsl:text>
                                </xsl:message>
                            </xsl:if>
                        </xsl:when>
                    <xsl:otherwise>
                        <xsl:call-template name="fieldNameChanges"/>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <xsl:if test="(string-length($expectedContainerField) > 0) and not($expectedContainerField = @containerField)">
                    <xsl:message>
                        <xsl:text>*** containerField mismatch  #2 for </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>/</xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:if test="string-length(@name) > 0">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="string-length(@DEF) > 0">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="string-length(@USE) > 0">
                            <xsl:text> @USE='</xsl:text>
                            <xsl:value-of select="@USE"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> containerField='', replacing with expected containerField='</xsl:text>
                        <xsl:value-of select="$expectedContainerField"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                <xsl:text> containerField='</xsl:text>
                <xsl:value-of select="$expectedContainerField"/>
                <xsl:text>'</xsl:text>
            </xsl:if>
        </xsl:if>
    </xsl:template>

    <xsl:template match="@url | @backUrl | @frontUrl | @leftUrl | @rightUrl | @topUrl | @bottomUrl " >
        <xsl:variable name="result">
            <xsl:variable name="containsQuote" select="contains(.,'&quot;')"/>
            <xsl:variable name="quoteCount"    select="string-length(string(.)) - string-length(translate(string(.), '&quot;', ''))"/>
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
                        <xsl:value-of select="translate(string(.),'&quot;','')"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:call-template name="find-pathname-without-extension-if-x3d">
                            <xsl:with-param name="pathname" select="translate(string(.),'&quot;','')"/>
                        </xsl:call-template>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <!-- debug
            <xsl:message>
                <xsl:text>$basepathname=</xsl:text>
                <xsl:value-of select="$basepathname"/>
            </xsl:message> -->
            <xsl:variable name="containsSimpleX3dBookmark" select="starts-with(normalize-space(string(.)),'#') or starts-with(normalize-space(string(.)),'&quot;#')"/>
            <xsl:variable name="X3dBookmark">
                <xsl:choose>
                    <xsl:when test="not(contains(.,'#'))">
                        <xsl:text></xsl:text><!-- default value is empty -->
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>#</xsl:text>
                        <xsl:value-of select="substring-after(translate(string(.), '&quot;', ''),'#')"/>
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
                <xsl:when test="(string-length(normalize-space(string(.))) = 0)">
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
                        <xsl:with-param name="inputValue" select="."/>
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
                        <xsl:with-param name="inputValue" select="."/>
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
                        <xsl:with-param name="inputValue" select="."/>
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
                                <xsl:with-param name="inputValue" select="$basepathname"/>
                            </xsl:call-template>
                            <xsl:text>"</xsl:text>
                        </xsl:when>
                        <!-- image, sound, movie or other non-X3D asset -->
                        <xsl:when test="not(contains(.,'.wrl')) and not(contains(.,'.x3d'))">
                            <xsl:text>"</xsl:text>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputValue" select="$basepathname"/>
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
                            <xsl:if test="(substring(.,string-length(string(.))-3,4) = '.wrl') or (contains(.,'.wrl#')) and not(contains(.,'.x3d')) and 
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
                                <xsl:with-param name="inputValue" select="$basepathname"/>
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
                                    <xsl:with-param name="inputValue" select="$basepathname"/>
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
                            <xsl:if test="(substring(.,string-length(string(.))-3,4) = '.x3d') or (contains(.,'.x3d#')) and not(contains(.,'.wrl')) and 
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
                            <xsl:if test="((substring(translate(string(.), '&quot;', ''),string-length(translate(string(.), '&quot;', ''))-3,4) = '.wrl') or (contains(.,'.wrl#'))) and not(contains(.,'.x3d')) and 
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
                                <xsl:with-param name="inputValue" select="$basepathname"/>
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
                                    <!-- assumes a well-quoted string, omit leading quote substring(normalize-space(string(.)),2)-->
                               <!--  <xsl:call-template name="escape-special-characters">
                                    <xsl:with-param name="inputValue" select="translate(string(.),'&quot;','')"/>
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
                            <xsl:if test="(substring(.,string-length(string(.))-4,4) = '.x3d') or (contains(.,'.x3d#')) and 
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
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputValue" select="."/>
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
        <xsl:if test="(string-length(string(.)) > 0) and (. != substring($result,7,string-length($result)-7)) and not($result = $originalConstruct)">
            <xsl:message>
                <xsl:text>*** </xsl:text>
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> DEF='</xsl:text>
                <xsl:value-of select="../@DEF"/>
                <xsl:text disable-output-escaping="yes">'&gt; append online address</xsl:text>
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
                <xsl:text>    revision</xsl:text>
                <xsl:value-of select="$result"/>
            </xsl:message>
        </xsl:if>
        <xsl:value-of select="$result"/>
    </xsl:template>

    <xsl:template match="@*" >
        <xsl:param name="prefixHAnimHumanoidName"><xsl:text></xsl:text></xsl:param>
        <xsl:param name="isHAnim" ><xsl:value-of select="starts-with(local-name(..),'HAnim')"/></xsl:param>
        
        <xsl:variable name="isHAnim1" select="$isX3D3 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'1') or (string-length(@version) = 0)])"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'2')])"/>        
        <xsl:if test="($isHAnim1 = true()) and ($isHAnim2 = true())">
            <xsl:message>
                <xsl:text>*** error in X3dTidy.xslt internal logic, $isHAnim1 and $isHAnim2 are both true, @* entry for </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="substring(.,1,20)"/>
                <xsl:text>'</xsl:text>
            </xsl:message>
        </xsl:if>
        
        <xsl:variable name="DEF"      select="@DEF"/>
        <xsl:variable name="USE"      select="@USE"/>
        <xsl:variable name="fromNode" select="@fromNode"/>
        <xsl:variable name="toNode"   select="@toNode"/>
        <xsl:variable name="attributeValue"  select="."/>
        <xsl:variable name="nodeName"  select="local-name(..)"/>
        <xsl:variable name="nameValue">
            <xsl:choose>
                <xsl:when test="(local-name() = 'name')">
                    <xsl:value-of select="."/>
                </xsl:when>
                <!-- next check DEF node for name if this is a USE, fromNode or toNode attribute -->
                <xsl:when test="(string-length($attributeValue) > 0) and
                                (string-length(//*[@DEF=$attributeValue][1]/@name) > 1)"><!-- [1] avoids XSLT typing difficulty, only one DEF is expected -->
                    <xsl:value-of      select="//*[@DEF=$attributeValue][1]/@name"/>
                    <!-- debug
                    <xsl:message>
                        <xsl:text>found node with DEF=$attributeValue=</xsl:text>
                        <xsl:value-of select="$attributeValue"/>
                    </xsl:message> -->
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="../@name"/><!-- if any, otherwise empty -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="hanimSuffixDEF">
            <xsl:choose>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($DEF,'_pt')">
                    <xsl:text>_pt</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($DEF,'_tip')">
                    <xsl:text>_tip</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($DEF,'_view')">
                    <xsl:text>_view</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="hanimSuffixName">
            <xsl:choose>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_pt')">
                    <xsl:text>_pt</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_tip')">
                    <xsl:text>_tip</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_view')">
                    <xsl:text>_view</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <!-- debug
        <xsl:message>
            <xsl:if test="(string-length($hanimSuffixName) = 0) and (string-length($hanimSuffixDEF) > 0)">
                <xsl:text>$hanimSuffixDEF=</xsl:text>
                <xsl:value-of select="$hanimSuffixDEF"/>
                <xsl:text>, $hanimSuffixName=</xsl:text>
                <xsl:value-of select="$hanimSuffixName"/>
            </xsl:if>
        </xsl:message> -->
        <xsl:variable name="hanimSuffixName">
            <xsl:choose>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_pt')">
                    <xsl:text>_pt</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_tip')">
                    <xsl:text>_tip</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name()='HAnimSite') and ends-with($nameValue,'_view')">
                    <xsl:text>_view</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="hanimAliasReplacementName">
            <xsl:call-template name="newHAnimNameValue">
                <xsl:with-param name="nameValue">
                    <xsl:value-of select="$nameValue"/>
                    <!-- mismatched suffixes diagnostic and correction; HAnimSite DEF has expected suffix but @name has none -->
                    <xsl:if test="(string-length($hanimSuffixName) = 0) and (string-length($hanimSuffixDEF) > 0)">
                       <xsl:if test="not(ends-with($nameValue, $hanimSuffixDEF))">
                            <xsl:value-of select="$hanimSuffixDEF"/>
                            <xsl:message>
                                <xsl:text>*** </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text> DEF='</xsl:text>
                                <xsl:value-of select="$DEF"/>
                                <xsl:text>' has suffix '</xsl:text>
                                <xsl:value-of select="$hanimSuffixDEF"/>
                                <xsl:text>' but name='</xsl:text>
                                <xsl:value-of select="$nameValue"/>
                                <xsl:text>' has no suffix, thus append '</xsl:text>
                                <xsl:value-of select="$hanimSuffixDEF"/>
                                <xsl:text>' when constructing new name value #3</xsl:text>
                                <xsl:text> (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
                            </xsl:message>
                       </xsl:if>
                    </xsl:if>
                </xsl:with-param>
                <xsl:with-param name="nodeName"><xsl:value-of select="local-name(..)"/></xsl:with-param>
            </xsl:call-template>
        </xsl:variable>
        <xsl:variable name="newDEFvalue">
            <xsl:choose>
                <xsl:when test="($hanimAliasReplacementName = $nameValue)">
                    <xsl:value-of select="../@DEF"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$hanimAliasReplacementName)"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="hasHAnimNodeInModel" select="(count(//*[starts-with(local-name(),'HAnim')]) > 0)">
        </xsl:variable>
        <xsl:variable name="newUSEvalue">
            <xsl:choose>
                <xsl:when test="$hasHAnimNodeInModel and (string-length($nameValue) > 0) and ($hanimAliasReplacementName != $nameValue) and
                                ((local-name()='fromNode') or (local-name()='toNode'))">
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$nameValue)"/>
                    <!-- <xsl:message><xsl:text>test0</xsl:text></xsl:message> -->
                </xsl:when>
                <xsl:when test="$hasHAnimNodeInModel and (string-length($nameValue) > 0) and ($hanimAliasReplacementName != $nameValue)">
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$hanimAliasReplacementName)"/>
                    <!-- <xsl:message><xsl:text>test1</xsl:text></xsl:message> -->
                </xsl:when>
                <xsl:when test="(string-length($nameValue) = 0) and ((local-name() = 'USE') or (local-name() = 'fromNode') or (local-name() = 'toNode'))">
                    <xsl:value-of select="."/>
                    <!-- <xsl:message><xsl:text>test2</xsl:text></xsl:message> -->
                </xsl:when>
                <xsl:when test="(string-length($nameValue) = 0)">
                    <xsl:value-of select="."/>
                    <!-- <xsl:message><xsl:text>test3</xsl:text></xsl:message> -->
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="."/>
                    <!-- <xsl:message><xsl:text>test4</xsl:text></xsl:message> -->
                </xsl:otherwise>
            </xsl:choose>
            <!--
                <xsl:when test="($hanimAliasReplacementName = $nameValue)">
                    <xsl:value-of select="../@USE"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="concat($prefixHAnimHumanoidName,$hanimAliasReplacementName)"/>
                </xsl:otherwise>
            </xsl:choose>
            -->
        </xsl:variable>
        <!-- debug
        <xsl:if test="((local-name() = 'USE') or (local-name() = 'fromNode') or (local-name() = 'toNode'))">
            <xsl:message>
                <xsl:text>post-test diagnostic: </xsl:text>
                <xsl:text>attribute local-name()=</xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>, $hasHAnimNodeInModel=</xsl:text>
                <xsl:value-of select="$hasHAnimNodeInModel"/>
                <xsl:text>, $newUSEvalue=</xsl:text>
                <xsl:value-of select="$newUSEvalue"/>
                <xsl:text>, .=</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>, $nameValue=</xsl:text>
                <xsl:value-of select="$nameValue"/>
                <xsl:text>, $prefixHAnimHumanoidName=</xsl:text>
                <xsl:value-of select="$prefixHAnimHumanoidName"/>
                <xsl:text>, $hanimAliasReplacementName=</xsl:text>
                <xsl:value-of select="$hanimAliasReplacementName"/>
            </xsl:message>
        </xsl:if> -->
        
        <xsl:variable name="fileName">
            <xsl:if test="//head/meta[@name='title']/@content[.!='*enter FileNameWithNoAbbreviations.x3d here*']">
                <xsl:value-of select="//head/meta[@name='title']/@content"/>
            </xsl:if>
        </xsl:variable>
        
        <xsl:if test="(starts-with(local-name(..),'HAnim') or (local-name(..) = 'ROUTE ')) and (($isHAnim1 = true()) or ($isHAnim2 = true())) and 
                      ((local-name() = 'DEF') or (local-name() = 'USE') or (local-name() = 'name') or (local-name() = 'fromNode') or (local-name() = 'toNode'))">
			<!-- debug 
            <xsl:message>
				<xsl:text>*** [debug] @* processing for </xsl:text>
				<xsl:value-of select="$nodeName"/>
				<xsl:text> </xsl:text>
				<xsl:value-of select="local-name()"/>
				<xsl:text>='</xsl:text>
				<xsl:value-of select="."/>
				<xsl:text>'</xsl:text>
				<xsl:text> prefixHAnimHumanoidName='</xsl:text>
				<xsl:value-of select="$prefixHAnimHumanoidName"/>
				<xsl:text>'</xsl:text>
                <xsl:text> isHAnim1=</xsl:text>
                <xsl:value-of select="$isHAnim1"/>
                <xsl:text> isHAnim2=</xsl:text>
                <xsl:value-of select="$isHAnim2"/>
                <xsl:if test="(string-length($nameValue) > 0)">
                    <xsl:text> nameValue='</xsl:text>
                    <xsl:value-of select="$nameValue"/>
				<xsl:text>'</xsl:text>
                </xsl:if>
                <xsl:if test="not($hanimAliasReplacementName = $nameValue)">
                    <xsl:text> hanimAliasReplacementName='</xsl:text>
                    <xsl:value-of select="$hanimAliasReplacementName"/>
                    <xsl:text>'</xsl:text>
                    <xsl:text> newDEFvalue='</xsl:text>
                    <xsl:value-of select="$newDEFvalue"/>
                    <xsl:text>'</xsl:text>
                    <xsl:text> newUSEvalue='</xsl:text>
                    <xsl:value-of select="$newUSEvalue"/>
                    <xsl:text>'</xsl:text>
                </xsl:if>
			</xsl:message>
            -->
        </xsl:if>
		<xsl:choose>
			<xsl:when test="(contains(local-name(), 'otation') or contains(local-name(), 'rientation')) and ((. = '0 0 0 0') or (. = '0.0 0.0 0.0 0.0') or
                               (. = '-0 0 0 0') or (. = '0 -0 0 0') or (. = '0 0 -0 0') or (. = '0 0 0 -0'))">
				<!-- no attribute output -->
				<!-- TODO regex checks for -0 in illegal value, above is a blender export error case -->
				<xsl:message>
					<xsl:text>*** revision: ignore, remove illegal </xsl:text>
					<xsl:value-of select="local-name()"/>
					<xsl:text>='</xsl:text>
					<xsl:value-of select="."/>
					<xsl:text>' from &lt;</xsl:text>
					<xsl:value-of select="local-name(..)"/>
					<xsl:text> DEF='</xsl:text>
					<xsl:value-of select="../@USE"/>
					<xsl:text>' containerField='</xsl:text>
					<xsl:value-of select="../@containerField"/>
					<xsl:text>'/&gt;</xsl:text>
				</xsl:message>
			</xsl:when>
                        <!-- legacy
			<xsl:when test="(local-name(..)='ProtoInstance') and (local-name()='name') and (string-length(.) = 0)
                                         and (string-length(../@USE) > 0)">
				<xsl:text>ProtoInstance_USE_Missing_Name</xsl:text>
				<xsl:message>
					<xsl:text>*** revision: missing required name='</xsl:text>
					<xsl:value-of select="."/>
					<xsl:text>' from &lt;ProtoInstance USE='</xsl:text>
					<xsl:value-of select="../@USE"/>
					<xsl:text>' containerField='</xsl:text>
					<xsl:value-of select="../@containerField"/>
					<xsl:text>'/&gt;</xsl:text>
					<xsl:text> (inserting name='ProtoInstance_USE_Missing_Name')</xsl:text>
				</xsl:message>
			</xsl:when> -->
			<xsl:otherwise>
                
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
        <xsl:variable name="notDefaultHAnim1"
                      select="not( local-name(..)='HAnimJoint' and
                      ((local-name()='containerField' and (string(.)='children')) or
                       (local-name()='center' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       (local-name()='limitOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='rotation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='scale' and (string(.)='1 1 1' or string(.)='1.0 1.0 1.0')) or
                       (local-name()='scaleOrientation' and (string(.)='0 0 1 0' or string(.)='0.0 0.0 1.0 0.0' or string(.)='0 1 0 0' or string(.)='0.0 1.0 0.0 0.0' or string(.)='0 1 0 0.0'  or string(.)='0 0 1 0.0')) or
                       (local-name()='stiffness' and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
                       ((local-name()='ulimit' or local-name()='llimit') and (string(.)='0 0 0' or string(.)='0.0 0.0 0.0')) or
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

        <!-- debug
        <xsl:if test="starts-with(local-name(), 'bbox')">
            <xsl:message>
                <xsl:text>*** debug @* attribute of interest found: [</xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:if test="(local-name() = 'value')">
                    <xsl:text> </xsl:text>
                    <xsl:text>name='</xsl:text>
                    <xsl:value-of select="../@name"/>
                    <xsl:text>'</xsl:text>
                </xsl:if>
                <xsl:text> </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>'</xsl:text>
                <xsl:text>]</xsl:text>
                <xsl:text> notDefaultFieldValue1='</xsl:text>
                <xsl:value-of select="$notDefaultFieldValue1"/>
                <xsl:text>', notDefaultFieldValue1a='</xsl:text>
                <xsl:value-of select="$notDefaultFieldValue1a"/>
                <xsl:text>'</xsl:text>
            </xsl:message>
        </xsl:if>
        -->
                    
        <!-- provide attribute output only if it is not a default value, or if scene has a digital signature -->
        <!-- note that if digital signature is present, all attributes are included (including default values) and
                       order of attributes may change, but that should be OK according to Post Schema Validation Infoset (PSVI) -->
        <xsl:if test="
                (count(//ds:Signature) > 0) or
                (local-name(..)='HAnimHumanoid' and local-name()='version') or
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
                .)" >
            <xsl:choose>
                <!-- check for changed hanim name -->
                <xsl:when test="(local-name() = 'USE') and
                                not(. = $newUSEvalue)">
                    <!-- debug
                    <xsl:message>
                        <xsl:text>*** [debug] found </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/> 
                        <xsl:text>=</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text> $newUSEvalue=</xsl:text>
                        <xsl:value-of select="$newUSEvalue"/>
                    </xsl:message>
                    -->
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text>
                    <xsl:value-of select="$newUSEvalue"/>
                    <xsl:text>'</xsl:text>
                </xsl:when>
                <xsl:when test="((local-name() = 'fromNode') or (local-name() = 'toNode')) and
                                not(. = $newUSEvalue)">
                    <!-- debug
                    <xsl:message>
                        <xsl:text>*** [debug] found </xsl:text>
                        <xsl:value-of select="local-name(..)"/>< ! - - element name - - >
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>  < ! - - attribute name - - >
                        <xsl:text>=</xsl:text>
                        <xsl:value-of select="."/>             < ! - - attribute value - - >
                        <xsl:text> $newUSEvalue=</xsl:text>
                        <xsl:value-of select="$newUSEvalue"/>
                    </xsl:message> 
-->
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text>
                    <xsl:value-of select="$newUSEvalue"/>
                    <xsl:text>'</xsl:text>
                </xsl:when>
                <!-- TODO confirm, allow id as disallowed nonempty attribute within a USE node -->
                <xsl:when test="false() and (local-name() = 'id') and (string-length(../@USE) > 0)">
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(..)"/><!-- element name -->
                        <xsl:text> USE='</xsl:text>
                        <xsl:value-of select="../@USE"/>
                        <xsl:text>' also has id='</xsl:text>
                        <xsl:value-of select="../@id"/>
                        <xsl:text>' references a DEF node, thus disallowed attribute </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                        <xsl:if test="not(. = ../@USE)">
                            <xsl:text> is now omitted</xsl:text>
                        </xsl:if>
                    </xsl:message>
                    <!-- retain dissimilar id attribute -->
                    <xsl:if test="not(. = ../@USE)">
                        <xsl:text> id='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="(string-length(string(.)) > 0) and (string-length(../@USE) > 0) and not(local-name() = 'USE') and not(local-name() = 'containerField')">
                    <xsl:if test="not(local-name()='version' and (($isHAnim1 = true() and (string(.)='1.0' or (string-length(string(.)) = 0))) or ($isHAnim2 = true() and string(.)='2.0'))) and
                                  not((local-name() = 'llimit') and (. = '0 0 0')) and
                                  not((local-name() = 'ulimit') and (. = '0 0 0')) and
                                  not((local-name(..) = 'ProtoInstance') and (local-name() = 'name'))">
                        <xsl:message>
                            <xsl:text>*** </xsl:text>
                            <xsl:value-of select="local-name(..)"/><!-- element name -->
                            <xsl:text> USE='</xsl:text>
                            <xsl:value-of select="../@USE"/>
                            <xsl:text>' containerField='</xsl:text>
                            <xsl:value-of select="../@containerField"/>
                            <xsl:text>'</xsl:text>
                            <!--
                            <xsl:text> $isHAnim1=</xsl:text>
                            <xsl:value-of select="$isHAnim1"/>
                            <xsl:text> $isHAnim2=</xsl:text>
                            <xsl:value-of select="$isHAnim2"/>
                            -->
                            <xsl:text> has disallowed attribute </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text>='</xsl:text>
                            <xsl:value-of select="."/>
                            <xsl:text>', now omitted</xsl:text>
                        </xsl:message>
                    </xsl:if>
                </xsl:when>
                <xsl:when test="(local-name() = 'bind') or (local-name() = 'isBound') or (local-name() = 'set_bind') or (local-name() = 'bindTime')">
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(..)"/><!-- element name -->
                        <xsl:if test="(string-length(../@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="../@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(../@name) > 0)">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="../@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> has illegal attribute </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>', now omitted</xsl:text>
                        <xsl:text> (values for accessType inputOnly/outputOnly fields are not allowed in models)</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name() = 'id') and (string-length(../@DEF) > 0) and (../@DEF = .)">
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> has overloaded attribute (HTML only) id='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' when (X3D only) DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text>' already, id attribute omitted</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name() = 'ccw') and (local-name(..) = 'Text')">
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> has illegal attribute ccw='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>', now omitted</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="((local-name() = 'attenuation') and not(ends-with(local-name(..), 'Light')) and not(local-name(..) = 'PointProperties'))">
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(..)"/><!-- element name -->
                        <xsl:if test="(string-length(../@DEF) > 0)">
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="../@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(../@name) > 0)">
                            <xsl:text> name='</xsl:text>
                            <xsl:value-of select="../@name"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text> has illegal attribute </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>', now omitted</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name()='lit') or (local-name()='usegeocache')">
                    <xsl:message>
                        <xsl:text>*** x3domExtension attribute found and omitted: [</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:if test="(string-length(../@id) > 0)">
                            <xsl:text> </xsl:text>
                            <xsl:text>id='</xsl:text>
                            <xsl:value-of select="../@id"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(../@DEF) > 0)">
                            <xsl:text> </xsl:text>
                            <xsl:text>DEF='</xsl:text>
                            <xsl:value-of select="../@DEF"/>
                            <xsl:text>'</xsl:text>
                        </xsl:if>
                        <xsl:text>]</xsl:text>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:otherwise>
        
            <!-- attribute of interest found, show it -->
            <xsl:text> </xsl:text>
			
            <xsl:variable name="attributeName"     select="local-name()"/>
            <xsl:variable name="parentElementName" select="local-name(..)"/>
            <xsl:variable name="attributeValue"    select="."/>
            <xsl:variable name="fieldValueName"    select="../@name"/>
            <xsl:variable name="protoInstanceName" select="(../../@name)"/>
            <xsl:variable name="fieldValueType1"   select="      //ProtoDeclare[@name = $protoInstanceName][1]/ProtoInterface/field[@name=$fieldValueName][1]/@type"/>
            <xsl:variable name="fieldValueType2"   select="//ExternProtoDeclare[@name = $protoInstanceName][1]               /field[@name=$fieldValueName][1]/@type"/>
            <!-- only one of these should be available -->
            <xsl:variable name="fieldValueType"    select="concat($fieldValueType1,$fieldValueType2)"/>
            <xsl:variable name="isMFString"
					    select="
				   (((local-name()='value') and ((../@type='MFString') or (contains(local-name(../..),'Proto') and ($fieldValueType='MFString')))) or
					 (local-name()='url') or ends-with(local-name(),'Url') or
					 (  ../@name = 'url') or ends-with(  ../@name,  'Url') or (local-name()='geoSystem') or
					($attributeName='forceOutput') or
					($attributeName='objectType')  or
                    ($attributeName='streamIdentifier')  or
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
					($parentElementName='WorldInfo' and $attributeName='info'))
                   and not(($attributeName='type') or ($attributeName='accessType') or ($attributeName='appinfo') or ($attributeName='documentation'))
                   and not($parentElementName='meta')"/>
            <!-- ($attributeName='name') or -->
            <!-- debug
            <xsl:message>
                <xsl:text>*** debug: </xsl:text>
                <xsl:value-of select="$parentElementName"/>
                <xsl:if test="(../@name) and not($attributeName = 'name')">
                    <xsl:text> name='</xsl:text>
                    <xsl:value-of select="../@name"/>
                    <xsl:text>'</xsl:text>
                </xsl:if>
                <xsl:text> </xsl:text>
                <xsl:value-of select="$attributeName"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>'</xsl:text>
                <xsl:text> is an allowed value</xsl:text>
                <xsl:text>, $isMFString=</xsl:text>
                <xsl:value-of select="$isMFString"/>
            </xsl:message>
            -->
            <xsl:if test="(local-name(..)='X3D' and local-name()='noNamespaceSchemaLocation')">
                <!-- xmlns:xsd attribute typically not seen, so insert it -->
                <xsl:text>xmlns:xsd='http://www.w3.org/2001/XMLSchema-instance'</xsl:text>
                <!-- insert namespace prefix -->
                <xsl:text> xsd:</xsl:text>
            </xsl:if>
            
            <!-- fix attribute name if incorrect -->
            <xsl:choose>
                <xsl:when test="(local-name(..) = 'meta') and ((lower-case(local-name()) = 'key') or (lower-case(local-name()) = 'value'))">
                    <xsl:text>content</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>' by changing attribute </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to content='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'mustoutput')">
                    <xsl:text>forceOutput</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>: change attribute name </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> to forceOutput</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointsizeattenuation')">
                    <xsl:text>attenuation</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>: change attribute name </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> to attenuation</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'emmisivecolor')">
                    <xsl:text>emissiveColor</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>: change attribute name </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> to emissiveColor</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'znear')">
                    <xsl:text>nearDistance</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>: change attribute name </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> to nearDistance</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'zfar')">
                    <xsl:text>farDistance</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>: change attribute name </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> to farDistance</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- id is external, DEF is internal, can test accordingly
                <xsl:when test="(local-name() = 'id') and (string-length(../@DEF) > 0)">
                    <xsl:text>id</xsl:text>
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> has overloaded attribute name (HTML only) id='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' when (X3D only) DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text>' already...</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name() = 'id') and (string-length(../@DEF) = 0)">
                    <xsl:text>DEF</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text>: change attribute name (HTML only) id='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to (X3D only) DEF='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                -->
                
                <!-- *** start: fieldName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->
                <xsl:when test="(lower-case(local-name()) = 'autocalc') and not(local-name() = 'autoCalc')"><xsl:text>autoCalc</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to autoCalc</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bboxcenter') and not(local-name() = 'bboxCenter')"><xsl:text>bboxCenter</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bboxCenter</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bboxsize') and not(local-name() = 'bboxSize')"><xsl:text>bboxSize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bboxSize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'begincap') and not(local-name() = 'beginCap')"><xsl:text>beginCap</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to beginCap</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bottomradius') and not(local-name() = 'bottomRadius')"><xsl:text>bottomRadius</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bottomRadius</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'category') and not(local-name() = 'category')"><xsl:text>category</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to category</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'ccw') and not(local-name() = 'ccw')"><xsl:text>ccw</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to ccw</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'child1url') and not(local-name() = 'child1Url')"><xsl:text>child1Url</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to child1Url</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'child2url') and not(local-name() = 'child2Url')"><xsl:text>child2Url</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to child2Url</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'child3url') and not(local-name() = 'child3Url')"><xsl:text>child3Url</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to child3Url</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'child4url') and not(local-name() = 'child4Url')"><xsl:text>child4Url</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to child4Url</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'closed') and not(local-name() = 'closed')"><xsl:text>closed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to closed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'closuretype') and not(local-name() = 'closureType')"><xsl:text>closureType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to closureType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colorkey') and not(local-name() = 'colorKey')"><xsl:text>colorKey</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to colorKey</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colorindex') and not(local-name() = 'colorIndex')"><xsl:text>colorIndex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to colorIndex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colorpervertex') and not(local-name() = 'colorPerVertex')"><xsl:text>colorPerVertex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to colorPerVertex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'convex') and not(local-name() = 'convex')"><xsl:text>convex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to convex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coordindex') and not(local-name() = 'coordIndex')"><xsl:text>coordIndex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to coordIndex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'country') and not(local-name() = 'country')"><xsl:text>country</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to country</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'creaseangle') and not(local-name() = 'creaseAngle')"><xsl:text>creaseAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to creaseAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'crosssection') and not(local-name() = 'crossSection')"><xsl:text>crossSection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to crossSection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'directoutput') and not(local-name() = 'directOutput')"><xsl:text>directOutput</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to directOutput</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'domain') and not(local-name() = 'domain')"><xsl:text>domain</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to domain</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'duration') and not(local-name() = 'duration')"><xsl:text>duration</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to duration</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'endcap') and not(local-name() = 'endCap')"><xsl:text>endCap</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to endCap</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'endangle') and not(local-name() = 'endAngle')"><xsl:text>endAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to endAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'extra') and not(local-name() = 'extra')"><xsl:text>extra</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to extra</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'forcetransitions') and not(local-name() = 'forceTransitions')"><xsl:text>forceTransitions</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to forceTransitions</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'generatemipmaps') and not(local-name() = 'generateMipMaps')"><xsl:text>generateMipMaps</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to generateMipMaps</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geogridorigin') and not(local-name() = 'geoGridOrigin')"><xsl:text>geoGridOrigin</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to geoGridOrigin</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geometrytype') and not(local-name() = 'geometryType')"><xsl:text>geometryType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to geometryType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geosystem') and not(local-name() = 'geoSystem')"><xsl:text>geoSystem</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to geoSystem</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'height') and not(local-name() = 'height')"><xsl:text>height</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to height</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'index') and not(local-name() = 'index')"><xsl:text>index</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to index</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'initialdestination') and not(local-name() = 'initialDestination')"><xsl:text>initialDestination</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to initialDestination</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'initialvalue') and not(local-name() = 'initialValue')"><xsl:text>initialValue</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to initialValue</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'innerradius') and not(local-name() = 'innerRadius')"><xsl:text>innerRadius</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to innerRadius</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'internal') and not(local-name() = 'internal')"><xsl:text>internal</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to internal</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'intersectiontype') and not(local-name() = 'intersectionType')"><xsl:text>intersectionType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to intersectionType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'kind') and not(local-name() = 'kind')"><xsl:text>kind</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to kind</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'knot') and not(local-name() = 'knot')"><xsl:text>knot</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to knot</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'language') and not(local-name() = 'language')"><xsl:text>language</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to language</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'linesegments') and not(local-name() = 'lineSegments')"><xsl:text>lineSegments</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to lineSegments</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'mustevaluate') and not(local-name() = 'mustEvaluate')"><xsl:text>mustEvaluate</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to mustEvaluate</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normalindex') and not(local-name() = 'normalIndex')"><xsl:text>normalIndex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to normalIndex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normalpervertex') and not(local-name() = 'normalPerVertex')"><xsl:text>normalPerVertex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to normalPerVertex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'numcomponents') and not(local-name() = 'numComponents')"><xsl:text>numComponents</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to numComponents</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'order') and not(local-name() = 'order')"><xsl:text>order</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to order</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'outerradius') and not(local-name() = 'outerRadius')"><xsl:text>outerRadius</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to outerRadius</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'phasefunction') and not(local-name() = 'phaseFunction')"><xsl:text>phaseFunction</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to phaseFunction</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radius') and not(local-name() = 'radius')"><xsl:text>radius</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radius</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'range') and not(local-name() = 'range')"><xsl:text>range</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to range</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'repeatr') and not(local-name() = 'repeatR')"><xsl:text>repeatR</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to repeatR</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'repeats') and not(local-name() = 'repeatS')"><xsl:text>repeatS</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to repeatS</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'repeatt') and not(local-name() = 'repeatT')"><xsl:text>repeatT</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to repeatT</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rooturl') and not(local-name() = 'rootUrl')"><xsl:text>rootUrl</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to rootUrl</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rotateyup') and not(local-name() = 'rotateYUp')"><xsl:text>rotateYUp</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to rotateYUp</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rtpheaderexpected') and not(local-name() = 'rtpHeaderExpected')"><xsl:text>rtpHeaderExpected</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to rtpHeaderExpected</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'size') and not(local-name() = 'size')"><xsl:text>size</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to size</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'sortorder') and not(local-name() = 'sortOrder')"><xsl:text>sortOrder</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to sortOrder</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'spatialize') and not(local-name() = 'spatialize')"><xsl:text>spatialize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to spatialize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'specific') and not(local-name() = 'specific')"><xsl:text>specific</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to specific</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'speedfactor') and not(local-name() = 'speedFactor')"><xsl:text>speedFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to speedFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'spine') and not(local-name() = 'spine')"><xsl:text>spine</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to spine</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'startangle') and not(local-name() = 'startAngle')"><xsl:text>startAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to startAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'subcategory') and not(local-name() = 'subcategory')"><xsl:text>subcategory</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to subcategory</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texcoordindex') and not(local-name() = 'texCoordIndex')"><xsl:text>texCoordIndex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to texCoordIndex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texcoordkey') and not(local-name() = 'texCoordKey')"><xsl:text>texCoordKey</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to texCoordKey</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'uclosed') and not(local-name() = 'uClosed')"><xsl:text>uClosed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to uClosed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'udimension') and not(local-name() = 'uDimension')"><xsl:text>uDimension</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to uDimension</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'uknot') and not(local-name() = 'uKnot')"><xsl:text>uKnot</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to uKnot</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'uorder') and not(local-name() = 'uOrder')"><xsl:text>uOrder</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to uOrder</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vclosed') and not(local-name() = 'vClosed')"><xsl:text>vClosed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vClosed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vdimension') and not(local-name() = 'vDimension')"><xsl:text>vDimension</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vDimension</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vknot') and not(local-name() = 'vKnot')"><xsl:text>vKnot</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vKnot</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vorder') and not(local-name() = 'vOrder')"><xsl:text>vOrder</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vOrder</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'xdimension') and not(local-name() = 'xDimension')"><xsl:text>xDimension</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to xDimension</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'xspacing') and not(local-name() = 'xSpacing')"><xsl:text>xSpacing</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to xSpacing</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'zdimension') and not(local-name() = 'zDimension')"><xsl:text>zDimension</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to zDimension</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'zspacing') and not(local-name() = 'zSpacing')"><xsl:text>zSpacing</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to zSpacing</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'absorption') and not(local-name() = 'absorption')"><xsl:text>absorption</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to absorption</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'activelayer') and not(local-name() = 'activeLayer')"><xsl:text>activeLayer</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to activeLayer</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'address') and not(local-name() = 'address')"><xsl:text>address</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to address</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'align') and not(local-name() = 'align')"><xsl:text>align</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to align</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'alpha') and not(local-name() = 'alpha')"><xsl:text>alpha</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to alpha</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'alphacutoff') and not(local-name() = 'alphaCutoff')"><xsl:text>alphaCutoff</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to alphaCutoff</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'alphamode') and not(local-name() = 'alphaMode')"><xsl:text>alphaMode</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to alphaMode</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'ambientintensity') and not(local-name() = 'ambientIntensity')"><xsl:text>ambientIntensity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to ambientIntensity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'ambienttexturemapping') and not(local-name() = 'ambientTextureMapping')"><xsl:text>ambientTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to ambientTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'anchorpoint') and not(local-name() = 'anchorPoint')"><xsl:text>anchorPoint</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to anchorPoint</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'angle') and not(local-name() = 'angle')"><xsl:text>angle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to angle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'angulardampingfactor') and not(local-name() = 'angularDampingFactor')"><xsl:text>angularDampingFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to angularDampingFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'angularvelocity') and not(local-name() = 'angularVelocity')"><xsl:text>angularVelocity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to angularVelocity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'anisotropicdegree') and not(local-name() = 'anisotropicDegree')"><xsl:text>anisotropicDegree</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to anisotropicDegree</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'antennalocation') and not(local-name() = 'antennaLocation')"><xsl:text>antennaLocation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to antennaLocation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'applicationid') and not(local-name() = 'applicationID')"><xsl:text>applicationID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to applicationID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'applied') and not(local-name() = 'applied')"><xsl:text>applied</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to applied</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'appliedparameters') and not(local-name() = 'appliedParameters')"><xsl:text>appliedParameters</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to appliedParameters</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'antennapatterntype') and not(local-name() = 'antennaPatternType')"><xsl:text>antennaPatternType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to antennaPatternType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'antennapatternlength') and not(local-name() = 'antennaPatternLength')"><xsl:text>antennaPatternLength</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to antennaPatternLength</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'articulationparameterarray') and not(local-name() = 'articulationParameterArray')"><xsl:text>articulationParameterArray</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to articulationParameterArray</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'articulationparameterchangeindicatorarray') and not(local-name() = 'articulationParameterChangeIndicatorArray')"><xsl:text>articulationParameterChangeIndicatorArray</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to articulationParameterChangeIndicatorArray</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'articulationparametercount') and not(local-name() = 'articulationParameterCount')"><xsl:text>articulationParameterCount</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to articulationParameterCount</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'articulationparameterdesignatorarray') and not(local-name() = 'articulationParameterDesignatorArray')"><xsl:text>articulationParameterDesignatorArray</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to articulationParameterDesignatorArray</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'articulationparameteridpartattachedtoarray') and not(local-name() = 'articulationParameterIdPartAttachedToArray')"><xsl:text>articulationParameterIdPartAttachedToArray</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to articulationParameterIdPartAttachedToArray</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'articulationparametertypearray') and not(local-name() = 'articulationParameterTypeArray')"><xsl:text>articulationParameterTypeArray</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to articulationParameterTypeArray</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'attack') and not(local-name() = 'attack')"><xsl:text>attack</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to attack</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'attenuation') and not(local-name() = 'attenuation')"><xsl:text>attenuation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to attenuation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'autodamp') and not(local-name() = 'autoDamp')"><xsl:text>autoDamp</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to autoDamp</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'autodisable') and not(local-name() = 'autoDisable')"><xsl:text>autoDisable</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to autoDisable</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'autooffset') and not(local-name() = 'autoOffset')"><xsl:text>autoOffset</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to autoOffset</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'autorefresh') and not(local-name() = 'autoRefresh')"><xsl:text>autoRefresh</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to autoRefresh</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'autorefreshtimelimit') and not(local-name() = 'autoRefreshTimeLimit')"><xsl:text>autoRefreshTimeLimit</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to autoRefreshTimeLimit</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'avatarsize') and not(local-name() = 'avatarSize')"><xsl:text>avatarSize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to avatarSize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis') and not(local-name() = 'axis')"><xsl:text>axis</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis1') and not(local-name() = 'axis1')"><xsl:text>axis1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis1angle') and not(local-name() = 'axis1Angle')"><xsl:text>axis1Angle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis1Angle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis1torque') and not(local-name() = 'axis1Torque')"><xsl:text>axis1Torque</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis1Torque</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis2') and not(local-name() = 'axis2')"><xsl:text>axis2</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis2</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis2angle') and not(local-name() = 'axis2Angle')"><xsl:text>axis2Angle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis2Angle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis2torque') and not(local-name() = 'axis2Torque')"><xsl:text>axis2Torque</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis2Torque</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis3angle') and not(local-name() = 'axis3Angle')"><xsl:text>axis3Angle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis3Angle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axis3torque') and not(local-name() = 'axis3Torque')"><xsl:text>axis3Torque</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axis3Torque</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axisofrotation') and not(local-name() = 'axisOfRotation')"><xsl:text>axisOfRotation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axisOfRotation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'axisrotation') and not(local-name() = 'axisRotation')"><xsl:text>axisRotation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to axisRotation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backambientintensity') and not(local-name() = 'backAmbientIntensity')"><xsl:text>backAmbientIntensity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backAmbientIntensity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backdiffusecolor') and not(local-name() = 'backDiffuseColor')"><xsl:text>backDiffuseColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backDiffuseColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backemissivecolor') and not(local-name() = 'backEmissiveColor')"><xsl:text>backEmissiveColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backEmissiveColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backshininess') and not(local-name() = 'backShininess')"><xsl:text>backShininess</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backShininess</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backspecularcolor') and not(local-name() = 'backSpecularColor')"><xsl:text>backSpecularColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backSpecularColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backtexture') and not(local-name() = 'backTexture')"><xsl:text>backTexture</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backTexture</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backtransparency') and not(local-name() = 'backTransparency')"><xsl:text>backTransparency</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backTransparency</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'backurl') and not(local-name() = 'backUrl')"><xsl:text>backUrl</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to backUrl</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'basecolor') and not(local-name() = 'baseColor')"><xsl:text>baseColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to baseColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'basetexturemapping') and not(local-name() = 'baseTextureMapping')"><xsl:text>baseTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to baseTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'beamwidth') and not(local-name() = 'beamWidth')"><xsl:text>beamWidth</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to beamWidth</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bottom') and not(local-name() = 'bottom')"><xsl:text>bottom</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bottom</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bottomtexture') and not(local-name() = 'bottomTexture')"><xsl:text>bottomTexture</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bottomTexture</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bottomurl') and not(local-name() = 'bottomUrl')"><xsl:text>bottomUrl</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bottomUrl</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bounce') and not(local-name() = 'bounce')"><xsl:text>bounce</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bounce</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'boundaryopacity') and not(local-name() = 'boundaryOpacity')"><xsl:text>boundaryOpacity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to boundaryOpacity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bordercolor') and not(local-name() = 'borderColor')"><xsl:text>borderColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to borderColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'borderwidth') and not(local-name() = 'borderWidth')"><xsl:text>borderWidth</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to borderWidth</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'boundarymodes') and not(local-name() = 'boundaryModeS')"><xsl:text>boundaryModeS</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to boundaryModeS</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'boundarymodet') and not(local-name() = 'boundaryModeT')"><xsl:text>boundaryModeT</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to boundaryModeT</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'boundarymoder') and not(local-name() = 'boundaryModeR')"><xsl:text>boundaryModeR</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to boundaryModeR</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'buffer') and not(local-name() = 'buffer')"><xsl:text>buffer</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to buffer</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bufferduration') and not(local-name() = 'bufferDuration')"><xsl:text>bufferDuration</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bufferDuration</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'center') and not(local-name() = 'center')"><xsl:text>center</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to center</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'castshadow') and not(local-name() = 'castShadow')"><xsl:text>castShadow</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to castShadow</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'centerofmass') and not(local-name() = 'centerOfMass')"><xsl:text>centerOfMass</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to centerOfMass</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'centerofrotation') and not(local-name() = 'centerOfRotation')"><xsl:text>centerOfRotation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to centerOfRotation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'class') and not(local-name() = 'class')"><xsl:text>class</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to class</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'clipboundary') and not(local-name() = 'clipBoundary')"><xsl:text>clipBoundary</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to clipBoundary</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channels') and not(local-name() = 'channels')"><xsl:text>channels</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to channels</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channelcountmode') and not(local-name() = 'channelCountMode')"><xsl:text>channelCountMode</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to channelCountMode</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channelinterpretation') and not(local-name() = 'channelInterpretation')"><xsl:text>channelInterpretation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to channelInterpretation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channelselection') and not(local-name() = 'channelSelection')"><xsl:text>channelSelection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to channelSelection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'channelsenabled') and not(local-name() = 'channelsEnabled')"><xsl:text>channelsEnabled</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to channelsEnabled</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'gain') and not(local-name() = 'gain')"><xsl:text>gain</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to gain</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'collisiontype') and not(local-name() = 'collisionType')"><xsl:text>collisionType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to collisionType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'color') and not(local-name() = 'color')"><xsl:text>color</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to color</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'colorsteps') and not(local-name() = 'colorSteps')"><xsl:text>colorSteps</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to colorSteps</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coneinnerangle') and not(local-name() = 'coneInnerAngle')"><xsl:text>coneInnerAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to coneInnerAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coneouterangle') and not(local-name() = 'coneOuterAngle')"><xsl:text>coneOuterAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to coneOuterAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coneoutergain') and not(local-name() = 'coneOuterGain')"><xsl:text>coneOuterGain</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to coneOuterGain</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'contactnormal') and not(local-name() = 'contactNormal')"><xsl:text>contactNormal</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to contactNormal</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'contourstepsize') and not(local-name() = 'contourStepSize')"><xsl:text>contourStepSize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to contourStepSize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'controlpoint') and not(local-name() = 'controlPoint')"><xsl:text>controlPoint</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to controlPoint</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'constantforcemix') and not(local-name() = 'constantForceMix')"><xsl:text>constantForceMix</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to constantForceMix</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'contactsurfacethickness') and not(local-name() = 'contactSurfaceThickness')"><xsl:text>contactSurfaceThickness</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to contactSurfaceThickness</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'coolcolor') and not(local-name() = 'coolColor')"><xsl:text>coolColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to coolColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'createparticles') and not(local-name() = 'createParticles')"><xsl:text>createParticles</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to createParticles</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cryptosystem') and not(local-name() = 'cryptoSystem')"><xsl:text>cryptoSystem</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to cryptoSystem</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cryptokeyid') and not(local-name() = 'cryptoKeyID')"><xsl:text>cryptoKeyID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to cryptoKeyID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cutoffangle') and not(local-name() = 'cutOffAngle')"><xsl:text>cutOffAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to cutOffAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'cycleinterval') and not(local-name() = 'cycleInterval')"><xsl:text>cycleInterval</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to cycleInterval</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'data') and not(local-name() = 'data')"><xsl:text>data</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to data</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'datalength') and not(local-name() = 'dataLength')"><xsl:text>dataLength</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to dataLength</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'deadreckoning') and not(local-name() = 'deadReckoning')"><xsl:text>deadReckoning</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to deadReckoning</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'delaytime') and not(local-name() = 'delayTime')"><xsl:text>delayTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to delayTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'deletionallowed') and not(local-name() = 'deletionAllowed')"><xsl:text>deletionAllowed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to deletionAllowed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'depth') and not(local-name() = 'depth')"><xsl:text>depth</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to depth</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'description') and not(local-name() = 'description')"><xsl:text>description</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to description</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'desiredangularvelocity1') and not(local-name() = 'desiredAngularVelocity1')"><xsl:text>desiredAngularVelocity1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to desiredAngularVelocity1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'desiredangularvelocity2') and not(local-name() = 'desiredAngularVelocity2')"><xsl:text>desiredAngularVelocity2</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to desiredAngularVelocity2</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'detonationlocation') and not(local-name() = 'detonationLocation')"><xsl:text>detonationLocation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to detonationLocation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'detonationrelativelocation') and not(local-name() = 'detonationRelativeLocation')"><xsl:text>detonationRelativeLocation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to detonationRelativeLocation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'detonationresult') and not(local-name() = 'detonationResult')"><xsl:text>detonationResult</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to detonationResult</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'detune') and not(local-name() = 'detune')"><xsl:text>detune</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to detune</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'diffuse') and not(local-name() = 'diffuse')"><xsl:text>diffuse</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to diffuse</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'diffusecoefficients') and not(local-name() = 'diffuseCoefficients')"><xsl:text>diffuseCoefficients</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to diffuseCoefficients</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'diffusecolor') and not(local-name() = 'diffuseColor')"><xsl:text>diffuseColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to diffuseColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'diffusetexturemapping') and not(local-name() = 'diffuseTextureMapping')"><xsl:text>diffuseTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to diffuseTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'dimensions') and not(local-name() = 'dimensions')"><xsl:text>dimensions</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to dimensions</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'direction') and not(local-name() = 'direction')"><xsl:text>direction</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to direction</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'disableangularspeed') and not(local-name() = 'disableAngularSpeed')"><xsl:text>disableAngularSpeed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to disableAngularSpeed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'disablelinearspeed') and not(local-name() = 'disableLinearSpeed')"><xsl:text>disableLinearSpeed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to disableLinearSpeed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'disabletime') and not(local-name() = 'disableTime')"><xsl:text>disableTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to disableTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'diskangle') and not(local-name() = 'diskAngle')"><xsl:text>diskAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to diskAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'displacements') and not(local-name() = 'displacements')"><xsl:text>displacements</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to displacements</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'bboxdisplay') and not(local-name() = 'bboxDisplay')"><xsl:text>bboxDisplay</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to bboxDisplay</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'detune') and not(local-name() = 'detune')"><xsl:text>detune</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to detune</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'displayed') and not(local-name() = 'displayed')"><xsl:text>displayed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to displayed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'distancemodel') and not(local-name() = 'distanceModel')"><xsl:text>distanceModel</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to distanceModel</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'easeineaseout') and not(local-name() = 'easeInEaseOut')"><xsl:text>easeInEaseOut</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to easeInEaseOut</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'edgecolor') and not(local-name() = 'edgeColor')"><xsl:text>edgeColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to edgeColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'emissivecolor') and not(local-name() = 'emissiveColor')"><xsl:text>emissiveColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to emissiveColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'emissivetexturemapping') and not(local-name() = 'emissiveTextureMapping')"><xsl:text>emissiveTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to emissiveTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'enabled') and not(local-name() = 'enabled')"><xsl:text>enabled</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to enabled</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'enabledaxes') and not(local-name() = 'enabledAxes')"><xsl:text>enabledAxes</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to enabledAxes</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'dopplerEnabled') and not(local-name() = 'dopplerEnabled')"><xsl:text>dopplerEnabled</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to dopplerEnabled</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'enablehrtf') and not(local-name() = 'enableHRTF')"><xsl:text>enableHRTF</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to enableHRTF</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'encodingscheme') and not(local-name() = 'encodingScheme')"><xsl:text>encodingScheme</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to encodingScheme</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'endframe') and not(local-name() = 'endFrame')"><xsl:text>endFrame</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to endFrame</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entityid') and not(local-name() = 'entityID')"><xsl:text>entityID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entityID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entitykind') and not(local-name() = 'entityKind')"><xsl:text>entityKind</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entityKind</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entitydomain') and not(local-name() = 'entityDomain')"><xsl:text>entityDomain</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entityDomain</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entitycountry') and not(local-name() = 'entityCountry')"><xsl:text>entityCountry</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entityCountry</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entitycategory') and not(local-name() = 'entityCategory')"><xsl:text>entityCategory</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entityCategory</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entitysubcategory') and not(local-name() = 'entitySubcategory')"><xsl:text>entitySubcategory</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entitySubcategory</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entityspecific') and not(local-name() = 'entitySpecific')"><xsl:text>entitySpecific</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entitySpecific</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'entityextra') and not(local-name() = 'entityExtra')"><xsl:text>entityExtra</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to entityExtra</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'errorcorrection') and not(local-name() = 'errorCorrection')"><xsl:text>errorCorrection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to errorCorrection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'eventapplicationid') and not(local-name() = 'eventApplicationID')"><xsl:text>eventApplicationID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to eventApplicationID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'evententityid') and not(local-name() = 'eventEntityID')"><xsl:text>eventEntityID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to eventEntityID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'eventnumber') and not(local-name() = 'eventNumber')"><xsl:text>eventNumber</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to eventNumber</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'eventsiteid') and not(local-name() = 'eventSiteID')"><xsl:text>eventSiteID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to eventSiteID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'family') and not(local-name() = 'family')"><xsl:text>family</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to family</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fancount') and not(local-name() = 'fanCount')"><xsl:text>fanCount</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fanCount</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fardistance') and not(local-name() = 'farDistance')"><xsl:text>farDistance</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to farDistance</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fftsize') and not(local-name() = 'fftSize')"><xsl:text>fftSize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fftSize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fieldofview') and not(local-name() = 'fieldOfView')"><xsl:text>fieldOfView</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fieldOfView</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'filled') and not(local-name() = 'filled')"><xsl:text>filled</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to filled</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'finiterotationaxis') and not(local-name() = 'finiteRotationAxis')"><xsl:text>finiteRotationAxis</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to finiteRotationAxis</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fired1') and not(local-name() = 'fired1')"><xsl:text>fired1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fired1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fired2') and not(local-name() = 'fired2')"><xsl:text>fired2</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fired2</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'firemissionindex') and not(local-name() = 'fireMissionIndex')"><xsl:text>fireMissionIndex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fireMissionIndex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'firingrange') and not(local-name() = 'firingRange')"><xsl:text>firingRange</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to firingRange</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'firingrate') and not(local-name() = 'firingRate')"><xsl:text>firingRate</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to firingRate</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fixed') and not(local-name() = 'fixed')"><xsl:text>fixed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fixed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fogtype') and not(local-name() = 'fogType')"><xsl:text>fogType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fogType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'force') and not(local-name() = 'force')"><xsl:text>force</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to force</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'forceid') and not(local-name() = 'forceID')"><xsl:text>forceID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to forceID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'forceoutput') and not(local-name() = 'forceOutput')"><xsl:text>forceOutput</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to forceOutput</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'forces') and not(local-name() = 'forces')"><xsl:text>forces</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to forces</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'frameduration') and not(local-name() = 'frameDuration')"><xsl:text>frameDuration</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frameDuration</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'frameincrement') and not(local-name() = 'frameIncrement')"><xsl:text>frameIncrement</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frameIncrement</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'frameindex') and not(local-name() = 'frameIndex')"><xsl:text>frameIndex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frameIndex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'frequency') and not(local-name() = 'frequency')"><xsl:text>frequency</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frequency</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'frequencybincount') and not(local-name() = 'frequencyBinCount')"><xsl:text>frequencyBinCount</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frequencyBinCount</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'frictioncoefficients') and not(local-name() = 'frictionCoefficients')"><xsl:text>frictionCoefficients</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frictionCoefficients</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'frictiondirection') and not(local-name() = 'frictionDirection')"><xsl:text>frictionDirection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frictionDirection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fronttexture') and not(local-name() = 'frontTexture')"><xsl:text>frontTexture</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frontTexture</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fronturl') and not(local-name() = 'frontUrl')"><xsl:text>frontUrl</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to frontUrl</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'function') and not(local-name() = 'function')"><xsl:text>function</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to function</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'fuse') and not(local-name() = 'fuse')"><xsl:text>fuse</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to fuse</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'gain') and not(local-name() = 'gain')"><xsl:text>gain</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to gain</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geocenter') and not(local-name() = 'geoCenter')"><xsl:text>geoCenter</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to geoCenter</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'geocoords') and not(local-name() = 'geoCoords')"><xsl:text>geoCoords</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to geoCoords</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'global') and not(local-name() = 'global')"><xsl:text>global</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to global</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'gradientthreshold') and not(local-name() = 'gradientThreshold')"><xsl:text>gradientThreshold</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to gradientThreshold</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'gravity') and not(local-name() = 'gravity')"><xsl:text>gravity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to gravity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'groundangle') and not(local-name() = 'groundAngle')"><xsl:text>groundAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to groundAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'groundcolor') and not(local-name() = 'groundColor')"><xsl:text>groundColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to groundColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'gustiness') and not(local-name() = 'gustiness')"><xsl:text>gustiness</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to gustiness</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hatchcolor') and not(local-name() = 'hatchColor')"><xsl:text>hatchColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to hatchColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hatched') and not(local-name() = 'hatched')"><xsl:text>hatched</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to hatched</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'hatchstyle') and not(local-name() = 'hatchStyle')"><xsl:text>hatchStyle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to hatchStyle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'headlight') and not(local-name() = 'headlight')"><xsl:text>headlight</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to headlight</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'horizontal') and not(local-name() = 'horizontal')"><xsl:text>horizontal</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to horizontal</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'id') and not(local-name() = 'id')"><xsl:text>id</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to id</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'image') and not(local-name() = 'image')"><xsl:text>image</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to image</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'inertia') and not(local-name() = 'inertia')"><xsl:text>inertia</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to inertia</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'info') and not(local-name() = 'info')"><xsl:text>info</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to info</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'inputsource') and not(local-name() = 'inputSource')"><xsl:text>inputSource</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to inputSource</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'integerkey') and not(local-name() = 'integerKey')"><xsl:text>integerKey</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to integerKey</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'intensity') and not(local-name() = 'intensity')"><xsl:text>intensity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to intensity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'intensitythreshold') and not(local-name() = 'intensityThreshold')"><xsl:text>intensityThreshold</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to intensityThreshold</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'interauraldistance') and not(local-name() = 'interauralDistance')"><xsl:text>interauralDistance</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to interauralDistance</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'iterations') and not(local-name() = 'iterations')"><xsl:text>iterations</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to iterations</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'jointbindingpositions') and not(local-name() = 'jointBindingPositions')"><xsl:text>jointBindingPositions</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to jointBindingPositions</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'jointbindingrotations') and not(local-name() = 'jointBindingRotations')"><xsl:text>jointBindingRotations</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to jointBindingRotations</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'jointbindingscales') and not(local-name() = 'jointBindingScales')"><xsl:text>jointBindingScales</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to jointBindingScales</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'joints') and not(local-name() = 'joints')"><xsl:text>joints</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to joints</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'justify') and not(local-name() = 'justify')"><xsl:text>justify</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to justify</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'key') and not(local-name() = 'key')"><xsl:text>key</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to key</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'knee') and not(local-name() = 'knee')"><xsl:text>knee</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to knee</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'keyvelocity') and not(local-name() = 'keyVelocity')"><xsl:text>keyVelocity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to keyVelocity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'jump') and not(local-name() = 'jump')"><xsl:text>jump</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to jump</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'keyvalue') and not(local-name() = 'keyValue')"><xsl:text>keyValue</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to keyValue</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'language') and not(local-name() = 'language')"><xsl:text>language</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to language</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lefttexture') and not(local-name() = 'leftTexture')"><xsl:text>leftTexture</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to leftTexture</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lefttoright') and not(local-name() = 'leftToRight')"><xsl:text>leftToRight</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to leftToRight</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lefturl') and not(local-name() = 'leftUrl')"><xsl:text>leftUrl</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to leftUrl</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'length') and not(local-name() = 'length')"><xsl:text>length</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to length</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lengthofmodulationparameters') and not(local-name() = 'lengthOfModulationParameters')"><xsl:text>lengthOfModulationParameters</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to lengthOfModulationParameters</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lifetimevariation') and not(local-name() = 'lifetimeVariation')"><xsl:text>lifetimeVariation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to lifetimeVariation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lighting') and not(local-name() = 'lighting')"><xsl:text>lighting</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to lighting</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'limitorientation') and not(local-name() = 'limitOrientation')"><xsl:text>limitOrientation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to limitOrientation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'linearacceleration') and not(local-name() = 'linearAcceleration')"><xsl:text>linearAcceleration</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to linearAcceleration</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'lineardampingfactor') and not(local-name() = 'linearDampingFactor')"><xsl:text>linearDampingFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to linearDampingFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'linearvelocity') and not(local-name() = 'linearVelocity')"><xsl:text>linearVelocity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to linearVelocity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'linetype') and not(local-name() = 'linetype')"><xsl:text>linetype</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to linetype</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'linewidthscalefactor') and not(local-name() = 'linewidthScaleFactor')"><xsl:text>linewidthScaleFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to linewidthScaleFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'llimit') and not(local-name() = 'llimit')"><xsl:text>llimit</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to llimit</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'loa') and not(local-name() = 'loa')"><xsl:text>loa</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to loa</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'load') and not(local-name() = 'load')"><xsl:text>load</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to load</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'location') and not(local-name() = 'location')"><xsl:text>location</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to location</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'loop') and not(local-name() = 'loop')"><xsl:text>loop</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to loop</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'loopend') and not(local-name() = 'loopEnd')"><xsl:text>loopEnd</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to loopEnd</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'loopstart') and not(local-name() = 'loopStart')"><xsl:text>loopStart</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to loopStart</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'mapping') and not(local-name() = 'mapping')"><xsl:text>mapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to mapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'marking') and not(local-name() = 'marking')"><xsl:text>marking</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to marking</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'mass') and not(local-name() = 'mass')"><xsl:text>mass</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to mass</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'magnificationfilter') and not(local-name() = 'magnificationFilter')"><xsl:text>magnificationFilter</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to magnificationFilter</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'matchcriterion') and not(local-name() = 'matchCriterion')"><xsl:text>matchCriterion</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to matchCriterion</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'matrix') and not(local-name() = 'matrix')"><xsl:text>matrix</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to matrix</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxangle') and not(local-name() = 'maxAngle')"><xsl:text>maxAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxangle1') and not(local-name() = 'maxAngle1')"><xsl:text>maxAngle1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxAngle1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxback') and not(local-name() = 'maxBack')"><xsl:text>maxBack</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxBack</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxchannelcount') and not(local-name() = 'maxChannelCount')"><xsl:text>maxChannelCount</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxChannelCount</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxcorrectionspeed') and not(local-name() = 'maxCorrectionSpeed')"><xsl:text>maxCorrectionSpeed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxCorrectionSpeed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxdecibels') and not(local-name() = 'maxDecibels')"><xsl:text>maxDecibels</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxDecibels</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxdelaytime') and not(local-name() = 'maxDelayTime')"><xsl:text>maxDelayTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxDelayTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxdistance') and not(local-name() = 'maxDistance')"><xsl:text>maxDistance</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxDistance</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxextent') and not(local-name() = 'maxExtent')"><xsl:text>maxExtent</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxExtent</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxfront') and not(local-name() = 'maxFront')"><xsl:text>maxFront</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxFront</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxparticles') and not(local-name() = 'maxParticles')"><xsl:text>maxParticles</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxParticles</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxposition') and not(local-name() = 'maxPosition')"><xsl:text>maxPosition</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxPosition</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxseparation') and not(local-name() = 'maxSeparation')"><xsl:text>maxSeparation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxSeparation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxtorque1') and not(local-name() = 'maxTorque1')"><xsl:text>maxTorque1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxTorque1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'maxtorque2') and not(local-name() = 'maxTorque2')"><xsl:text>maxTorque2</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to maxTorque2</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'mediadeviceid') and not(local-name() = 'mediaDeviceID')"><xsl:text>mediaDeviceID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to mediaDeviceID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metallic') and not(local-name() = 'metallic')"><xsl:text>metallic</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to metallic</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'metallicroughnesstexturemapping') and not(local-name() = 'metallicRoughnessTextureMapping')"><xsl:text>metallicRoughnessTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to metallicRoughnessTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minangle') and not(local-name() = 'minAngle')"><xsl:text>minAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minangle1') and not(local-name() = 'minAngle1')"><xsl:text>minAngle1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minAngle1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minback') and not(local-name() = 'minBack')"><xsl:text>minBack</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minBack</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minbouncespeed') and not(local-name() = 'minBounceSpeed')"><xsl:text>minBounceSpeed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minBounceSpeed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'mindecibels') and not(local-name() = 'minDecibels')"><xsl:text>minDecibels</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minDecibels</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minfront') and not(local-name() = 'minFront')"><xsl:text>minFront</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minFront</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minificationfilter') and not(local-name() = 'minificationFilter')"><xsl:text>minificationFilter</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minificationFilter</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minposition') and not(local-name() = 'minPosition')"><xsl:text>minPosition</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minPosition</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'minseparation') and not(local-name() = 'minSeparation')"><xsl:text>minSeparation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to minSeparation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'mode') and not(local-name() = 'mode')"><xsl:text>mode</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to mode</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'modulationtypespreadspectrum') and not(local-name() = 'modulationTypeSpreadSpectrum')"><xsl:text>modulationTypeSpreadSpectrum</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to modulationTypeSpreadSpectrum</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'modulationtypemajor') and not(local-name() = 'modulationTypeMajor')"><xsl:text>modulationTypeMajor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to modulationTypeMajor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'modulationtypedetail') and not(local-name() = 'modulationTypeDetail')"><xsl:text>modulationTypeDetail</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to modulationTypeDetail</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'modulationtypesystem') and not(local-name() = 'modulationTypeSystem')"><xsl:text>modulationTypeSystem</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to modulationTypeSystem</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'momentsofinertia') and not(local-name() = 'momentsOfInertia')"><xsl:text>momentsOfInertia</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to momentsOfInertia</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'motor1axis') and not(local-name() = 'motor1Axis')"><xsl:text>motor1Axis</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to motor1Axis</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'motor2axis') and not(local-name() = 'motor2Axis')"><xsl:text>motor2Axis</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to motor2Axis</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'motor3axis') and not(local-name() = 'motor3Axis')"><xsl:text>motor3Axis</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to motor3Axis</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'multicastrelayhost') and not(local-name() = 'multicastRelayHost')"><xsl:text>multicastRelayHost</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to multicastRelayHost</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'multicastrelayport') and not(local-name() = 'multicastRelayPort')"><xsl:text>multicastRelayPort</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to multicastRelayPort</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'munitionendpoint') and not(local-name() = 'munitionEndPoint')"><xsl:text>munitionEndPoint</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to munitionEndPoint</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'munitionstartpoint') and not(local-name() = 'munitionStartPoint')"><xsl:text>munitionStartPoint</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to munitionStartPoint</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'munitionapplicationid') and not(local-name() = 'munitionApplicationID')"><xsl:text>munitionApplicationID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to munitionApplicationID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'munitionentityid') and not(local-name() = 'munitionEntityID')"><xsl:text>munitionEntityID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to munitionEntityID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'munitionsiteid') and not(local-name() = 'munitionSiteID')"><xsl:text>munitionSiteID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to munitionSiteID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'munitionquantity') and not(local-name() = 'munitionQuantity')"><xsl:text>munitionQuantity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to munitionQuantity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'name') and not(local-name() = 'name')"><xsl:text>name</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to name</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'neardistance') and not(local-name() = 'nearDistance')"><xsl:text>nearDistance</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to nearDistance</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'networkmode') and not(local-name() = 'networkMode')"><xsl:text>networkMode</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to networkMode</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normalscale') and not(local-name() = 'normalScale')"><xsl:text>normalScale</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to normalScale</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normaltexturemapping') and not(local-name() = 'normalTextureMapping')"><xsl:text>normalTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to normalTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'numberofchannels') and not(local-name() = 'numberOfChannels')"><xsl:text>numberOfChannels</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to numberOfChannels</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normalize') and not(local-name() = 'normalize')"><xsl:text>normalize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to normalize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'normalizevelocity') and not(local-name() = 'normalizeVelocity')"><xsl:text>normalizeVelocity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to normalizeVelocity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'objecttype') and not(local-name() = 'objectType')"><xsl:text>objectType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to objectType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'occlusionstrength') and not(local-name() = 'occlusionStrength')"><xsl:text>occlusionStrength</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to occlusionStrength</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'occlusiontexturemapping') and not(local-name() = 'occlusionTextureMapping')"><xsl:text>occlusionTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to occlusionTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'offset') and not(local-name() = 'offset')"><xsl:text>offset</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to offset</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'offsetunits') and not(local-name() = 'offsetUnits')"><xsl:text>offsetUnits</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to offsetUnits</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'on') and not(local-name() = 'on')"><xsl:text>on</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to on</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'opacityfactor') and not(local-name() = 'opacityFactor')"><xsl:text>opacityFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to opacityFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'optionsimag') and not(local-name() = 'optionsImag')"><xsl:text>optionsImag</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to optionsImag</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'optionsreal') and not(local-name() = 'optionsReal')"><xsl:text>optionsReal</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to optionsReal</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'orientation') and not(local-name() = 'orientation')"><xsl:text>orientation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to orientation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'orthogonalcolor') and not(local-name() = 'orthogonalColor')"><xsl:text>orthogonalColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to orthogonalColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'oversample') and not(local-name() = 'oversample')"><xsl:text>oversample</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to oversample</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'parallelcolor') and not(local-name() = 'parallelColor')"><xsl:text>parallelColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to parallelColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'parameter') and not(local-name() = 'parameter')"><xsl:text>parameter</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to parameter</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'particlelifetime') and not(local-name() = 'particleLifetime')"><xsl:text>particleLifetime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to particleLifetime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'particlesize') and not(local-name() = 'particleSize')"><xsl:text>particleSize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to particleSize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pausetime') and not(local-name() = 'pauseTime')"><xsl:text>pauseTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to pauseTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pickable') and not(local-name() = 'pickable')"><xsl:text>pickable</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to pickable</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pitch') and not(local-name() = 'pitch')"><xsl:text>pitch</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to pitch</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'plane') and not(local-name() = 'plane')"><xsl:text>plane</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to plane</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'playbackrate') and not(local-name() = 'playbackRate')"><xsl:text>playbackRate</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to playbackRate</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'point') and not(local-name() = 'point')"><xsl:text>point</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to point</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointsize') and not(local-name() = 'pointSize')"><xsl:text>pointSize</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to pointSize</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointsizescalefactor') and not(local-name() = 'pointSizeScaleFactor')"><xsl:text>pointSizeScaleFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to pointSizeScaleFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointsizeminvalue') and not(local-name() = 'pointSizeMinValue')"><xsl:text>pointSizeMinValue</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to pointSizeMinValue</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'pointsizemaxvalue') and not(local-name() = 'pointSizeMaxValue')"><xsl:text>pointSizeMaxValue</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to pointSizeMaxValue</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'port') and not(local-name() = 'port')"><xsl:text>port</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to port</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'position') and not(local-name() = 'position')"><xsl:text>position</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to position</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'power') and not(local-name() = 'power')"><xsl:text>power</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to power</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'preferaccuracy') and not(local-name() = 'preferAccuracy')"><xsl:text>preferAccuracy</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to preferAccuracy</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'priority') and not(local-name() = 'priority')"><xsl:text>priority</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to priority</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'qualityfactor') and not(local-name() = 'qualityFactor')"><xsl:text>qualityFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to qualityFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radioid') and not(local-name() = 'radioID')"><xsl:text>radioID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radioID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radioentitytypekind') and not(local-name() = 'radioEntityTypeKind')"><xsl:text>radioEntityTypeKind</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radioEntityTypeKind</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radioentitytypedomain') and not(local-name() = 'radioEntityTypeDomain')"><xsl:text>radioEntityTypeDomain</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radioEntityTypeDomain</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radioentitytypecountry') and not(local-name() = 'radioEntityTypeCountry')"><xsl:text>radioEntityTypeCountry</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radioEntityTypeCountry</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radioentitytypecategory') and not(local-name() = 'radioEntityTypeCategory')"><xsl:text>radioEntityTypeCategory</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radioEntityTypeCategory</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radioentitytypenomenclature') and not(local-name() = 'radioEntityTypeNomenclature')"><xsl:text>radioEntityTypeNomenclature</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radioEntityTypeNomenclature</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'radioentitytypenomenclatureversion') and not(local-name() = 'radioEntityTypeNomenclatureVersion')"><xsl:text>radioEntityTypeNomenclatureVersion</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to radioEntityTypeNomenclatureVersion</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'ratio') and not(local-name() = 'ratio')"><xsl:text>ratio</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to ratio</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'readinterval') and not(local-name() = 'readInterval')"><xsl:text>readInterval</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to readInterval</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'receivedpower') and not(local-name() = 'receivedPower')"><xsl:text>receivedPower</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to receivedPower</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'receiverstate') and not(local-name() = 'receiverState')"><xsl:text>receiverState</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to receiverState</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'reference') and not(local-name() = 'reference')"><xsl:text>reference</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to reference</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'referencedistance') and not(local-name() = 'referenceDistance')"><xsl:text>referenceDistance</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to referenceDistance</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'refraction') and not(local-name() = 'refraction')"><xsl:text>refraction</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to refraction</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'refresh') and not(local-name() = 'refresh')"><xsl:text>refresh</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to refresh</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'relativeantennalocation') and not(local-name() = 'relativeAntennaLocation')"><xsl:text>relativeAntennaLocation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to relativeAntennaLocation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'release') and not(local-name() = 'release')"><xsl:text>release</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to release</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'retainedopacity') and not(local-name() = 'retainedOpacity')"><xsl:text>retainedOpacity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to retainedOpacity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'retainuseroffsets') and not(local-name() = 'retainUserOffsets')"><xsl:text>retainUserOffsets</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to retainUserOffsets</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'resumetime') and not(local-name() = 'resumeTime')"><xsl:text>resumeTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to resumeTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'righttexture') and not(local-name() = 'rightTexture')"><xsl:text>rightTexture</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to rightTexture</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'righturl') and not(local-name() = 'rightUrl')"><xsl:text>rightUrl</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to rightUrl</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rollofffactor') and not(local-name() = 'rolloffFactor')"><xsl:text>rolloffFactor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to rolloffFactor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'rotation') and not(local-name() = 'rotation')"><xsl:text>rotation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to rotation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'roughness') and not(local-name() = 'roughness')"><xsl:text>roughness</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to roughness</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'samplerate') and not(local-name() = 'sampleRate')"><xsl:text>sampleRate</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to sampleRate</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'samples') and not(local-name() = 'samples')"><xsl:text>samples</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to samples</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'scale') and not(local-name() = 'scale')"><xsl:text>scale</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to scale</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'scalemode') and not(local-name() = 'scaleMode')"><xsl:text>scaleMode</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to scaleMode</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'scaleorientation') and not(local-name() = 'scaleOrientation')"><xsl:text>scaleOrientation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to scaleOrientation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'segmentenabled') and not(local-name() = 'segmentEnabled')"><xsl:text>segmentEnabled</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to segmentEnabled</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'separatebackcolor') and not(local-name() = 'separateBackColor')"><xsl:text>separateBackColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to separateBackColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shininess') and not(local-name() = 'shininess')"><xsl:text>shininess</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to shininess</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shadowintensity') and not(local-name() = 'shadowIntensity')"><xsl:text>shadowIntensity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to shadowIntensity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shadows') and not(local-name() = 'shadows')"><xsl:text>shadows</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to shadows</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'side') and not(local-name() = 'side')"><xsl:text>side</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to side</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'shininesstexturemapping') and not(local-name() = 'shininessTextureMapping')"><xsl:text>shininessTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to shininessTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'silhouetteboundaryopacity') and not(local-name() = 'silhouetteBoundaryOpacity')"><xsl:text>silhouetteBoundaryOpacity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to silhouetteBoundaryOpacity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'silhouetteretainedopacity') and not(local-name() = 'silhouetteRetainedOpacity')"><xsl:text>silhouetteRetainedOpacity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to silhouetteRetainedOpacity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'silhouettesharpness') and not(local-name() = 'silhouetteSharpness')"><xsl:text>silhouetteSharpness</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to silhouetteSharpness</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'siteid') and not(local-name() = 'siteID')"><xsl:text>siteID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to siteID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'size') and not(local-name() = 'size')"><xsl:text>size</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to size</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'sizeunits') and not(local-name() = 'sizeUnits')"><xsl:text>sizeUnits</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to sizeUnits</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'skeletalconfiguration') and not(local-name() = 'skeletalConfiguration')"><xsl:text>skeletalConfiguration</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to skeletalConfiguration</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'skincoordindex') and not(local-name() = 'skinCoordIndex')"><xsl:text>skinCoordIndex</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to skinCoordIndex</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'skincoordweight') and not(local-name() = 'skinCoordWeight')"><xsl:text>skinCoordWeight</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to skinCoordWeight</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'skycolor') and not(local-name() = 'skyColor')"><xsl:text>skyColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to skyColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'skyangle') and not(local-name() = 'skyAngle')"><xsl:text>skyAngle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to skyAngle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'sliderforce') and not(local-name() = 'sliderForce')"><xsl:text>sliderForce</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to sliderForce</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'slipcoefficients') and not(local-name() = 'slipCoefficients')"><xsl:text>slipCoefficients</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to slipCoefficients</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'slipfactors') and not(local-name() = 'slipFactors')"><xsl:text>slipFactors</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to slipFactors</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'smoothingtimeconstant') and not(local-name() = 'smoothingTimeConstant')"><xsl:text>smoothingTimeConstant</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to smoothingTimeConstant</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'softnessconstantforcemix') and not(local-name() = 'softnessConstantForceMix')"><xsl:text>softnessConstantForceMix</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to softnessConstantForceMix</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'softnesserrorcorrection') and not(local-name() = 'softnessErrorCorrection')"><xsl:text>softnessErrorCorrection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to softnessErrorCorrection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'solid') and not(local-name() = 'solid')"><xsl:text>solid</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to solid</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'source') and not(local-name() = 'source')"><xsl:text>source</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to source</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'spacing') and not(local-name() = 'spacing')"><xsl:text>spacing</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to spacing</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'specular') and not(local-name() = 'specular')"><xsl:text>specular</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to specular</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'specularcolor') and not(local-name() = 'specularColor')"><xsl:text>specularColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to specularColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'speculartexturemapping') and not(local-name() = 'specularTextureMapping')"><xsl:text>specularTextureMapping</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to specularTextureMapping</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'speed') and not(local-name() = 'speed')"><xsl:text>speed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to speed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'startframe') and not(local-name() = 'startFrame')"><xsl:text>startFrame</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to startFrame</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'starttime') and not(local-name() = 'startTime')"><xsl:text>startTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to startTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stiffness') and not(local-name() = 'stiffness')"><xsl:text>stiffness</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stiffness</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stopbounce') and not(local-name() = 'stopBounce')"><xsl:text>stopBounce</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stopBounce</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stoperrorcorrection') and not(local-name() = 'stopErrorCorrection')"><xsl:text>stopErrorCorrection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stopErrorCorrection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stop1constantforcemix') and not(local-name() = 'stop1ConstantForceMix')"><xsl:text>stop1ConstantForceMix</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stop1ConstantForceMix</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stop1bounce') and not(local-name() = 'stop1Bounce')"><xsl:text>stop1Bounce</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stop1Bounce</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stop2bounce') and not(local-name() = 'stop2Bounce')"><xsl:text>stop2Bounce</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stop2Bounce</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stop3bounce') and not(local-name() = 'stop3Bounce')"><xsl:text>stop3Bounce</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stop3Bounce</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stop1errorcorrection') and not(local-name() = 'stop1ErrorCorrection')"><xsl:text>stop1ErrorCorrection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stop1ErrorCorrection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stop2errorcorrection') and not(local-name() = 'stop2ErrorCorrection')"><xsl:text>stop2ErrorCorrection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stop2ErrorCorrection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stop3errorcorrection') and not(local-name() = 'stop3ErrorCorrection')"><xsl:text>stop3ErrorCorrection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stop3ErrorCorrection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stoptime') and not(local-name() = 'stopTime')"><xsl:text>stopTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stopTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'streamidentifier') and not(local-name() = 'streamIdentifier')"><xsl:text>streamIdentifier</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to streamIdentifier</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'string') and not(local-name() = 'string')"><xsl:text>string</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to string</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'stripcount') and not(local-name() = 'stripCount')"><xsl:text>stripCount</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to stripCount</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'style') and not(local-name() = 'style')"><xsl:text>style</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to style</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'summary') and not(local-name() = 'summary')"><xsl:text>summary</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to summary</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'surfacearea') and not(local-name() = 'surfaceArea')"><xsl:text>surfaceArea</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to surfaceArea</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'surfacespeed') and not(local-name() = 'surfaceSpeed')"><xsl:text>surfaceSpeed</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to surfaceSpeed</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'surfacetolerance') and not(local-name() = 'surfaceTolerance')"><xsl:text>surfaceTolerance</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to surfaceTolerance</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'surfacevalues') and not(local-name() = 'surfaceValues')"><xsl:text>surfaceValues</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to surfaceValues</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'suspensionerrorcorrection') and not(local-name() = 'suspensionErrorCorrection')"><xsl:text>suspensionErrorCorrection</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to suspensionErrorCorrection</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'suspensionforce') and not(local-name() = 'suspensionForce')"><xsl:text>suspensionForce</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to suspensionForce</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tailtime') and not(local-name() = 'tailTime')"><xsl:text>tailTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to tailTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tau') and not(local-name() = 'tau')"><xsl:text>tau</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to tau</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tdltype') and not(local-name() = 'tdlType')"><xsl:text>tdlType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to tdlType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tessellation') and not(local-name() = 'tessellation')"><xsl:text>tessellation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to tessellation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tessellationscale') and not(local-name() = 'tessellationScale')"><xsl:text>tessellationScale</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to tessellationScale</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturecompression') and not(local-name() = 'textureCompression')"><xsl:text>textureCompression</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to textureCompression</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'texturepriority') and not(local-name() = 'texturePriority')"><xsl:text>texturePriority</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to texturePriority</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'threshold') and not(local-name() = 'threshold')"><xsl:text>threshold</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to threshold</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'timeout') and not(local-name() = 'timeOut')"><xsl:text>timeOut</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to timeOut</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'title') and not(local-name() = 'title')"><xsl:text>title</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to title</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'toggle') and not(local-name() = 'toggle')"><xsl:text>toggle</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to toggle</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'tolerance') and not(local-name() = 'tolerance')"><xsl:text>tolerance</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to tolerance</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'top') and not(local-name() = 'top')"><xsl:text>top</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to top</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'toptexture') and not(local-name() = 'topTexture')"><xsl:text>topTexture</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to topTexture</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'toptobottom') and not(local-name() = 'topToBottom')"><xsl:text>topToBottom</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to topToBottom</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'topurl') and not(local-name() = 'topUrl')"><xsl:text>topUrl</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to topUrl</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'torques') and not(local-name() = 'torques')"><xsl:text>torques</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to torques</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'trackcurrentview') and not(local-name() = 'trackCurrentView')"><xsl:text>trackCurrentView</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to trackCurrentView</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transitiontime') and not(local-name() = 'transitionTime')"><xsl:text>transitionTime</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transitionTime</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transitiontype') and not(local-name() = 'transitionType')"><xsl:text>transitionType</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transitionType</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'translation') and not(local-name() = 'translation')"><xsl:text>translation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to translation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transmitfrequencybandwidth') and not(local-name() = 'transmitFrequencyBandwidth')"><xsl:text>transmitFrequencyBandwidth</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transmitFrequencyBandwidth</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transmitstate') and not(local-name() = 'transmitState')"><xsl:text>transmitState</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transmitState</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transmitterapplicationid') and not(local-name() = 'transmitterApplicationID')"><xsl:text>transmitterApplicationID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transmitterApplicationID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transmitterentityid') and not(local-name() = 'transmitterEntityID')"><xsl:text>transmitterEntityID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transmitterEntityID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transmitterradioid') and not(local-name() = 'transmitterRadioID')"><xsl:text>transmitterRadioID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transmitterRadioID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transmittersiteid') and not(local-name() = 'transmitterSiteID')"><xsl:text>transmitterSiteID</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transmitterSiteID</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'transparency') and not(local-name() = 'transparency')"><xsl:text>transparency</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to transparency</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'turbulence') and not(local-name() = 'turbulence')"><xsl:text>turbulence</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to turbulence</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'type') and not(local-name() = 'type')"><xsl:text>type</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to type</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'ulimit') and not(local-name() = 'ulimit')"><xsl:text>ulimit</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to ulimit</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'upvector') and not(local-name() = 'upVector')"><xsl:text>upVector</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to upVector</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'update') and not(local-name() = 'update')"><xsl:text>update</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to update</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'url') and not(local-name() = 'url')"><xsl:text>url</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to url</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'usefiniterotation') and not(local-name() = 'useFiniteRotation')"><xsl:text>useFiniteRotation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to useFiniteRotation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'usegeometry') and not(local-name() = 'useGeometry')"><xsl:text>useGeometry</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to useGeometry</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'useglobalgravity') and not(local-name() = 'useGlobalGravity')"><xsl:text>useGlobalGravity</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to useGlobalGravity</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'utessellation') and not(local-name() = 'uTessellation')"><xsl:text>uTessellation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to uTessellation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'variation') and not(local-name() = 'variation')"><xsl:text>variation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to variation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'value') and not(local-name() = 'value')"><xsl:text>value</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to value</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'values') and not(local-name() = 'values')"><xsl:text>values</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to values</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'version') and not(local-name() = 'version')"><xsl:text>version</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to version</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vector') and not(local-name() = 'vector')"><xsl:text>vector</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vector</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vertexcount') and not(local-name() = 'vertexCount')"><xsl:text>vertexCount</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vertexCount</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vertices') and not(local-name() = 'vertices')"><xsl:text>vertices</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vertices</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'viewall') and not(local-name() = 'viewAll')"><xsl:text>viewAll</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to viewAll</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'visibilitylimit') and not(local-name() = 'visibilityLimit')"><xsl:text>visibilityLimit</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to visibilityLimit</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'visibilityrange') and not(local-name() = 'visibilityRange')"><xsl:text>visibilityRange</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to visibilityRange</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'visible') and not(local-name() = 'visible')"><xsl:text>visible</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to visible</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'vtessellation') and not(local-name() = 'vTessellation')"><xsl:text>vTessellation</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to vTessellation</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'warhead') and not(local-name() = 'warhead')"><xsl:text>warhead</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to warhead</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'warmcolor') and not(local-name() = 'warmColor')"><xsl:text>warmColor</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to warmColor</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'weight') and not(local-name() = 'weight')"><xsl:text>weight</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to weight</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'weightconstant1') and not(local-name() = 'weightConstant1')"><xsl:text>weightConstant1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to weightConstant1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'weightconstant2') and not(local-name() = 'weightConstant2')"><xsl:text>weightConstant2</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to weightConstant2</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'weightfunction1') and not(local-name() = 'weightFunction1')"><xsl:text>weightFunction1</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to weightFunction1</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'weightfunction2') and not(local-name() = 'weightFunction2')"><xsl:text>weightFunction2</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to weightFunction2</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'whichchoice') and not(local-name() = 'whichChoice')"><xsl:text>whichChoice</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to whichChoice</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'whichgeometry') and not(local-name() = 'whichGeometry')"><xsl:text>whichGeometry</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to whichGeometry</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'writeinterval') and not(local-name() = 'writeInterval')"><xsl:text>writeInterval</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to writeInterval</xsl:text></xsl:message></xsl:when>
                <xsl:when test="(lower-case(local-name()) = 'yscale') and not(local-name() = 'yScale')"><xsl:text>yScale</xsl:text><xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text><xsl:value-of select="local-name(.)"/><xsl:text> to yScale</xsl:text></xsl:message></xsl:when>
                <!-- *** finish: fieldName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->

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
                <xsl:when test="(normalize-space(string(.)) = 'TRUE') or (normalize-space(string(.)) = 'FALSE')">
                    <xsl:value-of select='lower-case(.)'/>
                    <xsl:message>
                        <xsl:text>*** revised attribute value </xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text> to lower case: </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="lower-case(.)"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name() = 'DEF') and not($newDEFvalue = .) and (string-length($newDEFvalue) > 0) and (string-length(string(.)) > 0)">
                    <xsl:value-of select='$newDEFvalue'/>
                    <xsl:message>
                        <xsl:text>*** revised replace #4 </xsl:text>
                        <xsl:value-of select="$nodeName"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' replaced with updated </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select='$newDEFvalue'/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name() = 'USE') and not($newUSEvalue = .) and (string-length($newUSEvalue) > 0) and (string-length(string(.)) > 0)">
                    <xsl:value-of select='$newUSEvalue'/>
                    <xsl:message>
                        <xsl:text>*** [revised replace #5] </xsl:text>
                        <xsl:value-of select="$nodeName"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' alias with preferred </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select='$newUSEvalue'/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- possibly modified modified X3D version -->
                <xsl:when test="(local-name(..)='X3D') and (local-name()='version')">
                    <xsl:value-of select="$x3dVersionNeeded"/>
                </xsl:when>
                <xsl:when test="(local-name(..)='X3D') and (local-name()='noNamespaceSchemaLocation') and
                                (not(starts-with(.,'https://www.web3d.org/specifications/x3d-')) or
                                 not(  ends-with(.,'https://www.web3d.org/specifications/x3d-')))">
                    <xsl:text>https://www.web3d.org/specifications/x3d-</xsl:text>
                    <xsl:value-of select="$x3dVersionNeeded"/>
                    <xsl:text>.xsd</xsl:text>
                    <!-- always triggers, stay silent
                    <xsl:message>
                        <xsl:text>*** Changed X3D noNamespaceSchemaLocation to </xsl:text>
                        <xsl:text>https://www.web3d.org/specifications/x3d-</xsl:text>
                        <xsl:value-of select="$x3dVersionNeeded"/>
                        <xsl:text>.xsd</xsl:text>
                    </xsl:message>
                    -->
                </xsl:when>
                <!-- fix containerField for Metadata* nodes within HAnimHumanoid or GeoMetadata -->
                <!-- TODO default has changed in X3D4 -->
                <xsl:when test="((local-name(../..) = 'HAnimHumanoid') or (local-name(../..) = 'GeoMetadata')) and starts-with(local-name(..), 'Metadata') and (local-name() = 'containerField') and 
                                ((. = 'value') or ((string-length(.) = 0) and $isX3D4))">
                    <xsl:text>metadata</xsl:text>
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(../..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>' -- changed containerField='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                        <xsl:text> to containerField='metadata'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- fix containerField for Metadata* nodes within MetadataSet -->
                <!-- TODO default has changed in X3D4 -->
                <xsl:when test="(local-name(../..) = 'MetadataSet') and starts-with(local-name(..), 'Metadata') and (local-name() = 'containerField') and 
                                ((. = 'metadata') or (string-length(string(.)) = 0)) and 
                                (count(../*[@containerField = 'value']) = 0)">
                                <!-- having no peer nodes with @containerField = 'value' indicates this node with @containerField = 'metadata' (or empty value) is probably wrong -->
                    <xsl:text>value</xsl:text>
                    <xsl:message>
                        <xsl:text>*** </xsl:text>
                        <xsl:value-of select="local-name(../..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>' value='</xsl:text>
                        <xsl:value-of select="../@value"/>
                        <xsl:text>' -- changed containerField='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>'</xsl:text>
                        <xsl:text> to containerField='value'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- fix geoSystem values as appropriate -->
                <xsl:when test="(starts-with(local-name(..),'Geo') or (local-name(..)='EspduTransform') or (local-name(..)='ReceiverPdu') or (local-name(..)='SignalPdu') or (local-name(..)='TransmitterPdu'))
                                and (local-name()='geoSystem') and 
                                ($fixGeoSystemMetadata='true') and
                                (not(//meta[contains(@name,'Tidy')][contains(@content,'fixGeoSystemMetadata=false')]))">
                    <xsl:variable name="newGeoSystem">
                        <!-- geoSystem is type MFString so ensure that it is quoted -->
                        <xsl:if test="not(starts-with(.,'&quot;'))">
                            <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                        </xsl:if>
                        <xsl:choose>
                            <!-- GCC may become deprecated, use GC. https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes -->
                            <xsl:when test="contains(.,'GCC')">
                                <xsl:value-of select="substring-before(.,'GCC')"/>
                                <xsl:text>GC</xsl:text>
                                <xsl:value-of select="substring-after (.,'GCC')"/>
                            </xsl:when>
                            <!-- GDC may become deprecated, use GD. https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes -->
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
                        <xsl:if test="not(substring(., string-length(string(.))) = '&quot;')"> <!-- ends-with -->
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
                <!-- fix component values as appropriate -->
                <xsl:when test="(local-name(..)='component') and (local-name()='name') and (lower-case(string(.))='textureprojector')">
                    <xsl:text>TextureProjection</xsl:text>
                    <xsl:message>
                        <xsl:text>*** change component name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text> to correct component name='TextureProjection'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- X3D3 H-Anim v1 -->
                <xsl:when test="(local-name(..)='component') and (local-name()='name') and (string(.)='HAnim') and starts-with($x3dVersionNeeded,'3')">
                    <xsl:text>H-Anim</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix component name for X3D version='</xsl:text>
                        <xsl:value-of select="$x3dVersionProvided"/>
                        <xsl:text>': change to legacy component name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='H-Anim'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- X3D4 HAnim v2 -->
                <xsl:when test="(local-name(..)='component') and (local-name()='name') and (string(.)='H-Anim') and starts-with($x3dVersionNeeded,'4')">
                    <xsl:text>HAnim</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fix component name for X3D version='</xsl:text>
                        <xsl:value-of select="$x3dVersionProvided"/>
                        <xsl:text>': change to correct component name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='HAnim'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- HAnim special-case cleanup following conversion -->
                <xsl:when test="starts-with(local-name(..),'HAnim') and ((local-name()='name') or (local-name()='DEF') or (local-name()='USE') or (local-name()='fromNode') or (local-name()='toNode')) and contains(.,'__')">
                    <xsl:variable name="newName">
                        <!-- fix double underscore -->
                        <xsl:value-of select="substring-before(.,'__')"/>
                        <xsl:text>_</xsl:text>
                        <xsl:value-of select="substring-after(.,'__')"/>
                    </xsl:variable>
                    <xsl:value-of select='$newName'/>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to simplify double underscore __ with new name='</xsl:text>
                        <xsl:value-of select='$newName'/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- HAnim special-case cleanup of common error -->
                <xsl:when test="starts-with(local-name(..),'HAnim') and ((local-name()='name') or (local-name()='DEF') or (local-name()='USE') or (local-name()='fromNode') or (local-name()='toNode')) and contains(.,'_45')">
                    <xsl:variable name="newName">
                        <!-- fix double underscore -->
                        <xsl:value-of select="substring-before(.,'_45')"/>
                        <xsl:text>_4_5</xsl:text>
                    </xsl:variable>
                    <xsl:value-of select='$newName'/>
                    <xsl:message>
                        <xsl:text>*** fix </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' with corrected suffix, name='</xsl:text>
                        <xsl:value-of select='$newName'/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- HAnim special-case cleanup -->
                <xsl:when test="(local-name(..)='HAnimJoint') and (local-name()='name') and contains(.,'transverse_tarsal')">
                    <xsl:variable name="newName">
                        <xsl:value-of select="substring-before(.,'_tarsal')"/>
                        <!-- omit underscore -->
                        <xsl:text>tarsal</xsl:text>
                    </xsl:variable>
                    <xsl:value-of select='$newName'/>
                    <xsl:message>
                        <xsl:text>*** fix HAnimJoint name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' as  name='</xsl:text>
                        <xsl:value-of select='$newName'/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- HAnimSite checks for allowed suffix values -->
                <!-- TODO also change DEF, USE, fromNode, toNode -->
                <xsl:when test="(local-name(..)='HAnimSite') and (local-name()='name') and not(ends-with(.,'_tip') or ends-with(.,'_pt') or ends-with(.,'_view'))">
                    
                    <xsl:variable name="hanimSuffixDEF">
                        <xsl:choose>
                            <xsl:when test="(local-name(..)='HAnimSite') and ends-with(../@DEF,'_pt')">
                                <xsl:text>_pt</xsl:text>
                            </xsl:when>
                            <xsl:when test="(local-name(..)='HAnimSite') and ends-with(../@DEF,'_tip')">
                                <xsl:text>_tip</xsl:text>
                            </xsl:when>
                            <xsl:when test="(local-name(..)='HAnimSite') and ends-with(../@DEF,'_view')">
                                <xsl:text>_view</xsl:text>
                            </xsl:when>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:variable name="hanimSuffixName">
                        <xsl:choose>
                            <xsl:when test="(local-name()='HAnimSite') and ends-with(.,'_pt')">
                                <xsl:text>_pt</xsl:text>
                            </xsl:when>
                            <xsl:when test="(local-name()='HAnimSite') and ends-with(.,'_tip')">
                                <xsl:text>_tip</xsl:text>
                            </xsl:when>
                            <xsl:when test="(local-name()='HAnimSite') and ends-with(.,'_view')">
                                <xsl:text>_view</xsl:text>
                            </xsl:when>
                        </xsl:choose>
                    </xsl:variable>
                    <!-- debug
                    <xsl:message>
                            <xsl:text>$hanimSuffixDEF=</xsl:text>
                            <xsl:value-of select="$hanimSuffixDEF"/>
                            <xsl:text>, $hanimSuffixName=</xsl:text>
                            <xsl:value-of select="$hanimSuffixName"/>
                            <xsl:text> #4</xsl:text>
                        <xsl:if test="(string-length($hanimSuffixName) = 0) and (string-length($hanimSuffixDEF) > 0)">
                        </xsl:if>
                    </xsl:message> -->
                    <xsl:choose>
                        <xsl:when test="(count(../../*[local-name() = 'Viewpoint']) > 0)">
                            <xsl:variable name="newName">
                                <xsl:value-of select="."/>
                                <xsl:text>_view</xsl:text>
                            </xsl:variable>
                            <xsl:value-of select='$newName'/>
                            <xsl:message>
                                <xsl:text>*** fix HAnimSite name suffix by appending '_view' for child Viewpoint: name='</xsl:text>
                                <xsl:value-of select='$newName'/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:when>
                        <xsl:when test="(string-length($hanimSuffixName) = 0) and (string-length($hanimSuffixDEF) > 0)">
                            <!-- mismatched suffixes diagnostic and correction; HAnimSite DEF has expected suffix but @name has none -->
                            <xsl:value-of select="$nameValue"/>
                            <xsl:if test="not(ends-with($nameValue, $hanimSuffixDEF))">
                                <xsl:value-of select="$hanimSuffixDEF"/>
                                <xsl:message>
                                    <xsl:text>*** </xsl:text>
                                    <xsl:value-of select="local-name(..)"/>
                                    <xsl:text> DEF='</xsl:text>
                                    <xsl:value-of select="../@DEF"/>
                                    <xsl:text>' has suffix '</xsl:text>
                                    <xsl:value-of select="$hanimSuffixDEF"/>
                                    <xsl:text>' but name='</xsl:text>
                                    <xsl:value-of select="$nameValue"/>
                                    <xsl:text>' has no suffix, thus append '</xsl:text>
                                    <xsl:value-of select="$hanimSuffixDEF"/>
                                    <xsl:text>' when constructing new name value #4</xsl:text>
                                    <xsl:text> (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
                                </xsl:message>
                            </xsl:if>
                        </xsl:when>
                        <xsl:when test="not(ends-with(.,'_tip') or ends-with(.,'_pt') or ends-with(.,'_view'))">
                            <xsl:variable name="newName">
                                <xsl:value-of select="."/>
                                <xsl:text>_pt</xsl:text>
                            </xsl:variable>
                            <xsl:value-of select='$newName'/>
                            <xsl:message>
                                <xsl:text>*** fix HAnimSite name by appending '</xsl:text>
                                <xsl:text>_pt</xsl:text>
                                <xsl:text>' (alternatives _view, _tip): original name='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text> (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
                                <xsl:text>' with new name='</xsl:text>
                                <xsl:value-of select='$newName'/>
                                <xsl:text>' when constructing new name value #5</xsl:text>
                                <xsl:text> (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
                            </xsl:message>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="."/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <!-- fix HAnim name when appropriate -->
                <xsl:when test="($isHAnim2 = true()) and (local-name()='name') and not($hanimAliasReplacementName = .)">
                    <xsl:text>&#10;</xsl:text>
                    <xsl:value-of select='$hanimAliasReplacementName'/>
                    <xsl:message>
                        <xsl:text>*** replaced </xsl:text>
                        <xsl:value-of select="$nodeName"/>
                        <xsl:text> HAnim1 alias </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' with preferred HAnim2 name='</xsl:text>
                        <xsl:value-of select='$hanimAliasReplacementName'/>
                        <xsl:text>'</xsl:text>
                        <xsl:text> (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
                    </xsl:message>
                </xsl:when>
                <!-- check ROUTE for source/destination name changes -->
                <xsl:when test="($isHAnim2 = true()) and ((local-name()='toNode') or (local-name()='fromNode')) and not($hanimAliasReplacementName = .)">
                    <xsl:choose>
                        <xsl:when test="//*[starts-with(local-name(),'HAnim')][@DEF = $attributeValue]">
                            <!--
                            -->
                            <xsl:variable name="hanimAliasReplacementName">
                                <xsl:call-template name="newHAnimNameValue">
                                    <xsl:with-param name="nameValue"><xsl:value-of select="$attributeValue"/></xsl:with-param>
                                    <xsl:with-param name="nodeName"><xsl:text>ROUTE</xsl:text></xsl:with-param>
                                </xsl:call-template>
                            </xsl:variable>
                            <xsl:choose>
                                <xsl:when test="not(substring-after(.,'_') = $hanimAliasReplacementName)">
                                    <!-- provide value -->                      
                                    <xsl:value-of select="substring-before(.,'_')"/>
                                    <xsl:text>_</xsl:text>
                                    <xsl:value-of select='$hanimAliasReplacementName'/>
                                    <xsl:message>
                                        <xsl:text>*** HAnim2 ROUTE replaced: </xsl:text>
                                        <xsl:value-of select="$nodeName"/> 
                                        <xsl:text> </xsl:text>
                                        <xsl:value-of select="local-name()"/>
                                        <xsl:text>='</xsl:text>
                                        <xsl:value-of select="."/>
                                        <xsl:text>'</xsl:text>
                                        <xsl:text> with updated </xsl:text>
                                        <xsl:value-of select="local-name()"/>
                                        <xsl:text>='</xsl:text>
                                        <xsl:value-of select="substring-before(.,'_')"/>
                                        <xsl:text>_</xsl:text>
                                        <xsl:value-of select='$hanimAliasReplacementName'/>
                                        <xsl:text>'</xsl:text>
                                        <!-- debug
                                        <xsl:text> isHAnim1=</xsl:text>
                                        <xsl:value-of select="$isHAnim1"/>
                                        <xsl:text> isHAnim2=</xsl:text>
                                        <xsl:value-of select="$isHAnim2"/>
                                        -->
                                    </xsl:message>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:value-of select='.'/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:when>
                    </xsl:choose>
                </xsl:when>
                <!-- fix common meta-name misnomers, needs to follow HAnim2 upgrade rules to avoid false positives -->
                <!-- insert missing underscore prior to number at end of HAnim name -->
                <xsl:when test="((local-name(..)='HAnimJoint') or (local-name(..)='HAnimSegment')) and ((local-name()='name') or (local-name()='DEF') or (local-name()='fromNode') or (local-name()='toNode')) and 
                               (contains(.,'_cuneonavicular')       and not(contains(.,'_cuneonavicular_'))) or
                               (contains(.,'_cuneiform')            and not(contains(.,'_cuneiform_'))) or
                               (contains(.,'_tarsometatarsal')      and not(contains(.,'_tarsometatarsal_'))) or
                               (contains(.,'_metatarsal')           and not(contains(.,'_metatarsal_'))) or
                               (contains(.,'_metatarsophalangeal')  and not(contains(.,'_metatarsophalangeal_'))) or
                               (contains(.,'_phalanx')              and not(contains(.,'_phalanx_'))) or
                               (contains(.,'_interphalangeal')      and not(contains(.,'_interphalangeal_'))) or
                               
                               (contains(.,'_midcarpal')            and not(contains(.,'_midcarpal_'))) or
                               (contains(.,'_carpometacarpal')      and not(contains(.,'_carpometacarpal_'))) or
                               (contains(.,'_metacarpal')           and not(contains(.,'_metacarpal_'))) or
                               (contains(.,'l_metacarpophalangeal') and not(contains(.,'l_metacarpophalangeal_')))">
                    
                    <xsl:variable name="lastCharacter" select="substring(., string-length(string(.)), 1)"/>
                    <xsl:variable name="newName">
                        <xsl:value-of select="substring(.,1,string-length(string(.)) - 1)"/>
                        <xsl:text>_</xsl:text>
                        <xsl:value-of select="$lastCharacter"/>
                    </xsl:variable>
                    <xsl:choose>
                        <xsl:when test="($lastCharacter = '1') or ($lastCharacter = '2') or ($lastCharacter = '3') or ($lastCharacter = '4') or ($lastCharacter = '5')">
                            <xsl:value-of select='$newName'/>
                            <xsl:message>
                                <xsl:text>*** inserting underscore before lastCharacter='</xsl:text>
                                <xsl:value-of select="$lastCharacter"/>
                                <xsl:text>' to fix </xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text>' with corrected suffix: name='</xsl:text>
                                <xsl:value-of select='$newName'/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:when>
                        <xsl:when test="($isHAnim2 = true()) and (local-name()='name')">
                            <!-- no change -->
                            <xsl:value-of select='.'/>
                            <xsl:message>
                                <xsl:text>*** warning, look for missing underscore and digit number as suffix of improperly named </xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text>'</xsl:text>
                            </xsl:message>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- no change -->
                            <xsl:value-of select='.'/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <!-- HAnimHumanoid info field converted to contained MetadataString values -->
                <xsl:when test="(local-name(../..)='HAnimHumanoid') and (local-name(..)='MetadataString')">
                    <!-- TODO name=value checks, cleanups -->
                </xsl:when>
                <!-- fix common meta-name misnomers -->
                <xsl:when test="(local-name(..)='meta') and (local-name()='name') and 
                                (not($fixMetaNamesMatchDublinCore='true') or
                                 (//meta[contains(@name,'Tidy')][contains(@content,'fixMetaNamesMatchDublinCore=false')]))">
                    <!-- no change -->
                    <xsl:value-of select="local-name()"/>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name()='name') and (string(.)='filename' or string(.)='file')">
                    <xsl:text>title</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='title'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name()='name') and (string(.)='changed' or string(.)='revised' or string(.)='updated')">
                    <xsl:text>modified</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='modified'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name()='name') and (string(.)='creators')">
                    <xsl:text>creator</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='creator'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name()='name') and (string(.)='url')">
                    <xsl:text>identifier</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='identifier'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name()='name') and ((string(.)='image') or starts-with(.,'texture') or starts-with(.,'Texture'))">
                    <xsl:text>Image</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='Image'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='meta') and (local-name()='name') and (starts-with(.,'sound') or starts-with(.,'Sounds'))">
                    <xsl:text>Sound</xsl:text>
                    <xsl:message>
                        <xsl:text>*** fixMetaNamesMatchDublinCore: change meta name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' to name='Sound'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($reviseCurrentDate = 'true') and (local-name(..)='meta') and (local-name()='content') and (../@name='modified')">
                    <xsl:value-of select="$todaysDate"/>
                    <xsl:if test="not($todaysDate = .)">
                        <xsl:message>
                            <xsl:text>*** revision: &lt;meta name='modified' content='</xsl:text>
                            <xsl:value-of select="$todaysDate"/>
                            <xsl:text>'/&gt;</xsl:text>
                        </xsl:message>
                    </xsl:if>
                </xsl:when>
                <!-- fix meta dates  and contains(substring-after(.,'/'),'/')-->
                <xsl:when test="($fixDateFormats='true') and (local-name(..)='meta') and (local-name()='content') and 
                                ((../@name='created') or (../@name='translated') or (../@name='modified')) and
                                (not(//meta[contains(@name,'Tidy')][contains(@content,'fixDateFormats=false')])) and
                                not(starts-with(.,'*enter date of '))"> <!-- default values from newScene.x3d -->
                    <xsl:variable name="newDate">
                        <xsl:call-template name="fix-date-format">
                            <xsl:with-param name="value" select="normalize-space(string(.))"/>
                        </xsl:call-template>
                    </xsl:variable>
                    <xsl:choose>
                        <xsl:when test="not(normalize-space(string(.)) = $newDate)">
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
                            <xsl:value-of select="normalize-space(string(.))"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <!-- fix wrapper quotes in SFString/String attributes -->
                <xsl:when test="((local-name()='description') or (local-name()='name') or (local-name()='content') or (((local-name()='type') and not(local-name(..)='NavigationInfo'))) or (local-name()='accessType') or 
                                 (starts-with(local-name(..),'field') and contains(../@type,'SFString'))) and
                                starts-with(normalize-space(string(.)),'&quot;') and (substring(normalize-space(string(.)),string-length(normalize-space(string(.)))) = '&quot;')">
                    <xsl:message>
                        <xsl:text>*** found wrapper quotation marks around SFString value, removing them (hint: use &amp;quot; to sidestep this check if needed)</xsl:text>
                        <xsl:text>(firstCharacter=</xsl:text>
                        <xsl:value-of select="substring(.,1,1)"/>
                        <xsl:text>, lastCharacter=</xsl:text>
                        <xsl:value-of select="substring(.,string-length(string(.)))"/>
                        <xsl:text>)</xsl:text>
                    </xsl:message>
                    <xsl:call-template name="escape-special-characters">
                        <xsl:with-param name="inputValue" select="substring(.,2,(string-length(string(.))-2))"/>
                    </xsl:call-template>
                    <xsl:message>
                        <xsl:text>*** fixWrapperQuotes: remove extraneous initial/final quote marks from SFString field, now </xsl:text>
                        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text disable-output-escaping="yes">='</xsl:text>
                        <xsl:value-of select="substring(.,2,(string-length(string(.))-2))"/>
                        <xsl:text disable-output-escaping="yes">'</xsl:text>
                        <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="starts-with(normalize-space(string(.)),'*') and (substring(normalize-space(string(.)), string-length(normalize-space(string(.)))-1) = '*')"> <!-- ends-with -->
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
                <!-- fix unquoted MFString - relaxed this requirement per Mantis 1320 https://www.web3d.org/index.php/folder/id/3?id=1320
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
                </xsl:when> -->
                <!-- fix fieldValue quotes for MFString -->
                <xsl:when test="(local-name(..)='fieldValue') and (local-name()='value')">
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
                            <xsl:if test="not(starts-with(normalize-space(string(.)),'&quot;'))">
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
                                        <xsl:with-param name="inputValue" select="."/>
                                    </xsl:call-template>
                                    <xsl:text>'</xsl:text>
                                    <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                                    <xsl:text disable-output-escaping="yes">/&gt;</xsl:text>
                                </xsl:message>
                            </xsl:if>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputValue" select="."/>
                            </xsl:call-template>
                            <xsl:if test="not(substring(normalize-space(string(.)),string-length(normalize-space(string(.)))) = '&quot;')">
                                <xsl:text disable-output-escaping="yes">&quot;</xsl:text>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:call-template name="escape-special-characters">
                                <xsl:with-param name="inputValue" select="."/>
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
                <xsl:when test="(local-name(..)='TextureProperties') and contains(../@minificationFilter,'MIPMAP') and (local-name()='generateMipMaps') and not(string(.)='true')">
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
                <xsl:when test="(local-name() = 'translation') and (local-name(..) = 'Transform') and (local-name(../..) = 'HAnimSegment') and (local-name(../../..) = 'HAnimJoint')
                              and not(. = ../../../@center)">
                        <!-- TODO consider carefully: mismatched positioning of HAnimSegment child geometry relative to parent HAnimJoint
                        <xsl:message>
                            <xsl:text disable-output-escaping="yes">*** error: &lt;</xsl:text>
                            <xsl:value-of select="local-name(../../..)"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="../../../@DEF"/>
                            <xsl:text>' name='</xsl:text>
                            <xsl:value-of select="../../../@name"/>
                            <xsl:text>' center='</xsl:text>
                            <xsl:value-of select="../../../@center"/>
                            <xsl:text disable-output-escaping="yes">'&gt;&lt;</xsl:text>
                            <xsl:value-of select="local-name(../..)"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="../../@DEF"/>
                            <xsl:text>' name='</xsl:text>
                            <xsl:value-of select="../../@name"/>
                            <xsl:text disable-output-escaping="yes">'&gt;&lt;</xsl:text>
                            <xsl:value-of select="local-name(..)"/>
                            <xsl:text> DEF='</xsl:text>
                            <xsl:value-of select="../@DEF"/>
                            <xsl:text>' translation='</xsl:text>
                            <xsl:value-of select="."/>
                            <xsl:text>&gt; values do not match, consider replacing prior translation value with grandparent center value</xsl:text>
                        </xsl:message> -->
                        <!-- corrected value
                        <xsl:value-of select="../../../@center"/> -->
                        <!-- current value -->
                        <xsl:value-of select="."/>
                </xsl:when>
                <xsl:when test="(local-name() = 'scale') and ((local-name(..) = 'Transform') or (local-name(..) = 'GeoTransform')) and
                                contains(.,'-') and (($omitNegativeScaleValues = 'true') or ($x3dVersionNeeded = '3.0'))">
                    <!-- negative scale values first allowed in X3D 3.1 -->
                    <!-- https://www.web3d.org/documents/specifications/19775-1/V3.1/Part01/components/group.html -->
                    <xsl:variable name="newScale" select="normalize-space(translate(.,'-',' '))"/>
                    <xsl:value-of select="$newScale"/>
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** omitNegativeScaleValues: &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text> scale='</xsl:text>
                        <xsl:value-of select="../@scale"/>
                        <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                        <xsl:text> includes negative value(s), changing all values to positive numbers,</xsl:text>
                        <xsl:text> new scale='</xsl:text>
                        <xsl:value-of select="$newScale"/>
                        <xsl:text>'</xsl:text>
                        <xsl:if test="($x3dVersionNeeded = '3.0')">
                            <xsl:text> (not allowed in X3D version='3.0')</xsl:text>
                        </xsl:if>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($omitObsoleteAttributes = 'true') and (local-name(..) = 'GeoViewpoint') and ((local-name() = 'headlight') or (local-name() = 'navType'))">
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** error: &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                        <xsl:text>&gt; defines obsolete attribute value(s)</xsl:text>
                        <xsl:text> headlight='</xsl:text>
                        <xsl:value-of select="../@headlight"/>
                        <xsl:text>' navType='</xsl:text>
                        <xsl:value-of select="../@navType"/>
                        <xsl:text>', now omitted</xsl:text>
                    </xsl:message>
                    <!-- omit value, canonicalization will remove attribute -->
                </xsl:when>
                <!-- remove whitespace from selected name fields -->
                <xsl:when test="((local-name() = 'DEF') or (local-name() = 'USE') or
                                 ((local-name() = 'name') and (starts-with(local-name(..),'HAnim') or starts-with(local-name(..),'Matrix') or
                                                               starts-with(local-name(..),'Proto')))) and 
                                 (contains(.,' ') or contains(normalize-space(string(.)),' '))">
                        <!-- ID or IDREF contains whitespace -->
                        <xsl:message>
                            <xsl:text disable-output-escaping="yes">*** error: &lt;</xsl:text>
                            <xsl:value-of select="local-name(..)"/>
                            <xsl:text> </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text>='</xsl:text>
                            <xsl:value-of select="."/>
                            <xsl:text>&gt; contains illegal whitespace, now removed with new </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text>='</xsl:text>
                            <xsl:value-of select="translate(normalize-space(string(.)),' ','')"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                        <!-- corrected value -->
                        <xsl:value-of select="translate(normalize-space(string(.)),' ','')"/>
                </xsl:when>
                <!-- remove whitespace from selected name fields -->
                <xsl:when test="(local-name(..) = 'NavigationInfo') and (local-name() = 'type') and (string-length(string(.)) > 0) and contains(.,'ALL')">
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** error: &lt;NavigationInfo DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text>' type='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>/&gt; contains value ALL which is undefined, replacing with value ANY</xsl:text>
                    </xsl:message>
                    <!-- corrected value -->
                    <xsl:value-of select="substring-before(normalize-space(string(.)),'ALL')"/>
                    <xsl:text>ANY</xsl:text>
                    <xsl:value-of select="substring-after (normalize-space(string(.)),'ALL')"/>
                    <!-- TODO check for embedded whitespace without quoting, also consider regex -->
                </xsl:when>
                <xsl:when test="(local-name(..) = 'MetadataSet') and (local-name() = 'reference') and (../@name = 'HAnimHumanoid.info') and not(. = 'https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid')">
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** error: &lt;MetadataSet DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text>' name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>'/&gt; has incorrect reference='</xsl:text>
                        <xsl:value-of select="../@reference"/>
                        <xsl:text> and so replacing with '</xsl:text>
                    <xsl:text>https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid</xsl:text>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                    <xsl:text>https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid</xsl:text>
                </xsl:when>
                <xsl:when test="(local-name(..) = 'MetadataSet') and (local-name() = 'reference') and (../@name  = 'GeoMetadata.summary') and not(. = 'https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/geospatial.html#GeoMetadata')">
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** error: &lt;MetadataSet DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text>' name='</xsl:text>
                        <xsl:value-of select="../@name"/>
                        <xsl:text>'/&gt; has incorrect reference='</xsl:text>
                        <xsl:value-of select="../@reference"/>
                        <xsl:text> and so replacing with '</xsl:text>
                        <xsl:text>https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/geospatial.html#GeoMetadata</xsl:text>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                    <xsl:text>https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/geospatial.html#GeoMetadata</xsl:text>
                </xsl:when>
                <!-- TODO more fields: change apostrophes to quotation marks in selected MFString enumerations -->
                <xsl:when test="(local-name(..)='FontStyle') and (local-name()='justify') and not(contains(.,$quot))">
                    <xsl:variable name="strippedJustify" select="normalize-space(translate(upper-case(.),$apos,''))"/>
                    <xsl:variable name="correctedJustify">
                        <xsl:choose>
                            <xsl:when test="($strippedJustify = 'BEGIN') or ($strippedJustify = 'FIRST') or ($strippedJustify = 'MIDDLE') or ($strippedJustify = 'END')">
                                <xsl:text>"</xsl:text>
                                <xsl:value-of select="$strippedJustify"/>
                                <xsl:text>"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'MIDDLE BEGIN')">
                                <xsl:text>"MIDDLE" "BEGIN"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'MIDDLE END')">
                                <xsl:text>"MIDDLE" "END"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'MIDDLE FIRST')">
                                <xsl:text>"MIDDLE" "FIRST"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'MIDDLE MIDDLE')">
                                <xsl:text>"MIDDLE" "MIDDLE"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'BEGIN BEGIN')">
                                <xsl:text>"BEGIN" "BEGIN"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'BEGIN END')">
                                <xsl:text>"BEGIN" "END"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'BEGIN FIRST')">
                                <xsl:text>"BEGIN" "FIRST"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'BEGIN MIDDLE')">
                                <xsl:text>"BEGIN" "MIDDLE"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'END BEGIN')">
                                <xsl:text>"END" "BEGIN"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'END END')">
                                <xsl:text>"END" "END"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'END FIRST')">
                                <xsl:text>"END" "FIRST"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'END MIDDLE')">
                                <xsl:text>"END" "MIDDLE"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'FIRST BEGIN')">
                                <xsl:text>"FIRST" "BEGIN"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'FIRST END')">
                                <xsl:text>"FIRST" "END"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'FIRST FIRST')">
                                <xsl:text>"FIRST" "FIRST"</xsl:text>
                            </xsl:when>
                            <xsl:when test="($strippedJustify = 'FIRST MIDDLE')">
                                <xsl:text>"FIRST" "MIDDLE"</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="."/>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:value-of select="$correctedJustify"/>
                    <xsl:message>
                        <xsl:text>*** corrected enumeration </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name(.)"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' changed to </xsl:text>
                        <xsl:value-of select="local-name(.)"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="$correctedJustify"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="((local-name(..)='CollisionCollection') or (local-name(..)='Contact')) and (local-name() = 'appliedParameters')">
                    <xsl:variable name="correctedAppliedParameters">
                        <xsl:if test="contains(.,'FRICTION_COEFFICIENT-2')">
                            <xsl:text>replace FRICTION_COEFFICIENT-2 with FRICTION_COEFFICIENT_2; </xsl:text>
                        </xsl:if>
                        <xsl:if test="contains(.,'SPEED-1')">
                            <xsl:text>replace SPEED-1 with SPEED_1; </xsl:text>
                        </xsl:if>
                        <xsl:if test="contains(.,'SPEED-2')">
                            <xsl:text>replace SPEED-2 with SPEED_2; </xsl:text>
                        </xsl:if>
                        <xsl:if test="contains(.,'SLIP-1')">
                            <xsl:text>replace SLIP-1 with SLIP_1; </xsl:text>
                        </xsl:if>
                        <xsl:if test="contains(.,'SLIP-2')">
                            <xsl:text>replace SLIP-2 with SLIP_2; </xsl:text>
                        </xsl:if>
                    </xsl:variable>
                    <xsl:if test="(string-length($correctedAppliedParameters) > 0)"/>
                    <xsl:message>
                        <xsl:text>*** need to correct </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name(.)"/>
                        <xsl:text> enumeration: </xsl:text>
                        <xsl:value-of select="$correctedAppliedParameters"/>
                        <xsl:text> (no change applied) </xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(..)='FontStyle') and ((local-name()='family') or (local-name()='justify')) and contains(.,$apos)">
                    <xsl:value-of select="translate(string(.),$apos,$quot)"/>
                    <xsl:message>
                        <xsl:text>*** replace apostrophe characters with quote characters, </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name(.)"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' changed to </xsl:text>
                        <xsl:value-of select="local-name(.)"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="translate(string(.),$apos,$quot)"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="(local-name(../..)='Scene') and (local-name(..)='WorldInfo') and (local-name()='title') and (string-length(.) > 0) and 
                                ends-with($fileName,'.x3d') and ends-with(.,'.x3d') and ends-with($fileName,'.x3d') and 
                                not(. = $fileName)">
                    <xsl:value-of select="$fileName"/>
                    <xsl:message>
                        <xsl:text>*** Warning, mismatch between root WorldInfo/@title=</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text> and meta title=</xsl:text>
                        <xsl:value-of select="$fileName"/>
                        <xsl:text>, resetting WorldInfo/@title to </xsl:text>
                        <xsl:value-of select="$fileName"/>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($removeDuplicateIndexesIFS_ILS = 'true') and ((local-name(..)='IndexedFaceSet') or (local-name(..)='IndexedFaceSet')) and 
                                (string-length(normalize-space(../@coordIndex)) > 0) and
                                (local-name() = 'colorIndex') and (normalize-space(.) = normalize-space(../@coordIndex))">
                    <!-- duplicative normalIndex arrays can be omitted -->
                    <!-- https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/geometry3D.html#IndexedFaceSet -->
                    <!-- https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/rendering.html#IndexedLineSet  -->
                    <!-- omit output value -->
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** removeDuplicateIndexesIFS_ILS: &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text>' colorIndex='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                        <xsl:text> can be omitted since it matches coordIndex</xsl:text>
                        <!--
                        <xsl:text> coordIndex='</xsl:text>
                        <xsl:value-of select="../@coordIndex"/>
                        <xsl:text>'</xsl:text>
                        -->
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($removeDuplicateIndexesIFS_ILS = 'true') and (local-name(..)='IndexedFaceSet') and 
                                (string-length(normalize-space(../@coordIndex)) > 0) and
                                (local-name() = 'normalIndex') and (normalize-space(.) = normalize-space(../@coordIndex))">
                    <!-- duplicative normalIndex arrays can be omitted -->
                    <!-- https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/geometry3D.html#IndexedFaceSet -->
                    <!-- omit output value -->
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** removeDuplicateIndexesIFS_ILS: &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text> normalIndex='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                        <xsl:text> can be omitted since it matches coordIndex</xsl:text>
                        <!--
                        <xsl:text> coordIndex='</xsl:text>
                        <xsl:value-of select="../@coordIndex"/>
                        <xsl:text>'</xsl:text>
                        -->
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($removeDuplicateIndexesIFS_ILS = 'true') and (local-name(..)='IndexedFaceSet') and 
                                (string-length(normalize-space(../@coordIndex)) > 0) and
                                (local-name() = 'texCoordIndex') and (normalize-space(.) = normalize-space(../@coordIndex))">
                    <!-- duplicative texCoodIndex arrays can be omitted -->
                    <!-- https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/geometry3D.html#IndexedFaceSet -->
                    <!-- omit output value -->
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** removeDuplicateIndexesIFS_ILS: &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text> texCoodIndex='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                        <xsl:text> can be omitted since it matches coordIndex</xsl:text>
                        <!--
                        <xsl:text> coordIndex='</xsl:text>
                        <xsl:value-of select="../@coordIndex"/>
                        <xsl:text>'</xsl:text>
                        -->
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($removeNormals = 'true') and ((local-name()='normalPerVertex') or (local-name()='normalIndex'))">
                    <!-- Normal information is easily calculated by GPU and so can unnecessarily add to file size -->
                    <!-- omit output value -->
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">*** removeNormals: &lt;</xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                        <xsl:text> omitted</xsl:text>
                    </xsl:message>
                </xsl:when>
                <xsl:when test="($removeColors = 'true') and ((local-name()='colorPerVertex') or (local-name()='colorIndex'))">
                    <xsl:variable name="hasNonzeroColorIndexValues" select="(string-length(normalize-space(translate(../@colorIndex,'0',''))) > 0)"/>
                    <!-- debug
                    <xsl:message>
                        <xsl:text disable-output-escaping="yes">attribute precondition: $hasNonzeroColorIndexValues=</xsl:text>
                        <xsl:value-of select="$hasNonzeroColorIndexValues"/>
                    </xsl:message> -->
                    <xsl:choose>
                        <xsl:when test="$hasNonzeroColorIndexValues">
                            <xsl:message>
                                <xsl:text disable-output-escaping="yes">*** removeColors: since colorIndex has nonzero values, </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text disable-output-escaping="yes"> attribute not removed</xsl:text>
                                <xsl:if test="(local-name()='colorIndex')">
                                    <xsl:text>. </xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text>='</xsl:text>
                                    <xsl:value-of select="."/>
                                    <xsl:text>'</xsl:text>
                                </xsl:if>
                            </xsl:message> 
                            <xsl:value-of select="."/>
                        </xsl:when>
                        <xsl:otherwise>
                            <!-- omit output value -->
                            <xsl:message>
                                <xsl:text disable-output-escaping="yes">*** removeColors: &lt;</xsl:text>
                                <xsl:value-of select="local-name(..)"/>
                                <xsl:text> DEF='</xsl:text>
                                <xsl:value-of select="../@DEF"/>
                                <xsl:text>'</xsl:text>
                                <xsl:text> </xsl:text>
                                <xsl:value-of select="local-name()"/>
                                <xsl:text>='</xsl:text>
                                <xsl:value-of select="."/>
                                <xsl:text disable-output-escaping="yes">'/&gt;</xsl:text>
                                <xsl:text> omitted</xsl:text>
                            </xsl:message>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:when>
                <!-- TODO how to handle case where generateMipMaps is not defined and has devalue value of false? -->
                <!-- *** new fixes: other new attribute-value rules go here *** -->
                
                <!-- TODO add other MFString attributes, handle fixMFStringQuotes setting accordingly -->
                <!-- TODO change angular values from degrees to radians, if no UNITS present -->
                <xsl:otherwise>
                    <xsl:call-template name="escape-special-characters">
                        <xsl:with-param name="inputValue" select="."/>
                    </xsl:call-template>
                </xsl:otherwise>
            </xsl:choose>
            <!-- attribute value overrides complete -->
            <xsl:text>'</xsl:text>
            <!-- similar output blocks found in @url, @*
            <xsl:variable name="containsQuote" select="contains(.,'&quot;')"/>
            <xsl:choose>
                <xsl:when test='contains(.,"&apos;") and not($containsQuote)'>
                    <xsl:text>"</xsl:text>
                    <xsl:call-template name="escape-lessthan-characters">
                        <xsl:with-param name="inputValue" select="."/>
                    </xsl:call-template>
                    <xsl:text>"</xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>'</xsl:text>
                    <xsl:call-template name="escape-lessthan-characters">
                        <xsl:with-param name="inputValue" select="."/>
                    </xsl:call-template>
                    <xsl:text>'</xsl:text>
                </xsl:otherwise>
            </xsl:choose> -->
                    
                </xsl:otherwise>
            </xsl:choose>
        </xsl:if>
        <!-- end if filtering of default attribute values -->
           
            <xsl:if test="(local-name() = 'containerField')">
                <xsl:variable name=        "containerField" select="."/>
                <!-- debug
                <xsl:message>
                    <xsl:text>*** containerField mismatch - test #1 </xsl:text>
                    <xsl:value-of select="local-name(../..)"/>
                    <xsl:text>/</xsl:text>
                    <xsl:value-of select="local-name(..)"/>
                    <xsl:text>/</xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text>='</xsl:text>
                    <xsl:value-of select="$containerField"/>
                    <xsl:text>'</xsl:text>
                </xsl:message>
                -->
                
                <!-- check some special cases that are unambiguously fixable -->
                <xsl:variable name="expectedContainerField">
                    <xsl:choose>
                        <!-- note different parentage path since current context is the attribute, not the element -->
                        <xsl:when test="(local-name(../..) = 'GeoLOD') and not(local-name(..) = 'GeoOrigin') and not(starts-with(local-name(..), 'Metadata'))">
                            <xsl:text>rootNode</xsl:text>
                        </xsl:when>
                        <xsl:when test="(local-name(../..) = 'HAnimHumanoid') and (local-name(..) = 'HAnimSegment')">
                            <xsl:text>segments</xsl:text>
                        </xsl:when>
                        <!-- HAnimHumanoid can contain HAnimJoint with containerField = joints or skeleton -->
                        <!-- HAnimHumanoid can contain HAnimSite  with containerField = sites, skeleton or viewpoints -->
                        <!-- HAnimHumanoid can contain X3DCoordinateNode with containerField = skinCoord or skinBindingCoords -->
                        <!-- HAnimHumanoid can contain X3DNormalNode with containerField = skinNormal or skinBindingNormals -->
                        <xsl:when test="(local-name() = 'Analyser') or (local-name() = 'AudioDestination') or (local-name() = 'BiquadFilter') or (local-name() = 'BufferAudioSource') or (local-name() = 'ChannelMerger') or (local-name() = 'ChannelSelector') or (local-name() = 'ChannelSplitter') or (local-name() = 'Convolver') or (local-name() = 'Delay') or (local-name() = 'DynamicsCompressor') or (local-name() = 'Gain') or (local-name() = 'ListenerPointSource') or (local-name() = 'MicrophoneSource') or (local-name() = 'OscillatorSource') or (local-name() = 'SpatialSound') or (local-name() = 'StreamAudioDestination') or (local-name() = 'StreamAudioSource') or (local-name() = 'WaveShaper')">
                            <xsl:text>children</xsl:text>
                        </xsl:when>
                        <xsl:when test="((local-name(..) = 'AudioClip') or (local-name(..) = 'MovieTexture')) and
                                        ((local-name(../..) = 'Analyser') or (local-name(../..) = 'AudioDestination') or (local-name(../..) = 'BiquadFilter') or (local-name(../..) = 'BufferAudioSource') or (local-name(../..) = 'ChannelMerger') or (local-name(../..) = 'ChannelSelector') or (local-name(../..) = 'ChannelSplitter') or (local-name(../..) = 'Convolver') or (local-name(../..) = 'Delay') or (local-name(../..) = 'DynamicsCompressor') or (local-name(../..) = 'Gain') or (local-name(../..) = 'ListenerPointSource') or (local-name(../..) = 'MicrophoneSource') or (local-name(../..) = 'OscillatorSource') or (local-name(../..) = 'SpatialSound') or (local-name(../..) = 'StreamAudioDestination') or (local-name(../..) = 'StreamAudioSource') or (local-name(../..) = 'WaveShaper'))">
                            <xsl:text>children</xsl:text>
                            <xsl:if test="(../@containerField = 'source') or (../@containerField = 'texture') or (string-length(../@containerField) = 0)">
                                <xsl:message>
                                    <xsl:text>*** containerField incorrect #3 for </xsl:text>
                                    <xsl:value-of select="local-name()"/>
                                    <xsl:text> with parent </xsl:text>
                                    <xsl:value-of select="local-name(..)"/>
                                    <xsl:text>, reset to children</xsl:text>
                                </xsl:message>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:call-template name="fieldNameChanges"/>
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                <xsl:if test="(string-length($expectedContainerField) > 0) and not(../@containerField = $expectedContainerField)">
                    <!-- debug
                    <xsl:message>
                        <xsl:text>*** containerField mismatch - found it #3 </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> DEF='</xsl:text>
                        <xsl:value-of select="../@DEF"/>
                        <xsl:if test="(string-length(../@name) > 0)">
                            <xsl:text>' name='</xsl:text>
                            <xsl:value-of select="../@name"/>
                        </xsl:if>
                        <xsl:text>' containerField='</xsl:text>
                        <xsl:value-of select="../@containerField"/>
                        <xsl:text>'</xsl:text>
                        <xsl:text> expectedContainerField='</xsl:text>
                        <xsl:value-of select="$expectedContainerField"/>
                        <xsl:text>'</xsl:text>
                    </xsl:message>
                    -->
                </xsl:if>
                <xsl:choose> 
                    <xsl:when test="(string-length($expectedContainerField) > 0) and not($containerField = $expectedContainerField)">
                        <xsl:message>
                            <xsl:text>*** containerField mismatch for </xsl:text>
                            <xsl:text>&lt;</xsl:text>
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
                            <xsl:if test="string-length(../@USE) > 0">
                                <xsl:text> @USE='</xsl:text>
                                <xsl:value-of select="../@USE"/>
                                <xsl:text>'</xsl:text>
                            </xsl:if>
                            <xsl:text> </xsl:text>
                            <xsl:value-of select="local-name()"/>
                            <xsl:text>='</xsl:text>
                            <xsl:value-of select="$containerField"/>
                            <xsl:text>'/&gt;, replaced with expected containerField='</xsl:text>
                            <xsl:value-of select="$expectedContainerField"/>
                            <xsl:text>'</xsl:text>
                        </xsl:message>
                        <xsl:text> containerField='</xsl:text>
                        <xsl:value-of select="$expectedContainerField"/>
                        <xsl:text>'</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- <xsl:value-of select="."/> -->
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:if>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-special-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:call-template name="escape-solitary-backslash">
            <xsl:with-param name="inputValue">
                <xsl:call-template name="escape-apostrophe-characters">
                    <xsl:with-param name="inputValue">
                        <xsl:call-template name="escape-lessthan-characters">
                            <xsl:with-param name="inputValue">
                                <!-- keep escape-ampersand-characters innermost so it doesn't get overzealous about escaped apostrophes or less-than characters -->
                                <xsl:call-template name="escape-ampersand-characters">
                                        <xsl:with-param name="inputValue" select="$inputString"/>
                                </xsl:call-template>
                            </xsl:with-param>
                        </xsl:call-template>
                    </xsl:with-param>
                </xsl:call-template>
            </xsl:with-param>
        </xsl:call-template>
    </xsl:template>

    <xsl:template name="escape-lessthan-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:message><xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/></xsl:message> -->
        <xsl:choose>
            <!-- handle preceding &quot; marks first
            <xsl:when test="contains($inputString,'&quot;') and not(contains(substring-before($inputString,'&quot;'),'&#60;'))">
                <xsl:value-of select="substring-before($inputString,'&quot;')"/>
                <xsl:text disable-output-escaping="no">&quot;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters">
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&quot;')"/>
                </xsl:call-template>
            </xsl:when> -->
            <!-- &#60; is &lt; -->
            <xsl:when test="contains($inputString,'&#60;')">
                <xsl:value-of select="substring-before($inputString,'&#60;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="no">&amp;</xsl:text>
                <xsl:text disable-output-escaping="no">lt;</xsl:text>
                <xsl:call-template name="escape-lessthan-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&#60;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-ampersand-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
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
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;#38;') and not(contains(substring-before($inputString,'&amp;#38;'),'&amp;'))">
                <xsl:value-of select="substring-before($inputString,'&amp;amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">#38;</xsl:text>
               <!-- <xsl:text disable-output-escaping="yes">amp;</xsl:text>-->
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&amp;amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:when test="contains($inputString,'&amp;')">
                <xsl:value-of select="substring-before($inputString,'&amp;')" disable-output-escaping="yes"/>
                <xsl:text disable-output-escaping="yes">&amp;</xsl:text>
                <xsl:text disable-output-escaping="yes">amp;</xsl:text> 
                <xsl:call-template name="escape-ampersand-characters"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'&amp;')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-apostrophe-characters">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
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
                    <xsl:with-param name="inputValue" select='substring-after($inputString,"&apos;")'/>
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
                    <xsl:with-param name="inputValue" select='substring-after($inputString,$apostrophe)'/>
                </xsl:call-template>
            </xsl:when>-->
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="escape-solitary-backslash">
        <xsl:param name="inputValue"><xsl:text><!-- default value is empty --></xsl:text></xsl:param>
        <xsl:variable name="inputString" select="string($inputValue)"/>
        <!-- \ = &#92; -->
        <!-- debug:  <xsl:text>//######&#10;</xsl:text> -->
        <!-- debug:  <xsl:text>### inputString received: </xsl:text><xsl:value-of select="$inputString"/><xsl:text>&#10;</xsl:text> -->
        <xsl:choose>
            <xsl:when test="contains($inputString,'\') and ((normalize-space($inputString)='&#92;') or starts-with(normalize-space($inputString),'\ '))">
                <xsl:value-of select="substring-before($inputString,'\')"/>
                <xsl:text disable-output-escaping="yes">\</xsl:text>
                <xsl:call-template name="escape-solitary-backslash"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'\')"/>
                </xsl:call-template>
            </xsl:when>
            <!-- TODO confirm... handle backslash \ with escaping \\ -->
            <xsl:when test="contains($inputString,'\\') and ((normalize-space($inputString)='&#92;') or starts-with(normalize-space($inputString),'\\ '))">
                <xsl:value-of select="substring-before($inputString,'\\')"/>
                <xsl:text disable-output-escaping="yes">\</xsl:text>
                <xsl:call-template name="escape-solitary-backslash"> <!-- tail recursion -->
                    <xsl:with-param name="inputValue" select="substring-after($inputString,'\\')"/>
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$inputString" disable-output-escaping="yes"/>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="output-humanoid-tree">
        <!-- used in X3dTidy.xslt and X3dToXhtml.xslt -->
        <xsl:param name="currentNode"><!-- default value is empty --></xsl:param>
        <xsl:param name="treeMargin">  <!-- default value is empty --></xsl:param>
        
        <xsl:variable name="isHAnim1" select="$isX3D3 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)]"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] and not($isHAnim1 = true())"/>
        <xsl:if test="($isHAnim1 = true()) and ($isHAnim2 = true())">
            <xsl:message>
                <xsl:text>*** error in X3dTidy.xslt internal logic, $isHAnim1 and $isHAnim2 are both true, output-humanoid-tree entry </xsl:text>
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
                    <xsl:text>*** output-humanoid-tree trace: </xsl:text>
                    <xsl:value-of select="$describeSelf"/>
                </xsl:message>
            </xsl:if> -->
            <xsl:if test="(local-name($currentNode)='HAnimHumanoid')">
                <xsl:text>=======================================================================================================</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>HAnimHumanoid skeleton holds X3D</xsl:text>
                <xsl:value-of select="substring($x3dVersionNeeded,1,1)"/>
                <xsl:text> HAnim</xsl:text>
                <xsl:choose>
                    <xsl:when test="(string-length(@version) > 0)">
                        <xsl:value-of select="substring(@version,1,1)"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>1</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text> triplets, </xsl:text>
                <xsl:text>HAnimJoint (</xsl:text>
                <xsl:value-of select="count(descendant::*[local-name() = 'HAnimJoint']  [string-length(@name) > 0])"/>
                <xsl:text>) : HAnimSegment (</xsl:text>
                <xsl:value-of select="count(descendant::*[local-name() = 'HAnimSegment'][string-length(@name) > 0])"/>
                <xsl:text>) : HAnimSite (</xsl:text>
                <xsl:value-of select="count(descendant::*[local-name() = 'HAnimSite']   [string-length(@name) > 0])"/>
                <xsl:text>)</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>=======================================================================================================</xsl:text>
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
                        </xsl:when>
                        <xsl:when test="(string-length($currentNode/@name) > 0)">
                            <xsl:value-of select="$currentNode/@name"/>
                            <!-- check if name changed, if so display that too -->
                            <xsl:variable name="hanimAliasReplacementName">
                                <xsl:call-template name="newHAnimNameValue">
                                    <xsl:with-param name="nameValue"><xsl:value-of select="$currentNode/@name"/></xsl:with-param>
                                    <xsl:with-param name="nodeName"><xsl:value-of select="local-name($currentNode)"/></xsl:with-param>
                                </xsl:call-template>
                            </xsl:variable>
                            <xsl:if test="($isHAnim2 = true()) and not($currentNode/@name = $hanimAliasReplacementName)">
                                <xsl:text> (HAnim2 name replaced: </xsl:text>
                                <xsl:value-of select="$hanimAliasReplacementName"/>
                                <xsl:text>)</xsl:text>
                            </xsl:if>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text> (</xsl:text>
                            <xsl:value-of select="local-name($currentNode)"/>
                            <xsl:text>/@name not found)</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:choose>
                        <xsl:when test="$currentNode/HAnimSegment[string-length(@USE) = 0]"><!-- omit HAnimHumanoid, HAnimJoint from this additional output -->
                            <xsl:text> : </xsl:text>
                            <xsl:choose>
                                <xsl:when test="$currentNode/HAnimSegment[string-length(@name) > 0]">
                                    <xsl:value-of select="$currentNode/HAnimSegment/@name"/>
                                    <!-- check if name changed, if so display that too -->
                                    <xsl:variable name="hanimAliasReplacementName">
                                        <xsl:call-template name="newHAnimNameValue">
                                            <xsl:with-param name="nameValue"><xsl:value-of select="$currentNode/@name"/></xsl:with-param>
                                            <xsl:with-param name="nodeName"><xsl:value-of select="local-name($currentNode)"/></xsl:with-param>
                                        </xsl:call-template>
                                    </xsl:variable>
                                    <xsl:if test="($isHAnim2 = true()) and not($currentNode/@name = $hanimAliasReplacementName)">
                                        <xsl:text> (HAnim2 name replaced: </xsl:text>
                                        <xsl:value-of select="$hanimAliasReplacementName"/>
                                        <xsl:text>)</xsl:text>
                                    </xsl:if>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:text>(HAnimSegment/@name not found)</xsl:text>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:if test="(count(child::node()/HAnimSite[string-length(@USE) = 0]) > 0)">
                                <xsl:text> : </xsl:text>
                                <xsl:for-each select="child::node()/HAnimSite[string-length(@USE) = 0]">
                                    <xsl:value-of select="@name"/>
                                    <!-- check if name changed, if so display that too -->
                                    <xsl:variable name="hanimAliasReplacementName">
                                        <xsl:call-template name="newHAnimNameValue">
                                            <xsl:with-param name="nameValue"><xsl:value-of select="$currentNode/@name"/></xsl:with-param>
                                            <xsl:with-param name="nodeName"><xsl:value-of select="local-name($currentNode)"/></xsl:with-param>
                                        </xsl:call-template>
                                    </xsl:variable>
                                    <xsl:if test="($isHAnim2 = true()) and not($currentNode/@name = $hanimAliasReplacementName)">
                                        <xsl:text> (HAnim2 name replaced: </xsl:text>
                                        <xsl:value-of select="$hanimAliasReplacementName"/>
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
                    <!-- recurse on other children for completeness, but only output HAnim skeleton -->
                    <xsl:for-each select="child::node()[string-length(@USE) = 0][not(local-name() = 'HAnimSegment')]">
                        <xsl:call-template name="output-humanoid-tree">
                            <xsl:with-param name="currentNode" select="self::node()"/>
                            <xsl:with-param name="treeMargin" select="concat($treeMargin,'**')"/><!-- flags that possible further debugging is needed -->
                        </xsl:call-template>
                    </xsl:for-each>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:if test="(local-name($currentNode)='HAnimHumanoid')">
                <xsl:text>=======================================================================================================</xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:if>
        </xsl:if>
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
      <xsl:if test="not(normalize-space(string(.)) = '') and not(normalize-space(string(.)) = ' ')">
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
        <xsl:value-of select="normalize-space(string(.))" disable-output-escaping="yes"/>
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
            <xsl:if test="($restURLs!='')">
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
                            <xsl:text>*** fix-date-format: found template default, need to enter a value in content attribute </xsl:text>
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
                            <xsl:when test="(number($value2) >= 50) and (number($value2) &lt;= 99)">
                                <xsl:text>19</xsl:text>
                                <xsl:value-of select="$value2"/>
                            </xsl:when>
                            <xsl:when test="(number($value2) >= 0) and (number($value2) &lt;= 50)">
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
                <!-- XSLT 1, https://stackoverflow.com/questions/1207098/xslt-stylesheet-changing-text-to-upper-case -->
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

    <xsl:template name="strip-surrounding-quotes">
        <!-- returns normalized string without beginning/ending quotes if found, otherwise unchanged -->
        <xsl:param name="value"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        
        <xsl:variable name="normalizedValue" select="normalize-space($value)"/>
        <xsl:choose>
            <xsl:when test="starts-with($normalizedValue,'&quot;') and ends-with($normalizedValue,'&quot;')">
                <xsl:value-of select="substring($normalizedValue,2,string-length($normalizedValue) - 1)"/>
            </xsl:when>
            <xsl:when test="starts-with($normalizedValue,'&quot;')">
                <xsl:value-of select="substring($normalizedValue,2)"/>
            </xsl:when>
            <xsl:when test="  ends-with($normalizedValue,'&quot;')">
                <xsl:value-of select="substring($normalizedValue,1,string-length($normalizedValue) - 1)"/>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$value"/><!-- unmodified -->
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="newHAnimNameValue">
        <xsl:param name="nameValue"><xsl:text></xsl:text></xsl:param>
        <xsl:param name="nodeName"><xsl:text></xsl:text></xsl:param>
        
        <!-- hanimAliasReplacementName check may be performed within an HAnimHumanoid or else outside (for example, by ROUTE) -->
        <xsl:variable name="isHAnim1" select="$isX3D3 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'1') or (string-length(@version) = 0)] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'1') or (string-length(@version) = 0)])"/>
        <xsl:variable name="isHAnim2" select="$isX3D4 and (ancestor-or-self::*[local-name() = 'HAnimHumanoid'][starts-with(@version,'2')] or
                                                                                             //HAnimHumanoid  [starts-with(@version,'2')])"/>
        <xsl:if test="($isHAnim1 = true()) and ($isHAnim2 = true())">
            <xsl:message>
                <xsl:text>*** error in X3dTidy.xslt internal logic, $isHAnim1 and $isHAnim2 are both true, hanimAliasReplacementName entry for </xsl:text>
                <xsl:value-of select="$nodeName "/>
                <xsl:text> </xsl:text>
                <xsl:value-of select="$nameValue"/>
            </xsl:message>
        </xsl:if>
      
        <xsl:choose>
            
      <!-- X3dTidy.xslt correction rules in X3dDiagnostics4.0.xml autogenerated from X3DUOM -->

      <!-- *** start: HAnim2 HAnimJoint alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->
      <xsl:when test="(local-name(..)='HAnimJoint') and (local-name()='name') and $isHAnim2 and ((string(.)='SIJ') or (string(.)='SI joint') or (string(.)='l_ankle') or (string(.)='l_talocalcaneal') or (string(.)='l_cuneonavicular') or (string(.)='l_subtalar') or (string(.)='l_tarsometatarsal') or (string(.)='l_midtarsal') or (string(.)='l_metatarsophalangeal') or (string(.)='l_tarsal_proximal_interphalangeal') or (string(.)='l_tarsal_distal_interphalangeal') or (string(.)='l_calcaneuscuboid') or (string(.)='r_ankle') or (string(.)='r_talocalcaneal') or (string(.)='r_cuneonavicular') or (string(.)='r_subtalar') or (string(.)='r_tarsometatarsal') or (string(.)='r_midtarsal') or (string(.)='r_metatarsophalangeal') or (string(.)='r_tarsal_proximal_interphalangeal') or (string(.)='r_metatarsal') or (string(.)='r_tarsal_distal_interphalangeal') or (string(.)='r_calcaneuscuboid') or (string(.)='l_wrist') or (string(.)='l_thumb1') or (string(.)='l_thumb2') or (string(.)='l_thumb3') or (string(.)='l_index0') or (string(.)='l_carpometacarpal') or (string(.)='l_index1') or (string(.)='l_metacarpophalangeal') or (string(.)='l_index2') or (string(.)='l_carpal_proximal_interphalangeal') or (string(.)='l_index3') or (string(.)='l_carpal_distal_interphalangeal') or (string(.)='l_middle0') or (string(.)='l_middle1') or (string(.)='l_middle2') or (string(.)='l_middle3') or (string(.)='l_ring0') or (string(.)='l_ring1') or (string(.)='l_ring2') or (string(.)='l_ring3') or (string(.)='l_pinky0') or (string(.)='l_pinky1') or (string(.)='l_pinky2') or (string(.)='l_pinky3') or (string(.)='r_wrist') or (string(.)='r_thumb1') or (string(.)='r_thumb2') or (string(.)='r_thumb3') or (string(.)='r_index0') or (string(.)='r_carpometacarpal') or (string(.)='r_index1') or (string(.)='r_metacarpophalangeal') or (string(.)='r_index2') or (string(.)='r_carpal_proximal_interphalangeal') or (string(.)='r_index3') or (string(.)='r_carpal_distal_interphalangeal') or (string(.)='r_middle0') or (string(.)='r_middle1') or (string(.)='r_middle2') or (string(.)='r_middle3') or (string(.)='r_ring0') or (string(.)='r_ring1') or (string(.)='r_ring2') or (string(.)='r_ring3') or (string(.)='r_pinky0') or (string(.)='r_pinky1') or (string(.)='r_pinky2') or (string(.)='r_pinky3'))">
        <xsl:variable name="newName">
            <!-- find preferred value for this alias -->
            <xsl:choose>
                <xsl:when test="(string(.)='SIJ')"><xsl:text>sacroiliac</xsl:text></xsl:when>
                <xsl:when test="(string(.)='SI joint')"><xsl:text>sacroiliac</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ankle')"><xsl:text>l_talocrural</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_talocalcaneal')"><xsl:text>l_talocalcaneonavicular</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_cuneonavicular')"><xsl:text>l_cuneonavicular_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_subtalar')"><xsl:text>l_tarsometatarsal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_tarsometatarsal')"><xsl:text>l_tarsometatarsal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_midtarsal')"><xsl:text>l_metatarsophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_metatarsophalangeal')"><xsl:text>l_metatarsophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_tarsal_proximal_interphalangeal')"><xsl:text>l_tarsal_proximal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_tarsal_distal_interphalangeal')"><xsl:text>l_tarsal_distal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_calcaneuscuboid')"><xsl:text>l_calcaneocuboid</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ankle')"><xsl:text>r_talocrural</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_talocalcaneal')"><xsl:text>r_talocalcaneonavicular</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_cuneonavicular')"><xsl:text>r_cuneonavicular_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_subtalar')"><xsl:text>r_tarsometatarsal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_tarsometatarsal')"><xsl:text>r_tarsometatarsal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_midtarsal')"><xsl:text>r_metatarsophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_metatarsophalangeal')"><xsl:text>r_metatarsophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_tarsal_proximal_interphalangeal')"><xsl:text>r_tarsal_proximal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_metatarsal')"><xsl:text>r_tarsal_distal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_tarsal_distal_interphalangeal')"><xsl:text>r_tarsal_distal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_calcaneuscuboid')"><xsl:text>r_calcaneocuboid</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_wrist')"><xsl:text>l_radiocarpal</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_thumb1')"><xsl:text>l_carpometacarpal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_thumb2')"><xsl:text>l_metacarpophalangeal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_thumb3')"><xsl:text>l_carpal_interphalangeal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index0')"><xsl:text>l_carpometacarpal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_carpometacarpal')"><xsl:text>l_carpometacarpal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index1')"><xsl:text>l_metacarpophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_metacarpophalangeal')"><xsl:text>l_metacarpophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index2')"><xsl:text>l_carpal_proximal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_carpal_proximal_interphalangeal')"><xsl:text>l_carpal_proximal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index3')"><xsl:text>l_carpal_distal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_carpal_distal_interphalangeal')"><xsl:text>l_carpal_distal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle0')"><xsl:text>l_carpometacarpal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle1')"><xsl:text>l_metacarpophalangeal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle2')"><xsl:text>l_carpal_proximal_interphalangeal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle3')"><xsl:text>l_carpal_distal_interphalangeal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring0')"><xsl:text>l_carpometacarpal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring1')"><xsl:text>l_metacarpophalangeal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring2')"><xsl:text>l_carpal_proximal_interphalangeal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring3')"><xsl:text>l_carpal_distal_interphalangeal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky0')"><xsl:text>l_carpometacarpal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky1')"><xsl:text>l_metacarpophalangeal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky2')"><xsl:text>l_carpal_proximal_interphalangeal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky3')"><xsl:text>l_carpal_distal_interphalangeal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_wrist')"><xsl:text>r_radiocarpal</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_thumb1')"><xsl:text>r_carpometacarpal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_thumb2')"><xsl:text>r_metacarpophalangeal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_thumb3')"><xsl:text>r_carpal_interphalangeal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index0')"><xsl:text>r_carpometacarpal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_carpometacarpal')"><xsl:text>r_carpometacarpal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index1')"><xsl:text>r_metacarpophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_metacarpophalangeal')"><xsl:text>r_metacarpophalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index2')"><xsl:text>r_carpal_proximal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_carpal_proximal_interphalangeal')"><xsl:text>r_carpal_proximal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index3')"><xsl:text>r_carpal_distal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_carpal_distal_interphalangeal')"><xsl:text>r_carpal_distal_interphalangeal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle0')"><xsl:text>r_carpometacarpal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle1')"><xsl:text>r_metacarpophalangeal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle2')"><xsl:text>r_carpal_proximal_interphalangeal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle3')"><xsl:text>r_carpal_distal_interphalangeal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring0')"><xsl:text>r_carpometacarpal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring1')"><xsl:text>r_metacarpophalangeal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring2')"><xsl:text>r_carpal_proximal_interphalangeal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring3')"><xsl:text>r_carpal_distal_interphalangeal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky0')"><xsl:text>r_carpometacarpal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky1')"><xsl:text>r_metacarpophalangeal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky2')"><xsl:text>r_carpal_proximal_interphalangeal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky3')"><xsl:text>r_carpal_distal_interphalangeal_5</xsl:text></xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="."/>
                    <!-- <xsl:message>
                        <xsl:text>*** internal error: improper diagnostic for HAnimJoint alias conversion of name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>', retaining original value</xsl:text>
                    </xsl:message> -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:value-of select='$newName'/>
        <!-- debug
        <xsl:if test="not(. = $newName)">
            <xsl:message>
                <xsl:text>*** confirmation: replaced </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> HAnim1 alias </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>' with HAnim2 preferred name='</xsl:text>
                <xsl:value-of select='$newName'/>
                <xsl:text>'</xsl:text>
                <xsl:text> TODO2 (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
            </xsl:message>
        </xsl:if>
          -->
      </xsl:when>
      <!-- *** finish HAnim2 HAnimJoint alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->

      <!-- *** start: HAnim2 HAnimSegment alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->
      <xsl:when test="(local-name(..)='HAnimSegment') and (local-name()='name') and $isHAnim2 and ((string(.)='l_hindfoot') or (string(.)='l_cuneiform') or (string(.)='l_midproximal') or (string(.)='l_metatarsal') or (string(.)='l_middistal') or (string(.)='l_tarsal_proximal_phalanx') or (string(.)='l_tarsal_middle_phalanx') or (string(.)='l_forefoot') or (string(.)='l_tarsal_distal_phalanx') or (string(.)='l_calcaneum') or (string(.)='r_hindfoot') or (string(.)='r_cuneiform') or (string(.)='r_midproximal') or (string(.)='r_middistal') or (string(.)='r_tarsal_proximal_phalanx') or (string(.)='r_tarsal_middle_phalanx') or (string(.)='r_forefoot') or (string(.)='r_tarsal_distal_phalanx') or (string(.)='r_calcaneum') or (string(.)='head') or (string(.)='l_hand') or (string(.)='l_wrist') or (string(.)='l_thumb_metacarpal') or (string(.)='l_thumb_proximal') or (string(.)='l_thumb_distal') or (string(.)='l_index_metacarpal') or (string(.)='l_index_proximal') or (string(.)='l_carpal_proximal_phalanx') or (string(.)='l_index_middle') or (string(.)='l_carpal_middle_phalanx') or (string(.)='l_index_distal') or (string(.)='l_carpal_distal_phalanx') or (string(.)='l_middle_metacarpal') or (string(.)='l_middle_proximal') or (string(.)='l_middle_middle') or (string(.)='l_middle_distal') or (string(.)='l_ring_metacarpal') or (string(.)='l_ring_proximal') or (string(.)='l_ring_middle') or (string(.)='l_ring_distal') or (string(.)='l_pinky_metacarpal') or (string(.)='l_pinky_proximal') or (string(.)='l_pinky_middle') or (string(.)='l_pinky_distal') or (string(.)='r_hand') or (string(.)='r_wrist') or (string(.)='r_thumb_metacarpal') or (string(.)='r_thumb_proximal') or (string(.)='r_thumb_distal') or (string(.)='r_index_metacarpal') or (string(.)='r_index_proximal') or (string(.)='r_carpal_proximal_phalanx') or (string(.)='r_index_middle') or (string(.)='r_carpal_middle_phalanx') or (string(.)='r_index_distal') or (string(.)='r_carpal_distal_phalanx') or (string(.)='r_middle_metacarpal') or (string(.)='r_middle_proximal') or (string(.)='r_middle_middle') or (string(.)='r_middle_distal') or (string(.)='r_ring_metacarpal') or (string(.)='r_ring_proximal') or (string(.)='r_ring_middle') or (string(.)='r_ring_distal') or (string(.)='r_pinky_metacarpal') or (string(.)='r_pinky_proximal') or (string(.)='r_pinky_middle') or (string(.)='r_pinky_distal'))">
        <!-- debug
        <xsl:message>
            <xsl:text>-*- HAnim2 HAnimSegment alias conversion: </xsl:text>
            <xsl:text> local-name(..)=</xsl:text>
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> $nodeName=</xsl:text>
            <xsl:value-of select="$nodeName"/>
            <xsl:text> local-name()=</xsl:text>
            <xsl:value-of select="local-name()"/>
            <xsl:text> .=</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text> $isHAnim2=</xsl:text>
            <xsl:value-of select="$isHAnim2"/>
        </xsl:message>  
         -->
        <xsl:variable name="newName">
            <!-- find preferred value for this alias -->
            <xsl:choose>
                <xsl:when test="(string(.)='l_hindfoot')"><xsl:text>l_talus</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_cuneiform')"><xsl:text>l_cuneiform_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_midproximal')"><xsl:text>l_metatarsal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_metatarsal')"><xsl:text>l_metatarsal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middistal')"><xsl:text>l_tarsal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_tarsal_proximal_phalanx')"><xsl:text>l_tarsal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_tarsal_middle_phalanx')"><xsl:text>l_tarsal_middle_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_forefoot')"><xsl:text>l_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_tarsal_distal_phalanx')"><xsl:text>l_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_calcaneum')"><xsl:text>l_calcaneus</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_hindfoot')"><xsl:text>r_talus</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_cuneiform')"><xsl:text>r_cuneiform_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_midproximal')"><xsl:text>r_metatarsal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middistal')"><xsl:text>r_tarsal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_tarsal_proximal_phalanx')"><xsl:text>r_tarsal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_tarsal_middle_phalanx')"><xsl:text>r_tarsal_middle_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_forefoot')"><xsl:text>r_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_tarsal_distal_phalanx')"><xsl:text>r_tarsal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_calcaneum')"><xsl:text>r_calcaneus</xsl:text></xsl:when>
                <xsl:when test="(string(.)='head')"><xsl:text>skull</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_hand')"><xsl:text>l_carpal</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_thumb_metacarpal')"><xsl:text>l_metacarpal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_thumb_proximal')"><xsl:text>l_carpal_proximal_phalanx_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_thumb_distal')"><xsl:text>l_carpal_distal_phalanx_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index_metacarpal')"><xsl:text>l_metacarpal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index_proximal')"><xsl:text>l_carpal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_carpal_proximal_phalanx')"><xsl:text>l_carpal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index_middle')"><xsl:text>l_carpal_middle_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_carpal_middle_phalanx')"><xsl:text>l_carpal_middle_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_index_distal')"><xsl:text>l_carpal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_carpal_distal_phalanx')"><xsl:text>l_carpal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle_metacarpal')"><xsl:text>l_metacarpal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle_proximal')"><xsl:text>l_carpal_proximal_phalanx_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle_middle')"><xsl:text>l_carpal_middle_phalanx_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_middle_distal')"><xsl:text>l_carpal_distal_phalanx_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring_metacarpal')"><xsl:text>l_metacarpal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring_proximal')"><xsl:text>l_carpal_proximal_phalanx_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring_middle')"><xsl:text>l_carpal_middle_phalanx_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_ring_distal')"><xsl:text>l_carpal_distal_phalanx_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky_metacarpal')"><xsl:text>l_metacarpal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky_proximal')"><xsl:text>l_carpal_proximal_phalanx_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky_middle')"><xsl:text>l_carpal_middle_phalanx_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='l_pinky_distal')"><xsl:text>l_carpal_distal_phalanx_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_hand')"><xsl:text>r_carpal</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_thumb_metacarpal')"><xsl:text>r_metacarpal_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_thumb_proximal')"><xsl:text>r_carpal_proximal_phalanx_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_thumb_distal')"><xsl:text>r_carpal_distal_phalanx_1</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index_metacarpal')"><xsl:text>r_metacarpal_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index_proximal')"><xsl:text>r_carpal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_carpal_proximal_phalanx')"><xsl:text>r_carpal_proximal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index_middle')"><xsl:text>r_carpal_middle_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_carpal_middle_phalanx')"><xsl:text>r_carpal_middle_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_index_distal')"><xsl:text>r_carpal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_carpal_distal_phalanx')"><xsl:text>r_carpal_distal_phalanx_2</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle_metacarpal')"><xsl:text>r_metacarpal_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle_proximal')"><xsl:text>r_carpal_proximal_phalanx_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle_middle')"><xsl:text>r_carpal_middle_phalanx_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_middle_distal')"><xsl:text>r_carpal_distal_phalanx_3</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring_metacarpal')"><xsl:text>r_metacarpal_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring_proximal')"><xsl:text>r_carpal_proximal_phalanx_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring_middle')"><xsl:text>r_carpal_middle_phalanx_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_ring_distal')"><xsl:text>r_carpal_distal_phalanx_4</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky_metacarpal')"><xsl:text>r_metacarpal_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky_proximal')"><xsl:text>r_carpal_proximal_phalanx_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky_middle')"><xsl:text>r_carpal_middle_phalanx_5</xsl:text></xsl:when>
                <xsl:when test="(string(.)='r_pinky_distal')"><xsl:text>r_carpal_distal_phalanx_5</xsl:text></xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="."/>
                    <!-- <xsl:message>
                        <xsl:text>*** internal error: improper diagnostic for HAnimSegment alias conversion of name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>', retaining original value</xsl:text>
                    </xsl:message> -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:value-of select='$newName'/>
        <!-- debug
        <xsl:if test="not(. = $newName)">
            <xsl:message>
                <xsl:text>*** replaced </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> HAnim1 alias </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>' with preferred HAnim2 name='</xsl:text>
                <xsl:value-of select='$newName'/>
                <xsl:text>'</xsl:text>
                <xsl:text> TODO3 (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
            </xsl:message>
        </xsl:if>-->
      </xsl:when>
      <!-- *** finish: HAnim2 HAnimSegment alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->

      <!-- *** start: HAnim2 HAnimSite alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->
      <xsl:when test="(local-name(..)='HAnimSite') and (local-name()='name') and $isHAnim2 and (starts-with(string(.),'skull_tip') or starts-with(string(.),'vertex') or starts-with(string(.),'l_clavicale') or starts-with(string(.),'l_axilla_ant') or starts-with(string(.),'l_axilla_post') or starts-with(string(.),'r_clavicale') or starts-with(string(.),'r_axilla_ant') or starts-with(string(.),'r_axilla_post') or starts-with(string(.),'middle back') or starts-with(string(.),'lower back') or starts-with(string(.),'waist_preferred_ant') or starts-with(string(.),'waist_preferred_post') or starts-with(string(.),'l_rib10_midspine') or starts-with(string(.),'Left Bustpoint') or starts-with(string(.),'r_rib10_midspine') or starts-with(string(.),'Right Bustpoint') or starts-with(string(.),'Left Anterior Superior Iliac Spine') or starts-with(string(.),'Left Posterior Superior Iliac Spine') or starts-with(string(.),'Right Anterior Superior Iliac Spine') or starts-with(string(.),'Right Posterior Superior Iliac Spine') or starts-with(string(.),'l_femoral_lateral_epicn') or starts-with(string(.),'l_femoral_lateral_epicondyles') or starts-with(string(.),'l_femoral_medial_epicn') or starts-with(string(.),'l_femoral_medial_epicondyles') or starts-with(string(.),'l_kneecap') or starts-with(string(.),'l_trochanter') or starts-with(string(.),'r_femoral_lateral_epicn') or starts-with(string(.),'r_femoral_lateral_epicondyles') or starts-with(string(.),'r_femoral_medial_epicn') or starts-with(string(.),'r_femoral_medial_epicondyles') or starts-with(string(.),'r_kneecap') or starts-with(string(.),'r_trochanter') or starts-with(string(.),'l_metatarsal_pha1') or starts-with(string(.),'l_metatarsal_pha5') or starts-with(string(.),'l_calcaneous_post') or starts-with(string(.),'r_metatarsal_pha1') or starts-with(string(.),'r_metatarsal_pha5') or starts-with(string(.),'r_calcaneous_post') or starts-with(string(.),'l_humeral_lateral_epicn') or starts-with(string(.),'l_humeral_lateral_epicondyles') or starts-with(string(.),'l_humeral_medial_epicn') or starts-with(string(.),'l_humeral_medial_epicondyles') or starts-with(string(.),'r_humeral_lateral_epicn') or starts-with(string(.),'r_humeral_lateral_epicondyles') or starts-with(string(.),'r_humeral_medial_epicn') or starts-with(string(.),'r_humeral_medial_epicondyles') or starts-with(string(.),'l_metacarpal_pha2') or starts-with(string(.),'l_metacarpal_phalanx') or starts-with(string(.),'l_metacarpal_pha5') or starts-with(string(.),'r_metacarpal_pha2') or starts-with(string(.),'r_metacarpal_phalanx') or starts-with(string(.),'r_metacarpal_pha5') or starts-with(string(.),'nuchal') or starts-with(string(.),'belly button') or starts-with(string(.),'l_canthus') or starts-with(string(.),'r_canthus') or starts-with(string(.),'chin') or starts-with(string(.),'mesosternum') or starts-with(string(.),'median plane') or starts-with(string(.),'l_thumb_distal') or starts-with(string(.),'l_index_distal') or starts-with(string(.),'l_middle_distal') or starts-with(string(.),'l_ring_distal') or starts-with(string(.),'l_pinky_distal') or starts-with(string(.),'r_thumb_distal') or starts-with(string(.),'r_index_distal') or starts-with(string(.),'r_middle_distal') or starts-with(string(.),'r_ring_distal') or starts-with(string(.),'r_pinky_distal') or starts-with(string(.),'l_digit2') or starts-with(string(.),'l_tarsal_distal_pha5') or starts-with(string(.),'r_digit2') or starts-with(string(.),'r_tarsal_distal_pha5') or contains(string(.),'l_hindfoot') or contains(string(.),'l_cuneiform') or contains(string(.),'l_midproximal') or contains(string(.),'l_metatarsal') or contains(string(.),'l_middistal') or contains(string(.),'l_tarsal_proximal_phalanx') or contains(string(.),'l_tarsal_middle_phalanx') or contains(string(.),'l_forefoot') or contains(string(.),'l_tarsal_distal_phalanx') or contains(string(.),'l_calcaneum') or contains(string(.),'r_hindfoot') or contains(string(.),'r_cuneiform') or contains(string(.),'r_midproximal') or contains(string(.),'r_middistal') or contains(string(.),'r_tarsal_proximal_phalanx') or contains(string(.),'r_tarsal_middle_phalanx') or contains(string(.),'r_forefoot') or contains(string(.),'r_tarsal_distal_phalanx') or contains(string(.),'r_calcaneum') or contains(string(.),'head') or contains(string(.),'l_hand') or contains(string(.),'l_wrist') or contains(string(.),'l_thumb_metacarpal') or contains(string(.),'l_thumb_proximal') or contains(string(.),'l_thumb_distal') or contains(string(.),'l_index_metacarpal') or contains(string(.),'l_index_proximal') or contains(string(.),'l_carpal_proximal_phalanx') or contains(string(.),'l_index_middle') or contains(string(.),'l_carpal_middle_phalanx') or contains(string(.),'l_index_distal') or contains(string(.),'l_carpal_distal_phalanx') or contains(string(.),'l_middle_metacarpal') or contains(string(.),'l_middle_proximal') or contains(string(.),'l_middle_middle') or contains(string(.),'l_middle_distal') or contains(string(.),'l_ring_metacarpal') or contains(string(.),'l_ring_proximal') or contains(string(.),'l_ring_middle') or contains(string(.),'l_ring_distal') or contains(string(.),'l_pinky_metacarpal') or contains(string(.),'l_pinky_proximal') or contains(string(.),'l_pinky_middle') or contains(string(.),'l_pinky_distal') or contains(string(.),'r_hand') or contains(string(.),'r_wrist') or contains(string(.),'r_thumb_metacarpal') or contains(string(.),'r_thumb_proximal') or contains(string(.),'r_thumb_distal') or contains(string(.),'r_index_metacarpal') or contains(string(.),'r_index_proximal') or contains(string(.),'r_carpal_proximal_phalanx') or contains(string(.),'r_index_middle') or contains(string(.),'r_carpal_middle_phalanx') or contains(string(.),'r_index_distal') or contains(string(.),'r_carpal_distal_phalanx') or contains(string(.),'r_middle_metacarpal') or contains(string(.),'r_middle_proximal') or contains(string(.),'r_middle_middle') or contains(string(.),'r_middle_distal') or contains(string(.),'r_ring_metacarpal') or contains(string(.),'r_ring_proximal') or contains(string(.),'r_ring_middle') or contains(string(.),'r_ring_distal') or contains(string(.),'r_pinky_metacarpal') or contains(string(.),'r_pinky_proximal') or contains(string(.),'r_pinky_middle') or contains(string(.),'r_pinky_distal'))">
        <xsl:variable name="suffix">
            <xsl:choose>
                <xsl:when test="ends-with($nameValue,'_pt')">
                    <xsl:text>_pt</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with($nameValue,'_tip')">
                    <xsl:text>_tip</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with($nameValue,'_view')">
                    <xsl:text>_view</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:variable name="newName">
            <!-- find preferred value for this alias -->
            <xsl:choose>
                <xsl:when test="starts-with(.,'skull_tip')"><xsl:text>skull_vertex</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'vertex')"><xsl:text>skull_vertex</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_clavicale')"><xsl:text>l_clavicle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_axilla_ant')"><xsl:text>l_axilla_proximal</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_axilla_post')"><xsl:text>l_axilla_distal</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_clavicale')"><xsl:text>r_clavicle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_axilla_ant')"><xsl:text>r_axilla_proximal</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_axilla_post')"><xsl:text>r_axilla_distal</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'middle back')"><xsl:text>spine_1_middle_back</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'lower back')"><xsl:text>spine_2_lower_back</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'waist_preferred_ant') and not(contains(.,'waist_preferred_anterior'))"><xsl:text>waist_preferred_anterior</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'waist_preferred_post') and not(contains(.,'waist_preferred_posterior'))"><xsl:text>waist_preferred_posterior</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_rib10_midspine')"><xsl:text>l_rib10</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'Left Bustpoint')"><xsl:text>l_thelion</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_rib10_midspine')"><xsl:text>r_rib10</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'Right Bustpoint')"><xsl:text>r_thelion</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'Left Anterior Superior Iliac Spine')"><xsl:text>l_asis</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'Left Posterior Superior Iliac Spine')"><xsl:text>l_psis</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'Right Anterior Superior Iliac Spine')"><xsl:text>r_asis</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'Right Posterior Superior Iliac Spine')"><xsl:text>r_psis</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_femoral_lateral_epicn')"><xsl:text>l_femoral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_femoral_lateral_epicondyles')"><xsl:text>l_femoral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_femoral_medial_epicn')"><xsl:text>l_femoral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_femoral_medial_epicondyles')"><xsl:text>l_femoral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_kneecap')"><xsl:text>l_suprapatella</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_trochanter') and not(contains(.,'trochanterion'))"><xsl:text>l_trochanterion</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_femoral_lateral_epicn')"><xsl:text>r_femoral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_femoral_lateral_epicondyles')"><xsl:text>r_femoral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_femoral_medial_epicn')"><xsl:text>r_femoral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_femoral_medial_epicondyles')"><xsl:text>r_femoral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_kneecap')"><xsl:text>r_suprapatella</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_trochanter') and not(contains(.,'trochanterion'))"><xsl:text>r_trochanterion</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_metatarsal_pha1')"><xsl:text>l_metatarsal_phalanx_1</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_metatarsal_pha5')"><xsl:text>l_metatarsal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_calcaneous_post')"><xsl:text>l_calcaneus_posterior</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_metatarsal_pha1')"><xsl:text>r_metatarsal_phalanx_1</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_metatarsal_pha5')"><xsl:text>r_metatarsal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_calcaneous_post')"><xsl:text>r_calcaneus_posterior</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_humeral_lateral_epicn')"><xsl:text>l_humeral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_humeral_lateral_epicondyles')"><xsl:text>l_humeral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_humeral_medial_epicn')"><xsl:text>l_humeral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_humeral_medial_epicondyles')"><xsl:text>l_humeral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_humeral_lateral_epicn')"><xsl:text>r_humeral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_humeral_lateral_epicondyles')"><xsl:text>r_humeral_lateral_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_humeral_medial_epicn')"><xsl:text>r_humeral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_humeral_medial_epicondyles')"><xsl:text>r_humeral_medial_epicondyle</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_metacarpal_pha2')"><xsl:text>l_metacarpal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_metacarpal_phalanx') and not(contains(.,'phalanx_'))"><xsl:text>l_metacarpal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_metacarpal_pha5')"><xsl:text>l_metacarpal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_metacarpal_pha2')"><xsl:text>r_metacarpal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_metacarpal_phalanx') and not(contains(.,'phalanx_'))"><xsl:text>r_metacarpal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_metacarpal_pha5')"><xsl:text>r_metacarpal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'nuchal') and not(contains(.,'nuchale'))"><xsl:text>nuchale</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'belly button')"><xsl:text>navel</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_canthus')"><xsl:text>l_ectocanthus</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_canthus')"><xsl:text>r_ectocanthus</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'chin')"><xsl:text>menton</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'mesosternum')"><xsl:text>mesosternale</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'median plane')"><xsl:text>rear_center_midsagittal_plane</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_thumb_distal')"><xsl:text>l_carpal_distal_phalanx_1</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_index_distal')"><xsl:text>l_carpal_distal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_middle_distal')"><xsl:text>l_carpal_distal_phalanx_3</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_ring_distal')"><xsl:text>l_carpal_distal_phalanx_4</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_pinky_distal')"><xsl:text>l_carpal_distal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_thumb_distal')"><xsl:text>r_carpal_distal_phalanx_1</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_index_distal')"><xsl:text>r_carpal_distal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_middle_distal')"><xsl:text>r_carpal_distal_phalanx_3</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_ring_distal')"><xsl:text>r_carpal_distal_phalanx_4</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_pinky_distal')"><xsl:text>r_carpal_distal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_digit2')"><xsl:text>l_tarsal_distal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'l_tarsal_distal_pha5')"><xsl:text>l_tarsal_distal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_digit2')"><xsl:text>r_tarsal_distal_phalanx_2</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <xsl:when test="starts-with(.,'r_tarsal_distal_pha5')"><xsl:text>r_tarsal_distal_phalanx_5</xsl:text><xsl:value-of select="$suffix"/></xsl:when>
                <!-- ***   next: HAnim2 HAnimSite alias test matching HAnimSegment alias names, which may match -->
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_hindfoot')"><xsl:value-of select="substring-before(../@name,'l_hindfoot')"/><xsl:text>l_talus</xsl:text><xsl:value-of select="substring-after(../@name,'l_hindfoot')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_cuneiform')"><xsl:value-of select="substring-before(../@name,'l_cuneiform')"/><xsl:text>l_cuneiform_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_cuneiform')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_midproximal')"><xsl:value-of select="substring-before(../@name,'l_midproximal')"/><xsl:text>l_metatarsal_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_midproximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_metatarsal')"><xsl:value-of select="substring-before(../@name,'l_metatarsal')"/><xsl:text>l_metatarsal_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_metatarsal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_middistal')"><xsl:value-of select="substring-before(../@name,'l_middistal')"/><xsl:text>l_tarsal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_middistal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_tarsal_proximal_phalanx')"><xsl:value-of select="substring-before(../@name,'l_tarsal_proximal_phalanx')"/><xsl:text>l_tarsal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_tarsal_proximal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_tarsal_middle_phalanx')"><xsl:value-of select="substring-before(../@name,'l_tarsal_middle_phalanx')"/><xsl:text>l_tarsal_middle_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_tarsal_middle_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_forefoot')"><xsl:value-of select="substring-before(../@name,'l_forefoot')"/><xsl:text>l_tarsal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_forefoot')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_tarsal_distal_phalanx')"><xsl:value-of select="substring-before(../@name,'l_tarsal_distal_phalanx')"/><xsl:text>l_tarsal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_tarsal_distal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_calcaneum')"><xsl:value-of select="substring-before(../@name,'l_calcaneum')"/><xsl:text>l_calcaneus</xsl:text><xsl:value-of select="substring-after(../@name,'l_calcaneum')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_hindfoot')"><xsl:value-of select="substring-before(../@name,'r_hindfoot')"/><xsl:text>r_talus</xsl:text><xsl:value-of select="substring-after(../@name,'r_hindfoot')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_cuneiform')"><xsl:value-of select="substring-before(../@name,'r_cuneiform')"/><xsl:text>r_cuneiform_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_cuneiform')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_midproximal')"><xsl:value-of select="substring-before(../@name,'r_midproximal')"/><xsl:text>r_metatarsal_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_midproximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_middistal')"><xsl:value-of select="substring-before(../@name,'r_middistal')"/><xsl:text>r_tarsal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_middistal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_tarsal_proximal_phalanx')"><xsl:value-of select="substring-before(../@name,'r_tarsal_proximal_phalanx')"/><xsl:text>r_tarsal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_tarsal_proximal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_tarsal_middle_phalanx')"><xsl:value-of select="substring-before(../@name,'r_tarsal_middle_phalanx')"/><xsl:text>r_tarsal_middle_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_tarsal_middle_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_forefoot')"><xsl:value-of select="substring-before(../@name,'r_forefoot')"/><xsl:text>r_tarsal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_forefoot')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_tarsal_distal_phalanx')"><xsl:value-of select="substring-before(../@name,'r_tarsal_distal_phalanx')"/><xsl:text>r_tarsal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_tarsal_distal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_calcaneum')"><xsl:value-of select="substring-before(../@name,'r_calcaneum')"/><xsl:text>r_calcaneus</xsl:text><xsl:value-of select="substring-after(../@name,'r_calcaneum')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'head')"><xsl:value-of select="substring-before(../@name,'head')"/><xsl:text>skull</xsl:text><xsl:value-of select="substring-after(../@name,'head')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_hand')"><xsl:value-of select="substring-before(../@name,'l_hand')"/><xsl:text>l_carpal</xsl:text><xsl:value-of select="substring-after(../@name,'l_hand')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_thumb_metacarpal')"><xsl:value-of select="substring-before(../@name,'l_thumb_metacarpal')"/><xsl:text>l_metacarpal_1</xsl:text><xsl:value-of select="substring-after(../@name,'l_thumb_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_thumb_proximal')"><xsl:value-of select="substring-before(../@name,'l_thumb_proximal')"/><xsl:text>l_carpal_proximal_phalanx_1</xsl:text><xsl:value-of select="substring-after(../@name,'l_thumb_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_thumb_distal')"><xsl:value-of select="substring-before(../@name,'l_thumb_distal')"/><xsl:text>l_carpal_distal_phalanx_1</xsl:text><xsl:value-of select="substring-after(../@name,'l_thumb_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_index_metacarpal')"><xsl:value-of select="substring-before(../@name,'l_index_metacarpal')"/><xsl:text>l_metacarpal_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_index_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_index_proximal')"><xsl:value-of select="substring-before(../@name,'l_index_proximal')"/><xsl:text>l_carpal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_index_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_carpal_proximal_phalanx')"><xsl:value-of select="substring-before(../@name,'l_carpal_proximal_phalanx')"/><xsl:text>l_carpal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_carpal_proximal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_index_middle')"><xsl:value-of select="substring-before(../@name,'l_index_middle')"/><xsl:text>l_carpal_middle_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_index_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_carpal_middle_phalanx')"><xsl:value-of select="substring-before(../@name,'l_carpal_middle_phalanx')"/><xsl:text>l_carpal_middle_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_carpal_middle_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_index_distal')"><xsl:value-of select="substring-before(../@name,'l_index_distal')"/><xsl:text>l_carpal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_index_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_carpal_distal_phalanx')"><xsl:value-of select="substring-before(../@name,'l_carpal_distal_phalanx')"/><xsl:text>l_carpal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'l_carpal_distal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_middle_metacarpal')"><xsl:value-of select="substring-before(../@name,'l_middle_metacarpal')"/><xsl:text>l_metacarpal_3</xsl:text><xsl:value-of select="substring-after(../@name,'l_middle_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_middle_proximal')"><xsl:value-of select="substring-before(../@name,'l_middle_proximal')"/><xsl:text>l_carpal_proximal_phalanx_3</xsl:text><xsl:value-of select="substring-after(../@name,'l_middle_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_middle_middle')"><xsl:value-of select="substring-before(../@name,'l_middle_middle')"/><xsl:text>l_carpal_middle_phalanx_3</xsl:text><xsl:value-of select="substring-after(../@name,'l_middle_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_middle_distal')"><xsl:value-of select="substring-before(../@name,'l_middle_distal')"/><xsl:text>l_carpal_distal_phalanx_3</xsl:text><xsl:value-of select="substring-after(../@name,'l_middle_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_ring_metacarpal')"><xsl:value-of select="substring-before(../@name,'l_ring_metacarpal')"/><xsl:text>l_metacarpal_4</xsl:text><xsl:value-of select="substring-after(../@name,'l_ring_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_ring_proximal')"><xsl:value-of select="substring-before(../@name,'l_ring_proximal')"/><xsl:text>l_carpal_proximal_phalanx_4</xsl:text><xsl:value-of select="substring-after(../@name,'l_ring_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_ring_middle')"><xsl:value-of select="substring-before(../@name,'l_ring_middle')"/><xsl:text>l_carpal_middle_phalanx_4</xsl:text><xsl:value-of select="substring-after(../@name,'l_ring_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_ring_distal')"><xsl:value-of select="substring-before(../@name,'l_ring_distal')"/><xsl:text>l_carpal_distal_phalanx_4</xsl:text><xsl:value-of select="substring-after(../@name,'l_ring_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_pinky_metacarpal')"><xsl:value-of select="substring-before(../@name,'l_pinky_metacarpal')"/><xsl:text>l_metacarpal_5</xsl:text><xsl:value-of select="substring-after(../@name,'l_pinky_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_pinky_proximal')"><xsl:value-of select="substring-before(../@name,'l_pinky_proximal')"/><xsl:text>l_carpal_proximal_phalanx_5</xsl:text><xsl:value-of select="substring-after(../@name,'l_pinky_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_pinky_middle')"><xsl:value-of select="substring-before(../@name,'l_pinky_middle')"/><xsl:text>l_carpal_middle_phalanx_5</xsl:text><xsl:value-of select="substring-after(../@name,'l_pinky_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'l_pinky_distal')"><xsl:value-of select="substring-before(../@name,'l_pinky_distal')"/><xsl:text>l_carpal_distal_phalanx_5</xsl:text><xsl:value-of select="substring-after(../@name,'l_pinky_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_hand')"><xsl:value-of select="substring-before(../@name,'r_hand')"/><xsl:text>r_carpal</xsl:text><xsl:value-of select="substring-after(../@name,'r_hand')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_thumb_metacarpal')"><xsl:value-of select="substring-before(../@name,'r_thumb_metacarpal')"/><xsl:text>r_metacarpal_1</xsl:text><xsl:value-of select="substring-after(../@name,'r_thumb_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_thumb_proximal')"><xsl:value-of select="substring-before(../@name,'r_thumb_proximal')"/><xsl:text>r_carpal_proximal_phalanx_1</xsl:text><xsl:value-of select="substring-after(../@name,'r_thumb_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_thumb_distal')"><xsl:value-of select="substring-before(../@name,'r_thumb_distal')"/><xsl:text>r_carpal_distal_phalanx_1</xsl:text><xsl:value-of select="substring-after(../@name,'r_thumb_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_index_metacarpal')"><xsl:value-of select="substring-before(../@name,'r_index_metacarpal')"/><xsl:text>r_metacarpal_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_index_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_index_proximal')"><xsl:value-of select="substring-before(../@name,'r_index_proximal')"/><xsl:text>r_carpal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_index_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_carpal_proximal_phalanx')"><xsl:value-of select="substring-before(../@name,'r_carpal_proximal_phalanx')"/><xsl:text>r_carpal_proximal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_carpal_proximal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_index_middle')"><xsl:value-of select="substring-before(../@name,'r_index_middle')"/><xsl:text>r_carpal_middle_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_index_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_carpal_middle_phalanx')"><xsl:value-of select="substring-before(../@name,'r_carpal_middle_phalanx')"/><xsl:text>r_carpal_middle_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_carpal_middle_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_index_distal')"><xsl:value-of select="substring-before(../@name,'r_index_distal')"/><xsl:text>r_carpal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_index_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_carpal_distal_phalanx')"><xsl:value-of select="substring-before(../@name,'r_carpal_distal_phalanx')"/><xsl:text>r_carpal_distal_phalanx_2</xsl:text><xsl:value-of select="substring-after(../@name,'r_carpal_distal_phalanx')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_middle_metacarpal')"><xsl:value-of select="substring-before(../@name,'r_middle_metacarpal')"/><xsl:text>r_metacarpal_3</xsl:text><xsl:value-of select="substring-after(../@name,'r_middle_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_middle_proximal')"><xsl:value-of select="substring-before(../@name,'r_middle_proximal')"/><xsl:text>r_carpal_proximal_phalanx_3</xsl:text><xsl:value-of select="substring-after(../@name,'r_middle_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_middle_middle')"><xsl:value-of select="substring-before(../@name,'r_middle_middle')"/><xsl:text>r_carpal_middle_phalanx_3</xsl:text><xsl:value-of select="substring-after(../@name,'r_middle_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_middle_distal')"><xsl:value-of select="substring-before(../@name,'r_middle_distal')"/><xsl:text>r_carpal_distal_phalanx_3</xsl:text><xsl:value-of select="substring-after(../@name,'r_middle_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_ring_metacarpal')"><xsl:value-of select="substring-before(../@name,'r_ring_metacarpal')"/><xsl:text>r_metacarpal_4</xsl:text><xsl:value-of select="substring-after(../@name,'r_ring_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_ring_proximal')"><xsl:value-of select="substring-before(../@name,'r_ring_proximal')"/><xsl:text>r_carpal_proximal_phalanx_4</xsl:text><xsl:value-of select="substring-after(../@name,'r_ring_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_ring_middle')"><xsl:value-of select="substring-before(../@name,'r_ring_middle')"/><xsl:text>r_carpal_middle_phalanx_4</xsl:text><xsl:value-of select="substring-after(../@name,'r_ring_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_ring_distal')"><xsl:value-of select="substring-before(../@name,'r_ring_distal')"/><xsl:text>r_carpal_distal_phalanx_4</xsl:text><xsl:value-of select="substring-after(../@name,'r_ring_distal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_pinky_metacarpal')"><xsl:value-of select="substring-before(../@name,'r_pinky_metacarpal')"/><xsl:text>r_metacarpal_5</xsl:text><xsl:value-of select="substring-after(../@name,'r_pinky_metacarpal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_pinky_proximal')"><xsl:value-of select="substring-before(../@name,'r_pinky_proximal')"/><xsl:text>r_carpal_proximal_phalanx_5</xsl:text><xsl:value-of select="substring-after(../@name,'r_pinky_proximal')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_pinky_middle')"><xsl:value-of select="substring-before(../@name,'r_pinky_middle')"/><xsl:text>r_carpal_middle_phalanx_5</xsl:text><xsl:value-of select="substring-after(../@name,'r_pinky_middle')"/></xsl:when>
                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,'r_pinky_distal')"><xsl:value-of select="substring-before(../@name,'r_pinky_distal')"/><xsl:text>r_carpal_distal_phalanx_5</xsl:text><xsl:value-of select="substring-after(../@name,'r_pinky_distal')"/></xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="."/>
                    <!-- <xsl:message>
                        <xsl:text>*** internal error: improper diagnostic for HAnimSite conversion test of name='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>', retaining original value</xsl:text>
                    </xsl:message> -->
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <xsl:value-of select='$newName'/>
        <xsl:if test="not(. = $newName)">
            <xsl:message>
                <xsl:text>*** replaced </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> HAnim1 alias </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>' with preferred HAnim2 name='</xsl:text>
                <xsl:value-of select='$newName'/>
                <xsl:text>'</xsl:text>
                <xsl:text> TODO4 (run X3dTidy again to fix corresponding DEF, USE, ROUTE references)</xsl:text>
            </xsl:message>
        </xsl:if>
      </xsl:when>
      <!-- *** finish: HAnim2 HAnimSite alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->

            <xsl:when test="($nodeName = 'ROUTE') and ((local-name() = 'fromNode') or (local-name() = 'toNode'))">
                <xsl:variable name="attributeValue" select="."/>
                <xsl:choose>
                    <xsl:when test="//*[starts-with(local-name(),'HAnim')][@DEF = $attributeValue]">
                        <!-- apply change, if any -->
                        <xsl:variable name="hanimAliasReplacementName">
                            <xsl:call-template name="newHAnimNameValue">
                                <xsl:with-param name="nameValue"><xsl:value-of select="substring-after($attributeValue,'_')"/></xsl:with-param>
                                <xsl:with-param name="nodeName"><xsl:value-of select="local-name(//*[starts-with(local-name(),'HAnim')][@DEF = $attributeValue])"/></xsl:with-param>
                            </xsl:call-template>
                        </xsl:variable>
                        <!-- provide value -->
                        <xsl:value-of select='$hanimAliasReplacementName'/>
                        <xsl:if test="not(substring-after($attributeValue,'_') = $hanimAliasReplacementName)">
                        <!-- debug
                            <xsl:message>
                                <xsl:text>*** HAnim2 ROUTE check: </xsl:text>
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
                                <xsl:text> hanimAliasReplacementName='</xsl:text>
                                <xsl:value-of select="$hanimAliasReplacementName"/>
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
            <xsl:otherwise>
                <xsl:value-of select="$nameValue"/><!-- no change or empty value -->
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <xsl:template name="fieldNameChanges">
        <!-- X3D4 Field name changes https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#fieldNameChanges -->
        <xsl:choose>
            <xsl:when test="$isX3D3 and (local-name(..) = 'ComposedCubeMapTexture') and contains(local-name(),'Texture') and    (contains(@containerField, 'Texture'))">
                <xsl:value-of select="substring-before(@containerField, 'Texture')"/>
                <xsl:message>
                    <xsl:text>*** ComposedCubeMapTexture contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='</xsl:text>
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>' rather than '</xsl:text>
                    <xsl:value-of select="substring-before(@containerField, 'Texture')"/>
                    <xsl:text>', which is allowed value in X3D3</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D4 and (local-name(..) = 'ComposedCubeMapTexture') and contains(local-name(),'Texture') and not(contains(@containerField, 'Texture'))">
                <xsl:value-of select="@containerField"/>
                <xsl:text>Texture</xsl:text>
                <xsl:message>
                    <xsl:text>*** ComposedCubeMapTexture contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='</xsl:text>
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>' rather than '</xsl:text>
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>Texture</xsl:text>
                    <xsl:text>', which is allowed value in X3D3</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D3 and (local-name(..) = 'DISEntityManager') and (local-name() = 'DISEntityTypeMapping') and not(@containerField = 'mapping')">
                <xsl:text>mapping</xsl:text>
                <xsl:message>
                    <xsl:text>*** DISEntityManager contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='</xsl:text>
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>' rather than 'mapping', which is the only allowed value in X3D3</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D4 and (local-name(..) = 'DISEntityManager') and (local-name() = 'DISEntityTypeMapping') and not(@containerField = 'children')">
                <xsl:text>children</xsl:text>
                <xsl:message>
                    <xsl:text>*** DISEntityManager contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='</xsl:text>
                    <xsl:value-of select="@containerField"/>
                    <xsl:text>' rather than 'children', which is the only allowed value in X3D4</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D3 and (local-name(..) = 'LoadSensor') and (@containerField = 'children')">
                <xsl:text>watchList</xsl:text>
                <xsl:message>
                    <xsl:text>*** LoadSensor contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='children' rather than 'watchList', which is the only allowed value in X3D3</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D4 and (local-name(..) = 'LoadSensor') and (@containerField = 'watchList')">
                <xsl:text>children</xsl:text>
                <xsl:message>
                    <xsl:text>*** LoadSensor contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='watchList' rather than 'children', which is the only allowed value in X3D4</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D3 and (local-name(..) = 'ParticleSystem') and (@containerField = 'color')">
                <xsl:text>colorRamp</xsl:text>
                <xsl:message>
                    <xsl:text>*** ParticleSystem contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='color' rather than 'colorRamp', which is the only allowed value in X3D3</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D4 and (local-name(..) = 'ParticleSystem') and (@containerField = 'colorRamp')">
                <xsl:text>color</xsl:text>
                <xsl:message>
                    <xsl:text>*** ParticleSystem contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='colorRamp' rather than 'color', which is the only allowed value in X3D4</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D3 and (local-name(..) = 'ParticleSystem') and (@containerField = 'texCoord')">
                <xsl:text>texCoordRamp</xsl:text>
                <xsl:message>
                    <xsl:text>*** ParticleSystem contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='texCoord' rather than 'texCoordRamp', which is the only allowed value in X3D3</xsl:text>
                </xsl:message>
            </xsl:when>
            <xsl:when test="$isX3D4 and (local-name(..) = 'ParticleSystem') and (@containerField = 'texCoordRamp')">
                <xsl:text>texCoord</xsl:text>
                <xsl:message>
                    <xsl:text>*** ParticleSystem contains </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> with containerField='texCoordRamp' rather than 'texCoord', which is the only allowed value in X3D4</xsl:text>
                </xsl:message>
            </xsl:when>
        </xsl:choose>
    </xsl:template>

</xsl:stylesheet>
