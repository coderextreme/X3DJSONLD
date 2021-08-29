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
    meta(content='ProjectileInterpolatorArena.x3d',name='title'),
    meta(content='A projectile motion application which displays range and max height values accoding to Vi and theta inputs. Calculations for drag force with air density are also taken into account.',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='10 December 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ProjectileInterpolatorArena.x3d'),
    ExternProtoDeclare(name='ProjectileSliderBar',url=["ProjectileSliderBarPrototype.wrl#ProjectileSliderBar","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.wrl#ProjectileSliderBar","ProjectileSliderBarPrototype.x3d#ProjectileSliderBar","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileSliderBarPrototype.x3d#ProjectileSliderBar"],
      field=[
      field(accessType='initializeOnly',name='name',type='MFString'),
      field(accessType='initializeOnly',name='length',type='SFFloat'),
      field(accessType='initializeOnly',name='width',type='SFFloat'),
      field(accessType='initializeOnly',name='maxValue',type='SFFloat'),
      field(accessType='initializeOnly',name='minValue',type='SFFloat'),
      field(accessType='initializeOnly',name='barColor',type='SFColor'),
      field(accessType='initializeOnly',name='pointerColor',type='SFColor'),
      field(accessType='initializeOnly',name='nameColor',type='SFColor'),
      field(accessType='initializeOnly',name='currentValueColor',type='SFColor'),
      field(accessType='outputOnly',name='currentValueInt',type='SFInt32'),
      field(accessType='outputOnly',name='currentValueFloat',type='SFFloat'),
      field(accessType='initializeOnly',name='precision',type='SFInt32'),
      field(accessType='initializeOnly',name='translation',type='SFVec3f')]),
    ExternProtoDeclare(name='ProjectileInterpolator',url=["ProjectileInterpolatorPrototype.wrl#ProjectileInterpolator","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.wrl#ProjectileInterpolator","ProjectileInterpolatorPrototype.x3d#ProjectileInterpolator","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.x3d#ProjectileInterpolator"],
      field=[
      field(accessType='initializeOnly',name='Vi',type='SFFloat'),
      field(accessType='initializeOnly',name='theta',type='SFFloat'),
      field(accessType='initializeOnly',name='B_m',type='SFFloat'),
      field(accessType='initializeOnly',name='dt',type='SFFloat'),
      field(accessType='initializeOnly',name='fraction',type='SFFloat'),
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='inputOnly',name='set_theta',type='SFFloat'),
      field(accessType='inputOnly',name='set_Vi',type='SFFloat'),
      field(accessType='outputOnly',name='value_changed',type='SFVec3f')]),
    Viewpoint(DEF='FirstView',description='First view',position=(60,15,150)),
    Background(backUrl=["urn:web3d:media:textures/panoramas/space_1_back.jpg","space_1_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/space_1_bottom.jpg","space_1_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/space_1_front.jpg","space_1_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_front.jpg"],groundAngle=[1.309,1.570796],groundColor=[(0,0,0)],leftUrl=["urn:web3d:media:textures/panoramas/space_1_left.jpg","space_1_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/space_1_right.jpg","space_1_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_right.jpg"],skyAngle=[1.309,1.571],topUrl=["urn:web3d:media:textures/panoramas/space_1_top.jpg","space_1_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_top.jpg"]),
    DirectionalLight(direction=(0,-1,0),intensity=0.5),
    ProtoInstance(DEF='SliderVelocity',name='ProjectileSliderBar',
      fieldValue=[
      fieldValue(name='name',value=["Vi"]),
      fieldValue(name='length',value=1.5),
      fieldValue(name='width',value=1),
      fieldValue(name='maxValue',value=30),
      fieldValue(name='minValue',value=0),
      fieldValue(name='barColor',value=(0,0,1)),
      fieldValue(name='pointerColor',value=(1,1,0)),
      fieldValue(name='nameColor',value=(1,0,1)),
      fieldValue(name='precision',value=1),
      fieldValue(name='translation',value=(-0.04,0.06,0.0))]),
    ProtoInstance(DEF='SliderAngle',name='ProjectileSliderBar',
      fieldValue=[
      fieldValue(name='name',value=["Theta"]),
      fieldValue(name='length',value=1.5),
      fieldValue(name='width',value=1),
      fieldValue(name='maxValue',value=90),
      fieldValue(name='minValue',value=0),
      fieldValue(name='barColor',value=(1,0,0)),
      fieldValue(name='pointerColor',value=(1,1,0)),
      fieldValue(name='nameColor',value=(0,1,1)),
      fieldValue(name='precision',value=1),
      fieldValue(name='translation',value=(-0.04,0.05,0.0))]),
    ProtoInstance(DEF='TimeCycle',name='ProjectileSliderBar',
      fieldValue=[
      fieldValue(name='name',value=["CycleInterval"]),
      fieldValue(name='length',value=1.5),
      fieldValue(name='width',value=1),
      fieldValue(name='maxValue',value=5),
      fieldValue(name='minValue',value=1),
      fieldValue(name='barColor',value=(0,1,0)),
      fieldValue(name='pointerColor',value=(1,1,0)),
      fieldValue(name='nameColor',value=(0,0.3,1)),
      fieldValue(name='precision',value=1),
      fieldValue(name='translation',value=(-0.04,0.04,0.0))]),
    ProtoInstance(DEF='ProjectileInterpolator',name='ProjectileInterpolator'),
    ROUTE(fromField='currentValueFloat',fromNode='SliderVelocity',toField='set_Vi',toNode='ProjectileInterpolator'),
    ROUTE(fromField='currentValueFloat',fromNode='SliderAngle',toField='set_theta',toNode='ProjectileInterpolator'),
    Transform(
      children=[
      Group(DEF='HUDGroup',
        children=[
        Collision(enabled=False,
          children=[
          ProximitySensor(DEF='HudProx',size=(1000000,1000000,1000000)),
          Transform(DEF='HudTransform',
            children=[
            Transform(translation=(0.05,0.06,-0.2),
              children=[
              Transform(DEF='TrajectoryTextTransform',
                children=[
                Shape(
                  geometry=Text(DEF='RangeText',string=["Range 0.0"],
                    fontStyle=FontStyle(size=0.01,style_='BOLD')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.9,0.7,0.0))))]),
              Transform(translation=(0.0,-0.015,0.0),
                children=[
                Shape(
                  geometry=Text(DEF='HeightText',string=["Max Height 0.0"],
                    fontStyle=FontStyle(size=0.01,style_='BOLD')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,1,0))))])])])])])]),
    ROUTE(fromField='position_changed',fromNode='HudProx',toField='set_translation',toNode='HudTransform'),
    ROUTE(fromField='position_changed',fromNode='HudProx',toField='center',toNode='HudProx'),
    ROUTE(fromField='orientation_changed',fromNode='HudProx',toField='set_rotation',toNode='HudTransform'),
    Script(DEF='ValueDisplayer',directOutput=True,
      field=[
      field(accessType='inputOnly',name='setTextValues',type='SFVec3f'),
      field(accessType='inputOnly',name='reset',type='SFBool'),
      field(accessType='initializeOnly',name='RangeText',type='SFNode',
        children=[
        Text(USE='RangeText')]),
      field(accessType='initializeOnly',name='HeightText',type='SFNode',
        children=[
        Text(USE='HeightText')])]),
    ROUTE(fromField='value_changed',fromNode='ProjectileInterpolator',toField='setTextValues',toNode='ValueDisplayer'),
    Transform(translation=(0.0,-0.7,0.0),
      children=[
      Collision(
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["grass_1.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass_1.jpg","https://www.web3d.org/WorkingGroups/media/textures/nature/grass_1.jpg"]),
            textureTransform=TextureTransform(scale=(8,4))),
          geometry=ElevationGrid(height=[-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75,-0.75],xDimension=4,xSpacing=40,zSpacing=25))])]),
    Transform(translation=(0,0,12.5),
      children=[
      Transform(DEF='BallTransform',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Sphere(radius=1.5)),
        Viewpoint(description='BallView',position=(0,10,70)),
        TouchSensor(DEF='HitSensor')])]),
    TimeSensor(DEF='Timer',cycleInterval=3.5),
    ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='ProjectileInterpolator'),
    ROUTE(fromField='touchTime',fromNode='HitSensor',toField='set_startTime',toNode='Timer'),
    ROUTE(fromField='isActive',fromNode='HitSensor',toField='reset',toNode='ValueDisplayer'),
    ROUTE(fromField='value_changed',fromNode='ProjectileInterpolator',toField='set_translation',toNode='BallTransform'),
    Script(DEF='TimeConverter',directOutput=True,
      field=[
      field(accessType='initializeOnly',name='TimerNode',type='SFNode',
        children=[
        TimeSensor(USE='Timer')]),
      field(accessType='inputOnly',name='setTime',type='SFFloat')]),
    ROUTE(fromField='currentValueFloat',fromNode='TimeCycle',toField='setTime',toNode='TimeConverter')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProjectileInterpolatorArena.py")
