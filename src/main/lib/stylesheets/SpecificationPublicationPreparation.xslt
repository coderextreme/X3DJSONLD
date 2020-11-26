<?xml version="1.0" encoding="UTF-8"?>
<!-- https://stackoverflow.com/questions/21523574/replace-special-characters-like-ndash-and-mdash-occuring-in-an-xml-document -->
<!DOCTYPE stylesheet [
<!ENTITY ndash  "&#x2013;" >
<!ENTITY mdash  "&#x2014;" >
]>
<!--
    title       : SpecificationPublicationPreparation.xslt
    created     : 22 November 2020
    creator     : Don Brutzman
    description : Remove or clean up CSS-styled prose and note specification editor comments
    reference   : X3D4 Specifications
    reference   : https://www.w3.org/TR/xslt
    identifier  : https://www.web3d.org/x3d/stylesheets/SpecificationPublicationPreparation.xslt
    license     : license.html
-->

<!-- TODO authors can edit this example to customize all transformation rules -->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions">
	<!--  extension-element-prefixes="xs" -->
    <xsl:output method="html"/> <!-- output methods:  xml html text -->
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
    
        <xsl:text disable-output-escaping="yes">&lt;!DOCTYPE html&gt;</xsl:text><!-- start element complete -->
        <xsl:text>&#10;</xsl:text>
        
        <!-- process elements and comments -->
        <xsl:apply-templates select="* | comment()"/>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each element -->
        
        <!-- ensure no upper/mixed case element name -->
        <xsl:variable name="elementName">
            <xsl:choose>
                <xsl:when test="not(local-name() = lower-case(local-name()))">
                    <xsl:message>
                        <xsl:text>!!! element </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> converted to lower case</xsl:text>
                    </xsl:message>
                    <xsl:value-of select="lower-case(local-name())"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="local-name()"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        
        <xsl:variable name="indent">
            <xsl:for-each select="ancestor::*">
                <xsl:text>  </xsl:text>
            </xsl:for-each>
        </xsl:variable>
        
        <xsl:variable name="hasContainedText" select="(string-length(normalize-space(.)) > 0)"/>
                
        <!-- common initial processing for each element -->
        <xsl:text>&#10;</xsl:text>
        <xsl:value-of select="$indent"/>
        
        <xsl:choose>
            <xsl:when test="contains(@class,'proposedDeletion')">
                <xsl:message>
                    <xsl:text>*** omitted </xsl:text>
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> class='</xsl:text>
                    <xsl:value-of select="@class"/>
                    <xsl:text>'</xsl:text>
                    <!--
                    <xsl:value-of select="local-name()"/>
                    <xsl:text> element </xsl:text>
                    -->
                    <xsl:if test="$hasContainedText">
                        <xsl:text> (</xsl:text>
                        <xsl:value-of select="normalize-space(.)"/>
                        <xsl:text>)</xsl:text>
                    </xsl:if>
                </xsl:message>
            </xsl:when>
            <xsl:when test="(count(*) > 0) or $hasContainedText">
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:apply-templates select="@*"/> <!-- process attributes for this element -->
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text><!-- start element complete -->

                <xsl:apply-templates select="* | text()"/>  <!-- recurse on child elements, include contained text -->

                <!-- common final processing for each element -->
                <xsl:text>&#10;</xsl:text>
                <xsl:value-of select="$indent"/>
                <xsl:text disable-output-escaping="yes">&lt;/</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text disable-output-escaping="yes">&gt;</xsl:text><!-- end element -->
            </xsl:when>
            <xsl:otherwise>
                <!-- singleton
                <xsl:message>
                    <xsl:text>singleton </xsl:text>
                    <xsl:value-of select="local-name()"/>
                </xsl:message> -->
                <xsl:text disable-output-escaping="yes">&lt;</xsl:text>
                <xsl:value-of select="$elementName"/>

                <xsl:apply-templates select="@*"/> <!-- process attributes for this element -->

                <!-- common final processing for each element -->
                <xsl:text disable-output-escaping="yes">/&gt;</xsl:text><!-- end element -->
            </xsl:otherwise>
        </xsl:choose>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
        
        <xsl:variable name="allowedClassName" select="(local-name() = 'class') and
            ((. = 'editorsNote') or (. = 'editorialChange') or
             (. = 'auto-style1') or (. = 'cube') or (. = 'CenterDiv') or (. = 'HeadingPart') or (. = 'HeadingClause') or 
             (. = 'example') or (. = 'IndexEntry') or (. = 'x3dbar') or (. = 'x3dlogo') or
             ((local-name(..) = 'p')     and ((. = 'AnnexHeadingBottom') or (. = 'AnnexType') or (. = 'Example') or (. = 'Footnote') or (. = 'FigureCaption') or (. = 'TableCaption'))) or
             ((local-name(..) = 'pre')   and ((. = 'diagram') or (. = 'listing'))) or
             ((local-name(..) = 'table') and ((. = 'cont')    or (. = 'main')  or (. = 'topics'))) or
             ((local-name(..) = 'th')    and ((. = 'cont1')   or (. = 'main1') or (. = 'cont2') or (. = 'cont3'))))"/>
        
        <!-- ensure no upper/mixed case attribute name -->
        <xsl:variable name="attributeName">
            <xsl:choose>
                <xsl:when test="not(local-name() = lower-case(local-name()))">
                    <xsl:message>
                        <xsl:text>!!! element </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text> converted to lower case</xsl:text>
                    </xsl:message>
                    <xsl:value-of select="lower-case(local-name())"/>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="local-name()"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        
        <xsl:choose>
            <xsl:when test="(local-name() = 'class') and contains(.,'proposed')">
                <!-- omit -->
            </xsl:when>
            <xsl:otherwise>
                <xsl:if test="(local-name() = 'class') and not($allowedClassName)">
                    <xsl:message>
                        <xsl:text>!!! found </xsl:text>
                        <xsl:value-of select="local-name(..)"/>
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="local-name()"/>
                        <xsl:text>='</xsl:text>
                        <xsl:value-of select="."/>
                        <xsl:text>' (style class not recognized, nevertheless included this attribute)</xsl:text>
                        <!-- how to concat text blocks?
                        <xsl:if test="(string-length(normalize-space(concat(../text()))) > 1)">
                            <xsl:text> (</xsl:text>
                            <xsl:value-of select="normalize-space(concat(../text()))"/>
                            <xsl:text>)</xsl:text>
                        </xsl:if> -->
                    </xsl:message>
                </xsl:if>
                <!-- common processing for each attribute -->
                <xsl:text> </xsl:text>
                <xsl:value-of select="$attributeName"/>
                <xsl:text>='</xsl:text>
                <xsl:value-of select="."/>
                <xsl:text>'</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()"> <!-- rule to process each comment -->
    
        <xsl:text>&#10;</xsl:text>
        <xsl:text disable-output-escaping="yes">&lt;!--</xsl:text>
        <xsl:value-of select="."/>
        <xsl:text disable-output-escaping="yes">--&gt;</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="text()"> <!-- rule to process text blocks -->
    
        <xsl:if test="(string-length(normalize-space(.)) > 0)">
            <xsl:choose>
                <xsl:when test="(local-name(..) = 'style') or (local-name(..) = 'script')">
                    <xsl:value-of select="."/>
                </xsl:when>
                <xsl:otherwise>
                    <!-- only produce non-whitespace output -->
                    <xsl:value-of select="normalize-space(.)"/>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:if>
        
    </xsl:template>

</xsl:stylesheet>
