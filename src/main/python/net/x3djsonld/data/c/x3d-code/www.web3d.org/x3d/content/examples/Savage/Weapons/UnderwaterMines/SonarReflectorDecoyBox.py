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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='SonarReflectorDecoyBox.x3d',name='title'),
    meta(content='Sonar reflector made of aluminum plates welded together, used as a minelike object decoy.',name='description'),
    meta(content='SonarReflectorRockToss.jpg',name='Image'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='21 March 1999',name='created'),
    meta(content='22 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SonarReflectorDecoyBox.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Sonar reflector decoy box',orientation=(0,1,0,-0.32),position=(-0.3,0,0.9)),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='BLUE_ALUMINUM',diffuseColor=(0.6,0.6,0.9))),
        geometry=Box(size=(0.5,0.5,0.01))),
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(size=(0.01,0.5,0.5))),
      #  Rotate center plate 45 degrees about y axis 
      Transform(rotation=(0,1,0,0.785),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Box(size=(0.35,0.01,0.35)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SonarReflectorDecoyBox.py")
