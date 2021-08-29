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
    meta(content='Figure03_10SpaceStation.x3d',name='title'),
    meta(content='Figure 3.10, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch03/03fig10.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='6 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Space Station, or spark plug? You decide... Also see Figure10_05MultiColoredSpaceStation.x3d, Figure10_06PulsatingSpaceStation.x3d, Figure10_10SemiTransparentSpaceStation.x3d and Figure10_11AnimatingTransparencySpaceStation.x3d',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter03Shapes/Figure03_10SpaceStation.x3d',name='identifier'),
    meta(content='../Chapter10Materials/Figure10_05MultiColoredSpaceStation.x3d',name='reference'),
    meta(content='../Chapter10Materials/Figure10_06PulsatingSpaceStation.x3d',name='reference'),
    meta(content='../Chapter10Materials/Figure10_10SemiTransparentSpaceStation.x3d',name='reference'),
    meta(content='../Chapter10Materials/Figure10_11AnimatingTransparencySpaceStation.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure03_10SpaceStation.x3d'),
    Viewpoint(description='View from 80m away',position=(0,0,80)),
    Viewpoint(description='Default viewpoint at (0 0 10) is way too close!! That is a bad place to be, provide a replacement viewpoint instead.'),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='WHITE',diffuseColor=(1,1,1))),
        geometry=Box(size=(10,10,10))),
      Shape(
        appearance=Appearance(
          material=Material(USE='WHITE')),
        geometry=Sphere(radius=7)),
      Shape(
        appearance=Appearance(
          material=Material(USE='WHITE')),
        geometry=Cylinder(height=0.5,radius=12.5)),
      Shape(
        appearance=Appearance(
          material=Material(USE='WHITE')),
        geometry=Cylinder(height=20,radius=4)),
      Shape(
        appearance=Appearance(
          material=Material(USE='WHITE')),
        geometry=Cylinder(height=30,radius=3)),
      Shape(
        appearance=Appearance(
          material=Material(USE='WHITE')),
        geometry=Cylinder(height=60))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure03_10SpaceStation.py")
