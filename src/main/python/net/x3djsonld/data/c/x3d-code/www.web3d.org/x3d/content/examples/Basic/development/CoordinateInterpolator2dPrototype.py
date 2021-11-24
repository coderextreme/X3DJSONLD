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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='CoordinateInterpolator2dPrototype.x3d',name='title'),
    meta(content='CoordinateInterpolator2D prototype declaration, to interpolate across an array of Vector2FloatArray/MFVec2f values to produce an interpolated Vector2FloatArray - click text to see example.',name='description'),
    meta(content='Don Brutzman, Jeff Weekley, Jane Wu',name='creator'),
    meta(content='28 June 2001',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator',name='reference'),
    meta(content='CoordinateInterpolator2D',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CoordinateInterpolator2dPrototype.x3d'),
    ProtoDeclare(appinfo='Provide interpolation capability for Vector2FloatArray/MFVec2f values',documentation='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8',name='CoordinateInterpolator2D',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='Regular interpolator-style input, the set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event.',name='set_fraction',type='SFFloat'),
        field(accessType='inputOnly',name='set_key',type='MFFloat'),
        field(accessType='inputOutput',appinfo='keyValue holds the array of Vector2FloatArrays that match each animation key.',name='key',type='MFFloat'),
        field(accessType='outputOnly',appinfo='Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.',name='key_changed',type='MFFloat'),
        field(accessType='inputOnly',appinfo='Array of integer values. Must have the same number of keys as keyValues.',name='set_keyValue',type='MFVec2f'),
        field(accessType='inputOutput',appinfo='keyValue holds the array of Vector2FloatArrays that match each animation key.',name='keyValue',type='MFVec2f'),
        field(accessType='outputOnly',appinfo='Array of integer values. Must have the same number of keys as keyValues.',name='keyValue_changed',type='MFVec2f'),
        field(accessType='outputOnly',appinfo='Regular interpolator-style output, the interpolator function averages between respective keyValue Vector2FloatArrays resulting in a Vector2FloatArray value_changed eventOut with the same timestamp as the set_fraction event.',name='value_changed',type='MFVec2f')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Switch(whichChoice=-1,
            children=[
            ScalarInterpolator(DEF='KeyHolder',
              IS=IS(
                connect=[
                connect(nodeField='key',protoField='key')])),
            Shape(
              geometry=IndexedFaceSet(
                texCoord=TextureCoordinate(DEF='KeyValueHolder',
                  IS=IS(
                    connect=[
                    connect(nodeField='point',protoField='keyValue')]))),
              appearance=Appearance(DEF='DefaultAppearance',
                material=Material(),))]),
          Script(DEF='InterpolationScript',directOutput=True,
            field=[
            field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
            field(accessType='initializeOnly',appinfo='local variable',name='fraction',type='SFFloat',value=0.0),
            field(accessType='inputOnly',name='set_key',type='MFFloat'),
            field(accessType='initializeOnly',name='keyHolderNode',type='SFNode',
              children=[
              ScalarInterpolator(USE='KeyHolder')]),
            field(accessType='outputOnly',name='key_changed',type='MFFloat'),
            field(accessType='inputOnly',name='set_keyValue',type='MFVec2f'),
            field(accessType='initializeOnly',name='keyValueHolderNode',type='SFNode',
              children=[
              TextureCoordinate(USE='KeyValueHolder')]),
            field(accessType='outputOnly',name='keyValue_changed',type='MFVec2f'),
            field(accessType='outputOnly',name='value_changed',type='MFVec2f')],
            IS=IS(
              connect=[
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='set_key',protoField='set_key'),
              connect(nodeField='key_changed',protoField='key_changed'),
              connect(nodeField='set_keyValue',protoField='set_keyValue'),
              connect(nodeField='keyValue_changed',protoField='keyValue_changed'),
              connect(nodeField='value_changed',protoField='value_changed')]))])])),
    #  ====================================== 
    #  Example use 
    Anchor(description='CoordinateInterpolator2dExample',parameter=["target=_blank"],url=["CoordinateInterpolator2dExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.x3d","CoordinateInterpolator2dExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["CoordinateInterpolator2dPrototype","defines a prototype","","Click on this text to see","CoordinateInterpolator2dExample"," scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CoordinateInterpolator2dPrototype.py")
