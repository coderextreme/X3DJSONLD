<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3duomToX3dOntology.xslt
    created     : 17 June 2019
    creator     : Don Brutzman and Jakub Flotyński
    description : Stylesheet to processX3dUnifiedObjectModel-#.#.xml and convert it to X3D Ontology
    reference   : AllX3dElementsAttributesTextTemplate.xslt
    reference   : https://www.w3.org/TR/xslt
    identifier  : http://www.web3d.org/x3d/stylesheets/X3duomToX3dOntology.xslt
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
        
	 <xsl:text disable-output-escaping="yes"><![CDATA[@prefix : <http://www.web3d.org/semantics/ontologies/X3dOntology4.0#> .
@prefix dc: <http://purl.org/dc/terms/> .
@prefix owl: <http://www.w3.org/2002/07/owl#> .
@prefix rdf: <http://www.w3.org/1999/02/22-rdf-syntax-ns#> .
@prefix rdfs: <http://www.w3.org/2000/01/rdf-schema#> .
@prefix schema: <http://schema.org/> .
@prefix xsd: <http://www.w3.org/2001/XMLSchema#> .
@prefix x3d: <http://www.web3d.org/specifications/x3d-4.0.xsd#> .
]]></xsl:text>

<!--
	 <xsl:text disable-output-escaping="yes"><![CDATA[
@prefix cc: <http://creativecommons.org/ns#> .
@prefix cito: <http://purl.org/spar/cito/> .
@prefix dbpedia: <http://dbpedia.org/resource/> .
@prefix foaf: <http://xmlns.com/foaf/0.1/> .
@prefix skos: <http://www.w3.org/2004/02/skos/core#> .
@prefix vidont: <http://vidont.org/> .

]]></xsl:text>
-->
        <!-- process elements as things etc. -->
        
        <xsl:text>
###############################################
            
# X3D Ontology
            
###############################################

# Special Properties

:hasChild a owl:ObjectProperty ;
  rdfs:subPropertyOf :hasDescendant ;
  dc:description "X3D element (node or statement) has a child element" .
:hasParent a owl:ObjectProperty ;
  owl:inverseOf :hasChild;
  rdfs:subPropertyOf :hasAncestor ;
  dc:description "X3D element (node or statement) has a parent element" .
            
:hasAncestor a owl:ObjectProperty , owl:TransitiveProperty ;
  dc:description "X3D element (node or statement) has ancestor element" .

:hasDescendant a owl:ObjectProperty ;
  owl:inverseOf :hasAncestor;
  dc:description "X3D element (node or statement) has descendant element" .

###############################################
            
# temporary knowledge base

:n1 rdf:type owl:NamedIndividual .
:n2 rdf:type owl:NamedIndividual ;
  :hasParent :n1 .
:n3 rdf:type owl:NamedIndividual ;
  :hasParent :n2 .

#TODO write SPARQL test assertions to check these are working correctly

###############################################
            
# FieldTypes

</xsl:text>
        <!-- TODO mappings for X3D types to xsd types; further decorate XML Schema and X3DUOM to account for them -->
        
        <xsl:apply-templates select="//FieldTypes/*"/>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>###############################################

# AbstractNodeTypes

</xsl:text>
        <xsl:apply-templates select="//AbstractNodeTypes/*"/>
        <xsl:text>###############################################

# AbstractObjectTypes

</xsl:text>
        <xsl:apply-templates select="//AbstractObjectTypes/*"/>
        <xsl:text>###############################################

# Statements

</xsl:text>
        <xsl:apply-templates select="//Statements/*"/>
        <xsl:text>###############################################

# ConcreteNodes

</xsl:text>
        <xsl:apply-templates select="//ConcreteNodes/*"/>
        <xsl:text>###############################################
