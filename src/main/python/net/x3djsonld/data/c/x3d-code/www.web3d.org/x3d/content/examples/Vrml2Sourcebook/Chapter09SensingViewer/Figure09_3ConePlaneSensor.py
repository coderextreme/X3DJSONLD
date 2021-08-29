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
    meta(content='Figure09_3ConePlaneSensor.x3d',name='title'),
    meta(content='Figure 9.3, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig03.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='9 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A Cone that translates in the vertical XY plane when the viewer drags it. Also see Figure 9.4 for comparison.',name='description'),
    meta(content='Figure09_4ConePlaneSensorConstrained.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_3ConePlaneSensor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Rotating Cube 
    children=[
    WorldInfo(title='Figure09_3ConePlaneSensor.x3d'),
    Group(
      children=[
      Transform(DEF='CUBE_TRANSFORM',
        children=[
        Shape(
          geometry=Cone(),
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),emissiveColor=(0,0,.5))))]),
      PlaneSensor(DEF='MyPlaneSensor',description='Dragged cone stays in vertical XY plane')]),
    #  Note that we are connecting a translation (Vec3F) output to a translation (Vec3F) input in this ROUTE. 
    ROUTE(fromField='translation_changed',fromNode='MyPlaneSensor',toField='set_translation',toNode='CUBE_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_3ConePlaneSensor.py")
