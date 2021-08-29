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
    meta(content='FishPrototype.x3d',name='title'),
    meta(content='This is a reusable prototype of a generic fish, which can be configured upon instancing to create customized fish.',name='description'),
    meta(content='Circular fish behavior is embedded in prototype, instead the circular path needs to be used in external files or possibly parameterized.',name='warning'),
    meta(content='Ildeniz Duman',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='1 June 1998',name='created'),
    meta(content='9 December 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/FishPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='FishPrototype.x3d'),
    ProtoDeclare(name='Fish',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='skinTextureUrl',type='MFString'),
        field(accessType='inputOutput',name='fishScale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='fishColor',type='SFColor',value=(0.7,0.7,0.7))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='FishTransform',
          IS=IS(
            connect=[
            connect(nodeField='scale',protoField='fishScale')]),
          children=[
          Transform(DEF='Way',
            children=[
            Transform(translation=(4,0,0),
              children=[
              Transform(rotation=(1,0,0,1.57),
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
                  geometry=Extrusion(DEF='FishShape',creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.03,0.03),(0.1,0.15),(0.4,0.7),(0.5,0.75),(0.4,0.55),(0.2,0.3),(0.05,0.1),(0.03,0.6)],spine=[(0,3.51,0),(0,3.50,0),(0,2.80,0),(0,2.3,0),(0,1.5,0),(0,0.5,0),(0,0,0),(0,-0.6,0)])),
                Shape(
                  appearance=Appearance(DEF='FinSkin',
                    material=Material(diffuseColor=(0.7,0.7,0.7),transparency=0.3)),
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
                    coord=Coordinate(DEF='Pelvic',point=[(0,2.2,0.6),(0,2.2,-0.7),(0,0.3,-0.3),(0,0.7,0.5)]))),
                Transform(translation=(0.3,2.8,-0.4),
                  children=[
                  Shape(DEF='Eye',
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.5,0.5,0.5),shininess=1,specularColor=(0.3,0.3,0.3))),
                    geometry=Sphere(radius=0.08))]),
                Transform(translation=(-0.3,2.8,-0.4),
                  children=[
                  Shape(USE='Eye')]),
                Transform(scale=(2.6,1,0.7),translation=(0,3.44,-0.1),
                  children=[
                  Shape(USE='Eye')]),
                Transform(DEF='LeftPectoral',translation=(-0.3,2.7,0.1),
                  children=[
                  Shape(
                    appearance=Appearance(USE='FinSkin'),
                    geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                      coord=Coordinate(point=[(0,0,0),(-0.5,-0.2,0.1),(-0.25,0.2,0.25)])))]),
                Transform(DEF='RightPectoral',translation=(0.3,2.7,0.1),
                  children=[
                  Shape(
                    appearance=Appearance(USE='FinSkin'),
                    geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                      coord=Coordinate(point=[(0,0,0),(0.5,-0.2,0.1),(0.25,0.2,0.25)])))])])])]),
          Group(DEF='AnimationGroup',
            children=[
            TimeSensor(DEF='RouteTImer',cycleInterval=50,loop=True),
            TimeSensor(DEF='Timer',cycleInterval=1.5,loop=True),
            CoordinateInterpolator(DEF='Waggler',key=[0.0,0.5,1.0],keyValue=[(0,3.55,0),(0,3.50,0),(0,2.80,0),(0,2.3,0),(-0.05,1.5,0),(0.1,0.5,0),(0.2,0,0),(0.3,-0.6,0),(0,3.55,0),(0,3.50,0),(0,2.80,0),(0,2.3,0),(0.05,1.5,0),(-0.1,0.5,0),(-0.2,0,0),(-0.3,-0.6,0),(0,3.55,0),(0,3.50,0),(0,2.80,0),(0,2.3,0),(-0.05,1.5,0),(0.1,0.5,0),(0.2,0,0),(0.3,-0.6,0)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Waggler'),
            ROUTE(fromField='value_changed',fromNode='Waggler',toField='set_spine',toNode='FishShape'),
            CoordinateInterpolator(DEF='Points',key=[0.0,0.5,1.0],keyValue=[(0,2.2,0.6),(0,2.2,-0.7),(0.2,0.3,-0.3),(0.2,0.7,0.5),(0,2.2,0.6),(0,2.2,-0.7),(-0.2,0.3,-0.3),(-0.2,0.7,0.5),(0,2.2,0.6),(0,2.2,-0.7),(0.2,0.3,-0.3),(0.2,0.7,0.5)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Points'),
            ROUTE(fromField='value_changed',fromNode='Points',toField='set_point',toNode='Pelvic'),
            OrientationInterpolator(DEF='LeftPectoralRotation',key=[0,0.3,0.7,1],keyValue=[(0,1,0,0.523),(0,1,0,0),(0,1,0,0),(0,1,0,0.523)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='LeftPectoralRotation'),
            ROUTE(fromField='value_changed',fromNode='LeftPectoralRotation',toField='set_rotation',toNode='LeftPectoral'),
            OrientationInterpolator(DEF='RightPectoralRotation',key=[0,0.3,0.7,1],keyValue=[(0,1,0,-0.523),(0,1,0,0),(0,1,0,0),(0,1,0,-0.523)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='RightPectoralRotation'),
            ROUTE(fromField='value_changed',fromNode='RightPectoralRotation',toField='set_rotation',toNode='RightPectoral'),
            OrientationInterpolator(DEF='Turn',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,-1.57),(0,1,0,-3.14),(0,1,0,-4.71),(0,1,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='RouteTImer',toField='set_fraction',toNode='Turn'),
            ROUTE(fromField='value_changed',fromNode='Turn',toField='set_rotation',toNode='Way')])])])),
    #  ==================== 
    ProtoInstance(name='Fish')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FishPrototype.py")
