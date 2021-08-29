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
    meta(content='PixelTextureGaribaldi.x3d',name='title'),
    meta(content='The Garibaldi with a PixelTexture instead of a file texture.',name='description'),
    meta(content='Ildeniz Duman',name='creator'),
    meta(content='1 June 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Garibaldi.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureGaribaldi.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PixelTextureGaribaldi.x3d'),
    ExternProtoDeclare(name='CircleFishPT',url=["CircleFishPTPrototype.x3d#CircleFishPT","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPTPrototype.x3d#CircleFishPT","CircleFishPTPrototype.wrl#CircleFishPT","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPTPrototype.wrl#CircleFishPT"],
      field=[
      field(accessType='inputOutput',name='skinPixelTexture',type='SFImage'),
      field(accessType='inputOutput',name='fishScale',type='SFVec3f'),
      field(accessType='inputOutput',name='fishColor',type='SFColor'),
      field(accessType='inputOutput',name='finColor',type='SFColor'),
      field(accessType='inputOutput',name='positionKey',type='MFFloat'),
      field(accessType='inputOutput',name='positionKeyValue',type='MFVec3f'),
      field(accessType='inputOutput',name='orientationKey',type='MFFloat'),
      field(accessType='inputOutput',name='orientationKeyValue',type='MFRotation'),
      field(accessType='inputOutput',name='orbitTime',type='SFTime')]),
    ExternProtoDeclare(name='CircleFish',url=["CircleFishPrototype.x3d#CircleFish","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPrototype.x3d#CircleFish","CircleFishPrototype.wrl#CircleFish","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPrototype.wrl#CircleFish"],
      field=[
      field(accessType='inputOutput',name='skinTextureUrl',type='MFString'),
      field(accessType='inputOutput',name='fishScale',type='SFVec3f'),
      field(accessType='inputOutput',name='fishColor',type='SFColor'),
      field(accessType='inputOutput',name='finColor',type='SFColor'),
      field(accessType='inputOutput',name='positionKey',type='MFFloat'),
      field(accessType='inputOutput',name='positionKeyValue',type='MFVec3f'),
      field(accessType='inputOutput',name='orientationKey',type='MFFloat'),
      field(accessType='inputOutput',name='orientationKeyValue',type='MFRotation'),
      field(accessType='inputOutput',name='orbitTime',type='SFTime')]),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Book View',orientation=(0,1,0,0.229),position=(0.62,0.03,1.28)),
    Transform(translation=(-.3,.3,0),
      children=[
      ProtoInstance(name='CircleFishPT',
        fieldValue=[
        fieldValue(name='skinPixelTexture',value=[12,7,3,0xEFAA55,0xF9BD5B,0xFCC55A,0xFCC75D,0xFCC75A,0xFCC859,0xFBCB5B,0xFCCA5C,0xFDCF5E,0xFCD263,0xFDD76C,0xF2CD77,0xF4B356,0xF9BE58,0xFBC458,0xFBC558,0xFCC75A,0xFCCA5B,0xFCCC60,0xFDCF5C,0xFDCF5E,0xFDD05D,0xFDD15E,0xFDD060,0xF5B655,0xF9C056,0xF8BD53,0xFABE54,0xFABF53,0xFBC254,0xFBC353,0xFBC453,0xFBC555,0xFBC753,0xFBC855,0xFDCC5A,0xF9C659,0xF6BE54,0xF4B954,0xF2B651,0xF2B752,0xF5BC53,0xF6BF50,0xFAC452,0xFBC753,0xFAC551,0xF9C753,0xF5BE53,0xF1B453,0xEFB253,0xEBAB52,0xEBAA53,0xECAD50,0xF0B24F,0xF3B84E,0xF7BF51,0xF8C453,0xF9C955,0xF7C453,0xF5BB54,0xE3A152,0xDE9B53,0xDE9C55,0xE09C52,0xE5A251,0xE9A950,0xF1AD50,0xF2AD51,0xF5BA50,0xF5BF53,0xF9C455,0xF5C557,0xB07950,0xB3784F,0xBB7C4F,0xC4824F,0xD28C4E,0xE18C4E,0xE47C4A,0xE17B4C,0xDC844A,0xE5954D,0xF2B550,0xF4C354]),
        fieldValue(name='fishScale',value=(1.0,0.39,0.4)),
        fieldValue(name='finColor',value=(0.9,0.66,0.4)),
        fieldValue(name='fishColor',value=(.97,.75,.3)),
        fieldValue(name='positionKey',value=[0.0,0.4,0.7,0.95,1.0]),
        fieldValue(name='positionKeyValue',value=[(0.0,0.0,0.0),(0.5,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.0),(0.2,0.0,0.0)]),
        fieldValue(name='orientationKey',value=[0.0,1.0]),
        fieldValue(name='orientationKeyValue',value=[(0.0,1.0,0.0,90.0),(0.0,1.0,0.0,90.0)]),
        fieldValue(name='orbitTime',value=80.0)])]),
    Transform(translation=(.3,.3,0),
      children=[
      ProtoInstance(name='CircleFishPT',
        fieldValue=[
        fieldValue(name='skinPixelTexture',value=[8,8,1,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc]),
        fieldValue(name='fishScale',value=(1.0,0.39,0.4)),
        fieldValue(name='finColor',value=(0.9,0.66,0.4)),
        fieldValue(name='fishColor',value=(.97,.75,.3)),
        fieldValue(name='positionKey',value=[0.0,0.4,0.7,0.95,1.0]),
        fieldValue(name='positionKeyValue',value=[(0.0,0.0,0.0),(0.5,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.0),(0.2,0.0,0.0)]),
        fieldValue(name='orientationKey',value=[0.0,1.0]),
        fieldValue(name='orientationKeyValue',value=[(0.0,1.0,0.0,90.0),(0.0,1.0,0.0,90.0)]),
        fieldValue(name='orbitTime',value=80.0)])]),
    Transform(translation=(-.3,-.3,0),
      children=[
      ProtoInstance(name='CircleFishPT',
        fieldValue=[
        fieldValue(name='skinPixelTexture',value=[2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888]),
        fieldValue(name='fishScale',value=(1.0,0.39,0.4)),
        fieldValue(name='finColor',value=(0.9,0.66,0.4)),
        fieldValue(name='fishColor',value=(.97,.75,.3)),
        fieldValue(name='positionKey',value=[0.0,0.4,0.7,0.95,1.0]),
        fieldValue(name='positionKeyValue',value=[(0.0,0.0,0.0),(0.5,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.0),(0.2,0.0,0.0)]),
        fieldValue(name='orientationKey',value=[0.0,1.0]),
        fieldValue(name='orientationKeyValue',value=[(0.0,1.0,0.0,90.0),(0.0,1.0,0.0,90.0)]),
        fieldValue(name='orbitTime',value=80.0)])]),
    Transform(translation=(.3,-.3,0),
      children=[
      ProtoInstance(name='CircleFish',
        fieldValue=[
        fieldValue(name='skinTextureUrl',value=["GaribaldiPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/GaribaldiPatch.jpg"]),
        fieldValue(name='fishScale',value=(1.0,0.39,0.4)),
        fieldValue(name='finColor',value=(0.9,0.66,0.4)),
        fieldValue(name='fishColor',value=(.97,.75,.3)),
        fieldValue(name='positionKey',value=[0.0,0.4,0.7,0.95,1.0]),
        fieldValue(name='positionKeyValue',value=[(0.0,0.0,0.0),(0.5,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.0),(0.2,0.0,0.0)]),
        fieldValue(name='orientationKey',value=[0.0,1.0]),
        fieldValue(name='orientationKeyValue',value=[(0.0,1.0,0.0,90.0),(0.0,1.0,0.0,90.0)]),
        fieldValue(name='orbitTime',value=80.0)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PixelTextureGaribaldi.py")
