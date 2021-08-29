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
    meta(content='ScalarInterpolatorExample.x3d',name='title'),
    meta(content='Demonstrate use of ScalarInterpolator to animate transparency.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='28 January 2008',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2007',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/ScalarInterpolatorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ScalarInterpolator.x3d'),
    Transform(translation=(0,-1,0),
      children=[
      Shape(
        geometry=Sphere(radius=2),
        appearance=Appearance(
          material=Material(DEF='SphereMaterial',diffuseColor=(0.941176,0.027451,0))))]),
    #  note that final value equals first value in keyValue array in order to support smooth looping 
    ScalarInterpolator(DEF='TransparencyAnimator',key=[0,0.5,1],keyValue=[0,1,0]),
    TimeSensor(DEF='AnimationClock',cycleInterval=8,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='TransparencyAnimator'),
    ROUTE(fromField='value_changed',fromNode='TransparencyAnimator',toField='transparency',toNode='SphereMaterial'),
    #  notice that Text appears later in scene although it is located above Sphere 
    Transform(translation=(0,1.5,0),
      children=[
      Shape(
        geometry=Text(string=["Animating transparency","using ScalarInterpolator"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(DEF='TextAppearance',
          material=Material(diffuseColor=(0,0.7,0.7))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ScalarInterpolatorExample.py")
