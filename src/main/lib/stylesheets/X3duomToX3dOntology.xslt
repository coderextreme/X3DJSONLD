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

<!--
Copyright (c) 2001-2023 held by the author(s).  All rights reserved.

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

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0"
                xmlns:xs ="http://www.w3.org/2001/XMLSchema"
	            xmlns:fn ="http://www.w3.org/2005/xpath-functions">
	<!--  extension-element-prefixes="xs" -->
    <xsl:output method="text"/> <!-- output methods:  xml html text -->
    
    <!-- ======================================================= -->
    
    <xsl:template match="/"> <!-- process root of input document -->
        
	 <xsl:text disable-output-escaping="yes"><![CDATA[@prefix : <https://www.web3d.org/specifications/X3dOntology4.0#> .
@prefix dcterms: <http://purl.org/dc/terms/> .
@prefix owl:     <http://www.w3.org/2002/07/owl#> .
@prefix rdf:     <http://www.w3.org/1999/02/22-rdf-syntax-ns#> .
@prefix rdfs:    <http://www.w3.org/2000/01/rdf-schema#> .
@prefix schema:  <http://schema.org/> .
@prefix xsd:     <http://www.w3.org/2001/XMLSchema#> .
]]></xsl:text>

<!-- Additional namespaces, as yet unused:

@prefix cc: <http://creativecommons.org/ns#> .
@prefix cito: <http://purl.org/spar/cito/> .
@prefix dbpedia: <http://dbpedia.org/resource/> .
@prefix foaf: <http://xmlns.com/foaf/0.1/> .
@prefix skos: <http://www.w3.org/2004/02/skos/core#> .
@prefix vidont: <http://vidont.org/> .

@prefix x3d: <https://www.web3d.org/specifications/x3d-4.0.xsd#> .
-->
        <!-- process elements as things etc. -->
        
        <xsl:text disable-output-escaping="yes"><![CDATA[
###############################################

# X3D Ontology

<https://www.web3d.org/specifications/X3dOntology4.0> a owl:Ontology ;
  dcterms:title       "X3D Ontology"@en ;
  dcterms:description "The X3D Ontology for Semantic Web provides terms of reference for semantic query of X3D models." ;
  dcterms:reference   "https://www.web3d.org/x3d/content/semantics/semantics.html" .
  # TODO include further provenance information
            
# Maintained at
#	https://www.web3d.org/specifications/X3dOntology4.0.ttl
#	https://www.web3d.org/x3d/content/semantics/ontologies/X3dOntology4.0.ttl
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
  dcterms:description "X3D element (node or statement) has a child element" .

:hasParent a owl:ObjectProperty ;
  owl:inverseOf :hasChild;
  rdfs:subPropertyOf :hasAncestor ;
  dcterms:description "X3D element (node or statement) has a parent element" .

:hasDescendant a owl:ObjectProperty ;
  owl:inverseOf :hasAncestor;
  dcterms:description "X3D element (node or statement) has descendant element" .
            
:hasAncestor a owl:ObjectProperty , owl:TransitiveProperty ;
  dcterms:description "X3D element (node or statement) has ancestor element" .

:accessTypeProperty a owl:DatatypeProperty ;
  dcterms:description "accessTypeProperty values denote accessType for a given field within a given node." .
:accessTypeInputOutput a owl:DatatypeProperty ;
  rdfs:subPropertyOf :accessTypeProperty ;
  dcterms:description "accessTypeInputOutput values denote accessType=inputOutput for a given field within a given node." ;
  rdfs:domain xsd:NMTOKEN ;
  rdfs:range  xsd:NMTOKEN .
 :accessTypeInitializeOnly a owl:DatatypeProperty ;
  rdfs:subPropertyOf :accessTypeProperty ;
  dcterms:description "accessTypeInitializeOnly values denote accessType=initializeOnly for a given field within a given node." ;
  rdfs:domain xsd:NMTOKEN ;
  rdfs:range  xsd:NMTOKEN .
:accessTypeInputOnly a owl:DatatypeProperty ;
  rdfs:subPropertyOf :accessTypeProperty ;
  dcterms:description "accessTypeInputOnly values denote accessType=inputOnly for a given field within a given node." ;
  rdfs:domain xsd:NMTOKEN ;
  rdfs:range  xsd:NMTOKEN .
:accessTypeOutputOnly a owl:DatatypeProperty ;
  rdfs:subPropertyOf :accessTypeProperty ;
  dcterms:description "accessTypeOutputOnly values denote accessType=outputOnly for a given field within a given node." ;
  rdfs:domain xsd:NMTOKEN ;
  rdfs:range  xsd:NMTOKEN .
]]></xsl:text>

        <xsl:text disable-output-escaping="yes"><![CDATA[
###############################################
            
# FieldTypes

:X3DField a rdfs:Datatype ;
  rdfs:label "X3DField is the abstract field type from which all single-valued field types are derived." ;
  dcterms:reference   "https://www.web3d.org/x3d/tooltips/X3dTooltips.html#FieldTypesTable" ;
  dcterms:reference   "https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#X3DField" .

]]></xsl:text>
        <!-- TODO mappings for X3D types to xsd types; further decorate XML Schema and X3DUOM to account for them -->

        <xsl:apply-templates select="//FieldTypes/*"/>
        <xsl:text>&#10;</xsl:text>
        <xsl:text>###############################################

