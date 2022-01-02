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
    #  comment #1 
    #  comment #2 
    #  comment #3 
    #  comment #4 
    component(name='Navigation',level=3),
    component(name='Layering',level=1),
    unit(name='AngleUnitConversion',category='angle',conversionFactor=1.0),
    unit(name='LengthUnitConversion',category='length',conversionFactor=1.0),
    meta(name='title',content='Java.x3d'),
    meta(name='description',content='Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library'),
    meta(name='reference',content='https://www.web3d.org/specifications/java/X3DJSAIL.html'),
    meta(name='generator',content='Java.java'),
    meta(name='created',content='6 September 2016'),
    meta(name='modified',content='6 June 2018'),
    meta(name='generator',content='X3D Java Scene Access Interface Library (X3DJSAIL)'),
    meta(name='generator',content='https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java'),
    meta(name='generator',content='Netbeans http://www.netbeans.org'),
    meta(name='creator',content='Don Brutzman'),
    meta(name='reference',content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d'),
    meta(name='reference',content='Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:'),
    meta(name='reference',content='Java.txt'),
    meta(name='reference',content='Java.x3dv'),
    meta(name='reference',content='Java.wrl'),
    meta(name='reference',content='Java.html'),
    meta(name='reference',content='X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/Java.x3d'),
    meta(name='identifier',content='https://www.web3d.org/specifications/java/examples/Java.x3d'),
    meta(name='license',content='../license.html'),
    meta(name='info',content='tested sat: name value cannot contain embedded space character'),
    meta(name='translated',content='06 June 2018'),
    meta(name='generator',content='X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html'),
    meta(name='reference',content='X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding')]),
  Scene=Scene(
    children=[
    ViewpointGroup(description='Available viewpoints'),
    WorldInfo(DEF='WorldInfoDEF',title='HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)'),
    WorldInfo(USE='WorldInfoDEF'),
    WorldInfo(USE='WorldInfoDEF'),
    MetadataString(DEF='scene.addChildMetadata',name='test',value=["Top-level root Metadata node beneath Scene needs to be one of \'-children\' in JSON encoding"]),
    LayerSet(DEF='scene.addChildLayerSetTest'),
    Transform(DEF='LogoGeometryTransform',translation=(0,1.5,0),
      children=[
      Anchor(description='select for X3D Java SAI Library (X3DJSAIL) description',url=["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"],
        children=[
        Shape(DEF='BoxShape',
          appearance=Appearance(
            material=Material(DEF='GreenMaterial',diffuseColor=(0,1,1),emissiveColor=(0.8,0,0),transparency