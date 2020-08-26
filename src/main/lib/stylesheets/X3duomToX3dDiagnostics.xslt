<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
		version="2.0"
        xmlns:xs="http://www.w3.org/2001/XMLSchema"
	xmlns:fn="http://www.w3.org/2005/xpath-functions">
            <!--
        extension-element-prefixes="xs"
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
   <meta name="filename"    content="BuildSpecificationXmlEncodingFromSchema.xslt" />
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

<xsl:output method="xml" encoding="UTF-8" indent="yes" omit-xml-declaration="yes"/>

<xsl:strip-space elements="*" />
  
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

        

    <xsl:comment>
        <xsl:text> X3D Schematron rules </xsl:text>
    </xsl:comment>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimJoint name test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimJoint name test in HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
    <xsl:text>assert test="(string-length(normalize-space(@USE)) > 0) or </xsl:text>
    <xsl:choose>
        <xsl:when test="($HAnimVersionNumber = '1')">
            <xsl:text   >(ancestor::HAnimHumanoid/@version = '2.0') or</xsl:text>
        </xsl:when>
        <xsl:when test="($HAnimVersionNumber = '2')">
            <xsl:text>not(ancestor::HAnimHumanoid/@version = '2.0') or</xsl:text>
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
    <xsl:text disable-output-escaping="yes"><![CDATA[role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is not a recognized name for HAnimJoint in HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[</assert>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimJoint alias test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimJoint alias test -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[string-length(@alias) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="($hanimVersion='2.0') and (@name='</xsl:text>
        <xsl:value-of select="@alias"/>
        <xsl:text>')</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is an HAnimJoint alias for ']]></xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend updating model</report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimJoint parent test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimJoint parent test -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[string-length(@parent) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="($hanimVersion='2.0') and (@name='</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>') and parent::HAnimJoint[not(@name='</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>')]</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; has parent HAnimJoint name='<value-of select='parent::HAnimJoint/@name'/>' ]]></xsl:text>
        <xsl:text>rather than expected parent name='</xsl:text>
        <xsl:value-of select='@parent'/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend checking model</report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- ==================================================================================================== -->
    <!-- HAnimSegment name test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSegment name test in HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
    <xsl:text>assert test="(string-length(normalize-space(@USE)) > 0) or </xsl:text>
    <xsl:choose>
        <xsl:when test="($HAnimVersionNumber = '1')">
            <xsl:text   >(ancestor::HAnimHumanoid/@version = '2.0') or</xsl:text>
        </xsl:when>
        <xsl:when test="($HAnimVersionNumber = '2')">
            <xsl:text>not(ancestor::HAnimHumanoid/@version = '2.0') or</xsl:text>
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
    <xsl:text disable-output-escaping="yes"><![CDATA[role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is not a recognized name for HAnimSegment in HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[</assert>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSegment alias test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSegment alias test -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@alias) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="($hanimVersion='2.0') and (@name='</xsl:text>
        <xsl:value-of select="@alias"/>
        <xsl:text>')</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is an HAnimSegment alias for ']]></xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend updating model</report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSegment parent test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSegment parent test -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@parent) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="($hanimVersion='2.0') and (@name='</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>') and parent::HAnimJoint[not(@name='</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>')]</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; has parent HAnimJoint name='<value-of select='parent::HAnimJoint/@name'/>' ]]></xsl:text>
        <xsl:text>rather than expected parent name='</xsl:text>
        <xsl:value-of select='@parent'/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend checking model</report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- ==================================================================================================== -->
    <!-- HAnimSite name test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSite name test in HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[ generated from X3DUOM by X3duomToX3dDiagnostics.xslt -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
    <xsl:text>assert test="(string-length(normalize-space(@USE)) > 0) or </xsl:text>
    <xsl:choose>
        <xsl:when test="($HAnimVersionNumber = '1')">
            <xsl:text   >(ancestor::HAnimHumanoid/@version = '2.0') or</xsl:text>
        </xsl:when>
        <xsl:when test="($HAnimVersionNumber = '2')">
            <xsl:text>not(ancestor::HAnimHumanoid/@version = '2.0') or</xsl:text>
        </xsl:when>
    </xsl:choose>
    <xsl:text>&#10;</xsl:text>
    <xsl:text>        </xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration">
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
    <xsl:text disable-output-escaping="yes"><![CDATA[role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is not a recognized name for HAnimSite in HAnim]]></xsl:text>
    <xsl:value-of select="$HAnimVersionNumber"/>
    <xsl:text disable-output-escaping="yes"><![CDATA[</assert>]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSite alias test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSite alias test -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[string-length(@alias) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="($hanimVersion='2.0') and starts-with(@name,'</xsl:text>
        <xsl:value-of select="@alias"/>
        <xsl:text>')</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; is an HAnimSite alias for ']]></xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend updating model</report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    
    <!-- ==================================================================================================== -->
    <!-- HAnimSite parent test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSite parent test -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
        
    <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[string-length(@parent) > 0]">
        <xsl:sort select="number(@index)"/>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[      <]]></xsl:text>
        <xsl:text>report test="($hanimVersion='2.0') and starts-with(@name,'</xsl:text>
        <xsl:value-of select="@value"/>
        <xsl:text>') and parent::HAnimJoint[not(@name='</xsl:text>
        <xsl:value-of select="@parent"/>
        <xsl:text>')]</xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[" role="warning">&lt;<name/> DEF='<value-of select='@DEF'/>' name='<value-of select='@name'/>'/&gt; has parent HAnimJoint name=' name='<value-of select='parent::HAnimJoint/@name'/>' ]]></xsl:text>
        <xsl:text>rather than expected parent name='</xsl:text>
        <xsl:value-of select='@parent'/>
        <xsl:text disable-output-escaping="yes"><![CDATA[', recommend checking model</report>]]></xsl:text>
        <xsl:text>&#10;</xsl:text>
    </xsl:for-each>
    <xsl:text>&#10;</xsl:text>

    <!-- ==================================================================================================== -->
    
    <!-- X3dTidy.xslt correction rules -->
    
    <!-- ==================================================================================================== -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- X3dTidy.xslt correction rules in X3dDiagnostics4.0.xml autogenerated from X3DUOM -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <!-- HAnimJoint conversion test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimJoint alias conversion -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text>      </xsl:text>
    <xsl:element name="xsl:when">
        <xsl:attribute name="test">
            <xsl:text>(local-name(..)='HAnimJoint') and (local-name()='name') and $isHAnim2 and (</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>

                <xsl:text>(.='</xsl:text>
                <xsl:value-of select="@alias"/>
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

                <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:when test="(.=']]></xsl:text>
                <xsl:value-of select="@alias"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[')"><xsl:text>]]></xsl:text>
                <xsl:value-of select="@value"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text></xsl:when>]]></xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:for-each>
                
        <xsl:text disable-output-escaping="yes"><![CDATA[            </xsl:choose>
        </xsl:variable>
        <xsl:text>&#10;</xsl:text>
        <xsl:value-of select='$newName'/>
        <xsl:message>
            <xsl:text>*** replace </xsl:text>
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name(.)"/>
            <xsl:text>='</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>' alias with preferred name='</xsl:text>
            <xsl:value-of select='$newName'/>
            <xsl:text>'  (touch model and run X3dTidy again to fix corresponding DEF references)</xsl:text>
        </xsl:message>
]]></xsl:text>
    <xsl:text>      </xsl:text>
    </xsl:element>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    
    <!-- HAnimSegment conversion test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSegment alias conversion -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text>      </xsl:text>
    <xsl:element name="xsl:when">
        <xsl:attribute name="test">
            <xsl:text>(local-name(..)='HAnimSegment') and (local-name()='name') and $isHAnim2 and (</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>

                <xsl:text>(.='</xsl:text>
                <xsl:value-of select="@alias"/>
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

                <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:when test="(.=']]></xsl:text>
                <xsl:value-of select="@alias"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[')"><xsl:text>]]></xsl:text>
                <xsl:value-of select="@value"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text></xsl:when>]]></xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:for-each>
                
        <xsl:text disable-output-escaping="yes"><![CDATA[            </xsl:choose>
        </xsl:variable>
        <xsl:text>&#10;</xsl:text>
        <xsl:value-of select='$newName'/>
        <xsl:message>
            <xsl:text>*** replace </xsl:text>
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name(.)"/>
            <xsl:text>='</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>' alias with preferred name='</xsl:text>
            <xsl:value-of select='$newName'/>
            <xsl:text>'  (touch model and run X3dTidy again to fix corresponding DEF references)</xsl:text>
        </xsl:message>
]]></xsl:text>
    <xsl:text>      </xsl:text>
    </xsl:element>
    <xsl:text>&#10;</xsl:text>
    
    <!-- ==================================================================================================== -->
    
    <!-- HAnimSite conversion test -->
    <xsl:text disable-output-escaping="yes"><![CDATA[      <!-- HAnimSite alias conversion -->]]></xsl:text>
    <xsl:text>&#10;</xsl:text>
    
    <xsl:text>      </xsl:text>
    <xsl:element name="xsl:when">
        <xsl:attribute name="test">
            <xsl:text>(local-name(..)='HAnimSite') and (local-name()='name') and $isHAnim2 and (</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>

                <xsl:text>(.='</xsl:text>
                <xsl:value-of select="@alias"/>
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
            <xsl:text>)</xsl:text>
        </xsl:attribute>
        
        <xsl:text disable-output-escaping="yes"><![CDATA[]]></xsl:text>
        <xsl:text disable-output-escaping="yes"><![CDATA[
        <xsl:variable name="newName">
            <!-- find preferred value for this alias -->
            <xsl:choose>]]></xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:for-each select="//SimpleTypeEnumerations/SimpleType[@name='hanimFeaturePointNameValues']/enumeration[string-length(@alias) > 0]">
                <xsl:sort select="number(@index)"/>

                <xsl:text disable-output-escaping="yes"><![CDATA[                <xsl:when test="(.=']]></xsl:text>
                <xsl:value-of select="@alias"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[')"><xsl:text>]]></xsl:text>
                <xsl:value-of select="@value"/>
                <xsl:text disable-output-escaping="yes"><![CDATA[</xsl:text></xsl:when>]]></xsl:text>
                <xsl:text>&#10;</xsl:text>
            </xsl:for-each>
                
        <xsl:text disable-output-escaping="yes"><![CDATA[            </xsl:choose>
        </xsl:variable>
        <xsl:text>&#10;</xsl:text>
        <xsl:value-of select='$newName'/>
        <xsl:message>
            <xsl:text>*** replace </xsl:text>
            <xsl:value-of select="local-name(..)"/>
            <xsl:text> </xsl:text>
            <xsl:value-of select="local-name(.)"/>
            <xsl:text>='</xsl:text>
            <xsl:value-of select="."/>
            <xsl:text>' alias with preferred name='</xsl:text>
            <xsl:value-of select='$newName'/>
            <xsl:text>'  (touch model and run X3dTidy again to fix corresponding DEF references)</xsl:text>
        </xsl:message>
]]></xsl:text>
    <xsl:text>      </xsl:text>
    </xsl:element>
    
</xsl:result-document>

	<!-- debug -->
	<xsl:message>
	  <xsl:text>Produced new </xsl:text>
	  <xsl:value-of select="$nameX3dDiagnosticsFile"/>
	 </xsl:message>

</xsl:template>


<!-- ****************** catch-all ****************** -->

<xsl:template match="*">

<xsl:text>&#10;/* catch-all template:  </xsl:text>
<xsl:value-of select="local-name ()"/>
<xsl:text> */&#10;</xsl:text>

	<xsl:apply-templates/>

</xsl:template>


</xsl:stylesheet>

