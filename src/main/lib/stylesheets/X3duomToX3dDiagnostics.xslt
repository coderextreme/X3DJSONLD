<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
		version="2.0"
        xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions"
    exclude-result-prefixes="xsl">
            <!--
        extension-element-prefixes="xs"
        extension-element-prefixes="saxon xs">
                saxon:trace="true"
                xmlns:saxon="http://icl.com/saxon"
                xmlns:date="http://exslt.org/dates-and-times"
                xmlns:xeena="../content/profile.dtd"
                xmlns:x3d="../content/x3d-3.3.xsd"
            -->
        <!-- https://stackoverflow.com/questions/857010/xsl-avoid-exporting-namespace-definitions-to-resulting-xml-documents -->
  <xsl:param name="LinkDom" select="true()"/>
  
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
   <meta name="filename"    content="X3duomToX3dDiagnostics.xslt" />
   <meta name="author"      content="Don Brutzman" />
   <meta name="created"     content="14 July 2002" />
   <meta name="description" content="XSL stylesheet to convert X3D Schema to XHTML files for X3D specification." />
   <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt" />
   <meta name="reference"   content="http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/BuildSpecificationXmlEncodingFromSchema.xslt?revision=9169&view=markup" />
   <meta name="reference"   content="BuildX3dSceneAccessInterfacesJava.xslt" />
  </head>

Recommended tool:
-  SAXON XML Toolkit (and Instant Saxon) from Michael Kay of ICL, http://saxon.sourceforge.net
   Especially necessary since this stylesheet uses saxon-specific extensions for file handling
- Netbeans 7.*

Invocation:
-  cd   C:\www.web3d.org\x3d\stylesheets
   c:\xml\saxon\saxon ../../specifications/x3d-3.3.xsd  BuildSpecificationXmlEncodingFromSchema.xslt

-->
<!-- &nbsp; is &#160; -->

<xsl:output encoding="UTF-8" media-type="text/xml" indent="yes" omit-xml-declaration="yes" method="xml"/>

<!-- <xsl:strip-space elements="*" /> -->
  
<!-- ===================================================================================== -->
<!-- Global configuration values -->

<xsl:variable name="X3duomVersionNumber">
  <xsl:value-of select="//X3dUnifiedObjectModel/@version"/>
</xsl:variable>

<xsl:variable name="HAnimVersionNumber">
    <xsl:choose>
        <xsl:when test="starts-with($X3duomVersionNumber,'3')">
            <xsl:text>1</xsl:text>
        </xsl:when>
        <xsl:when test="starts-with($X3duomVersionNumber,'4')">
            <xsl:text>2</xsl:text>
        </xsl:when>
        <xsl:otherwise>
            <xsl:message>
                <xsl:text>*** unexpected $X3duomVersionNumber=</xsl:text>
                <xsl:value-of select="$X3duomVersionNumber"/>
            </xsl:message>
        </xsl:otherwise>
    </xsl:choose>
</xsl:variable>

<xsl:variable name="nameX3dDiagnosticsFile">
    <xsl:text>X3dDiagnostics</xsl:text>
    <xsl:value-of select="//X3dUnifiedObjectModel/@version"/>
    <xsl:text>.xml</xsl:text>
</xsl:variable>

<xsl:variable name="nameHAnim2NameHAnim1AliasTables">
              <xsl:text>HAnim2NameHanim1AliasTables.txt</xsl:text>
</xsl:variable>
        
<xsl:variable name="nameHAnim2DefaultValuesJointsFeaturePoints">
              <xsl:text>HAnim2DefaultValuesJointsFeaturePoints.txt</xsl:text>
</xsl:variable>
        
<xsl:variable name="nameAllX3dElementNames">
              <xsl:text>AllX3dElementNames.txt</xsl:text>
              <xsl:value-of select="$X3duomVersionNumber"/>
              <xsl:text>.txt</xsl:text>
</xsl:variable>

<!-- ****************** root:  start of file ****************** -->
<xsl:template match="/">

<xsl:message>
  <xsl:text>BuildX3duomToX3dDiagnostics: process X3DUOM version </xsl:text>
  <xsl:value-of select="$X3duomVersionNumber"/>
  <xsl:text> to create </xsl:text>
  <xsl:value-of select="$nameX3dDiagnosticsFile"/>
  <xsl:text> using X3duomToX3dDiagnostics.xslt </xsl:text>
</xsl:message>

<!-- create XML output -->

