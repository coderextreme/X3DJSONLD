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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='PixelTextureInterpolatorPrototype.x3d',name='title'),
    meta(content='Create Script prototype to modify a PixelTexture as an image morph',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='14 April 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='2D image PixelTexture morph',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolatorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PixelTextureInterpolatorPrototype.x3d'),
    ProtoDeclare(name='PixelTextureInterpolator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
        field(accessType='initializeOnly',name='key',type='MFFloat'),
        field(accessType='initializeOnly',name='keyValue',type='MFNode'),
        field(accessType='outputOnly',name='value_changed',type='SFImage'),
        field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of prototype 
        children=[
        Script(DEF='ImageInterpolatorScript',url=["PixelTextureInterpolator.js","https://savage.nps.edu/Savage/Tools/Authoring/PixelTextureInterpolator.js"],
          field=[
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='initializeOnly',name='key',type='MFFloat'),
          field(accessType='initializeOnly',name='keyValue',type='MFNode',
            #  initialization nodes (if any) go here 
            ),
          field(accessType='outputOnly',name='value_changed',type='SFImage'),
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='key',protoField='key'),
            connect(nodeField='keyValue',protoField='keyValue'),
            connect(nodeField='value_changed',protoField='value_changed'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]))]
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        )),
    #  renderable scene graph begins here 
    Shape(
      geometry=Box(),
      appearance=Appearance(
        texture=PixelTexture(DEF='PixelColors',image=[2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888]))),
    #  set of images, interpolated as a 2D morph 
    ProtoInstance(DEF='PixelTextureInterpolatorExample',name='PixelTextureInterpolator',
      fieldValue=[
      fieldValue(name='key',value=[0,0.25,0.5,0.75,1]),
      fieldValue(name='keyValue',
        #  rotate two image values in each PixelTexture 
        children=[
        PixelTexture(image=[2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888]),
        PixelTexture(image=[2,4,3,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888,0xff0000,0xffff00]),
        PixelTexture(image=[2,4,3,0x0000ff,0xff7700,0x00ff77,0x888888,0xff0000,0xffff00,0x007700,0xff0077]),
        PixelTexture(image=[2,4,3,0x00ff77,0x888888,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700]),
        #  last PixelTexture matches first, would like to DEF and USE within a fieldValue initialization 
        PixelTexture(image=[2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888])]),
      fieldValue(name='traceEnabled',value=True)]),
    TimeSensor(DEF='Time',cycleInterval=4),
    ROUTE(fromField='value_changed',fromNode='PixelTextureInterpolatorExample',toField='image',toNode='PixelColors'),
    ROUTE(fromField='fraction_changed',fromNode='Time',toField='set_fraction',toNode='PixelTextureInterpolatorExample')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PixelTextureInterpolatorPrototype.py")
