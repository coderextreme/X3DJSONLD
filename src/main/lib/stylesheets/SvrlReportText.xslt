<?xml version="1.0" ?>
<!--
    Stylesheet  : SvrlReportText.xslt
    Created     : 20 October 2008
    Revised     : 20 October 2008
    Author      : Don Brutzman
    Description : Simple line-by-line text report distilling SVRL output
    Reference   : http://www.w3.org/TR/xslt
-->

<xsl:stylesheet
   version="2.0"
   xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
   xmlns:xs="http://www.w3.org/2001/XMLSchema"
   xmlns:schold="http://www.ascc.net/xml/schematron" 
   xmlns:iso="http://purl.oclc.org/dsdl/schematron"
   xmlns:svrl="http://purl.oclc.org/dsdl/svrl" 
>

    <xsl:param name="filename"></xsl:param>
    <xsl:output method="text"/> <!-- output methods:  xml html text -->
 
    <xsl:template match="/"> <!-- process root of input document -->
        <xsl:apply-templates select="*"/> <!-- process elements -->
    </xsl:template>
 
    <xsl:template match="svrl:failed-assert | svrl:successful-report">
        <xsl:value-of select="svrl:text"/>
        <xsl:text>[</xsl:text>
        <xsl:value-of select="@location"/>
        <xsl:if test="@role">
            <xsl:text>, </xsl:text>
            <xsl:value-of select="@role"/>
        </xsl:if>
        <xsl:text>]&#10;</xsl:text>
        <xsl:apply-templates select="*"/> <!-- process elements -->
    </xsl:template>
 
    <xsl:template match="*">
        <xsl:apply-templates select="*"/> <!-- process elements -->
    </xsl:template>
    
</xsl:stylesheet>

