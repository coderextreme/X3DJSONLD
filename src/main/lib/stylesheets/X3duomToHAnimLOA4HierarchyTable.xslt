<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3duomToHAnimLOA4HierarchyTable.xslt
    created     : 28 January 2023
    creator     : Don Brutzman with Joe Williams and John Carlson
    description : X3DUOM utilization stylesheet to produce Humanoid Animation (HAnim) LOA4 Hierarchy Table
    reference   : X3dUnifiedObjectModel-4.0.xml
    reference   : https://www.w3.org/TR/xslt
    reference   : https://www.web3d.org/x3d/stylesheets/HAnimLOA4HierarchyTable.txt
    identifier  : https://www.web3d.org/x3d/stylesheets/X3duomToHAnimLOA4HierarchyTable.xslt
    license     : license.html
-->

<!-- TODO authors can edit this example to customize all transformation rules -->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions">
	<!--  extension-element-prefixes="xs" -->
    <xsl:output method="text"/> <!-- output methods:  xml html text -->
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process intended root of input document -->
    
        <xsl:message>
            <xsl:text>*** Starting stylesheet conversion...</xsl:text>
        </xsl:message>
        <!-- debug
        <xsl:message>
            <xsl:text>*** Initial element </xsl:text>
            <xsl:value-of select="local-name(/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[@value='humanoid_root'])"/>
            <xsl:text> value='</xsl:text>
            <xsl:value-of select="/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[@value='humanoid_root']/@value"/>
            <xsl:text>'</xsl:text>
        </xsl:message>
        -->
        
        <xsl:text>HAnim2 LOA4 Hierarchy from X3DUOM</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>https://www.web3d.org/x3d/stylesheets/HAnimLOA4HierarchyTable.txt</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>Authoritative reference: HAnim version 2, Part 1: Humanoid animation (HAnim) architecture,</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>  clause 4 Concepts, section 4.9.6.4 LOA‑4 hierarchy</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>  clause 4 Concepts, Figure 4.7 — LOA‑4 joints</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-LOA4Joints</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
        <!-- process initial enumeration, then recurse on parent-child relationships -->
        <xsl:call-template name="output-humanoid-tree-recurse">
            <xsl:with-param name="currentNode" select="/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[@value='humanoid_root']"/>
            <xsl:with-param name="treeMargin"><xsl:text></xsl:text></xsl:with-param>
        </xsl:call-template>
        
    </xsl:template>
    
    <xsl:template name="output-humanoid-tree-recurse">
        <xsl:param name="currentNode"><!-- default value is empty --></xsl:param>
        <xsl:param name="treeMargin"><xsl:text></xsl:text><!-- default value is empty --></xsl:param>
        <xsl:param name="hasFollowingSibling"><xsl:value-of select="false()"/></xsl:param>
        
        <xsl:variable name=      "enumerationName" select="$currentNode/@value" />
        <xsl:variable name=          "segmentName" select="/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimSegmentNameValues']/enumeration[@parent=$enumerationName]/@value" />
        <xsl:variable name=           "parentName" select="$currentNode/@parent" />
        <xsl:variable name=           "childCount" select="count(/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[@parent=$enumerationName])" />
        <xsl:variable name="treeMarginIncrement">
            <!-- n.b. added for next child, not current node -->
            <xsl:choose>
                <xsl:when test="($enumerationName = 'humanoid_root')">
                    <xsl:text>  </xsl:text>
                </xsl:when>
                <xsl:when test="($childCount > 0) and $hasFollowingSibling">
                    <!-- iff this enumeration has a follow-on peer in hierarchy, following current children ... ($childCount > 1) and -->
                    <xsl:text>| </xsl:text>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text>  </xsl:text>
                </xsl:otherwise>
            </xsl:choose>
        </xsl:variable>
        <!-- debug
        <xsl:message>
            <xsl:text>*** output-humanoid-tree-recurse </xsl:text>
            <xsl:value-of select="local-name($currentNode)"/>
            <xsl:text> position()=</xsl:text>
            <xsl:value-of select="position()"/>
            <xsl:text> indent='</xsl:text>
            <xsl:value-of select="$treeMargin"/>
            <xsl:text>' value='</xsl:text>
            <xsl:value-of select="$enumerationName"/>
            <xsl:text>' segmentName='</xsl:text>
            <xsl:value-of select="$segmentName"/>
            <xsl:text>' parent='</xsl:text>
            <xsl:value-of select="$parentName"/>
            <xsl:text>' has</xsl:text>
            <xsl:text> $childCount=</xsl:text>
            <xsl:value-of select="$childCount"/>
            <xsl:text> $hasFollowingSibling=</xsl:text>
            <xsl:value-of select="$hasFollowingSibling"/>
        </xsl:message>
        -->
        
        <!-- text-file outputs for each enumeration -->
        <xsl:value-of select="$treeMargin"/>
    <!--<xsl:value-of select="$treeMarginIncrement"/> save output for next time -->
        <xsl:value-of select="$enumerationName"/>
        <xsl:if test="(string-length($segmentName) > 0)">
            <xsl:text> : </xsl:text>
            <xsl:value-of select="$segmentName"/>
        </xsl:if>
        <xsl:text>&#10;</xsl:text>
        
        <!-- recurse on parent-child relationships -->
        <!-- recurse on other enumerations listing current enumeration as parent, indenting as we go -->
        <xsl:for-each select="/X3dUnifiedObjectModel/SimpleTypeEnumerations/SimpleType[@name='hanimJointNameValues']/enumeration[@parent=$enumerationName]">
            
            <xsl:variable name="hasFollowingSibling" select="(position() lt last())"/>
            
            <xsl:call-template name="output-humanoid-tree-recurse">
                <xsl:with-param name="currentNode" select="self::node()"/>
                <xsl:with-param name="treeMargin" select="concat($treeMargin,$treeMarginIncrement)"/>
                <xsl:with-param name="hasFollowingSibling" select="$hasFollowingSibling"/>
            </xsl:call-template>
        </xsl:for-each>
        
        <!-- common final processing for each enumeration -->
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each enumeration -->
    
        <!-- unneeded, initial recursion does the trick -->
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="@*"> <!-- rule to process each attribute -->
        
        <!-- unneeded, initial recursion does the trick -->
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="comment()"> <!-- rule to process each comment -->
    
        <!-- unneeded, initial recursion does the trick -->
        
    </xsl:template>

</xsl:stylesheet>