# SimpleTypeEnumerations

# OWL 2 Web Ontology Language Quick Reference Guide (Second Edition)
# W3C Recommendation 11 December 2012
# 2.4 Data Ranges
# https://www.w3.org/TR/2012/REC-owl2-quick-reference-20121211/#Data_Ranges

</xsl:text>
        <xsl:apply-templates select="//SimpleTypeEnumerations/*"/>
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

:X3DStatement a owl:Class ;
  rdfs:label "X3DStatement is the abstract type from which all non-node statements are derived." ;
  dcterms:reference   "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/concepts.html" ;
  dcterms:reference   "https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/core.html#AbstractX3DStructure" .
#:class :id and :style connected via X3D definitions

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
                    <xsl:text> dcterms:description </xsl:text>
                    <xsl:text>"</xsl:text>
                    <xsl:choose>
                        <xsl:when test="(string-length(InterfaceDefinition/@appinfo) le 400) or not(contains(InterfaceDefinition/@appinfo, '.'))">
                            <xsl:value-of select="translate(InterfaceDefinition/@appinfo,'&quot;','')"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="translate(substring-before(InterfaceDefinition/@appinfo, '.'),'&quot;','')"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text>"</xsl:text>
                </xsl:if>
            </xsl:otherwise>
        </xsl:choose>
        
        <xsl:text> .</xsl:text>
        <xsl:text>&#10;</xsl:text>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="SimpleType"> <!-- rule to process each element -->
    
        <!-- this element has ancestor::SimpleTypeEnumerations -->
        <xsl:variable name="simpleTypeName" select="@name"/>
        <xsl:variable name="fieldName">
            <xsl:choose>
                <xsl:when test="ends-with($simpleTypeName,'Choices')">
                    <xsl:value-of select="substring-before($simpleTypeName,'Choices')"/>
                </xsl:when>
                <xsl:when test="ends-with($simpleTypeName,'Values')">
                    <xsl:value-of select="substring-before($simpleTypeName,'Values')"/>
                </xsl:when>
            </xsl:choose>
        </xsl:variable>
        <xsl:if test="not(starts-with($simpleTypeName,'containerFieldChoices')) and not(ends-with($simpleTypeName,'AccessTypes'))">
            <!-- skip all containerFieldChoices, only pertinent to XML encoding -->
            <!-- skip all *AccessTypes, only used for internal XML Schema checks -->
            <xsl:text>:</xsl:text>
            <xsl:value-of select="$simpleTypeName"/>
            <xsl:text> rdf:type rdfs:Datatype ;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>  rdfs:label </xsl:text>
            <xsl:text>"</xsl:text>
            <xsl:value-of select="$simpleTypeName"/>
            <xsl:text>"</xsl:text>
            <xsl:text> ;</xsl:text>
            <xsl:variable name="baseType">
                <xsl:choose>
                    <!-- owl supports xsd: XML Schema types -->
                    <xsl:when test="starts-with(@baseType,'xsd:')">
                        <xsl:value-of select="@baseType"/>
                    </xsl:when>
                    <xsl:when test="starts-with(@baseType,'xs:')">
                        <xsl:value-of select="concat('xsd:',substring-after(@baseType,'xs:'))"/>
                    </xsl:when>
                    <xsl:when test="(string-length(@baseType) > 0)">
                        <!-- debug; superfluous information for ontology
                        <xsl:text> # baseType </xsl:text>
                        <xsl:if test="not(starts-with(@baseType,'xsd:'))">
                            <xsl:text>:</xsl:text>
                        </xsl:if>
                    -->
                        <xsl:value-of select="@baseType"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:message>
                            <xsl:text>*** error, no baseType found in X3DUOM for SimpleType </xsl:text>
                            <xsl:value-of select="$simpleTypeName"/>
                        </xsl:message>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <xsl:if test="(string-length(@appinfo) > 0)">
                <xsl:text>&#10;</xsl:text>
                <xsl:text> </xsl:text>
                <xsl:text> dcterms:description </xsl:text>
                <xsl:text>"</xsl:text>
                <xsl:choose>
                    <xsl:when test="(string-length(@appinfo) le 400) or not(contains(@appinfo, '.'))">
                        <xsl:value-of select="translate(@appinfo,'&quot;','')"/>
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="translate(substring-before(@appinfo, '.'),'&quot;','')"/>
                    </xsl:otherwise>
                </xsl:choose>
                <xsl:text>"</xsl:text>
            </xsl:if>
            <xsl:if test="(string-length(@documentation) > 0)">
                <xsl:text>;</xsl:text>
                <xsl:text>&#10;</xsl:text>
                <xsl:text>  dcterms:reference "</xsl:text>
                <xsl:value-of select="translate(@documentation,'&quot;','')"/>
                <xsl:text>"</xsl:text>
            </xsl:if>
            <xsl:choose>
                <xsl:when test="(count(enumeration) > 0)">
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text> </xsl:text>
                    <xsl:text> rdfs:domain </xsl:text>                    

                    <xsl:if test="not(contains($baseType, ':'))">
                        <xsl:text>:</xsl:text>
                    </xsl:if>
                    <xsl:choose>
                        <xsl:when test="(string-length($baseType) > 0)">
                            <xsl:value-of select="$baseType"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:message>
                            <xsl:text>*** error: missing type for rdfs:domain </xsl:text>
                            </xsl:message>
                        </xsl:otherwise>
                    </xsl:choose>
                    
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>

                    <xsl:text> </xsl:text>
                    <xsl:text> rdfs:range [ owl:oneOf (</xsl:text>
                    <xsl:for-each select="enumeration">
                        <!-- value may include "quoted" "enumeration" "values" -->
                        <xsl:text> '</xsl:text>
                        <xsl:value-of select="@value"/>
                        <xsl:text>'</xsl:text>
                    </xsl:for-each>
                    <xsl:text> ) ]</xsl:text>
                    <xsl:text> .</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <!-- produce RDF literals for enumeration string constants -->
                    <!-- https://www.w3.org/TR/turtle/#turtle-literals -->
                    <xsl:variable name="enumerationPrefix">
                        <xsl:choose>
                            <xsl:when test="ends-with($simpleTypeName,'Choices')">
                                <xsl:value-of select="substring-before($simpleTypeName,'Choices')"/>
                            </xsl:when>
                            <xsl:when test="ends-with($simpleTypeName,'Values')">
                                <xsl:value-of select="substring-before($simpleTypeName,'Values')"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:value-of select="$simpleTypeName"/>
                            </xsl:otherwise>
                        </xsl:choose>
                    </xsl:variable>
                    <xsl:for-each select="enumeration[string-length(@value) > 0]">
                        <xsl:text>:</xsl:text>
                        <xsl:value-of select="$enumerationPrefix"/>
                        <!-- use __ as discriminator for enumeration literal values, -->
                        <!-- since dot . not allowed as a naming character, it is a reserved character (usable with escape sequences) -->
                        <!-- RDF 1.1 Turtle, Terse RDF Triple Language, 6.4 Escape Sequences https://www.w3.org/TR/turtle/#sec-escapes -->
                        <xsl:text>__</xsl:text>
                        <!-- change space to underscore, omit illegal characters from name -->
                        <xsl:value-of select="translate(@value,' &quot;-','_')"/>
                        <xsl:if test="(string-length(translate(@value,' &quot;','')) = 0)">
                            <!-- special case following multiTextureFunction.ALPHAREPLICATE -->
                            <xsl:text>EMPTY</xsl:text>
                        </xsl:if>
                        <xsl:text> rdfs:label '</xsl:text>
                        <!-- apostrophe delimiter here since value might be MFString values -->
                        <xsl:choose>
                            <xsl:when test="((string-length(@value) - string-length(translate(@value,'&quot;',''))) le 2)">
                                <xsl:value-of select="translate(@value,'&quot;','')"/>
                            </xsl:when>
                            <xsl:otherwise>
                                <!-- contains multiple quoted values in MFString, retain them all -->
                                <xsl:value-of select="@value"/>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:text>'^^</xsl:text>
                        <xsl:choose>
                            <xsl:when test="($baseType = 'SFInt32')">
                                <xsl:text>xsd:integer </xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>xsd:string </xsl:text>
                            </xsl:otherwise>
                        </xsl:choose>
                        <xsl:if test="(string-length(@appinfo) > 0)">
                            <xsl:text>;</xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text>  dcterms:description "</xsl:text>
                            <xsl:value-of select="translate(@appinfo,'&quot;','')"/>
                            <xsl:text>"</xsl:text>
                        </xsl:if>
                        <xsl:if test="(string-length(@documentation) > 0)">
                            <xsl:text>;</xsl:text>
                            <xsl:text>&#10;</xsl:text>
                            <xsl:text>  dcterms:reference "</xsl:text>
                            <xsl:value-of select="translate(@documentation,'&quot;','')"/>
                            <xsl:text>"</xsl:text>
                        </xsl:if>
                        <xsl:text> .</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:if test="($baseType = 'SFInt32') and (string-length(@alias) > 0)">
                            <!-- TODO figure out how to integrate this, Protege doesn't show enumerations -->
                            <xsl:text>  # alias </xsl:text>
                            <xsl:value-of select="@alias"/>
                            <xsl:text>&#10;</xsl:text>
                        </xsl:if>
                    </xsl:for-each>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:text> .</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:text>&#10;</xsl:text>
        </xsl:if>
        
    </xsl:template>

    <!-- ===================================================== -->
    
    <xsl:template match="*"> <!-- rule to process each element -->
        
        <!-- common initial processing for each element -->
        <xsl:variable name="elementName" select="@name"/>
        <xsl:text>:</xsl:text><!-- local namespace -->
        <xsl:value-of select="$elementName"/>
        
        <xsl:text> a owl:Class</xsl:text>
        
        <!-- subclasses -->
        <xsl:if test="(local-name() = 'Statement')">
            <xsl:text> ;</xsl:text>
            <xsl:text>&#10;</xsl:text>
            <xsl:text>  </xsl:text>
            <xsl:text>rdfs:subClassOf </xsl:text>
            <xsl:text>:</xsl:text><!-- local namespace -->
            <xsl:text>X3DStatement</xsl:text>
        </xsl:if>
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
        
        <!-- common final processing for each element -->
        <xsl:text> .</xsl:text><!-- end triple -->
        <xsl:text>&#10;</xsl:text>
            
        <xsl:if test="(count(InterfaceDefinition/AdditionalInheritance) > 1)">
            <xsl:message>
                <xsl:text>*** info:   </xsl:text>
                <xsl:value-of select="$elementName"/>
                <xsl:text> has multiple AdditionalInterface definitions:</xsl:text>
                <xsl:for-each select="InterfaceDefinition/AdditionalInheritance">
                    <xsl:sort select="@baseType"/>
                    <xsl:text> </xsl:text>
                    <xsl:value-of select="@baseType"/>
                </xsl:for-each>
            </xsl:message>
        </xsl:if>
        
        <xsl:variable name="interfaceFieldsList" select="InterfaceDefinition/field"/><!-- filter accessType [(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')] -->
        
        <xsl:for-each select="$interfaceFieldsList">
            <xsl:sort select="(@name = 'style')"/>
            <xsl:sort select="(@name = 'id')"/>
            <xsl:sort select="(@name = 'class')"/>
            <xsl:sort select="(@name = 'metadata')"/>
            <xsl:sort select="(@name = 'IS')"/>
            <xsl:sort select="(@name = 'USE')"/>
            <xsl:sort select="(@name = 'DEF')"/>
            <xsl:sort select="lower-case(@name)" order="ascending"/>

            <xsl:variable name="fieldName">
                <xsl:choose>
                    <xsl:when test="(@name='style') and ((../../@name = 'FontStyle') or (../../@name = 'ScreenFontStyle'))">
                        <!-- debug diagnostic -->
                        <xsl:message>
                            <xsl:text>*** rename: </xsl:text>
                            <xsl:value-of select="../../@name"/><!-- parent ConcreteNode -->
                            <xsl:text> field '</xsl:text>
                            <xsl:value-of select="@name"/>
                            <xsl:text>' renamed as '</xsl:text>
                            <xsl:value-of select="@name"/>
                            <xsl:text>Selection'</xsl:text>
                            <xsl:if test="(@name='style')">
                                <xsl:text> to avoid name collision with CSS style attribute</xsl:text>
                            </xsl:if>
                        </xsl:message>
                        <xsl:value-of select="@name"/>
                        <xsl:text>Selection</xsl:text><!-- avoid name collision with CSS style attribute -->
                    </xsl:when>
                    <xsl:otherwise>
                        <xsl:value-of select="@name"/>
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
            <xsl:variable name="inheritanceName"           select="../Inheritance/@baseType"/>
            <xsl:variable name="additionalInheritanceName" select="../AdditionalInheritance/@baseType"/>
            <xsl:variable name="upperFieldName"            select="concat(upper-case(substring($fieldName,1,1)),substring($fieldName,2))"/>
            <xsl:variable name="upperSynonymName"          select="concat(upper-case(substring(@synonym,1,1)),substring(@synonym,2))"/>
            <xsl:variable name="isNodeType"                select="(@type = 'SFNode') or (@type = 'MFNode')"/>
            <xsl:variable name="inheritedFrom"             select="@inheritedFrom"/>
            <xsl:variable name="accessTypePropertyName"    select="concat('accessType',upper-case(substring(@accessType,1,1)),substring(@accessType,2))"/>
            <xsl:variable name="baseType">
                <xsl:choose>
                    <!-- owl supports xsd: XML Schema types -->
                    <xsl:when test="starts-with(@baseType,'xsd:')">
                        <xsl:value-of select="@baseType"/>
                    </xsl:when>
                    <xsl:when test="starts-with(@baseType,'xs:')">
                        <xsl:value-of select="concat('xsd:',substring-after(@baseType,'xs:'))"/>
                    </xsl:when>
                    <xsl:when test="(string-length(@baseType) > 0)">
                        <!-- debug; superfluous information for ontology
                        <xsl:text> # baseType </xsl:text>
                        <xsl:if test="not(starts-with(@baseType,'xsd:'))">
                            <xsl:text>:</xsl:text>
                        </xsl:if>
                        <xsl:value-of select="@baseType"/>
                    -->
                    </xsl:when>
                    <xsl:otherwise>
                        <!-- primary type only, baseType not provided -->
                    </xsl:otherwise>
                </xsl:choose>
            </xsl:variable>
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
            
            <!-- Avoid duplicating field names, since that has been handled during X3DUOM construction. Nevertheless list them as informative comments. -->
            <xsl:choose>
                <xsl:when test="(string-length(@inheritedFrom) > 0) or 
                                ((($fieldName = 'IS') or ($fieldName = 'metadata'))
                                 and not($elementName = 'X3DNode'))">
                    <xsl:text># </xsl:text>
                    <xsl:text>:</xsl:text>
                    <xsl:choose>
                        <xsl:when test="($fieldName = 'IS') or ($fieldName = 'metadata')">
                            <!-- for IS, do not overload node-name classes as DatatypeProperty definitions, aka "punning" -->
                            <xsl:text>has</xsl:text>
                            <xsl:value-of select="$upperFieldName"/>
                        </xsl:when>
                       <xsl:otherwise>
                            <xsl:value-of select="@name"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text> inheritedFrom=</xsl:text>
                    <xsl:value-of select="@inheritedFrom"/>
                    <xsl:text> with accessType=</xsl:text>
                    <xsl:value-of select="@accessType"/>
                    <xsl:text>, type=</xsl:text>
                    <xsl:value-of select="@type"/>
                    <xsl:if test="(string-length(@default) > 0)">
                        <xsl:text>, default=</xsl:text>
                        <xsl:value-of select="@default"/>
                    </xsl:if>
                    <xsl:if test="(string-length(@simpleType) > 0)">
                        <xsl:text>, simpleType=</xsl:text>
                        <xsl:value-of select="@simpleType"/>
                    </xsl:if>
                    <xsl:if test="(string-length($baseType) > 0)">
                        <xsl:text>, baseType=</xsl:text>
                        <xsl:value-of select="$baseType"/>
                    </xsl:if>
                    <xsl:text>&#10;</xsl:text>
                </xsl:when>
                <xsl:when test="ancestor::AbstractNodeType">
                    <xsl:variable name="abstractNodeTypeName" select="ancestor::AbstractNodeType/@name"/>
                    <xsl:text>:</xsl:text>
                    <xsl:choose>
                        <xsl:when test="($fieldName = 'IS') or ($fieldName = 'metadata')">
                            <!-- for IS, do not overload node-name classes as DatatypeProperty definitions, aka "punning" -->
                            <xsl:text>has</xsl:text>
                            <xsl:value-of select="$upperFieldName"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:value-of select="$fieldName"/>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:text> a owl:DatatypeProperty ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>
                    <xsl:text>  rdfs:label </xsl:text>
                    <xsl:text>"</xsl:text>
                    <xsl:value-of select="$abstractNodeTypeName"/>
                    <xsl:choose>
                        <xsl:when test="(@name = 'class') or (@name = 'id') or (@name = 'style')">
                            <xsl:text> attribute </xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text> field </xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:value-of select="@name"/>
                    <xsl:text> is implemented by </xsl:text>
                    <xsl:choose>
                        <xsl:when test="(count(//field[@name = $fieldName][@inheritedFrom = $inheritedFrom][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][local-name(../..) = 'ConcreteNode']) = 1)">
                            <xsl:text>one node.</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:text>multiple nodes.</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:if test="(string-length(@description) > 0)">
                        <xsl:text> </xsl:text>
                        <xsl:value-of select="@description"/>
                    </xsl:if>
                    <xsl:text>"</xsl:text>
                    <xsl:text> ;</xsl:text>
                    <xsl:text>&#10;</xsl:text>

                    <xsl:if test="(string-length(@accessType) > 0)">
                        <xsl:text>  rdfs:subPropertyOf </xsl:text>
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:value-of select="$accessTypePropertyName"/>
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>

                    <!-- do not use [ owl:unionOf ( ...node list... ) ] with rdfs:domain because it creates blank nodes, which fail documentation and are unhelpful. -->
                    <!-- use simple unadorned list of types and nodes instead. -->
                    <xsl:text>  rdfs:domain </xsl:text>
                    <xsl:text>:</xsl:text>
                    <xsl:value-of select="$abstractNodeTypeName"/>
                        <xsl:if test="($abstractNodeTypeName = 'X3DNode') and ((@name = 'class') or (@name = 'id') or (@name = 'style'))">
                            <!-- debug diagnostic
                            <xsl:message>
                                <xsl:text>*** looking to connect X3DStatement </xsl:text>
                                <xsl:value-of select="@name"/>
                                <xsl:text> to X3DNode, $abstractNodeTypeName=</xsl:text>
                                <xsl:value-of select="$abstractNodeTypeName"/>
                            </xsl:message> -->
                            <xsl:text> ,</xsl:text>
                            <xsl:text> :X3DStatement</xsl:text>
                            <xsl:for-each select="//Statement">
                                <xsl:text> ,</xsl:text>
                                <xsl:text> :</xsl:text>
                                <xsl:value-of select="@name"/>
                            </xsl:for-each>
                        </xsl:if>
                    <xsl:for-each select="//InterfaceDefinition/field[@name = $fieldName][(@accessType = 'initializeOnly') or (@accessType = 'inputOutput')][@inheritedFrom = $abstractNodeTypeName]">
                        <xsl:sort select="@name" order="ascending"/>

                        <xsl:text> ,</xsl:text>
                        <xsl:text> :</xsl:text>
                        <xsl:value-of select="../../@name"/><!-- parent ConcreteNode -->
                    </xsl:for-each>
                    <xsl:text> ;</xsl:text>
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
                        <xsl:when test="(string-length(@simpleType) > 0)">
                            <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
                            <xsl:value-of select="@simpleType"/>
                        </xsl:when>
                        <!-- owl supports xsd: XML Schema types -->
                        <xsl:when test="starts-with($baseType,'xsd:') or starts-with($baseType,'xs:')">
                            <xsl:value-of select="$baseType"/>
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
                    
                    <!-- simple type has default value -->
                    <xsl:if test="not(contains(@type,'Node')) and (string-length(@default) > 0)">
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  :</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>Default </xsl:text>
                        <xsl:choose>
                            <xsl:when test="(@type = 'SFBool')">
                                <xsl:text>xsd:</xsl:text>
                                <xsl:value-of select="@default"/>
                            </xsl:when>
                            <xsl:when test="(@type = 'SFInt32') or (@type = 'SFFloat') or (@type = 'SFDouble') or (@type = 'SFTime')">
                                <xsl:value-of select="@default"/>
                            </xsl:when>
                            <!-- numeric arrays -->
                            <xsl:when test="contains(@type,'Color') or contains(@type,'Vec') or contains(@type,'Rotation') or
                                            contains(@type,'Image') or contains(@type,'Matrix') or
                                            (@type = 'MFInt32')     or (@type = 'MFFloat')      or (@type = 'MFDouble')">
                                <xsl:text>( </xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text> )</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@type = 'MFString')">
                                <xsl:text>( </xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text> )</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@type = 'SFString')">
                                <xsl:text>"</xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text>"</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>"</xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text>"</xsl:text>
                                <xsl:message>
                                    <xsl:text>*** warning: unhandled </xsl:text>
                                    <xsl:value-of select="../../@name"/>
                                    <xsl:text> </xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text> </xsl:text>
                                    <xsl:value-of select="@type"/>
                                    <xsl:text> default=</xsl:text>
                                    <xsl:value-of select="@default"/>
                            </xsl:message>
                            </xsl:otherwise>
                        </xsl:choose>
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
                            <xsl:choose>
                                <xsl:when test="($fieldName = 'IS') or ($fieldName = 'metadata')">
                                    <!-- for IS, do not overload node-name classes as DatatypeProperty definitions, aka "punning" -->
                                    <xsl:text>has</xsl:text>
                                    <xsl:value-of select="$upperFieldName"/>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:value-of select="$fieldName"/>
                                </xsl:otherwise>
                            </xsl:choose>
                            <xsl:text> a owl:DatatypeProperty ;</xsl:text>
                        </xsl:otherwise>
                    </xsl:choose>
                    <xsl:if test="(@name = 'style') and not(@name = $fieldName)">
                        <xsl:text> ### renamed to avoid naming collision with CSS style attribute</xsl:text>
                    </xsl:if>
                    <xsl:text>&#10;</xsl:text>
                    
                    <xsl:if test="(string-length(@accessType) > 0)">
                        <xsl:text>  rdfs:subPropertyOf </xsl:text>
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:value-of select="$accessTypePropertyName"/>
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                    </xsl:if>

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
                        <xsl:when test="(string-length(@simpleType) > 0)">
                            <xsl:choose>
                                <xsl:when test="ends-with(@simpleType,'Values')">
                                    <xsl:if test="not(contains(@simpleType,':'))">
                                         <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
                                    </xsl:if>
                                    <xsl:value-of select="@simpleType"/>
                                    <xsl:text> ; # alternate enumeration values allowed, baseType </xsl:text>
                                    <xsl:value-of select="@baseType"/>
                                </xsl:when>
                                <xsl:otherwise>
                                    <xsl:if test="not(contains(@simpleType,':'))">
                                         <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
                                    </xsl:if>
                                    <xsl:value-of select="@simpleType"/>
                                </xsl:otherwise>
                            </xsl:choose>
                        </xsl:when>
                        <xsl:when test="(string-length($baseType) > 0)">
                            <xsl:if test="not(starts-with($baseType,'xsd:')) and not(starts-with($baseType,'xs:')) and not(starts-with(@simpleType,'xs:'))">
                                 <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
                            </xsl:if>
                            <xsl:value-of select="$baseType"/>
                        </xsl:when>
                        <xsl:when test="(string-length(@type) > 0)">
                            <xsl:if test="not(contains(@type,':'))">
                                 <xsl:text>:</xsl:text><!-- DatatypeProperty is local namespace, not x3d: namespace -->
                            </xsl:if>
                            <xsl:value-of select="@type"/>
                        </xsl:when>
                        <xsl:otherwise>
                            <xsl:message>
                                <xsl:text>*** warning: </xsl:text>
                                <xsl:value-of select="../../@name"/>
                                <xsl:text>  </xsl:text>
                                <xsl:value-of select="@name"/>
                                <xsl:text> missing rdfs:range type </xsl:text>
                            </xsl:message>
                        </xsl:otherwise>
                    </xsl:choose>

                    <xsl:if test="contains(@type,'Node')"><!-- SFNode or MFNode -->
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  rdfs:subPropertyOf </xsl:text>
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:text>hasChild</xsl:text>
                    </xsl:if>

                    <xsl:if test="(string-length(@description) > 0)"><!-- overloaded -->
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  rdfs:label </xsl:text>
                        <xsl:text>"</xsl:text>
                        <xsl:variable name="quote"><xsl:text>"</xsl:text></xsl:variable>
                        <xsl:variable name="apos" ><xsl:text>'</xsl:text></xsl:variable>
                        <xsl:value-of select="translate(@description,$quote,$apos)"/>
                        <xsl:if test="(@name='style') and contains(@description,'BOLDITALIC')">
                            <xsl:text> Renamed from original 'style' as 'styleSelection' to avoid name collision with CSS style attribute.</xsl:text>
                        </xsl:if>
                        <xsl:text>"</xsl:text>
                    </xsl:if>

                    <!-- simple type has default value -->
                    <xsl:if test="not(contains(@type,'Node')) and (string-length(@default) > 0)">
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  :</xsl:text>
                        <xsl:value-of select="$fieldName"/>
                        <xsl:text>Default </xsl:text>
                        <xsl:choose>
                            <xsl:when test="(@type = 'SFBool')">
                                <xsl:text>xsd:</xsl:text>
                                <xsl:value-of select="@default"/>
                            </xsl:when>
                            <xsl:when test="(@type = 'SFInt32') or (@type = 'SFFloat') or (@type = 'SFDouble') or (@type = 'SFTime')">
                                <xsl:value-of select="@default"/>
                            </xsl:when>
                            <!-- numeric arrays -->
                            <xsl:when test="contains(@type,'Color') or contains(@type,'Vec') or contains(@type,'Rotation') or
                                            contains(@type,'Image') or contains(@type,'Matrix') or
                                            (@type = 'MFInt32')     or (@type = 'MFFloat')      or (@type = 'MFDouble')">
                                <xsl:text>( </xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text> )</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@type = 'MFString')">
                                <xsl:text>( </xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text> )</xsl:text>
                            </xsl:when>
                            <xsl:when test="(@type = 'SFString')">
                                <xsl:text>"</xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text>"</xsl:text>
                            </xsl:when>
                            <xsl:otherwise>
                                <xsl:text>"</xsl:text>
                                <xsl:value-of select="@default"/>
                                <xsl:text>"</xsl:text>
                                <xsl:message>
                                    <xsl:text>*** warning: unhandled </xsl:text>
                                    <xsl:value-of select="../../@name"/>
                                    <xsl:text> </xsl:text>
                                    <xsl:value-of select="@name"/>
                                    <xsl:text> </xsl:text>
                                    <xsl:value-of select="@type"/>
                                    <xsl:text> default=</xsl:text>
                                    <xsl:value-of select="@default"/>
                            </xsl:message>
                            </xsl:otherwise>
                        </xsl:choose>
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
                    <xsl:if test="contains(@type,'Node') and (string-length(@synonym) > 0)"><!-- SFNode or MFNode -->
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:text>has</xsl:text>
                        <xsl:value-of select="$upperSynonymName"/>
                        <xsl:text> a owl:ObjectProperty</xsl:text>
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  owl:equivalentProperty </xsl:text>
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:text>has</xsl:text>
                        <xsl:value-of select="$upperFieldName"/>
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  rdfs:subPropertyOf </xsl:text>
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:text>hasChild</xsl:text>
                        <xsl:text> .</xsl:text>
                        <xsl:text>&#10;</xsl:text>

                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:text>field</xsl:text>
                        <xsl:value-of select="$upperSynonymName"/>
                        <xsl:text>HasParent</xsl:text>
                        <xsl:if test="not(@name = 'children')">
                            <xsl:value-of select="$elementName"/><!-- name of parent node -->
                        </xsl:if>
                        <!-- alternate less-preferred phrasing: is "upperFieldNameOf" e.g. isChildrenOf -->
                        <xsl:text> a owl:ObjectProperty</xsl:text>
                        <xsl:text> ;</xsl:text>
                        <xsl:text>&#10;</xsl:text>
                        <xsl:text>  owl:equivalentProperty </xsl:text>
                        <xsl:text>:</xsl:text><!-- local namespace -->
                        <xsl:text>field</xsl:text>
                        <xsl:value-of select="$upperFieldName"/>
                        <xsl:text>HasParent</xsl:text>
                        <xsl:if test="not(@name = 'children')">
                            <xsl:value-of select="$elementName"/><!-- name of parent node -->
                        </xsl:if>
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