<xsl:result-document href="{$nameX3dDiagnosticsFile}" method="xml" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">

    <xsl:text disable-output-escaping="yes"><![CDATA[<?xml version="1.0" encoding="UTF-8"?>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[<!-- X3D diagnostics created using X3DUOM version ]]></xsl:text>
    <xsl:value-of select="$X3duomVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <!--
    <xsl:text disable-output-escaping="yes"><![CDATA[<AllX3dElementsAttributes>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>-->
    <xsl:text>&#10;</xsl:text>

    <!-- xsl:comment elements seem to ignore preceding/following line breaks, apparently a saxon bug? -->
    <xsl:text disable-output-escaping="yes"><![CDATA[<!-- X3D Schematron rules -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- NodeName capitalization checks -->
    
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: NodeName capitalization checks generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//ConcreteNode">
        <xsl:sort select="@name"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="(lower-case(local-name()) = '</xsl:text>
        <xsl:value-of select="lower-case(@name)"/>
        <xsl:text>') and not(local-name() = '</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>')"</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[ role="error">&NodeDEFname; element capitalization-case mismatch, correct CamelCase naming is ]]></xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[ </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>

    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: NodeName capitalization checks generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- FieldName capitalization checks -->
    
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: fieldName capitalization checks generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleType[(@name='initializeOnlyAccessTypes') or (@name='inputOutputAccessTypes')]/enumeration">
        <!--<xsl:sort select="@value"/>-->
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="@*[(lower-case(local-name()) = '</xsl:text>
        <xsl:value-of select="lower-case(@value)"/>
        <xsl:text>') and not(local-name() = '</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>')]"</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[ role="error">&NodeDEFname; <value-of select="local-name()"/>]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[ fieldName capitalization-case mismatch, correct CamelCase naming is ]]></xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[ </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>

    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: fieldName capitalization checks generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimJoint name test -->
    
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimJoint name test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <!--
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!- - HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ HAnimJoint name test generated from X3DUOM by X3duomToX3dDiagnostics.xslt  - ->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
    <xsl:text>assert test="(string-length(normalize-space(@USE)) > 0) or </xsl:text>
    <xsl:choose>
        <xsl:when test="($HAnimVersionNumber = '1')">
            <xsl:text   >($isHAnim2) or</xsl:text>
        </xsl:when>
        <xsl:when test="($HAnimVersionNumber = '2')">
            <xsl:text>not($isHAnim2) or</xsl:text>
        </xsl:when>
    </xsl:choose>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>        </xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration">
        <xsl:sort select="number(@index)"/>

        <!-- debug
        <xsl:value-of select="@index"/>
        <xsl:text> </xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text> loa=</xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text> parent=</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>&#10;</xsl:text>
         -->
        <xsl:if test="((position() mod 5) = 0)">
            <xsl:text>&#10;</xsl:text>
            <xsl:text>        </xsl:text>
        </xsl:if>
        
        <xsl:text>(@name='</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>')</xsl:text>
        <xsl:if test="not(position() = last())">
            <xsl:text> or </xsl:text>
        </xsl:if>
    </xsl:for-each>
       
    <xsl:text>"</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>        </xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[role="warning">&lt;HAnimJoint DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is not a recognized name for HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ HAnimJoint </assert>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimJoint name test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimJoint alias test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimJoint alias test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[string-length(@alias) > 0]">
        <xsl:sort select="number(@index)"/>
						
        <xsl:variable name="value" select="@value"/>
        <xsl:for-each select="tokenize(@alias, ',')">
            <xsl:variable name="alias" select="."/>
            
            <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
            <xsl:text>report test="$isHAnim2 and (@name='</xsl:text>
            <xsl:value-of select="$alias"/>
            <xsl:text>')</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimJoint DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is an HAnimJoint alias for ']]></xsl:text>
            <xsl:value-of select="$value"/>
            <xsl:text disable-output-escaping="yes"><![CDATA[', recommend updating X3D model source </report>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
        </xsl:for-each>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimJoint alias test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimJoint loa test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimJoint Level of Articulation (loa) test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[number(@loa) ge 0]">
        <xsl:sort select="number(@index)"/>
						
        <xsl:variable name="value" select="@value"/>
            
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="$isHAnim2 and (@name='</xsl:text>
        <xsl:value-of select="$value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[') and not($loa = -1) and ($loa lt ]]></xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[)]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimJoint DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; requires minimum loa=']]></xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[' but ancestor HAnimHumanoid loa='<value-of select='$loa'/>' is insufficient, recommend revising X3D model source </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
            
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimJoint Level of Articulation (loa) test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimJoint parent test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimJoint parent test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[string-length(@parent) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="$isHAnim2 and (@name='</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>') and parent::HAnimJoint[not(@name='</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>')]</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimJoint DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; has parent HAnimJoint name='<value-of select='parent::HAnimJoint/@name'/>' ]]></xsl:text>
        <xsl:text>rather than expected parent name='</xsl:text>
        <xsl:value-of select='@parent'/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend checking model </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimJoint parent test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- ==================================================================================================== -->
    <!-- HAnimSegment name test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSegment name test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
    <xsl:text>assert test="(string-length(normalize-space(@USE)) > 0) or </xsl:text>
    <xsl:choose>
        <xsl:when test="($HAnimVersionNumber = '1')">
            <xsl:text   >($isHAnim2) or</xsl:text>
        </xsl:when>
        <xsl:when test="($HAnimVersionNumber = '2')">
            <xsl:text>not($isHAnim2) or</xsl:text>
        </xsl:when>
    </xsl:choose>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>        </xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration">
        <xsl:sort select="number(@index)"/>

        <!-- debug
        <xsl:value-of select="@index"/>
        <xsl:text> </xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text> loa=</xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text> parent=</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>&#10;</xsl:text>
         -->
        <xsl:if test="((position() mod 5) = 0)">
            <xsl:text>&#10;</xsl:text>
            <xsl:text>        </xsl:text>
        </xsl:if>
        
        <xsl:text>(@name='</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>')</xsl:text>
        <xsl:if test="not(position() = last())">
            <xsl:text> or </xsl:text>
        </xsl:if>
    </xsl:for-each>
       
    <xsl:text>"</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>        </xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[role="warning">&lt;HAnimSegment DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is not a recognized name for HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ HAnimSegment </assert>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish HAnim2 HAnimSegment name test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSegment alias test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSegment alias test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@alias) > 0]">
        <xsl:sort select="number(@index)"/>
						
        <xsl:variable name="value" select="@value"/>
        <xsl:for-each select="tokenize(@alias, ',')">
            <xsl:variable name="alias" select="."/>
            <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
            <xsl:text>report test="$isHAnim2 and (@name='</xsl:text>
            <xsl:value-of select="$alias"/>
            <xsl:text>')</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimSegment DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is an HAnimSegment alias for ']]></xsl:text>
            <xsl:value-of select="$value"/>
            <xsl:text disable-output-escaping="yes"><![CDATA[', recommend updating X3D model source </report>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
        </xsl:for-each>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimSegment alias test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSegment loa test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSegment Level of Articulation (loa) test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[number(@loa) ge 0]">
        <xsl:sort select="number(@index)"/>
						
        <xsl:variable name="value" select="@value"/>
            
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="$isHAnim2 and (@name='</xsl:text>
        <xsl:value-of select="$value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[') and not($loa = -1) and ($loa lt ]]></xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[)]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimSegment DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; requires minimum loa=']]></xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[' but ancestor HAnimHumanoid loa='<value-of select='$loa'/>' is insufficient, recommend revising X3D model source </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
            
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimSegment Level of Articulation (loa) test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSegment parent test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSegment parent test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@parent) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="$isHAnim2 and (@name='</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>') and parent::HAnimJoint[not(@name='</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>')]</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimSegment DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; has parent HAnimJoint name='<value-of select='parent::HAnimJoint/@name'/>' ]]></xsl:text>
        <xsl:text>rather than expected parent name='</xsl:text>
        <xsl:value-of select='@parent'/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend checking model </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimSegment parent test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- ==================================================================================================== -->
    <!-- HAnimSite name test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSite name test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
    <xsl:text>assert test="(string-length(normalize-space(@USE)) > 0) or </xsl:text>
    <xsl:choose>
        <xsl:when test="($HAnimVersionNumber = '1')">
            <xsl:text   >($isHAnim2) or</xsl:text>
        </xsl:when>
        <xsl:when test="($HAnimVersionNumber = '2')">
            <xsl:text>not($isHAnim2) or</xsl:text>
        </xsl:when>
    </xsl:choose>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>        </xsl:text>
    
    <!-- also testing aliases contained in hanimSegmentNameValues -->
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[(@name='hanimFeaturePointNameValues') or (@name='hanimSegmentNameValues')]/enumeration">
        <xsl:sort select="(../@name='hanimSegmentNameValues')"/>
        <xsl:sort select="number(@index)"/>

        <!-- debug
        <xsl:value-of select="@index"/>
        <xsl:text> </xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text> loa=</xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text> parent=</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>&#10;</xsl:text>
         -->
        <xsl:if test="((position() mod 5) = 0)">
            <xsl:text>&#10;</xsl:text>
            <xsl:text>        </xsl:text>
        </xsl:if>
        
        <xsl:choose>
            <xsl:when test="(../@name='hanimSegmentNameValues')">
                <xsl:text>contains(@name,'</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>starts-with(@name,'</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:value-of select="@value"/>
        <xsl:text>')</xsl:text>
        <xsl:if test="not(position() = last())">
            <xsl:text> or </xsl:text>
        </xsl:if>
    </xsl:for-each>
       
    <xsl:text>"</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>        </xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[role="info">&lt;HAnimSite DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is not a recognized name for HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ HAnimSite </assert>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimSite name test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSite alias test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSite alias test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[string-length(@alias) > 0]">
        <xsl:sort select="number(@index)"/>
						
        <xsl:variable name="value" select="@value"/>
        <xsl:for-each select="tokenize(@alias, ',')">
            <xsl:variable name="alias" select="."/>
            
            <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
            <xsl:text>report test="$isHAnim2 and starts-with(@name,'</xsl:text>
            <xsl:value-of select="$alias"/>
            <xsl:text>')</xsl:text>
            <xsl:choose>
                <xsl:when test="ends-with($alias, 'trochanter')">
                    <xsl:text> and not(contains(.,'trochanterion'))</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with($alias, 'nuchal')">
                    <xsl:text> and not(contains(.,'nuchale'))</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with($alias, 'phalanx')">
                    <xsl:text> and not(contains(.,'phalanx_'))</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with($alias, 'waist_preferred_post')">
                    <xsl:text> and not(contains(.,'waist_preferred_posterior'))</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with($alias, 'waist_preferred_ant')">
                    <xsl:text> and not(contains(.,'waist_preferred_anterior'))</xsl:text>
                </xsl:when>
            </xsl:choose>
            <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimSite DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is an HAnimSite alias for ']]></xsl:text>
            <xsl:value-of select="$value"/>
            <xsl:text disable-output-escaping="yes"><![CDATA[', recommend updating X3D model source </report>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
        </xsl:for-each>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** next: HAnim2 HAnimSite alias test matching HAnimSegment alias names, which may match -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@alias) > 0]">
        <xsl:sort select="number(@index)"/>
						
        <xsl:variable name="value" select="@value"/>
        <xsl:for-each select="tokenize(@alias, ',')">
            <xsl:variable name="alias" select="."/>
            <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
            <xsl:text>report test="$isHAnim2 and contains(@name,'</xsl:text>
            <xsl:value-of select="$alias"/>
            <xsl:text>')</xsl:text>
            <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimSite DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; contains an HAnimSegment alias for ']]></xsl:text>
            <xsl:value-of select="$value"/>
            <xsl:text disable-output-escaping="yes"><![CDATA[', recommend updating X3D model source </report>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
        </xsl:for-each>
    </xsl:for-each>
    
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimSite alias test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSite loa test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSite Level of Articulation (loa) test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[number(@loa) ge 0]">
        <xsl:sort select="number(@index)"/>
						
        <xsl:variable name="value" select="@value"/>
            
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="$isHAnim2 and contains(@name,'</xsl:text>
        <xsl:value-of select="$value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[') and not($loa = -1) and ($loa lt ]]></xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[)]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimSite DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; requires minimum loa=']]></xsl:text>
        <xsl:value-of select="@loa"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[' but ancestor HAnimHumanoid loa='<value-of select='$loa'/>' is insufficient, recommend revising X3D model source </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
            
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimSite Level of Articulation (loa) test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSite parent test -->
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: HAnim2 HAnimSite parent test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[string-length(@parent) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="$isHAnim2 and starts-with(@name,'</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>') and parent::HAnimJoint[not(@name='</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>')]</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;HAnimSite DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; has parent HAnimJoint name=' name='<value-of select='parent::HAnimJoint/@name'/>' ]]></xsl:text>
        <xsl:text>rather than expected parent name='</xsl:text>
        <xsl:value-of select='@parent'/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend checking model </report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>      </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: HAnim2 HAnimSite parent test generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>

    <!-- ==================================================================================================== -->
    
    <!-- X3dTidy.xslt correction rules -->
    
    <!-- ==================================================================================================== -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- X3dTidy.xslt correction rules in X3dDiagnostics4.0.xml autogenerated from X3DUOM -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- X3dTidy NodeName capitalization corrections -->
    
    <xsl:text>                </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: NodeName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:for-each select="//ConcreteNode">
        <xsl:sort select="@name"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[                <]]></xsl:text>
        <xsl:text>xsl:when test="(lower-case(local-name()) = '</xsl:text>
        <xsl:value-of select="lower-case(@name)"/>
        <xsl:text>') and not(local-name() = '</xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text>')"</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[><xsl:text>]]></xsl:text>
        <xsl:value-of select="@name"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text></xsl:when>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>

    <xsl:text>&#10;</xsl:text>
    <xsl:text>                </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: NodeName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- X3dTidy fieldName capitalization corrections -->
    
    <xsl:text>&#10;</xsl:text>
    <xsl:text>                </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** start: fieldName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:for-each select="//SimpleType[(@name='initializeOnlyAccessTypes') or (@name='inputOutputAccessTypes')]/enumeration">
        <!--<xsl:sort select="@value"/>-->
        
        <xsl:text disable-output-escaping="yes"><![CDATA[                <]]></xsl:text>
        <xsl:text>xsl:when test="(lower-case(local-name()) = '</xsl:text>
        <xsl:value-of select="lower-case(@value)"/>
        <xsl:text>') and not(local-name() = '</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>')"</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[><xsl:text>]]></xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text>]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[<xsl:message><xsl:text>*** fix attribute capitalization, change </xsl:text>]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[<xsl:value-of select="local-name(.)"/><xsl:text> to ]]></xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text></xsl:message>]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:when>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>

    <xsl:text>&#10;</xsl:text>
    <xsl:text>                </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** finish: fieldName capitalization corrections generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    
    <!-- HAnimJoint conversion test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- *** start: HAnim2 HAnimJoint alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text>      </xsl:text>
    <xsl:element name="xsl:when" exclude-result-prefixes="xsl">
        <xsl:attribute name="test">
            <xsl:text>(local-name(..)='HAnimJoint') and (local-name()='name') and $isHAnim2 and (</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>
                
                <xsl:for-each select="tokenize(@alias, ',')">
                    <xsl:variable name="alias" select="."/>

                    <xsl:text>(.='</xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text>')</xsl:text>
                    <xsl:if test="not(position() = last())">
                        <xsl:text> or </xsl:text>
                    </xsl:if>
                    <!--
                    <xsl:if test="(position() mod 5 = 0)">
                        <xsl:text disable-output-escaping="yes"><![CDATA[
                    ]]></xsl:text>
                    </xsl:if>
                    -->
                </xsl:for-each>
                <xsl:if test="not(position() = last())">
                    <xsl:text> or </xsl:text>
                </xsl:if>
            </xsl:for-each>
            <xsl:text>)</xsl:text>
        </xsl:attribute>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[
        <xsl:variable name="newName">
            <!-- find preferred value for this alias -->
            <xsl:choose>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>
                
                <xsl:variable name="value" select="@value"/>
                <xsl:for-each select="tokenize(@alias, ',')">
                    <xsl:variable name="alias" select="."/>
            
                    <!-- handle second aliases in schema by putting them in X3DUOM (comma separated) and listing them here -->
                    <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:when test="(.=']]></xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[')"><xsl:text>]]></xsl:text>
                    <xsl:value-of select="$value"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text></xsl:when>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:for-each>
            </xsl:for-each>
                
        <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:otherwise>
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
        <xsl:if test="not(. = $newName)">
            <xsl:message>
                <xsl:text>*** replaced HAnim2 </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> alias </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>' with preferred name='</xsl:text>
                <xsl:value-of select='$newName'/>
                <xsl:text>' (run X3dTidy again to fix corresponding DEF and USE references)</xsl:text>
            </xsl:message>
        </xsl:if>
]]></xsl:text>
    <xsl:text>      </xsl:text>
    </xsl:element>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- *** finish HAnim2 HAnimJoint alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    
    <!-- HAnimSegment conversion test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- *** start: HAnim2 HAnimSegment alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text>      </xsl:text>
    <xsl:element name="xsl:when" exclude-result-prefixes="xsl">
        <xsl:attribute name="test">
            <xsl:text>(local-name(..)='HAnimSegment') and (local-name()='name') and $isHAnim2 and (</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>
                
                <xsl:for-each select="tokenize(@alias, ',')">
                    <xsl:variable name="alias" select="."/>

                    <xsl:text>(.='</xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text>')</xsl:text>
                    <xsl:if test="not(position() = last())">
                        <xsl:text> or </xsl:text>
                    </xsl:if>
                    <!--
                    <xsl:if test="(position() mod 5 = 0)">
                        <xsl:text disable-output-escaping="yes"><![CDATA[
                    ]]></xsl:text>
                    </xsl:if>
                    -->
                </xsl:for-each>
                <xsl:if test="not(position() = last())">
                    <xsl:text> or </xsl:text>
                </xsl:if>
            </xsl:for-each>
            <xsl:text>)</xsl:text>
        </xsl:attribute>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[
        <xsl:variable name="newName">
            <!-- find preferred value for this alias -->
            <xsl:choose>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>
						
                <xsl:variable name="value" select="@value"/>
                <xsl:for-each select="tokenize(@alias, ',')">
                    <xsl:variable name="alias" select="."/>

                    <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:when test="(.=']]></xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[')"><xsl:text>]]></xsl:text>
                    <xsl:value-of select="$value"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text></xsl:when>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:for-each>
            </xsl:for-each>
                
        <xsl:text disable-output-escaping="yes"><![CDATA[                 <xsl:otherwise>
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
        <xsl:if test="not(. = $newName)">
            <xsl:message>
                <xsl:text>*** replaced HAnim2 </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> alias </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>' with preferred name='</xsl:text>
                <xsl:value-of select='$newName'/>
                <xsl:text>' (run X3dTidy again to fix corresponding DEF and USE references)</xsl:text>
            </xsl:message>
        </xsl:if>
]]></xsl:text>
    <xsl:text>      </xsl:text>
    </xsl:element>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- *** finish: HAnim2 HAnimSegment alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    
    <!-- HAnimSite conversion test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- *** start: HAnim2 HAnimSite alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text>      </xsl:text>
    <xsl:element name="xsl:when" exclude-result-prefixes="xsl">
        <xsl:attribute name="test">
            <xsl:text>(local-name(..)='HAnimSite') and (local-name()='name') and $isHAnim2 and (</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[(@name='hanimFeaturePointNameValues') or (@name='hanimSegmentNameValues')]/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="(../@name='hanimSegmentNameValues')"/>
                <xsl:sort select="number(@index)"/>
                
                <xsl:variable name="enumerationType" select="../@name"/>
                <xsl:for-each select="tokenize(@alias, ',')">
                    <xsl:variable name="alias" select="."/>

                    <xsl:choose>
                        <xsl:when test="($enumerationType='hanimSegmentNameValues')">
                            <xsl:text>contains(@name,'</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>starts-with(@name,'</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:value-of select="$alias"/>
                    <xsl:text>')</xsl:text>
                    <xsl:if test="not(position() = last())">
                        <xsl:text> or </xsl:text>
                    </xsl:if>
                    <!--
                    <xsl:if test="(position() mod 5 = 0)">
                        <xsl:text disable-output-escaping="yes"><![CDATA[
                    ]]></xsl:text>
                    </xsl:if>
                    -->
                </xsl:for-each>
                <xsl:if test="not(position() = last())">
                    <xsl:text> or </xsl:text>
                </xsl:if>
            </xsl:for-each>
            <xsl:text>)</xsl:text>
        </xsl:attribute>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[
        <xsl:variable name="suffix">
            <xsl:choose>
                <xsl:when test="ends-with(.,'_pt')">
                    <xsl:text>_pt</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with(.,'_tip')">
                    <xsl:text>_tip</xsl:text>
                </xsl:when>
                <xsl:when test="ends-with(.,'_view')">
                    <xsl:text>_view</xsl:text>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>]]></xsl:text>
        <!-- debug diagnostic
        <xsl:message>
            <xsl:text>*** HAnimSite name='</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>' suffix=</xsl:text>
            <xsl:value-of select="$suffix"/>
        </xsl:message> -->
        <xsl:text disable-output-escaping="yes"><![CDATA[
        <xsl:variable name="newName">
            <!-- find preferred value for this alias -->
            <xsl:choose>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>
						
                <xsl:variable name="value" select="@value"/>
                <xsl:for-each select="tokenize(@alias, ',')">
                    <xsl:variable name="alias" select="."/>

                    <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:when test="starts-with(.,']]></xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text>')</xsl:text>
                    <xsl:choose>
                        <xsl:when test="ends-with($alias, 'trochanter')">
                            <xsl:text> and not(contains(.,'trochanterion'))</xsl:text>
                        </xsl:when>
                        <xsl:when test="ends-with($alias, 'nuchal')">
                            <xsl:text> and not(contains(.,'nuchale'))</xsl:text>
                        </xsl:when>
                        <xsl:when test="ends-with($alias, 'phalanx')">
                            <xsl:text> and not(contains(.,'phalanx_'))</xsl:text>
                        </xsl:when>
                        <xsl:when test="ends-with($alias, 'waist_preferred_post')">
                            <xsl:text> and not(contains(.,'waist_preferred_posterior'))</xsl:text>
                        </xsl:when>
                        <xsl:when test="ends-with($alias, 'waist_preferred_ant')">
                            <xsl:text> and not(contains(.,'waist_preferred_anterior'))</xsl:text>
                        </xsl:when>
                    </xsl:choose>
                    <xsl:text disable-output-escaping="yes"><![CDATA["><xsl:text>]]></xsl:text>
                    <xsl:value-of select="$value"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text><xsl:value-of select="$suffix"/></xsl:when>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:for-each>
            </xsl:for-each>

            <xsl:text>&#10;</xsl:text>
            <xsl:text>                </xsl:text><xsl:text disable-output-escaping="yes"><![CDATA[<!-- *** next: HAnim2 HAnimSite alias test matching HAnimSegment alias names, which may match -->]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
                
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>
                <!-- <xsl:message><xsl:text>!!! in loop </xsl:text></xsl:message> -->
                <xsl:variable name="value" select="@value"/>
                <xsl:for-each select="tokenize(@alias, ',')">
                    <xsl:variable name="alias" select="."/>

                    <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:when test="(local-name(..)='HAnimSegment') and contains(../@name,']]></xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text>')</xsl:text>
                    <xsl:text disable-output-escaping="yes"><![CDATA["><xsl:value-of select="substring-before(../@name,']]></xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[')"/><xsl:text>]]></xsl:text>
                    <xsl:value-of select="$value"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text><xsl:value-of select="substring-after(../@name,']]></xsl:text>
                    <xsl:value-of select="$alias"/>
                    <xsl:text disable-output-escaping="yes"><![CDATA[')"/></xsl:when>]]></xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:for-each>
            </xsl:for-each>
                
        <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:otherwise>
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
                <xsl:text>*** replaced HAnim2 </xsl:text>
                <xsl:value-of select="local-name(..)"/>
                <xsl:text> alias </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>' with preferred name='</xsl:text>
                <xsl:value-of select='$newName'/>
                <xsl:text>' (run X3dTidy again to fix corresponding DEF and USE references)</xsl:text>
            </xsl:message>
        </xsl:if>
]]></xsl:text>
    <xsl:text>      </xsl:text>
    </xsl:element>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- *** finish: HAnim2 HAnimSite alias conversion generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
</xsl:result-document>

	<!-- debug -->
	<xsl:message>
	  <xsl:text>*** Produced new </xsl:text>
	  <xsl:value-of select="$nameX3dDiagnosticsFile"/>
	 </xsl:message>
     
    <!-- ==================================================================================================== -->

<xsl:result-document href="{$nameHAnim2NameHAnim1AliasTables}" method="xml" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">
    
    <!-- HAnim alias table
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!- - *** start: HAnim alias table for HAnim2/HAnim2 generated from X3DUOM by X3duomToX3dDiagnostics.xslt - ->]]></xsl:text>
    <xsl:text>&#10;</xsl:text> -->
    
    <xsl:variable name="columnWidth" select="round(40)"/>
    <xsl:variable name="divider">
        <xsl:text>==================================================================================</xsl:text>
    </xsl:variable>
    
    <xsl:variable name="divider">
        <xsl:text>==================================================================================</xsl:text>
    </xsl:variable>
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text> HAnim2 name and HAnim1 alias tables for Joint, Segment and Site (feature points)</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text> https://www.web3d.org/x3d/content/examples/HumanoidAnimation/</xsl:text>
    <xsl:value-of select="$nameHAnim2NameHAnim1AliasTables"/>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:call-template name="printEnumerationsAliasTable">
        <xsl:with-param name="tableTitle">
            <xsl:text>HAnimJoint alias values</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="enumerationsType">
            <xsl:text>hanimJointNameValues</xsl:text>
        </xsl:with-param>
    </xsl:call-template>
    <xsl:text>&#10;</xsl:text>
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:call-template name="printEnumerationsAliasTable">
        <xsl:with-param name="tableTitle">
            <xsl:text>HAnimSegment alias values</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="enumerationsType">
            <xsl:text>hanimSegmentNameValues</xsl:text>
        </xsl:with-param>
    </xsl:call-template>
    <xsl:text>&#10;</xsl:text>
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:call-template name="printEnumerationsAliasTable">
        <xsl:with-param name="tableTitle">
            <xsl:text>HAnim Feature Point (Site, Displacer) alias values</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="enumerationsType">
            <xsl:text>hanimFeaturePointNameValues</xsl:text>
        </xsl:with-param>
    </xsl:call-template>
    <xsl:text>&#10;</xsl:text>
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    
    <!--
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!- - *** finish: HAnim alias table for HAnim2/HAnim2 generated from X3DUOM by X3duomToX3dDiagnostics.xslt - ->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>-->
    
</xsl:result-document>

	<!-- debug -->
	<xsl:message>
	  <xsl:text>*** Produced new </xsl:text>
	  <xsl:value-of select="$nameHAnim2NameHAnim1AliasTables"/>
	 </xsl:message>
     
<xsl:result-document href="{$nameHAnim2DefaultValuesJointsFeaturePoints}" method="xml" omit-xml-declaration="yes" encoding="UTF-8" indent="yes">
    
    <!-- HAnim alias table
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!- - *** start: HAnim alias table for HAnim2/HAnim2 generated from X3DUOM by X3duomToX3dDiagnostics.xslt - ->]]></xsl:text>
    <xsl:text>&#10;</xsl:text> -->
    
    <xsl:variable name="columnWidth" select="round(40)"/>
    <xsl:variable name="divider">
        <xsl:text>==================================================================================</xsl:text>
    </xsl:variable>
    
    <xsl:variable name="divider">
        <xsl:text>==================================================================================</xsl:text>
    </xsl:variable>
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text> HAnim2 default values for Joint and Site (feature point) nodes</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text> https://www.web3d.org/x3d/content/examples/HumanoidAnimation/</xsl:text>
    <xsl:value-of select="$nameHAnim2DefaultValuesJointsFeaturePoints"/>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:call-template name="printEnumerationsDefaultValuesTable">
        <xsl:with-param name="tableTitle">
            <xsl:text>HAnimJoint default values</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="enumerationsType">
            <xsl:text>hanimJointNameValues</xsl:text>
        </xsl:with-param>
    </xsl:call-template>
    <xsl:text>&#10;</xsl:text>
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:call-template name="printEnumerationsDefaultValuesTable">
        <xsl:with-param name="tableTitle">
            <xsl:text>HAnim Feature Point (Site, Displacer) default values</xsl:text>
        </xsl:with-param>
        <xsl:with-param name="enumerationsType">
            <xsl:text>hanimFeaturePointNameValues</xsl:text>
        </xsl:with-param>
    </xsl:call-template>
    <xsl:text>&#10;</xsl:text>
    <xsl:value-of select="$divider"/>
    <xsl:text>&#10;</xsl:text>
    
    <!--
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!- - *** finish: HAnim alias table for HAnim2/HAnim2 generated from X3DUOM by X3duomToX3dDiagnostics.xslt - ->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>-->
    
</xsl:result-document>

	<!-- debug -->
	<xsl:message>
	  <xsl:text>*** Produced new </xsl:text>
	  <xsl:value-of select="$nameHAnim2DefaultValuesJointsFeaturePoints"/>
	 </xsl:message>
     
<xsl:result-document href="{$nameAllX3dElementNames}" method="text" omit-xml-declaration="yes" encoding="UTF-8" indent="no">

    <xsl:for-each select="//ConcreteNode">
        
    <!--<xsl:text>"</xsl:text>-->
        <xsl:value-of select="@name"/>
    <!--<xsl:text>",</xsl:text>-->
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    
</xsl:result-document>

	<!-- debug -->
	<xsl:message>
	  <xsl:text>*** Produced new </xsl:text>
	  <xsl:value-of select="$nameAllX3dElementNames"/>
	 </xsl:message>
     
     

</xsl:template>


<!-- ****************** utility targets ****************** -->

<xsl:template name="printEnumerationsAliasTable">
    <xsl:param name="tableTitle">
        <xsl:text>HAnim alias table</xsl:text>
    </xsl:param>
    <xsl:param name="enumerationsType"/>
    <xsl:param name="columnWidth" select="round(40)"/>
    
    <xsl:text>                </xsl:text>
    <xsl:value-of select="$tableTitle"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>HAnim2 name</xsl:text>
    <xsl:for-each select="1 to ($columnWidth - string-length('HAnim2 name'))">
        <xsl:text> </xsl:text>
    </xsl:for-each>
    <xsl:text>HAnim1, others</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name = $enumerationsType]/enumeration">
        <xsl:sort select="number(@index)"/>
        
        <!-- column spacing -->
        <xsl:for-each select="1 to (3 - string-length(@index))">
            <xsl:text> </xsl:text>
        </xsl:for-each>
        <xsl:value-of select="@index"/>
        <xsl:text> </xsl:text>
        
        <xsl:value-of select="@value"/>
        <!-- column spacing -->
        <xsl:for-each select="1 to ($columnWidth - string-length(@value))">
            <xsl:text> </xsl:text>
        </xsl:for-each>
        <xsl:value-of select="@alias"/>
        <xsl:variable name="alias" select="@alias"/>
        <xsl:if test="((count(preceding-sibling::enumeration[@alias = $alias]) + count(following-sibling::enumeration[@alias = $alias])) > 0)">
            <xsl:text> (duplicate alias)</xsl:text>
        </xsl:if>
        <xsl:if test="contains(normalize-space(@alias),' ')">
            <xsl:text> (CAESAR)</xsl:text>
        </xsl:if>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    
</xsl:template>

<xsl:template name="printEnumerationsDefaultValuesTable">
    <xsl:param name="tableTitle">
        <xsl:text>HAnim value table</xsl:text>
    </xsl:param>
    <xsl:param name="enumerationsType"/>
    <xsl:param name="columnWidth" select="round(40)"/>
    
    <xsl:text>       </xsl:text>
    <xsl:value-of select="$tableTitle"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>    HAnim2 name</xsl:text>
    <xsl:for-each select="1 to ($columnWidth - string-length('HAnim2 name'))">
        <xsl:text> </xsl:text>
    </xsl:for-each>
    <xsl:text>Example location values</xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name = $enumerationsType]/enumeration">
        <xsl:sort select="number(@index)"/>
        
        <!-- debug diagnostic
        <xsl:message>
            <xsl:text>*** position()=</xsl:text>
            <xsl:value-of select="position()"/>
            <xsl:text>, (position() mod 5)=</xsl:text>
            <xsl:value-of select="(position() mod 5)"/>
        </xsl:message>
        <xsl:if test="((position() mod 10) = 1)">
            <xsl:text>&#10;</xsl:text>
        </xsl:if> -->
        
        <!-- column spacing -->
        <xsl:for-each select="1 to (3 - string-length(@index))">
            <xsl:text> </xsl:text>
        </xsl:for-each>
        <xsl:value-of select="@index"/>
        <xsl:text> </xsl:text>
        
        <xsl:value-of select="@value"/>
        <xsl:variable name="value" select="@value"/>
        <!-- column spacing -->
        <xsl:for-each select="1 to ($columnWidth - string-length(@value))">
            <xsl:text> </xsl:text>
        </xsl:for-each>
        <xsl:if test="not(starts-with(@default,'-'))">
            <!-- align typical output column -->
            <xsl:text> </xsl:text>
        </xsl:if>
        <xsl:value-of select="@default"/>
        <xsl:variable name="default" select="@default"/>
        <!-- debug diagnostic
        <xsl:message>
            <xsl:text>*** enumeration value=</xsl:text>
            <xsl:value-of select="$value"/>
            <xsl:text>, default=</xsl:text>
            <xsl:value-of select="$default"/>
        </xsl:message> -->
        <xsl:if test="((count(preceding-sibling::enumeration[@default = $default]) + count(following-sibling::enumeration[@default = $default])) > 0)">
            <xsl:text> (duplicate default value)</xsl:text>
        </xsl:if>
        <xsl:choose>
            <xsl:when test="starts-with($value,'l_')">
                <xsl:if test="  (starts-with($default,'-'))">
                    <xsl:text> (x value cannot be negative)</xsl:text>
                </xsl:if>
                <xsl:variable name="oppositeValue" select="concat('r',substring($value,2))"/>
                <xsl:variable name="oppositeDefault" select="following-sibling::enumeration[@value = $oppositeValue]/@default"/>
                <xsl:if test="(translate($oppositeDefault,'-','') != translate($default,'-',''))">
                    <xsl:call-template name="compare-values">
                        <!-- left-right ordering of values -->
                        <xsl:with-param name="p2" select="translate($oppositeDefault,'-','')"/>
                        <xsl:with-param name="p1" select="translate($default,'-','')"/>
                    </xsl:call-template>
                </xsl:if>
            </xsl:when>
            <xsl:when test="starts-with($value,'r_')">
                <xsl:if test="not(starts-with($default,'-')) and (string-length($default) > 0)">
                    <xsl:text> (x value must be negative)</xsl:text>
                </xsl:if>
                <xsl:variable name="oppositeValue"   select="concat('l',substring($value,2))"/>
                <xsl:variable name="oppositeDefault" select="preceding-sibling::enumeration[@value = $oppositeValue]/@default"/>
                <xsl:if test="(translate($oppositeDefault,'-','') != translate($default,'-',''))">
                    <xsl:call-template name="compare-values">
                        <!-- left-right ordering of values -->
                        <xsl:with-param name="p1" select="translate($oppositeDefault,'-','')"/>
                        <xsl:with-param name="p2" select="translate($default,'-','')"/>
                    </xsl:call-template>
                </xsl:if>
            </xsl:when>
        </xsl:choose>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    
    <xsl:variable name="numberEnumerationsMissingDefaultValue" select="count(//SimpleTypeEnumerations/SimpleType[@name = $enumerationsType]/enumeration[string-length(@default) = 0])"/>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>Total </xsl:text>
    <xsl:value-of select="$enumerationsType"/>
    <xsl:text> enumeration elements missing default values: </xsl:text>
    <xsl:value-of select="$numberEnumerationsMissingDefaultValue"/>
    <xsl:text>&#10;</xsl:text>
</xsl:template>

<xsl:template name="compare-values">
    <xsl:param name="p1">
        <xsl:text>0 0 0</xsl:text>
    </xsl:param>
    <xsl:param name="p2">
        <xsl:text>0 0 0</xsl:text>
    </xsl:param>
    
    <xsl:variable name="epsilon" select="number(0.02)"/><!-- 2 cm -->
    <xsl:variable name="np1" select="normalize-space($p1)"/>
    <xsl:variable name="np2" select="normalize-space($p2)"/>
    
    <xsl:variable name="np1IsEmpty"  select="(string-length(normalize-space($p1)) = 0)"/>
    <xsl:variable name="np2IsEmpty"  select="(string-length(normalize-space($p2)) = 0)"/>
    <xsl:variable name="np1Is3Tuple" select="(translate($np1,'+-0123456789.Ee','') = '  ')"/>
    <xsl:variable name="np2Is3Tuple" select="(translate($np2,'+-0123456789.Ee','') = '  ')"/>
    <xsl:variable name="normalizedValues">
        <xsl:text>(p1='</xsl:text>
        <xsl:value-of select="$p1"/>
        <xsl:text>' p2='</xsl:text>
        <xsl:value-of select="$p2"/>
        <xsl:text>')</xsl:text>
    </xsl:variable>
    <xsl:variable name="np1.1" select="number(substring-before($np1,' '))"/>
    <xsl:variable name="np2.1" select="number(substring-before($np2,' '))"/>
    <xsl:variable name="np1.2" select="number(substring-before(substring-after($np1,' '),' '))"/>
    <xsl:variable name="np2.2" select="number(substring-before(substring-after($np2,' '),' '))"/>
    <xsl:variable name="np1.3" select="number(substring-after (substring-after($np1,' '),' '))"/>
    <xsl:variable name="np2.3" select="number(substring-after (substring-after($np2,' '),' '))"/>
    <!-- 4 decimal places of difference matches apparent precision of most values -->
    <xsl:variable name="difference.1" select="(floor(0.5 + (($np1.1 - $np2.1)) * 10000.0) div 10000.0)"/>
    <xsl:variable name="difference.2" select="(floor(0.5 + (($np1.1 - $np2.1)) * 10000.0) div 10000.0)"/>
    <xsl:variable name="difference.3" select="(floor(0.5 + (($np1.3 - $np2.3)) * 10000.0) div 10000.0)"/>
    
    <!-- debug diagnostic
    <xsl:message>
        <xsl:text>*** compare-values</xsl:text>
        <xsl:text> p1='</xsl:text>
        <xsl:value-of select="$p1"/>
        <xsl:text>' p2='</xsl:text>
        <xsl:value-of select="$p2"/>
        <xsl:text>'</xsl:text>
        <xsl:text> $np1IsEmpty=</xsl:text>
        <xsl:value-of select="$np1IsEmpty"/>
        <xsl:text> $np2IsEmpty=</xsl:text>
        <xsl:value-of select="$np2IsEmpty"/>
        <xsl:text> $np1Is3Tuple=</xsl:text>
        <xsl:value-of select="$np1Is3Tuple"/>
        <xsl:text> $np2Is3Tuple=</xsl:text>
        <xsl:value-of select="$np2Is3Tuple"/>
    </xsl:message>
    <xsl:message>
        <xsl:text>   </xsl:text>
        <xsl:text> np1.1=</xsl:text>
        <xsl:value-of select="$np1.1"/>
        <xsl:text> np2.1=</xsl:text>
        <xsl:value-of select="$np2.1"/>
        <xsl:text> difference.1=</xsl:text>
        <xsl:value-of select="$difference.1"/>
        <xsl:text>, </xsl:text>
        <xsl:text> np1.2=</xsl:text>
        <xsl:value-of select="$np1.2"/>
        <xsl:text> np2.2=</xsl:text>
        <xsl:value-of select="$np2.2"/>
        <xsl:text> difference.2=</xsl:text>
        <xsl:value-of select="$difference.2"/>
        <xsl:text>, </xsl:text>
        <xsl:text> np1.3=</xsl:text>
        <xsl:value-of select="$np1.3"/>
        <xsl:text> np2.3=</xsl:text>
        <xsl:value-of select="$np2.3"/>
        <xsl:text> difference.3=</xsl:text>
        <xsl:value-of select="$difference.3"/>
    </xsl:message> -->
    
    <xsl:choose>
        <xsl:when test="$np1IsEmpty and $np2IsEmpty">
            <!-- no response -->
        </xsl:when>
        <xsl:when test="$np1IsEmpty">
            <xsl:text> (left default missing) </xsl:text>
            <!-- <xsl:value-of select="$normalizedValues"/> -->
        </xsl:when>
        <xsl:when test="$np2IsEmpty">
            <xsl:text> (right default missing) </xsl:text>
            <!-- <xsl:value-of select="$normalizedValues"/> -->
        </xsl:when>
        <xsl:when test="not($np1Is3Tuple) or not($np2Is3Tuple)">
            <xsl:text> (3-tuple count error) </xsl:text>
            <xsl:value-of select="$normalizedValues"/>
        </xsl:when>
        <xsl:when test="(normalize-space($p1) = normalize-space($p2))">
            <xsl:text>0 0 0</xsl:text>
        </xsl:when>
        <xsl:otherwise>
            <xsl:text> (left-right difference </xsl:text>
            <xsl:value-of select="$difference.1"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="$difference.2"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="$difference.3"/>
            <xsl:text>)</xsl:text>
            <xsl:if test="(abs($difference.1) > $epsilon) or (abs($difference.2) > $epsilon) or (abs($difference.3) > $epsilon)">
                <xsl:text> *** greater than </xsl:text>
                <xsl:value-of select="$epsilon * 100"/>
                <xsl:text> cm ! </xsl:text>
            </xsl:if>
        </xsl:otherwise>
    </xsl:choose>
        
</xsl:template>


<!-- ****************** catch-all ****************** -->

<xsl:template match="*">

    <xsl:text>&#10;/* catch-all template:  </xsl:text>
    <xsl:value-of select="local-name ()"/>
    <xsl:text> */&#10;</xsl:text>

	<xsl:apply-templates/>

</xsl:template>


</xsl:stylesheet>

