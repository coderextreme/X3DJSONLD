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
    meta(content='ref1.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This is a collateral file used in other tests of this node.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref1.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ref1.x3d'),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),emissiveColor=(1,0,0))),
        geometry=Box(size=(8,1.5,3)))]),
    Transform(translation=(0,2.2,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["../../vts.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.jpg"]),
          material=Material(diffuseColor=(0,1,0))),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(0,2.7,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1))),
        geometry=Cylinder(radius=0.05))]),
    Transform(translation=(0,4,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),emissiveColor=(1,0,0))),
        geometry=Box(size=(8,0.5,3)))]),
    Transform(translation=(0,-0.87,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.7,0.2),emissiveColor=(1,0.7,0.2))),
        geometry=Box(size=(11,0.04,9)))]),
    Group(
      children=[
      Transform(translation=(0,-0.75,3),
        children=[
        Shape(DEF='the-step',
          appearance=Appearance(
            material=Material(),),
          geometry=Box(size=(0.9,0.3,0.5)))]),
      Transform(translation=(0,-0.45,2.78),
        children=[
        Shape(DEF='counter-step',
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1))),
          geometry=Box(size=(0.9,0.3,0.01)))]),
      Transform(translation=(0,-0.43,2.5),
        children=[
        Shape(USE='the-step')]),
      Transform(translation=(0,-0.13,2.28),
        children=[
        Shape(USE='counter-step')]),
      Transform(translation=(0,-0.09,2.06),
        children=[
        Shape(USE='the-step')]),
      Transform(translation=(0,0.2,1.84),
        children=[
        Shape(USE='counter-step')]),
      Transform(translation=(0,0.25,1.62),
        children=[
        Shape(USE='the-step')])]),
    Transform(translation=(-3.5,2,1.1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=4,radius=0.15))]),
    Transform(translation=(-3.3,2,-1.1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=4,radius=0.15))]),
    Transform(translation=(3.5,2,1.1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=4,radius=0.15))]),
    Transform(translation=(3.3,2,-1.1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=4,radius=0.15))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ref1.py")
