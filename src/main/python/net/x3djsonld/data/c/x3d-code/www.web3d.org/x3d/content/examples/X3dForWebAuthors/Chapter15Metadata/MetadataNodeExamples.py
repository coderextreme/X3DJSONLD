###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='MetadataNodeExamples.x3d',name='title'),
    meta(content='Simple examples of meta statements, comments, WorldInfo node and typed metadata nodes.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 September 2011',name='created'),
    meta(content='1 May 2021',name='modified'),
    meta(content='Information in head and meta elements is retained after a scene is parsed and loaded, and can be referenced via the Scene Access Interface (SAI) or Document Object Model (DOM)',name='info'),
    meta(content='Authoring note: MetadataBoolean requires X3D version 3.3, as used in this example scene',name='info'),
    meta(content='The following referenced chapter is published online but was not included in the printed book.',name='reference'),
    meta(content='Chapter15MetadataInformation.html',name='reference'),
    meta(content='http://x3dgraphics.com/chapters/Chapter15MetadataInformation.html',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter15Metadata/MetadataNodeExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  May 2017: X3D4 Architecture Specification clarification allows Metadata nodes at top level of Scene graph. 
    children=[
    MetadataString(name='TestRootMetadataNode',value=["Test satisfactory.","Note that all SFString values must be quoted."]),
    #  Comments can appear between nodes (XML elements) but are not retained after a scene is parsed, loaded and playing 
    WorldInfo(DEF='MyWorldInfo',info=["Metadata strings","can go here","as string array values"],title='MetadataNodeExamples.x3d Example Scene',
      #  Structured information can go in Metadata nodes. Note that any X3D node can contain a single Metadata node with containerField='metadata' 
      metadata=MetadataSet(DEF='MyMetadataSetNode',name='Metadata_name',reference='SomeReferenceStandard 1.2.3c',
        value=[
        MetadataBoolean(DEF='MyMetadataBooleanNode',name='Coin Flip',reference='MetadataBoolean allowed in X3D v3.3 and later',value=[True,False,True,False]),
        MetadataDouble(DEF='MyMetadataDoubleNode',name='Metadata_name',reference='SomeReferenceStandard 1.2.3c',value=[3.141592658,2.71812181]),
        MetadataFloat(DEF='MyMetadataFloatNode',name='Metadata_name',reference='SomeReferenceStandard 1.2.3c',value=[9.8,6.023e+23]),
        MetadataInteger(DEF='MyMetadataIntegerNode',name='Metadata_name',reference='SomeReferenceStandard 1.2.3c',value=[6,28,496]),
        MetadataString(DEF='MyMetadataStringNode',name='Metadata_name',reference='SomeReferenceStandard 1.2.3c',value=["Part 27","P27","p27"])],
        metadata=MetadataSet(DEF='NestedMetadataSetNode',name='TestNestedMetadataSetNodes',
          #  MetadataSet can also contain multiple Metadata nodes with containerField='value' 
          value=[
          MetadataString(USE='MyMetadataStringNode'),
          MetadataInteger(USE='MyMetadataIntegerNode'),
          MetadataFloat(USE='MyMetadataFloatNode'),
          MetadataFloat(name='coefficients',value=[3.141592653,2.7128,1,0])]))),
    Background(skyColor=[(0,0.439216,0.760784)]),
    Viewpoint(description='View scene source to see metadata examples',position=(0,0,9)),
    Anchor(description='Load scene index page',parameter=["target=_blank"],url=["MetadataNodeExamplesIndex.html","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter15Metadata/MetadataNodeExamplesIndex.html"],
      children=[
      Shape(
        geometry=Text(string=["View scene source","to see","metadata examples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.992157,0.039216))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MetadataNodeExamples.py")
