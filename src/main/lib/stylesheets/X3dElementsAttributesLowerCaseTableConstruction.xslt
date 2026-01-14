<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0" 
    xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:fn="http://www.w3.org/2005/xpath-functions" extension-element-prefixes="xs">

<!--
    Stylesheet  : X3dElementsAttributesLowerCaseTableConstruction.xslt
    Created     : 18 December 2009
    Author      : Don Brutzman
    Description : Create table comparing X3D elements and attributes using XML case and lower case
    Reference   : build.xml task html5.buildElementAttributeTables
-->

<xsl:output method="xml" encoding="UTF-8" indent="yes" omit-xml-declaration="yes"/>

<xsl:strip-space elements="*" />

<xsl:variable name="X3dSchema"><xsl:text>x3d-3.3.xsd</xsl:text></xsl:variable>
<xsl:variable name="secondColumnIndex">42</xsl:variable>

<!-- ****************** root:  start of file ****************** -->
<xsl:template match="/">

<xsl:message>
  <xsl:text>BuildElementAttributeTables.xslt for HTML5 Recommendation, X3D schema version='</xsl:text>
  <xsl:value-of select="//xs:schema/@version"/>
  <xsl:text>'</xsl:text>
 </xsl:message>
 
<xsl:text> _X3D elements and attributes, shown in relaxed lowercase and strict CamelCase_</xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:text>&#10;</xsl:text>

<xsl:text>1. X3D elements from </xsl:text>
<xsl:value-of select="$X3dSchema"/>
<xsl:text> schema, lower case and XML case:</xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:text>================================================================================</xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:for-each select="//xs:element[string-length(@name) > 0]">
    <xsl:sort select="fn:lower-case(@name)"/>

    <!-- skip if duplicate -->
    <xsl:variable name="currentName"><xsl:value-of select="@name"/></xsl:variable>
    <xsl:if test="not(preceding::xs:element[@name=$currentName])">
        <xsl:value-of select="fn:lower-case(@name)"/>
        <!-- recurse to add spaces -->
        <xsl:variable name="spaceBuffer"><xsl:value-of select="$secondColumnIndex - string-length(@name)"/></xsl:variable>
        <xsl:call-template name="insert-spaces">
                <xsl:with-param name="spaceCount" select="$spaceBuffer"/>
        </xsl:call-template>

        <xsl:value-of select="@name"/>
        <xsl:text>&#10;</xsl:text>
    </xsl:if>
</xsl:for-each>
<xsl:text>&#10;</xsl:text>
<xsl:text>&#10;</xsl:text>


<xsl:text>2. X3D attributes from </xsl:text>
<xsl:value-of select="$X3dSchema"/>
<xsl:text> schema, lower case and XML case:</xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:text>================================================================================</xsl:text>
<xsl:text>&#10;</xsl:text>
<xsl:for-each select="//xs:attribute[string-length(@name) > 0]">
    <xsl:sort select="fn:lower-case(@name)"/>

    <!-- skip if duplicate -->
    <xsl:variable name="currentName"><xsl:value-of select="@name"/></xsl:variable>
    <xsl:if test="not(preceding::xs:attribute[@name=$currentName])">
        <xsl:value-of select="fn:lower-case(@name)"/>
        <!-- recurse to add spaces -->
        <xsl:variable name="spaceBuffer"><xsl:value-of select="$secondColumnIndex - string-length(@name)"/></xsl:variable>
        <xsl:call-template name="insert-spaces">
                <xsl:with-param name="spaceCount" select="$spaceBuffer"/>
        </xsl:call-template>

        <xsl:value-of select="@name"/>
        <xsl:text>&#10;</xsl:text>
    </xsl:if>
</xsl:for-each>

