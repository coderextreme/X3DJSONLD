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
    meta(content='Figure09_8ClickDragTouchSensorPlaneSensor.x3d',name='title'),
    meta(content='Figure 9.8, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig08.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='12 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Two shapes that rotate about an axis when the viewer drags them, with coordinate axes superimposed to show X3D/VRML directions.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_8ClickDragTouchSensorPlaneSensor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Click and drag to spin and move shapes. Superfluous Group nodes removed. 
    children=[
    WorldInfo(title='Figure09_8ClickDragTouchSensorPlaneSensor.x3d'),
    Group(
      children=[
      Transform(DEF='ROTATING_SHAPE_TRANSFORM',
        children=[
        Shape(
          geometry=Box(size=(1.414,1.414,1.414)),
          appearance=Appearance(
            material=Material(diffuseColor=(.1,.9,.9),emissiveColor=(.05,.2,.2))))]),
      TouchSensor(DEF='CLICK_SENSOR',description='Touch to spin'),
      PlaneSensor(DEF='DRAG_SENSOR',description='Click to drag in plane',maxPosition=(4,4),minPosition=(-4,-4)),
      TimeSensor(DEF='CLOCK',cycleInterval=4,enabled=False,loop=True),
      OrientationInterpolator(DEF='SPIN_PATH',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,3.14),(0,1,0,6.28)])]),
    #  A small transparent box is added to indicate the virtual geometry of the PlaneSensor 
    Transform(DEF='TRANSPARENT_BOX_TRANSFORM',
      children=[
      Shape(
        geometry=Box(size=(8,8,0.1)),
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.7,.7),transparency=.5)))]),
    #  Note that we are connecting a chain of behavior engines in these ROUTEs. The event types passed via each ROUTE must each match. 
    ROUTE(fromField='isOver',fromNode='CLICK_SENSOR',toField='set_enabled',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='SPIN_PATH'),
    ROUTE(fromField='value_changed',fromNode='SPIN_PATH',toField='set_rotation',toNode='ROTATING_SHAPE_TRANSFORM'),
    ROUTE(fromField='translation_changed',fromNode='DRAG_SENSOR',toField='set_translation',toNode='ROTATING_SHAPE_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_8ClickDragTouchSensorPlaneSensor.py")
