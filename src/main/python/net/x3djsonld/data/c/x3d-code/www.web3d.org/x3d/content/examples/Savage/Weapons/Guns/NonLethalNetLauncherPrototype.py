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
    meta(content='NonLethalNetLauncherPrototype.x3d',name='title'),
    meta(content='Simple model that depicts small boat launched net entanglement system.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='14 March 2002',name='created'),
    meta(content='22 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Guns/NonLethalNetLauncherPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=10),
    ProtoDeclare(appinfo='Nonlethal Net Launcher to repel boarders',name='NetLauncher',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='startLaunchToStbd',type='SFTime'),
        field(accessType='inputOnly',name='startLaunchToPort',type='SFTime'),
        field(accessType='outputOnly',name='netTranslation',type='SFVec3f'),
        field(accessType='outputOnly',name='netScale',type='SFVec3f'),
        field(accessType='outputOnly',name='netOrientation',type='SFRotation'),
        field(accessType='outputOnly',name='nettingScale',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
          #  Note that the term stbd refers to the position of the launcher tube and is 180 the direction of launch 
          Transform(
            children=[
            Viewpoint(DEF='STBD',description='Net Launcher stbd View',jump=False,orientation=(1,0,0,-.2),position=(0,5,12)),
            Viewpoint(DEF='FRONT',description='Net Launcher Front View',orientation=(0,1,0,1.57),position=(12,3,0)),
            Viewpoint(DEF='PORT',description='Net Launcher Port View',jump=False,orientation=(0,1,0,3.14),position=(0,3,-12)),
            Viewpoint(DEF='REAR',description='Net Launcher Rear View',orientation=(0,1,0,-1.57),position=(-12,3,0))]),
          TimeSensor(DEF='NetPositClock',cycleInterval=3,
            IS=IS(
              connect=[
              connect(nodeField='startTime',protoField='startLaunchToStbd')])),
          TimeSensor(DEF='NetPositClockStbd',cycleInterval=3,
            IS=IS(
              connect=[
              connect(nodeField='startTime',protoField='startLaunchToPort')])),
          PositionInterpolator(DEF='NetPositInterp',key=[0,.5,1],keyValue=[(0,0,0),(0,25,10),(0,7.5,21)],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='netTranslation')])),
          PositionInterpolator(DEF='NetPositInterpStbd',key=[0,.5,1],keyValue=[(0,0,0),(0,25,-10),(0,7.5,-21)]),
          PositionInterpolator(DEF='NetPositScale',key=[.1,1.0],keyValue=[(1,1,1),(1,8,1)]),
          PositionInterpolator(DEF='NetPositScaleStbd',key=[.1,1.0],keyValue=[(1,1,1),(1,8,1)]),
          PositionInterpolator(DEF='NettingScale',key=[.3,1],keyValue=[(.01,.01,.01),(1,2,1)]),
          PositionInterpolator(DEF='NettingScaleStbd',key=[.3,1],keyValue=[(.01,.01,.01),(1,2,1)]),
          OrientationInterpolator(DEF='NetOrientInterp',key=[0,.5,.9,1],keyValue=[(1,0,0,0),(1,0,0,.78),(1,0,0,1),(1,0,0,.78)]),
          OrientationInterpolator(DEF='NetOrientInterpStbd',key=[0,.5,.9,1],keyValue=[(1,0,0,0),(1,0,0,-.78),(1,0,0,-1),(1,0,0,-.78)]),
          Transform(DEF='TubeTransform',
            children=[
            Transform(DEF='PortTubeTransform',rotation=(1,0,0,.78),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(.9,.9,.9),shininess=1)),
                geometry=Cylinder(height=1.5,radius=.15)),
              Transform(rotation=(1,0,0,1.57),translation=(0,-.75,0),
                children=[
                Shape(
                  geometry=Box(size=(.5,.5,.01)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.9,.9,.9),shininess=1)))]),
              Transform(DEF='NetTransform',
                IS=IS(
                  connect=[
                  connect(nodeField='scale',protoField='netScale'),
                  connect(nodeField='rotation',protoField='netOrientation')]),
                children=[
                Transform(DEF='NettingTransform',rotation=(0,1,0,1.57),scale=(.01,.01,.01),translation=(0,0,1),
                  IS=IS(
                    connect=[
                    connect(nodeField='scale',protoField='nettingScale')]))])]),
            Transform(DEF='StbdTubeTransform',translation=(-.3,0,0),
              children=[
              Transform(rotation=(1,0,0,-.78),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.9,.9,.9),shininess=1)),
                  geometry=Cylinder(height=1.5,radius=.15)),
                Transform(rotation=(1,0,0,-1.57),translation=(0,-.75,0),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(.9,.9,.9),shininess=1)),
                    geometry=Box(size=(.5,.5,.01)))]),
                Transform(DEF='NetTransformStbd',
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,0,0),shininess=1)),
                    geometry=Cylinder(height=1.4,radius=.12)),
                  Transform(DEF='NettingTransformStbd',rotation=(0,1,0,1.57),scale=(.01,.01,.01),translation=(0,0,-1),
                    children=[
                    Shape(DEF='NETTING',
                      appearance=Appearance(
                        material=Material(),
                        texture=ImageTexture(DEF='grill',url=["grill.png","../../Weapons/Guns/grill.png","../../../Weapons/Guns/grill.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18-TextureMapping/grill.png"]),
                        textureTransform=TextureTransform(center=(0.5,0.5),scale=(32,8))),
                      geometry=IndexedFaceSet(DEF='Screen',coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
                        coord=Coordinate(point=[(-1,-.4,0.1),(1,-.4,0.1),(1,.4,.1),(-1,.4,.1)]),
                        texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])))])])])]),
            Transform(translation=(-.2,-.75,0),
              children=[
              Shape(
                geometry=Box(size=(1.5,.2,1.5)),
                appearance=Appearance(
                  material=Material(diffuseColor=(.4,.4,.4),shininess=1)))])]),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClock',toField='set_fraction',toNode='NetPositInterp'),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClock',toField='set_fraction',toNode='NetOrientInterp'),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClock',toField='set_fraction',toNode='NetPositScale'),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClock',toField='set_fraction',toNode='NettingScale'),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClockStbd',toField='set_fraction',toNode='NetPositScaleStbd'),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClockStbd',toField='set_fraction',toNode='NetPositInterpStbd'),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClockStbd',toField='set_fraction',toNode='NetOrientInterpStbd'),
          ROUTE(fromField='fraction_changed',fromNode='NetPositClockStbd',toField='set_fraction',toNode='NettingScaleStbd'),
          ROUTE(fromField='value_changed',fromNode='NetPositInterp',toField='set_translation',toNode='NetTransform'),
          ROUTE(fromField='value_changed',fromNode='NetOrientInterp',toField='set_rotation',toNode='NetTransform'),
          ROUTE(fromField='value_changed',fromNode='NetPositScale',toField='scale',toNode='NetTransform'),
          ROUTE(fromField='value_changed',fromNode='NettingScale',toField='set_scale',toNode='NettingTransform'),
          ROUTE(fromField='value_changed',fromNode='NettingScaleStbd',toField='set_scale',toNode='NettingTransformStbd'),
          ROUTE(fromField='value_changed',fromNode='NetPositInterpStbd',toField='set_translation',toNode='NetTransformStbd'),
          ROUTE(fromField='value_changed',fromNode='NetOrientInterpStbd',toField='set_rotation',toNode='NetTransformStbd'),
          ROUTE(fromField='value_changed',fromNode='NetPositScaleStbd',toField='scale',toNode='NetTransformStbd')])])),
    ProtoInstance(DEF='myLauncher',name='NetLauncher'),
    TouchSensor(DEF='myTouch',description='touch to activate'),
    ROUTE(fromField='touchTime',fromNode='myTouch',toField='startLaunchToStbd',toNode='myLauncher'),
    Transform(translation=(0,-1,0),
      children=[
      Shape(DEF='TestWater',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Box(size=(150,.1,150)))]),
    Transform(rotation=(1,0,0,.78),
      children=[
      Transform(DEF='FinalNetTransform',scale=(.01,.01,.01),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0),shininess=1)),
          geometry=Cylinder(height=1.4,radius=.12)),
        Transform(DEF='FinalNettingTransform',rotation=(0,1,0,1.57),scale=(.01,.01,.01),translation=(0,0,1),
          #  note can't DEF/USE nodes from within ProtoDeclare to parent scene 
          children=[
          Shape(DEF='FinalNETTING',
            appearance=Appearance(
              material=Material(),
              texture=ImageTexture(url=["grill.png","../../../Weapons/Guns/grill.png","../../Weapons/Guns/grill.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18-TextureMapping/grill.png"]),
              textureTransform=TextureTransform(center=(0.5,0.5),scale=(32,8))),
            geometry=IndexedFaceSet(DEF='FinalScreen',coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
              coord=Coordinate(point=[(-1,-.4,0.1),(1,-.4,0.1),(1,.4,.1),(-1,.4,.1)]),
              texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])))])])]),
    ROUTE(fromField='netTranslation',fromNode='myLauncher',toField='set_translation',toNode='FinalNetTransform'),
    ROUTE(fromField='netScale',fromNode='myLauncher',toField='set_scale',toNode='FinalNetTransform'),
    ROUTE(fromField='nettingScale',fromNode='myLauncher',toField='set_scale',toNode='FinalNettingTransform'),
    ROUTE(fromField='netOrientation',fromNode='myLauncher',toField='set_rotation',toNode='FinalNetTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NonLethalNetLauncherPrototype.py")
