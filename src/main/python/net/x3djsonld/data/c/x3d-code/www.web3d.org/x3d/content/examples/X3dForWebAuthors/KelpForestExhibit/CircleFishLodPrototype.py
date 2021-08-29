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
    meta(content='CircleFishLodPrototype.x3d',name='title'),
    meta(content='Modifies an externally defined CircleFish prototype by adding Level of Detail (LOD)',name='description'),
    meta(content='Ildeniz Duman',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='1998',name='created'),
    meta(content='11 December 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishLodPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Simple model of a fish swimming in a cirlce',name='CircleFish',url=["CircleFishPrototype.x3d#CircleFish","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPrototype.x3d#CircleFish","CircleFishPrototype.wrl#CircleFish","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPrototype.wrl#CircleFish"],
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
    #  new LOD prototype extends a previously defined prototype 
    ProtoDeclare(appinfo='CircleFish prototype with LOD added',name='CircleFishLod',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='skinTextureUrl',type='MFString'),
        field(accessType='inputOutput',name='fishScale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='fishColor',type='SFColor',value=(0.5,0.5,0.5)),
        field(accessType='inputOutput',name='finColor',type='SFColor',value=(0.5,0.5,0.5)),
        field(accessType='inputOutput',name='positionKey',type='MFFloat',value=[0.0,0.125,0.25,0.375,0.5,0.625,0.750,0.875,1]),
        field(accessType='inputOutput',name='positionKeyValue',type='MFVec3f',value=[(1.5,0.5,0),(1.3,0,-0.8),(0,-0.5,-1.0),(-1.3,0,-0.8),(-1.5,0.5,0),(-1.3,0,0.8),(0,-0.5,1.0),(1.3,0,0.8),(1.5,0.5,0)]),
        field(accessType='inputOutput',name='orientationKey',type='MFFloat',value=[0.0,0.25,0.5,0.750,1]),
        field(accessType='inputOutput',name='orientationKeyValue',type='MFRotation',value=[(0,1,0,-3.14),(0,1,0,-1.57),(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14)]),
        field(accessType='inputOutput',name='orbitTime',type='SFTime',value=45)]),
      ProtoBody=ProtoBody(
        children=[
        LOD(forceTransitions=True,range=[20,40],
          children=[
          ProtoInstance(DEF='NearInstance',name='CircleFish',
            IS=IS(
              connect=[
              connect(nodeField='skinTextureUrl',protoField='skinTextureUrl'),
              connect(nodeField='fishScale',protoField='fishScale'),
              connect(nodeField='fishColor',protoField='fishColor'),
              connect(nodeField='finColor',protoField='finColor'),
              connect(nodeField='positionKey',protoField='positionKey'),
              connect(nodeField='positionKeyValue',protoField='positionKeyValue'),
              connect(nodeField='orientationKey',protoField='orientationKey'),
              connect(nodeField='orientationKeyValue',protoField='orientationKeyValue'),
              connect(nodeField='orbitTime',protoField='orbitTime')])),
          ProtoInstance(DEF='MidRangeInstance',name='CircleFish',
            #  no skinTexture at midRange for better performance 
            IS=IS(
              connect=[
              connect(nodeField='fishScale',protoField='fishScale'),
              connect(nodeField='fishColor',protoField='fishColor'),
              connect(nodeField='finColor',protoField='finColor'),
              connect(nodeField='positionKey',protoField='positionKey'),
              connect(nodeField='positionKeyValue',protoField='positionKeyValue'),
              connect(nodeField='orientationKey',protoField='orientationKey'),
              connect(nodeField='orientationKeyValue',protoField='orientationKeyValue'),
              connect(nodeField='orbitTime',protoField='orbitTime')])),
          #  Disappear at far range 
          WorldInfo(info=["null node"])])])),
    #  ==================== 
    Anchor(description='CircleFishLod Example',parameter=["target=_blank"],url=["CircleFishLodExample.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishLodExample.x3d","CircleFishLodExample.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishLodExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["CircleFishLodPrototype","is a Prototype declaration file.","","To see an example using this new node,","click this text and view","CircleFishLodExample scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7))),
      #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
      Shape(
        geometry=Box(size=(12,5,.001)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CircleFishLodPrototype.py")
