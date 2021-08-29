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
    meta(content='PositionOrientationInterpolatorsExample.x3d',name='title'),
    meta(content='Demonstrate use of PositionInterpolator and OrientationInterpolator to animate object motion.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='29 January 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='PositionOrientationInterpolatorsExample.mp4',name='MovingImage'),
    meta(content='PositionOrientationInterpolatorsExampleTraced.x3d',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2007',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorExample.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/PositionOrientationInterpolatorsExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PositionOrientationInterpolatorsExample.x3d'),
    Viewpoint(description='Animation demo',orientation=(1,0,0,-0.588003),position=(0,8,12)),
    Viewpoint(centerOfRotation=(5,0.1,5),description='View from above',orientation=(1,0,0,-1.570796),position=(0,15,0)),
    Transform(DEF='Pointer',translation=(1,0,1),
      children=[
      Transform(rotation=(1,0,0,1.57),
        children=[
        Shape(
          geometry=Cone(bottomRadius=0.5,height=1.5),
          appearance=Appearance(
            material=Material(DEF='ConeMaterial',diffuseColor=(0.427451,1,0.160784))))])]),
    Shape(DEF='Floor',
      geometry=Box(size=(12,0.05,12)),
      appearance=Appearance(
        material=Material(diffuseColor=(0,0.262745,0.941176)))),
    #  note that final value equals first value in keyValue array in order to support smooth looping 
    #  first drive around the location 
    PositionInterpolator(DEF='PositionAnimator',key=[0,0.2,0.25,0.45,0.5,0.7,0.75,0.95,1],keyValue=[(-4,0,-4),(-4,0,4),(-4,0,4),(4,0,4),(4,0,4),(4,0,-4),(4,0,-4),(-4,0,-4),(-4,0,-4)]),
    ROUTE(fromField='value_changed',fromNode='PositionAnimator',toField='set_translation',toNode='Pointer'),
    #  then rotate the pointer to match next direction while paused at each position 
    OrientationInterpolator(DEF='OrientationAnimator',key=[0,0.2,0.25,0.45,0.5,0.7,0.75,0.95,1],keyValue=[(0,1,0,0),(0,1,0,0),(0,1,0,1.57),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,4.71),(0,1,0,6.283)]),
    #  final rotation value is 2pi rather than 0 so that rotation animation is smooth, not flip-flopping 
    ROUTE(fromField='value_changed',fromNode='OrientationAnimator',toField='set_rotation',toNode='Pointer'),
    #  put TimeSensor clock last so that animation design pattern and ROUTE events flow upward 
    TimeSensor(DEF='AnimationClock',cycleInterval=10,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='PositionAnimator'),
    ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='OrientationAnimator'),
    #  notice that explanatory Text is placed later in scene although it is graphically located above driving plane 
    Transform(translation=(0,4,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["Animation using PositionInterpolator","and OrientationInterpolator"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)),
          appearance=Appearance(
            material=Material(),))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PositionOrientationInterpolatorsExample.py")
