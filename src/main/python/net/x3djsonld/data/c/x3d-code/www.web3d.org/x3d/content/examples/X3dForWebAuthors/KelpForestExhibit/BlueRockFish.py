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
    meta(content='BlueRockFish.x3d',name='title'),
    meta(content='Create a new fish type through configuration of the CircleFishLod prototype.',name='description'),
    meta(content='Ildeniz Duman',name='creator'),
    meta(content='Jeff Weekley',name='translator'),
    meta(content='1 May 1998',name='created'),
    meta(content='25 February 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/BlueRockFish.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BlueRockFish.x3d'),
    ExternProtoDeclare(appinfo='CircleFish prototype with LOD added',name='CircleFishLod',url=["CircleFishLodPrototype.x3d#CircleFishLod","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishLodPrototype.x3d#CircleFishLod","CircleFishLodPrototype.wrl#CircleFishLod","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishLodPrototype.wrl#CircleFishLod"],
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
    Viewpoint(description='Blue Rockfish',position=(-1,1,8)),
    Transform(
      children=[
      ProtoInstance(DEF='BlueRockfish',name='CircleFishLod',
        fieldValue=[
        fieldValue(name='skinTextureUrl',value=["blueRockfishPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/blueRockfishPatch.jpg"]),
        fieldValue(name='fishScale',value=(0.5,0.53,0.2)),
        fieldValue(name='fishColor',value=(0.2,0.6,0.8)),
        fieldValue(name='positionKey',value=[0,0.3,0.6,1]),
        fieldValue(name='positionKeyValue',value=[(0,0,1),(1,0,0),(0,0,-1),(0,0,1)]),
        fieldValue(name='orbitTime',value=60)])]),
    Transform(rotation=(0,1,0,1.05),translation=(0,0.5,0),
      #  rotation 60 degrees 
      children=[
      ProtoInstance(DEF='BlueRockfish1',name='CircleFishLod',
        fieldValue=[
        fieldValue(name='skinTextureUrl',value=["blueRockfishPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/blueRockfishPatch.jpg"]),
        fieldValue(name='fishScale',value=(0.5,0.53,0.2)),
        fieldValue(name='fishColor',value=(0.2,0.6,0.8)),
        fieldValue(name='positionKey',value=[0,0.3,0.6,1]),
        fieldValue(name='positionKeyValue',value=[(0,0,1),(1,0,0),(0,0,-1),(0,0,1)]),
        fieldValue(name='orbitTime',value=60)])]),
    Transform(translation=(0,1.5,1),
      children=[
      ProtoInstance(DEF='BlueRockfish2',name='CircleFishLod',
        fieldValue=[
        fieldValue(name='skinTextureUrl',value=["blueRockfishPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/blueRockfishPatch.jpg"]),
        fieldValue(name='fishScale',value=(0.5,0.53,0.2)),
        fieldValue(name='fishColor',value=(0.2,0.6,0.8)),
        fieldValue(name='positionKey',value=[0,0.3,0.6,1]),
        fieldValue(name='positionKeyValue',value=[(0,0,1),(1,0,0),(0,0,-1),(0,0,1)]),
        fieldValue(name='orbitTime',value=40)])]),
    Transform(rotation=(0,1,0,0.78),translation=(-0.5,1,0),
      #  rotation 45 degrees 
      children=[
      ProtoInstance(DEF='BlueRockfish3',name='CircleFishLod',
        fieldValue=[
        fieldValue(name='skinTextureUrl',value=["blueRockfishPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/blueRockfishPatch.jpg"]),
        fieldValue(name='fishScale',value=(0.5,0.53,0.2)),
        fieldValue(name='fishColor',value=(0.2,0.6,0.8)),
        fieldValue(name='positionKey',value=[0,0.4,0.7,0.95,1]),
        fieldValue(name='positionKeyValue',value=[(0,0,0),(1,0,0),(0,0,0),(1,0,0),(0.3,0,0)]),
        fieldValue(name='orientationKey',value=[0,0.5,1]),
        fieldValue(name='orientationKeyValue',value=[(0,1,0,0),(0,1,0,1.57),(0,1,0,0)]),
        fieldValue(name='orbitTime',value=80)])]),
    Transform(translation=(0,1.8,2),
      children=[
      ProtoInstance(DEF='BlueRockfish4',name='CircleFishLod',
        fieldValue=[
        fieldValue(name='skinTextureUrl',value=["blueRockfishPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/blueRockfishPatch.jpg"]),
        fieldValue(name='fishScale',value=(0.5,0.53,0.2)),
        fieldValue(name='fishColor',value=(0.2,0.6,0.8)),
        fieldValue(name='positionKey',value=[0,0.3,0.6,1]),
        fieldValue(name='positionKeyValue',value=[(0,0,1),(1,0,0),(0,0,-3),(0,0,1)]),
        fieldValue(name='orbitTime',value=40)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BlueRockFish.py")
