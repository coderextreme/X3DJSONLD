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
    meta(content='shininess.x3d',name='title'),
    meta(content='shininess-front.jpg',name='Image'),
    meta(content='shininess-rear.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='Test shininess for primitive geometry. This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Five shininess values of 0, .25 .50 .75 and 1.0 are applied from left to right for primitive geometry. The geometry consists of a row of 5 Cones, followed by a row of 5 Cylinders, 5 Spheres, then 5 Boxes. The result is a range of reflection that begins with minimum shininess on the left, to maximum shininess on the right for all four primitive types.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/Material/shininess.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='shininess.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Transform(translation=(-4,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0,specularColor=(1,1,1))),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(-2,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.25,specularColor=(1,1,1))),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(0,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.5,specularColor=(1,1,1))),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(2,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.75,specularColor=(1,1,1))),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(4,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=1,specularColor=(1,1,1))),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(-4,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0,specularColor=(1,1,1))),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(-2,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.25,specularColor=(1,1,1))),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(0,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.5,specularColor=(1,1,1))),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(2,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.75,specularColor=(1,1,1))),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(4,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=1,specularColor=(1,1,1))),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(-4,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0,specularColor=(1,1,1))),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(-2,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.25,specularColor=(1,1,1))),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(0,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.5,specularColor=(1,1,1))),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(2,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.75,specularColor=(1,1,1))),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(4,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=1,specularColor=(1,1,1))),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(-4,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0,specularColor=(1,1,1))),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(-2,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.25,specularColor=(1,1,1))),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(0,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.5,specularColor=(1,1,1))),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(2,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=0.75,specularColor=(1,1,1))),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(4,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1),shininess=1,specularColor=(1,1,1))),
        geometry=Cylinder(height=1,radius=0.5))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for shininess.py")
