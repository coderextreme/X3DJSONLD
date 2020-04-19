<?xml version="1.0" encoding="UTF-8"?>
<!--
    title       : X3duomToX3dOntology.xslt
    created     : 17 June 2019
    creator     : Don Brutzman and Jakub Flotyński
    description : Stylesheet to processX3dUnifiedObjectModel-#.#.xml and convert it to X3D Ontology
    reference   : AllX3dElementsAttributesTextTemplate.xslt
    reference   : https://www.w3.org/TR/xslt
    identifier  : https://www.web3d.org/x3d/stylesheets/X3duomToX3dOntology.xslt
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
        
	 <xsl:text disable-output-escaping="yes"><![CDATA[@prefix : <http://www.web3d.org/specifications/X3dOntology4.0#> .
@prefix dc:     <http://purl.org/dc/terms/> .
@prefix owl:    <http://www.w3.org/2002/07/owl#> .
@prefix rdf:    <http://www.w3.org/1999/02/22-rdf-syntax-ns#> .
@prefix rdfs:   <http://www.w3.org/2000/01/rdf-schema#> .
@prefix schema: <http://schema.org/> .
@prefix xsd:    <http://www.w3.org/2001/XMLSchema#> .
]]></xsl:text>

<!-- Additional namespaces, as yet unused:

@prefix cc: <http://creativecommons.org/ns#> .
@prefix cito: <http://purl.org/spar/cito/> .
@prefix dbpedia: <http://dbpedia.org/resource/> .
@prefix foaf: <http://xmlns.com/foaf/0.1/> .
@prefix skos: <http://www.w3.org/2004/02/skos/core#> .
@prefix vidont: <http://vidont.org/> .

@prefix x3d: <http://www.web3d.org/specifications/x3d-4.0.xsd#> .
-->
        <!-- process elements as things etc. -->
        
        <xsl:text disable-output-escaping="yes"><![CDATA[
###############################################

# X3D Ontology

<http://www.web3d.org/specifications/X3dOntology4.0> a owl:Ontology ;
  dc:title       "X3D Ontology"@en ;
  dc:description "The X3D Ontology for Semantic Web provides terms of reference for semantic query of X3D models." ;
  dc:reference   "https://www.web3d.org/x3d/content/semantics/semantics.html" .
  # TODO include further provenance information
            
# Maintained at
#	http://www.web3d.org/specifications/X3dOntology4.0.ttl
#	http://www.web3d.org/x3d/content/semantics/ontologies/X3dOntology4.0.ttl
#
# Support
#   https://www.web3d.org/x3d/content/semantics/semantics.html
#
# Version control
#	https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/semantics/
#	https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/semantics/ontologies/X3dOntology4.0.ttl
#	https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/semantics/ontologies/X3dOntology4.0.ttl?format=raw

###############################################

# OWL validation available at
#   http://mowl-power.cs.man.ac.uk:8080/validator (Profile OWL 2, Report syntax: Manchester Owl Syntax)
#   http://visualdataweb.de/validator
#
# Protege Ontology Editor
#   https://protege.stanford.edu

###############################################
            
# Design Plan

# - Show current work and plans at Web3D 2019 for discussion and comment
# - Continue testing X3D Ontology with SPARQL queries
# - Show interesting inferencing within/among X3D models
# - Consider adding semantic metadata to models in X3D Examples Archive
# -    https://www.web3d.org/x3d/content/examples/X3dResources.html#Examples
# - Add relations and rules for mapping 3D-specific and domain-specific ontologies
# - Build knowledge bases from current X3D scenes (initially)
# - Continue following patterns in Leslie Sikos' t3dmo.ttl to provide relations
# -    to other 3D file formats (perhaps OBJ first, then Max and others)
# - Write parsers for other 3D formats using Data Format Description Language (DFDL)
# -    https://daffodil.apache.org
# - Demonstrate general 3D query and inferencing capabilities for multiple formats
# - Write SPARQL "smoke test" assertions to check these are working correctly.
            
###############################################

# Special Properties

:hasChild a owl:ObjectProperty ;
  rdfs:subPropertyOf :hasDescendant ;
  dc:description "X3D element (node or statement) has a child element" .

:hasParent a owl:ObjectProperty ;
  owl:inverseOf :hasChild;
  rdfs:subPropertyOf :hasAncestor ;
  dc:description "X3D element (node or statement) has a parent element" .

:hasDescendant a owl:ObjectProperty ;
  owl:inverseOf :hasAncestor;
  dc:description "X3D element (node or statement) has descendant element" .
            
:hasAncestor a owl:ObjectProperty , owl:TransitiveProperty ;
  dc:description "X3D element (node or statement) has ancestor element" .

###############################################
            
# FieldTypes

:X3DField a rdfs:Datatype ;
  rdfs:label "X3DField is the abstract field type from which all single-valued field types are derived." ;
  dc:reference   "https://www.web3d.org/x3d/tooltips/X3dTooltips.html#FieldTypesTable" ;
  dc:reference   "https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#X3DField" .

]]></xsl:text>
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
            
