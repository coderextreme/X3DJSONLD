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
    meta(content='AGM65MaverickViewAnchors.x3d',name='title'),
    meta(content='AGM-65M Maverick Missile with anchors points for selective viewpoints, and touch sensors for user interaction.',name='description'),
    meta(content='Al Shaffer',name='creator'),
    meta(content='20 January 2005',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/AGM65MaverickViewAnchors.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Viewpoint nodes set various views, based on selection of Anchor points in the world. 
    children=[
    Viewpoint(DEF='MISSILE_INITIAL_VIEW',description='Initial view of Missile',position=(-50,0,100)),
    Viewpoint(DEF='MISSILE_CLOSEUP',description='Closeup view of missile',position=(0.0,0.0,13.0)),
    Viewpoint(DEF='MISSILE_AFT',description='Aft view of missile, for launch',orientation=(-0.1,0.9,0.1,1.57),position=(22.0,5.0,5.0)),
    Anchor(description='Click for closeup viewpoint of missile',url=["#MISSILE_CLOSEUP"],
      children=[
      Transform(rotation=(1,0,0,-1.1),translation=(-4.0,-2.5,15.0),
        children=[
        Collision(enabled=False,
          children=[
          Shape(
            geometry=Cone(bottomRadius=.5,height=2.5),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.4,0.8),emissiveColor=(0,0.1,0.2),shininess=.4,specularColor=(0.8,0.8,0.8),transparency=.5)))])])]),
    Anchor(description='Click for aft view of missile (for cool launch view)',url=["#MISSILE_AFT"],
      children=[
      Transform(rotation=(0,0,1,1.57),translation=(9.5,0.0,0.0),
        children=[
        Collision(enabled=False,
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.5,height=2.5),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.8,0.4),emissiveColor=(0,0.2,0.1),shininess=.4,specularColor=(0.8,0.8,0.8),transparency=.5)))])])]),
    Anchor(description='Click to return to initial view of missile',url=["#MISSILE_INITIAL_VIEW"],
      children=[
      Transform(rotation=(1,0,0,3.14),translation=(0.0,5.0,0.0),
        children=[
        Collision(enabled=False,
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.5,height=2.5),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0),emissiveColor=(0.2,0,0),shininess=.4,specularColor=(0.8,0.8,0.8),transparency=.5)))])])]),
    Background(backUrl=["urn:web3d:media:textures/panoramas/ocean_4_back.jpg","ocean_4_back.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_4_back.jpg","http://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/ocean_4_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_4_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_4_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_4_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_4_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/ocean_4_bottom.jpg","ocean_4_bottom.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_4_bottom.jpg","http://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/ocean_4_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_4_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_4_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_4_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_4_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/ocean_4_front.jpg","ocean_4_front.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_4_front.jpg","http://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/ocean_4_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_4_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_4_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_4_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_4_front.jpg"],groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],leftUrl=["urn:web3d:media:textures/panoramas/ocean_4_left.jpg","ocean_4_left.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_4_left.jpg","http://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/ocean_4_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_4_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_4_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_4_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_4_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/ocean_4_right.jpg","ocean_4_right.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_4_right.jpg","http://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/ocean_4_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_4_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_4_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_4_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_4_right.jpg"],skyAngle=[0.1,0.15,1.309,1.571],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)],topUrl=["urn:web3d:media:textures/panoramas/ocean_4_top.jpg","ocean_4_top.jpg","http://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_4_top.jpg","http://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/ocean_4_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_4_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_4_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_4_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_4_top.jpg"]),
    Group(
      children=[
      Transform(DEF='MISSILE_TRANSFORM',
        children=[
        Inline(DEF='AGM65Maverick',url=["ShafferAGM65Maverick.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/ShafferAGM65Maverick.x3d","ShafferAGM65Maverick.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/ShafferAGM65Maverick.wrl"])]),
      #  Define sensors and interpolator for missile rotation. 
      TouchSensor(DEF='MyTouchSensor',description='touch sensor: hover mouse to rotate missile'),
      TimeSensor(DEF='CLOCK1',cycleInterval=4,enabled=False,loop=True),
      OrientationInterpolator(DEF='RotateInterpolator',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(1.0,0.0,0.0,0.0),(1.0,0.0,0.0,-1.57),(1.0,0.0,0.0,-3.14),(1.0,0.0,0.0,-4.71),(1.0,0.0,0.0,-6.28)]),
      #  Define sensors and interpolators for missile launch, travel, and rotation. 
      TouchSensor(DEF='MyClickSensor',description='touch sensor: click to launch missile'),
      TimeSensor(DEF='CLOCK2',cycleInterval=4),
      PositionInterpolator(DEF='PathInterpolator',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,0.0,0.0),(-75.0,0.0,0.0),(-150.0,0.0,0.0),(-225.0,0.0,0.0),(0.0,0.0,0.0)]),
      OrientationInterpolator(DEF='SpinInterpolator',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(1.0,0.0,0.0,0.0),(1.0,0.0,0.0,-1.57),(1.0,0.0,0.0,-3.14),(1.0,0.0,0.0,-4.71),(1.0,0.0,0.0,-6.28)])]),
    #  Set ROUTE for missile to launch when clicked, and rotate during travel. 
    ROUTE(fromField='touchTime',fromNode='MyClickSensor',toField='set_startTime',toNode='CLOCK2'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='PathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='PathInterpolator',toField='set_translation',toNode='MISSILE_TRANSFORM'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='SpinInterpolator'),
    ROUTE(fromField='value_changed',fromNode='SpinInterpolator',toField='set_rotation',toNode='MISSILE_TRANSFORM'),
    #  Set ROUTE for missile to rotate longitudinally when touched. 
    ROUTE(fromField='isOver',fromNode='MyTouchSensor',toField='set_enabled',toNode='CLOCK1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='RotateInterpolator'),
    ROUTE(fromField='value_changed',fromNode='RotateInterpolator',toField='set_rotation',toNode='MISSILE_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AGM65MaverickViewAnchors.py")
