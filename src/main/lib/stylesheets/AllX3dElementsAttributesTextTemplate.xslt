<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : AllX3dElementsAttributesTextTemplate.xslt
    created     : 28 November 2015
    creator     : Don Brutzman
    description : Example template stylesheet to process AllX3dElementsAttributes.xml and convert it to text
    reference   : AllX3dElementsAttributes.xml
    reference   : https://www.w3.org/TR/xslt
    identifier  : https://www.web3d.org/x3d/stylesheets/AllX3dElementsAttributesTextTemplate.xslt
    license     : license.html
-->

<!-- TODO authors can edit this example to customize all transformation rules -->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions">
	<!--  extension-element-prefixes="xs" -->
    <xsl:output method="text"/> <!-- output methods:  xml html text -->
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
        
        <!-- process elements and comments -->
        <xsl:apply-templates select="AllX3dElementsAttributes/* | comment()"/>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each element -->
        
        <!-- common initial processing for each element -->
        <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
        <xsl:value-of select="local-name()"/>
        
        <xsl:apply-templates select="@*"/> <!-- process attributes for this element -->
        
        <!-- <xsl:apply-templates select="*"/> no need to recurse on child elements -->
        
        <!-- common final processing for each element -->
        <xsl:text disable-output-escaping="yes">/&gt;</xsl:text><!-- end element -->
        <xsl:text>&#10;</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
        
        <!-- common processing for each attribute -->
        <xsl:text> </xsl:text>
        <xsl:value-of select="local-name()"/>
        <xsl:text>='</xsl:text>
        <xsl:value-of select="."/>
        <xsl:text>'</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()"> <!-- rule to process each comment -->
    
        <xsl:text disable-output-escaping="yes">&lt;!--</xsl:text>
        <xsl:value-of select="."/>
        <xsl:text disable-output-escaping="yes">--&gt;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
    </xsl:template>

</xsl:stylesheet>
