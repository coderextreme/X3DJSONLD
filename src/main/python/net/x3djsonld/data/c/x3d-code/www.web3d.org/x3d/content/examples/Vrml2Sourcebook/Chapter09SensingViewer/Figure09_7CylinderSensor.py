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
    meta(content='Figure09_7CylinderSensor.x3d',name='title'),
    meta(content='Figure 9.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig07.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='12 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Two shapes that rotate about an axis when the viewer drags them, with coordinate axes superimposed to show X3D/VRML directions.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_7CylinderSensor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Click and drag to rotate shapes. Superfluous Group nodes removed. 
    #  First rotate to reorient the first CylinderSensor 
    children=[
    WorldInfo(title='Figure09_7CylinderSensor.x3d'),
    Transform(rotation=(1,0,0,1.57),translation=(-2,0,0),
      children=[
      CylinderSensor(DEF='FIRST_CYLINDERSENSOR',description='Click and drag to rotate',maxAngle=1.57,minAngle=-0.78),
      Transform(DEF='FIRST_TRANSFORM',
        #  Note that we are connecting a rotation output to a rotation input in these ROUTEs. 
        children=[
        ROUTE(fromField='rotation_changed',fromNode='FIRST_CYLINDERSENSOR',toField='set_rotation',toNode='FIRST_TRANSFORM'),
        #  Keep transparent user-interface geometry in this rotated CylinderSensor coordinate frame 
        Transform(DEF='TRANSPARENT_CYLINDER_TRANSFORM',
          children=[
          Shape(
            geometry=Cylinder(height=.5),
            appearance=Appearance(
              material=Material(diffuseColor=(.7,.7,.7),transparency=.5)))]),
        #  Now restore original Y=up coordinate frame prior to drawing actual geometry 
        Transform(rotation=(1,0,0,-1.57),
          children=[
          Shape(
            geometry=Box(size=(1,3,1)),
            appearance=Appearance(DEF='FIRST_APPEARANCE',
              material=Material(diffuseColor=(.9,.9,.1),emissiveColor=(.2,.2,.05))))])])]),
    #  Note this second example uses a simpler pattern: since we are not rotating the axis of the CylinderSensor away from the vertical, we do not need to change that rotation back again for the target geometry. 
    Transform(DEF='SECOND_TRANSFORM',translation=(2,0,0),
      children=[
      CylinderSensor(DEF='SECOND_CYLINDERSENSOR',description='Click and drag to rotate'),
      ROUTE(fromField='rotation_changed',fromNode='SECOND_CYLINDERSENSOR',toField='set_rotation',toNode='SECOND_TRANSFORM'),
      #  Keep transparent user-interface geometry in this rotated CylinderSensor coordinate frame 
      Transform(USE='TRANSPARENT_CYLINDER_TRANSFORM'),
      #  Rotate actual geometry 
      Transform(rotation=(1,0,0,0.52),
        children=[
        Shape(
          geometry=Cone(),
          appearance=Appearance(USE='FIRST_APPEARANCE'))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_7CylinderSensor.py")
