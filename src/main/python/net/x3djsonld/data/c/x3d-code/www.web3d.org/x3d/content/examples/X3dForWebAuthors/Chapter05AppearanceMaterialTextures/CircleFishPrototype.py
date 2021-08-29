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
    meta(content='CircleFishPrototype.x3d',name='title'),
    meta(content='This is a prototype for a CircleFish, which is also used by CircleFishLod. Default fish size: length is 1 m (Y-axis), max Height is 1 m (Z-axis), max Width is 10 cm (X-axis).',name='description'),
    meta(content='Ildeniz Duman',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='1 May 1998',name='created'),
    meta(content='11 December 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CircleFishPrototype.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/CircleFishPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CircleFishPrototype.x3d'),
    ProtoDeclare(name='CircleFish',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='skinTextureUrl',type='MFString'),
        field(accessType='inputOutput',name='fishScale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='fishColor',type='SFColor',value=(0.5,0.5,0.5)),
        field(accessType='inputOutput',name='finColor',type='SFColor',value=(0.5,0.5,0.5)),
        field(accessType='inputOutput',name='positionKey',type='MFFloat',value=[0.0,0.125,0.25,0.375,0.5,0.625,0.750,0.8751]),
        field(accessType='inputOutput',name='positionKeyValue',type='MFVec3f',value=[(1.5,2,0),(1.5,0,-1.0),(0,-1,-1.0),(-1.5,0,-1.0),(-1.5,2,0),(-1.5,0,1.0),(0,-2,1.0),(1.5,0,1.0),(1.5,2,0)]),
        field(accessType='inputOutput',name='orientationKey',type='MFFloat',value=[0.0,0.25,0.5,0.750,1]),
        field(accessType='inputOutput',name='orientationKeyValue',type='MFRotation',value=[(0,1,0,0),(0,1,0,-1.57),(0,1,0,-3.14),(0,1,0,-4.71),(0,1,0,-6.28)]),
        field(accessType='inputOutput',name='orbitTime',type='SFTime',value=90)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='Way',
          children=[
          Transform(rotation=(1,0,0,1.395),
            children=[
            Transform(DEF='FishTransform',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='fishScale')]),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='FishColor',
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='fishColor')])),
                  texture=ImageTexture(DEF='FishTexture',
                    IS=IS(
                      connect=[
                      connect(nodeField='url',protoField='skinTextureUrl')]))),
                geometry=Extrusion(DEF='FishBodyExtrusion',creaseAngle=0.57,crossSection=[(-0.1,1.0),(0.1,1),(0.5,0.5),(0.5,-0.5),(0.1,-1),(-0.1,-1),(-0.5,-0.5),(-0.5,0.5),(-0.1,1)],scale=[(0.03,0.03),(0.05,0.3),(0.05,0.45),(0.1,0.5),(0.05,0.45),(0.05,0.2),(0.03,0.4)],spine=[(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0,0.3,0),(0,0.2,0),(0,0,0)])),
              Shape(
                appearance=Appearance(DEF='FinSkin',
                  material=Material(DEF='FinColor',transparency=0.2,
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='finColor')])))),
              Transform(translation=(0.015,0.8,-0.2),
                children=[
                Shape(DEF='Eye',
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.5,0.5,0.5),shininess=1,specularColor=(0.3,0.3,0.3))),
                  geometry=Sphere(radius=0.03))]),
              Transform(translation=(-0.015,0.8,-0.2),
                children=[
                Shape(USE='Eye')]),
              Transform(scale=(1,1,0.7),translation=(0,0.98,0),
                children=[
                Shape(USE='Eye')]),
              Transform(DEF='LeftPectoral',translation=(0.04,0.4,0.3),
                children=[
                Shape(
                  appearance=Appearance(USE='FinSkin'),
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(0,0.2,0),(0.2,0.1,0)])))]),
              Transform(DEF='RightPectoral',translation=(-0.04,0.4,0.3),
                children=[
                Shape(
                  appearance=Appearance(USE='FinSkin'),
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                    coord=Coordinate(point=[(0,0,0),(0,0.2,0),(-0.2,0.1,0)])))])])]),
          Group(DEF='AnimationGroup',
            children=[
            TimeSensor(DEF='Timer',cycleInterval=5,loop=True),
            CoordinateInterpolator(DEF='Waggler',key=[0.0,0.15,0.28,0.4,0.55,0.7,0.85,1],keyValue=[(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0,0.3,0),(0,0.2,0),(0,0,0),(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0.05,0.3,0),(0.1,0.2,0),(0.2,0,0),(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0,0.3,0),(0,0.2,0),(0,0,0),(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(-0.05,0.3,0),(-0.1,0.2,0),(-0.2,0,0),(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0,0.3,0),(0.0,0.2,0),(0,0,0),(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0.05,0.3,0),(0.1,0.2,0),(0.2,0,0),(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0,0.3,0),(0,0.2,0),(0,0,0),(0,1,0),(0,0.8,0),(0,0.6,0),(0,0.5,0),(0,0.3,0),(0,0.2,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Waggler'),
            ROUTE(fromField='value_changed',fromNode='Waggler',toField='set_spine',toNode='FishBodyExtrusion'),
            OrientationInterpolator(DEF='LeftPectoralRotation',key=[0,0.3,0.7,1],keyValue=[(0,1,0,-.349),(0,1,0,0),(0,1,0,0),(0,1,0,-.349)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='LeftPectoralRotation'),
            ROUTE(fromField='value_changed',fromNode='LeftPectoralRotation',toField='set_rotation',toNode='LeftPectoral'),
            OrientationInterpolator(DEF='RightPectoralRotation',key=[0,0.3,0.7,1],keyValue=[(0,1,0,.349),(0,1,0,0),(0,1,0,0),(0,1,0,.349)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='RightPectoralRotation'),
            ROUTE(fromField='value_changed',fromNode='RightPectoralRotation',toField='set_rotation',toNode='RightPectoral'),
            TimeSensor(DEF='OrbitClock',loop=True,
              IS=IS(
                connect=[
                connect(nodeField='cycleInterval',protoField='orbitTime')])),
            PositionInterpolator(DEF='CirclefishPath',
              IS=IS(
                connect=[
                connect(nodeField='key',protoField='positionKey'),
                connect(nodeField='keyValue',protoField='positionKeyValue')])),
            OrientationInterpolator(DEF='CircleFishAngle',
              IS=IS(
                connect=[
                connect(nodeField='key',protoField='orientationKey'),
                connect(nodeField='keyValue',protoField='orientationKeyValue')])),
            ROUTE(fromField='fraction_changed',fromNode='OrbitClock',toField='set_fraction',toNode='CirclefishPath'),
            ROUTE(fromField='fraction_changed',fromNode='OrbitClock',toField='set_fraction',toNode='CircleFishAngle'),
            ROUTE(fromField='value_changed',fromNode='CirclefishPath',toField='set_translation',toNode='Way'),
            ROUTE(fromField='value_changed',fromNode='CircleFishAngle',toField='set_rotation',toNode='Way')])])])),
    #  ==================== 
    ProtoInstance(name='CircleFish')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CircleFishPrototype.py")
