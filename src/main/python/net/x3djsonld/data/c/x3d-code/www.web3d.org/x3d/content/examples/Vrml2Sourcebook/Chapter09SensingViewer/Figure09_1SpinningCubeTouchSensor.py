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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Figure09_1SpinningCubeTouchSensor.x3d',name='title'),
    meta(content='Figure 9.1, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig01.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='9 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A cube that spins when the cursor moves over it. Also see Figure 9.2 for comparison.',name='description'),
    meta(content='Figure09_2SpinningCubeTouchSensorClicked.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_1SpinningCubeTouchSensor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Rotating Cube 
    children=[
    WorldInfo(title='Figure09_1SpinningCubeTouchSensor.x3d'),
    Group(
      children=[
      Transform(DEF='CUBE_TRANSFORM',
        children=[
        Shape(
          geometry=Box(),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5))))]),
      TouchSensor(DEF='MyTouchSensor',description='Point at box to spin it'),
      TimeSensor(DEF='CLOCK',cycleInterval=4,enabled=False,loop=True),
      OrientationInterpolator(DEF='CubePathInterpolator',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)])]),
    #  Note that we are connecting a Boolean output to a Boolean input in the first ROUTE. 
    ROUTE(fromField='isOver',fromNode='MyTouchSensor',toField='set_enabled',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='CubePathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='CubePathInterpolator',toField='set_rotation',toNode='CUBE_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_1SpinningCubeTouchSensor.py")