<xsl:result-document href="X3dElementsLowerCaseTable.html" method="html" encoding="utf-8" indent="yes">
    <xsl:fallback>
        <xsl:message>&lt;xsl:result-document&gt; not supported, no html table produced </xsl:message>
    </xsl:fallback>
    <xsl:text disable-output-escaping='yes'>&lt;!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"&gt;&#10;</xsl:text>
    <html>
        <head>
            <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
            <title>X3D lowercase/CamelCase elements</title>
            <meta name="creator"     content="Don Brutzman"/>
            <meta name="description" content="X3D elements shown in relaxed lowercase and strict CamelCase."/>
            <meta name="filename"    content="X3dElementsLowerCaseTable.html"/>
            <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/X3dElementsLowerCaseTable.html"/>
            <meta name="reference"   content="https://www.web3d.org/x3d/stylesheets/X3dElementsAttributesLowerCaseTableConstruction.xslt"/>
            <meta name="generator"   content="X3D-Edit, https://www.web3d.org/x3d/tools/X3D-Edit"/>
            <meta name="license"     content="license.html"/>    
        </head>
        <body>
            
            <h2>X3D elements in relaxed lowercase and strict CamelCase</h2>

            <table>
                <thead align="left">
                    <tr align="left">
                        <th> Lower-case tag name </th>
                        <th> X3D element name </th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                       <td colspan="2"> <hr /> </td>
                    </tr>
                    <xsl:for-each select="//xs:element[string-length(@name) > 0]">
                        <xsl:sort select="fn:lower-case(@name)"/>
                        <!-- skip if duplicate -->
                        <xsl:variable name="currentName"><xsl:value-of select="@name"/></xsl:variable>
                        <xsl:if test="not(preceding::xs:element[@name=$currentName])">
                            <tr>
                                <td>
                                    <xsl:value-of select="fn:lower-case(@name)"/>
                                </td>
                                <td>
                                    <xsl:value-of select="@name"/>
                                </td>
                            </tr>
                        </xsl:if>
                    </xsl:for-each>
                </tbody>
            </table>

        </body>
    </html>
</xsl:result-document>

<xsl:result-document href="X3dAttributesLowerCaseTable.html" method="html" encoding="utf-8" indent="yes">
    <xsl:text disable-output-escaping='yes'>&lt;!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"&gt;&#10;</xsl:text>
    <html>
        <head>
            <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
            <title>X3D lowercase/CamelCase attributes</title>
            <meta name="creator"     content="Don Brutzman"/>
            <meta name="description" content="X3D attributes, shown in relaxed lowercase and strict CamelCase."/>
            <meta name="filename"    content="X3dAttributesLowerCaseTable.html"/>
            <meta name="identifier"  content="https://www.web3d.org/x3d/stylesheets/X3dAttributesLowerCaseTable.html"/>
            <meta name="reference"   content="https://www.web3d.org/x3d/stylesheets/X3dElementsAttributesLowerCaseTableConstruction.xslt"/>
            <meta name="generator"   content="X3D-Edit, https://www.web3d.org/x3d/tools/X3D-Edit"/>
            <meta name="license"     content="license.html"/>    
        </head>
        <body>
            
            <h2>X3D attributes in relaxed lowercase and strict CamelCase</h2>

            <table>
                <thead align="left">
                    <tr>
                        <th> X3D attribute name on element in lower case <xsl:text disable-output-escaping='yes'>&amp;nbsp;&amp;nbsp;&amp;nbsp;</xsl:text></th>
                        <th> X3D attribute name on element in XML case </th>
                    </tr>
                </thead>
                <tbody>
                    <xsl:for-each select="//xs:attribute[string-length(@name) > 0]">
                        <xsl:sort select="fn:lower-case(@name)"/>
                        <!-- skip if duplicate -->
                        <xsl:variable name="currentName"><xsl:value-of select="@name"/></xsl:variable>
                        <xsl:if test="not(preceding::xs:attribute[@name=$currentName])">
                            <tr>
                                <td>
                                    <xsl:value-of select="fn:lower-case(@name)"/>
                                </td>
                                <td>
                                    <xsl:value-of select="@name"/>
                                </td>
                            </tr>
                        </xsl:if>
                    </xsl:for-each>
                </tbody>
            </table>
                
        </body>
    </html>

</xsl:result-document>

</xsl:template>

<xsl:template name="insert-spaces">
    <xsl:param name="spaceCount"></xsl:param>
    <xsl:variable name="spaceBuffer"><xsl:value-of select="number($spaceCount - 1)"/></xsl:variable>
    <!-- output space character -->
    <xsl:text> </xsl:text>
    <!-- tail recursion
    <xsl:value-of select="$spaceCount"/>
    -->
    <xsl:if test="$spaceCount > 0">
        <xsl:call-template name="insert-spaces">
                <xsl:with-param name="spaceCount" select="$spaceBuffer"/>
        </xsl:call-template>
    </xsl:if>
</xsl:template>


</xsl:stylesheet>

