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
    meta(content='HalfMoonPrototype.x3d',name='title'),
    meta(content='Prototype for a group of HalfMoon fish in the Kelp forest.',name='description'),
    meta(content='Ildeniz Duman',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='1 June 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Additional PositionInterpolator present but disabled.',name='warning'),
    meta(content='Wiggle causes texture flashing. TODO: move animation to example file.',name='warning'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/HalfMoonPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HalfMoonPrototype.x3d'),
    ProtoDeclare(appinfo='HalfMoon fish',name='HalfMoon',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='skinTextureUrl',type='MFString',value=["HalfMoonScalesPatch.jpg"]),
        field(accessType='inputOutput',name='fishScale',type='SFVec3f',value=(0.3,0.25,0.25)),
        field(accessType='inputOutput',name='fishColor',type='SFColor',value=(0.7,0.7,0.7))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='MyHalfMoon',
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
            geometry=Extrusion(DEF='Fish_Shape',creaseAngle=1.57,crossSection=[(-0.1,1.0),(0.1,1),(0.5,0.5),(0.5,-0.5),(0.1,-1),(-0.1,-1),(-0.5,-0.5),(-0.5,0.5),(-0.1,1)],scale=[(0.03,0.03),(0.3,0.3),(0.2,0.4),(0.1,0.5),(0.1,0.15),(0.03,0.4)],spine=[(0,1.5,0),(0,1.2,0),(0,0.5,0),(0,0.3,0),(0,0,0),(0,-0.3,0)])),
          Shape(
            appearance=Appearance(DEF='Fin_Skin',
              material=Material(diffuseColor=(0.5,0.5,0.5),transparency=0.2))),
          Transform(translation=(1.37,0.1,0.1),
            children=[
            Shape(DEF='Eye',
              appearance=Appearance(
                material=Material(diffuseColor=(0.5,0.5,0.5),shininess=1,specularColor=(0.3,0.3,0.3))),
              geometry=Sphere(radius=0.04))]),
          Transform(translation=(1.37,0.1,-0.1),
            children=[
            Shape(USE='Eye')]),
          Transform(scale=(2.6,1,0.7),translation=(1.46,0,0),
            #  Mouth 
            children=[
            Shape(USE='Eye')]),
          Transform(DEF='Left_Pectoral',translation=(1.1,-0.15,-0.1),
            children=[
            Shape(
              appearance=Appearance(USE='Fin_Skin'),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.2,0,0),(-0.2,0,-0.2)])))]),
          Transform(DEF='Right_Pectoral',translation=(1.1,-0.15,0.1),
            children=[
            Shape(
              appearance=Appearance(USE='Fin_Skin'),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(0.2,0,0),(-0.2,0,0.2)])))]),
          Group(DEF='AnimationGroup',
            children=[
            TimeSensor(DEF='Timer',cycleInterval=5,loop=True),
            CoordinateInterpolator(DEF='Waggler',key=[0.0,0.15,0.28,0.4,0.55,0.7,0.85,1],keyValue=[(1.5,0,0),(1.2,0,0),(0.5,0,0),(0.3,0,0),(0,0,0),(-0.3,0,0),(1.5,0,0),(1.20,0,0),(0.5,0,.1),(0.3,0,.2),(0,0,0.25),(-0.3,0,0.3),(1.5,0,0),(1.20,0,0),(0.5,0,0),(0.3,0,0),(0,0,0),(-0.3,0,0),(1.5,0,0),(1.2,0,0),(0.5,0,-0.1),(0.3,0,-0.2),(0,0,-0.25),(-0.3,0,-0.3),(1.5,0,0),(1.2,0,0),(0.5,0,0),(0.3,0,0),(0,0,0),(-0.3,0,0),(1.5,0,0),(1.2,0,0),(0.5,0,0.1),(0.3,0,0.2),(0,0,0.25),(-0.3,0,0.3),(1.5,0,0),(1.2,0,0),(0.5,0,0),(0.3,0,0),(0,0,0),(-0.3,0,0),(1.5,0,0),(1.2,0,0),(0.5,0,-0.1),(0.3,0,-0.2),(0,0,-0.25),(-0.3,0,-0.3)]),
            OrientationInterpolator(DEF='Left_Pectoral_Rotation',key=[0,0.3,0.7,1],keyValue=[(1,0,0,-0.52),(1,0,0,0),(1,0,0,0),(1,0,0,-0.52)]),
            OrientationInterpolator(DEF='Right_Pectoral_Rotation',key=[0,0.3,0.7,1],keyValue=[(1,0,0,-0.52),(1,0,0,0),(1,0,0,0),(1,0,0,-0.52)]),
            #  orbiting time 
            TimeSensor(DEF='OrbitClock',cycleInterval=90,enabled=False,loop=True),
            OrientationInterpolator(DEF='Orbit',key=[0.0,0.25,0.5,0.750,1],keyValue=[(0,1,0,6.28),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,6.28)]),
            PositionInterpolator(DEF='HalfMoonPath',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(15,2,0),(15,0,-10),(0,-1,-10),(-15,0,-10),(-15,2,0),(-15,0,10),(0,-2,10),(15,0,10),(15,2,0)]),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Waggler'),
            ROUTE(fromField='value_changed',fromNode='Waggler',toField='set_spine',toNode='Fish_Shape'),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Left_Pectoral_Rotation'),
            ROUTE(fromField='value_changed',fromNode='Left_Pectoral_Rotation',toField='set_rotation',toNode='Left_Pectoral'),
            ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Right_Pectoral_Rotation'),
            ROUTE(fromField='value_changed',fromNode='Right_Pectoral_Rotation',toField='set_rotation',toNode='Right_Pectoral'),
            ROUTE(fromField='fraction_changed',fromNode='OrbitClock',toField='set_fraction',toNode='Orbit'),
            ROUTE(fromField='fraction_changed',fromNode='OrbitClock',toField='set_fraction',toNode='HalfMoonPath'),
            ROUTE(fromField='value_changed',fromNode='Orbit',toField='set_rotation',toNode='MyHalfMoon'),
            ROUTE(fromField='value_changed',fromNode='HalfMoonPath',toField='set_translation',toNode='MyHalfMoon')])])])),
    #  ==================== 
    ProtoInstance(name='HalfMoon')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HalfMoonPrototype.py")
