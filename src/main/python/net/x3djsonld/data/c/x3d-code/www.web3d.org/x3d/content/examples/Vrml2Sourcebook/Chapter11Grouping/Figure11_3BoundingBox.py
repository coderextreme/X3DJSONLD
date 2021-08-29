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
    meta(content='Figure11_3BoundingBox.x3d',name='title'),
    meta(content='Figure 11.3, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch11/11fig03.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='16 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A group of shapes within a bounding box.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter11Grouping/Figure11_3BoundingBox.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure11_3BoundingBox.x3d'),
    Viewpoint(description='A group of shapes within a bounding box.',orientation=(1,0,0,-0.4),position=(0,20,50)),
    Group(bboxSize=(25,25,25),
      children=[
      Shape(
        geometry=Box(size=(25,2,2)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0)))),
      Shape(
        geometry=Box(size=(2,25,2)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0)))),
      Shape(
        geometry=Box(size=(2,2,25)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1)))),
      Shape(
        geometry=Box(size=(25.1,25.1,25.1)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.4,0.4),transparency=0.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure11_3BoundingBox.py")