</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="FieldType"> <!-- rule to process each X3D field type -->
        
        <xsl:variable name="fieldTypeName" select="@type"/>
        <xsl:choose>
            <xsl:when test="contains($fieldTypeName,'Node')"><!-- SFNode or MFNode -->
                <xsl:text># </xsl:text>
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text> TODO questionable, remove or refactor?</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>x3d:</xsl:text><!-- local namespace -->
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text> rdf:type rdfs:Datatype</xsl:text>
                <xsl:if test="(string-length(InterfaceDefinition/@appinfo) > 0)">
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text> </xsl:text>
                    <xsl:text> dc:description </xsl:text>
                    <xsl:text>"</xsl:text>
                    <xsl:value-of select="translate(substring-before(InterfaceDefinition/@appinfo, '.'),'&quot;','')"/>
                    <xsl:text>"</xsl:text>
                </xsl:if>
            </xsl:otherwise>
        </xsl:choose>
        
        <xsl:text> .</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each element -->
        
        <!-- common initial processing for each element -->
        <xsl:variable name="elementName" select="@name"/>
        <xsl:text>:</xsl:text><!-- local namespace -->
        <xsl:value-of select="$elementName"/>
        
        <xsl:text> a </xsl:text>
        <xsl:text>owl:Class</xsl:text>
        
        <!-- subclasses -->
        <xsl:if test="(string-length(InterfaceDefinition/Inheritance/@baseType) > 0)">
            <xsl:text> ;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>  </xsl:text>
            <xsl:text>rdfs:subClassOf </xsl:text>
            <xsl:text>:</xsl:text><!-- local namespace -->
            <xsl:value-of select="InterfaceDefinition/Inheritance/@baseType"/>
        </xsl:if>
        
        <!-- <xsl:apply-templates select="@*"/> process attributes for this element -->
        
        <!-- <xsl:apply-templates select="*"/> no need to recurse on child elements -->
        
        <!-- common final processing for each element -->
        <xsl:text> .</xsl:text><!-- end triple -->
        <xsl:text>&#10;</xsl:text>
        
        <xsl:for-each select="InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')]">
            <xsl:variable name="fieldName"                 select="@name"/>
            <xsl:variable name="inheritanceName"           select="../Inheritance/@baseType"/>
            <xsl:variable name="additionalInheritanceName" select="../AdditionalInheritance/@baseType"/>
            <xsl:variable name="upperFieldName"            select="concat(upper-case(substring(@name,1,1)),substring(@name,2))"/>
            <xsl:variable name="isNodeType"                select="(@type = 'SFNode') or (@type = 'MFNode')"/>
            <!-- debug
            <xsl:message>
                <xsl:value-of select="$elementName"/>
                <xsl:text> fieldName=</xsl:text>
                <xsl:value-of select="$fieldName"/>
                <xsl:text>, upperFieldName=</xsl:text>
                <xsl:value-of select="$upperFieldName"/>
                <xsl:text>, inheritanceName=</xsl:text>
                <xsl:value-of select="$inheritanceName"/>
                <xsl:if test="(string-length($additionalInheritanceName) > 0)">
                <xsl:text>, additionalInheritanceName=</xsl:text>
                <xsl:value-of select="$additionalInheritanceName"/>
                </xsl:if>
            </xsl:message> -->
            
            <!-- avoid duplicating field names -->
            <xsl:if test="    (count(//AbstractNodeType  [@name = $inheritanceName]          /InterfaceDefinition/field[@name = $fieldName]) = 0)
                          and (count(//AbstractObjectType[@name = $additionalInheritanceName]/InterfaceDefinition/field[@name = $fieldName]) = 0)">
                <xsl:choose>
                    <xsl:when test="contains(@type,'Node')"><!-- SFNode or MFNode -->
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:text>has</xsl:text>
                        <xsl:value-of select="$upperFieldName"/>
                        <xsl:text> a</xsl:text>
                        <xsl:text> owl:ObjectProperty</xsl:text>
                        <xsl:text> ;</xsl:text>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:value-of select="@name"/>
                        <xsl:text> a</xsl:text>
                        <xsl:text> owl:DatatypeProperty</xsl:text>
                        <xsl:text> ;</xsl:text>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text>&#10;</xsl:text>
                
                <!-- parent for this field -->
                <xsl:text> </xsl:text>
                <xsl:text> rdfs:domain </xsl:text>
                <xsl:text>:</xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text> ;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                
                <!-- use local name space for abstracts, use x3d: namespace for concretes -->
                <xsl:variable name="rangePrefix">
                    <xsl:choose>
                        <xsl:when test="((ancestor::*[local-name()='AbstractNodeTypes'] or ancestor::*[local-name()='AbstractObjectTypes']) and $isNodeType)">
                            <xsl:message><xsl:text>found it!</xsl:text></xsl:message>
                            <xsl:text>:</xsl:text><!-- ObjectProperty -->
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>x3d:</xsl:text><!-- DatatypeProperty -->
                        </xsl:otherwise>
                    </xsl:choose>
                </xsl:variable>
                
                <!-- X3D type -->
                <xsl:variable name="acceptableNodeTypes" select="@acceptableNodeTypes"/>
                <xsl:text> </xsl:text>
                <xsl:text> rdfs:range </xsl:text>
                <xsl:choose>
                    <!-- SFNode or MFNode, special case -->
                    <xsl:when test="contains(@type, 'Node') and contains(@acceptableNodeTypes,'|')">
                        <xsl:text> [ owl:unionOf (</xsl:text>
                        <xsl:for-each select="tokenize(@acceptableNodeTypes,'\|')">
                            <xsl:text>:</xsl:text><!-- ObjectProperty is local namespace, not x3d: namespace -->
                            <xsl:value-of select="."/>
                            <xsl:if test="not(position()=last())">
                                <xsl:text> </xsl:text>
                            </xsl:if>
                        </xsl:for-each>
                        <xsl:text>) ]</xsl:text>
                    </xsl:when>
                    <!-- SFNode or MFNode -->
                    <xsl:when test="contains(@type, 'Node')">
                        <xsl:text>:</xsl:text><!-- ObjectProperty is local namespace, not x3d: namespace -->
                        <xsl:value-of select="@acceptableNodeTypes"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:text>x3d:</xsl:text><!-- DatatypeProperty -->
                        <xsl:value-of select="@type"/>
                    </xsl:otherwise>
                </xsl:choose>
                
                <xsl:if test="contains(@type,'Node')"><!-- SFNode or MFNode -->
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>  rdfs:subPropertyOf </xsl:text>
                    <xsl:text>:</xsl:text><!-- local namespace -->
                    <xsl:text>hasChild</xsl:text>
                </xsl:if>

                    <xsl:text> .</xsl:text>
                    <xsl:text>&#10;</xsl:text>
<!--
:hasParentAppearance owl:inverseOf :hasFillProperties . #old

:fieldFillPropertiesHasParentAppearance a owl:ObjectProperty .
:fieldFillPropertiesHasParentAppearance owl:inverseOf :hasFillProperties . #new
:fieldFillPropertiesHasParentAppearance rdfs:subPropertyOf :hasParentAppearance .
-->
                <xsl:if test="contains(@type,'Node')"><!-- SFNode or MFNode -->
                    <xsl:text>:</xsl:text><!-- local namespace -->
                    <xsl:text>field</xsl:text>
                    <xsl:value-of select="$upperFieldName"/>
                    <xsl:text>HasParent</xsl:text>
                    <xsl:if test="not(@name = 'children')">
                        <xsl:value-of select="$elementName"/><!-- name of parent node -->
                    </xsl:if>
                    <!-- alternate less-preferred phrasing: is "upperFieldNameOf" e.g. isChildrenOf -->
                    <xsl:text> a owl:ObjectProperty</xsl:text>
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>  owl:inverseOf </xsl:text>
                    <xsl:text>:</xsl:text><!-- local namespace -->
                    <xsl:text>has</xsl:text>
                    <xsl:value-of select="$upperFieldName"/>
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    
                    <xsl:text>  rdfs:subPropertyOf </xsl:text>
                    <xsl:text>:</xsl:text><!-- local namespace -->
                    <xsl:text>hasParent</xsl:text>
                    <xsl:value-of select="$elementName"/><!-- name of parent node -->
                    <xsl:text> .</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:if>
            </xsl:if>
            
        </xsl:for-each>
        
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
