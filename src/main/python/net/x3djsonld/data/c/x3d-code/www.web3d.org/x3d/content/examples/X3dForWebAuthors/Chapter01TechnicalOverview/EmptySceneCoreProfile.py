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

newModel=X3D(profile='Core',version='3.3',
  head=head(
    children=[
    meta(content='EmptySceneCoreProfile.x3d',name='title'),
    meta(content='Illustrate a minimalist scene using only Core profile nodes. Root nodes must either be allowed children nodes of a Grouping node, or a LayerSet node. Note that DOCTYPE, head/meta and Group/Metadata* elements can be deleted without losing scene validity.',name='description'),
    meta(content='Leonard Daly, Don Brutzman',name='creator'),
    meta(content='24 February 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='EmptyScene.x3d',name='reference'),
    meta(content='should Metadata nodes inherit from X3DNode or X3DChildNode?',name='TODO'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Rootnodes',name='reference'),
    meta(content='Increase X3D profile (or add component statements) to match if any other X3D nodes are added to this scene.',name='info'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/EmptySceneCoreProfile.x3d',name='identifier'),
    meta(content='http://x3dgraphics.com/chapters/Chapter15MetadataInformation.html',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Core profile can only contain WorldInfo and Metadata nodes. 
    children=[
    WorldInfo(title='EmptySceneCoreProfile.x3d'),
    WorldInfo(title='EmptySceneCoreProfile.x3d',
      metadata=MetadataSet(name='NodeSet',
        value=[
        MetadataBoolean(name='BooleanData',value=[True,False]),
        MetadataDouble(name='DoubleData',value=[1,2,3]),
        MetadataFloat(name='FloatData',value=[4,5,6]),
        MetadataInteger(name='IntegerData',value=[7,8,9]),
        MetadataString(name='StringData',value=["Empty Scene","Core Profile"])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EmptySceneCoreProfile.py")