# Temporary knowledge base for testing

:n1 rdf:type owl:NamedIndividual .
:n2 rdf:type owl:NamedIndividual ;
  :hasParent :n1 .
:n3 rdf:type owl:NamedIndividual ;
  :hasParent :n2 .

###############################################
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
                <xsl:text>:</xsl:text><!-- local namespace, not x3d: XML schema namespace -->
                <xsl:value-of select="$fieldTypeName"/>
                <xsl:text> rdf:type rdfs:Datatype</xsl:text>
                <xsl:text> ;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>  rdfs:subClassOf :X3DField</xsl:text>
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
        <xsl:for-each select="InterfaceDefinition/AdditionalInheritance[string-length(@baseType) > 0]">
            <xsl:text> ;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>  </xsl:text>
            <xsl:text>rdfs:subClassOf </xsl:text>
            <xsl:text>:</xsl:text><!-- local namespace -->
            <xsl:value-of select="@baseType"/>
        </xsl:for-each>
        
        <xsl:text> ;</xsl:text>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>  </xsl:text>
        <xsl:text>rdfs:label </xsl:text>
        <xsl:text>"</xsl:text>
        <xsl:choose>
            <xsl:when test="(string-length(InterfaceDefinition/@appinfo) > 0)">
                <xsl:value-of select="translate(InterfaceDefinition/@appinfo,'&quot;','')"/>
                <xsl:if test="not(ends-with(normalize-space(InterfaceDefinition/@appinfo),'.'))">
                    <xsl:text>.</xsl:text>
                </xsl:if>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="@name"/>
                <xsl:text> is a</xsl:text>
                <xsl:if test="starts-with(local-name(),'Abstract')">
                    <xsl:text>n</xsl:text>
                </xsl:if>
                <xsl:text> </xsl:text>
                <xsl:value-of select="local-name()"/>
                <xsl:text>.</xsl:text>
                <xsl:message>
                    <xsl:text>*** </xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text> has no appinfo in X3DUOM</xsl:text>
                </xsl:message>
            </xsl:otherwise>
        </xsl:choose>
        <xsl:text>"</xsl:text>
        
        <!-- <xsl:apply-templates select="@*"/> process attributes for this element -->
        
        <!-- <xsl:apply-templates select="*"/> no need to recurse on child elements -->
        
        <!-- common final processing for each element -->
        <xsl:text> .</xsl:text><!-- end triple -->
        <xsl:text>&#10;</xsl:text>
            
        <xsl:if test="(count(InterfaceDefinition/AdditionalInheritance) > 1)">
            <xsl:message>
                <xsl:text>*** of note: </xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text> has multiple AdditionalInterface definitions:</xsl:text>
                <xsl:for-each select="InterfaceDefinition/AdditionalInheritance">
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="@baseType"/>
                </xsl:for-each>
            </xsl:message>
        </xsl:if>
        
        <xsl:variable name="interfaceFieldsList" select="InterfaceDefinition/field[(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')]"/>
        
        <xsl:for-each select="$interfaceFieldsList">
            <xsl:sort select="(@name = 'metadata')"/>
            <xsl:sort select="(@name = 'IS')"/>
            <xsl:sort select="(@name = 'class')"/>
            <xsl:sort select="(@name = 'USE')"/>
            <xsl:sort select="(@name = 'DEF')"/>

            <xsl:variable name="fieldName"                 select="@name"/>
            <xsl:variable name="inheritanceName"           select="../Inheritance/@baseType"/>
            <xsl:variable name="additionalInheritanceName" select="../AdditionalInheritance/@baseType"/>
            <xsl:variable name="upperFieldName"            select="concat(upper-case(substring(@name,1,1)),substring(@name,2))"/>
            <xsl:variable name="isNodeType"                select="(@type = 'SFNode') or (@type = 'MFNode')"/>
            <xsl:variable name="inheritedFrom"             select="@inheritedFrom"/>
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
            
            <!--
            <xsl:if test="    (count(//AbstractNodeType  [@name = $inheritanceName]          /InterfaceDefinition/field[@name = $fieldName]) = 0)
                          and (count(//AbstractObjectType[@name = $additionalInheritanceName]/InterfaceDefinition/field[@name = $fieldName]) = 0)">
            -->
            
            <!-- Avoid duplicating field names, since that has been handled during X3DUOM construction -->
            <xsl:choose>
                <xsl:when test="(string-length(@inheritedFrom) > 0)">
                    <xsl:text># </xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text> field inheritedFrom=</xsl:text>
                    <xsl:value-of select="@inheritedFrom"/>
                    <xsl:text> with accessType=</xsl:text>
                    <xsl:value-of select="@accessType"/>
                    <xsl:text>, type=</xsl:text>
                    <xsl:value-of select="@type"/>
                    <xsl:if test="(string-length(@default) > 0)">
                        <xsl:text>, default=</xsl:text>
                        <xsl:value-of select="@default"/>
                    </xsl:if>
                    <xsl:if test="(string-length(@baseType) > 0)">
                        <xsl:text>, baseType=</xsl:text>
                        <xsl:value-of select="@baseType"/>
                    </xsl:if>
                    <xsl:text>&#10;</xsl:text>
                </xsl:when>
                <xsl:when test="ancestor::AbstractNodeType">
                    <xsl:variable name="abstractNodeTypeName" select="ancestor::AbstractNodeType/@name"/>
                    <xsl:text>:</xsl:text>
                    <xsl:value-of select="$fieldName"/>
                    <xsl:text> a owl:DatatypeProperty ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>  rdfs:label </xsl:text>
                    <xsl:text>"</xsl:text>
                    <xsl:value-of select="$abstractNodeTypeName"/>
                    <xsl:text> field </xsl:text>
                    <xsl:value-of select="@name"/>
                    <xsl:text> is implemented by </xsl:text>
                    <xsl:choose>
                        <xsl:when test="(count(//field[@name = $fieldName][@inheritedFrom = $inheritedFrom][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][local-name(../..) = 'ConcreteNode']) = 1)">
                            <xsl:text>one node</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>multiple nodes</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text>"</xsl:text>
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>

                    <xsl:text>  rdfs:domain [ owl:unionOf (</xsl:text>
                    <xsl:text> :</xsl:text>
                    <xsl:value-of select="$abstractNodeTypeName"/>
                    <xsl:for-each select="//InterfaceDefinition/field[@name = $fieldName][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][@inheritedFrom = $abstractNodeTypeName]">
                        <xsl:sort select="@name" order="ascending"/>

                        <xsl:text> :</xsl:text>
                        <xsl:value-of select="../../@name"/><!--parent ConcreteNode -->
                    </xsl:for-each>
                    <xsl:text> ) ] ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>

                    <!-- X3D type -->
                    <xsl:variable name="acceptableNodeTypes" select="@acceptableNodeTypes"/>
                    <xsl:text> </xsl:text>
                    <xsl:text> rdfs:range </xsl:text>
                    <xsl:choose>
                        <!-- SFNode or MFNode, special case -->
                        <xsl:when test="contains(@type, 'Node') and contains(@acceptableNodeTypes,'|')">
                            <xsl:text> [ owl:unionOf ( </xsl:text>
                            <xsl:for-each select="tokenize(@acceptableNodeTypes,'\|')">
                                <xsl:text>:</xsl:text><!-- ObjectProperty is local namespace, not x3d: namespace -->
                                <xsl:value-of select="."/>
                                <xsl:if test="not(position()=last())">
                                    <xsl:text> </xsl:text>
                                </xsl:if>
                            </xsl:for-each>
                            <xsl:text> ) ]</xsl:text>
                        </xsl:when>
                        <!-- SFNode or MFNode -->
                        <xsl:when test="contains(@type, 'Node')">
                            <xsl:text>:</xsl:text><!-- ObjectProperty is local namespace, not x3d: namespace -->
                            <xsl:value-of select="@acceptableNodeTypes"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
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
                    <!-- diagnostic: same name, mismatched inheritedFrom -->
                    <xsl:if test="(count(preceding::field[@name = $fieldName][@inheritedFrom != $inheritedFrom][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][local-name(../..) = 'ConcreteNode']) = 1)">
                        <xsl:message>
                            <xsl:text>*** warning: detected fieldName=</xsl:text>
                            <xsl:value-of select="$fieldName"/>
                            <xsl:text> with different inheritedFrom values, </xsl:text>
                            <xsl:value-of select="$inheritedFrom"/>
                            <xsl:text> and </xsl:text>
                            <xsl:value-of select="preceding::field[@name = $fieldName][@inheritedFrom != $inheritedFrom][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][local-name(../..) = 'ConcreteNode']/@inheritedFrom"/>
                        </xsl:message>
                    </xsl:if>
                    <!-- diagnostic: same name, no inheritedFrom provided -->
                    <xsl:if test="(count(preceding::field[@name = $fieldName][string-length(@inheritedFrom) = 0][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][local-name(../..) = 'ConcreteNode']) = 1)">
                        <xsl:message>
                            <xsl:text>*** warning: detected fieldName=</xsl:text>
                            <xsl:value-of select="$fieldName"/>
                            <xsl:text> with inheritedFrom='</xsl:text>
                            <xsl:value-of select="$inheritedFrom"/>
                            <xsl:text>' also has similar </xsl:text>
                            <xsl:value-of select="$fieldName"/>
                            <xsl:text> fields with no inheritedFrom relationship:</xsl:text>
                            <xsl:for-each select="//ConcreteNode/InterfaceDefinition/field[@name = $fieldName][string-length(@inheritedFrom) = 0][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')]">
                                <xsl:sort select="@name" order="ascending"/>

                                <xsl:text> </xsl:text>
                                <xsl:value-of select="../../@name"/><!--parent ConcreteNode -->
                            </xsl:for-each>
                        </xsl:message>
                    </xsl:if>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:choose>
                        <xsl:when test="contains(@type,'Node')"><!-- SFNode or MFNode -->
                            <xsl:text>:</xsl:text><!-- local namespace -->
                            <xsl:text>has</xsl:text>
                            <xsl:value-of select="$upperFieldName"/>
                            <xsl:text> a owl:ObjectProperty ;</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>:</xsl:text><!-- local namespace -->
                            <xsl:value-of select="@name"/>
                            <xsl:text> a owl:DatatypeProperty ;</xsl:text>
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

                    <xsl:variable name="rangePrefix">
                        <xsl:choose>
                            <xsl:when test="((ancestor::*[local-name()='AbstractNodeTypes'] or ancestor::*[local-name()='AbstractObjectTypes']) and $isNodeType)">
                                <xsl:message><xsl:text>found it!</xsl:text></xsl:message>
                                <xsl:text>:</xsl:text><!-- ObjectProperty -->
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
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
                            <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
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
                </xsl:otherwise>
            </xsl:choose>
            
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
