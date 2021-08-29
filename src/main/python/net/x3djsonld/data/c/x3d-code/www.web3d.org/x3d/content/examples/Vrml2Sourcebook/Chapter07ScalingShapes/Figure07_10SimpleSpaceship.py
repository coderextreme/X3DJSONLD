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
    meta(content='Figure07_10SimpleSpaceship.x3d',name='title'),
    meta(content='Figure 7.10, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch07/07fig10.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='8 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A simple spaceship built with shapes in scaled coordinate systems, with coordinate axes superimposed to show X3D/VRML directions',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter07ScalingShapes/Figure07_10SimpleSpaceship.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure07_10SimpleSpaceship.x3d'),
    Viewpoint(description='Spaceship',position=(0,0,8)),
    #  Wing 
    Transform(DEF='Wing',scale=(0.5,1.0,1.5),
      children=[
      Shape(
        geometry=Cylinder(height=0.025),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.2,0),emissiveColor=(0.1,0,0),specularColor=(1,0.1,0))))]),
    #  Fuselage 
    Transform(DEF='Fuselage',scale=(2,0.2,0.5),
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.6,0),emissiveColor=(0.1,0,0),specularColor=(1,0.1,0))))]),
    #  Wing detail and fusalage dome 
    Transform(scale=(0.3,2,0.75),
      children=[
      Transform(USE='Wing'),
      Transform(USE='Fuselage')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure07_10SimpleSpaceship.py")
