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
    meta(content='Figure02_1Hut.x3d',name='title'),
    meta(content='The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch02/02fig01.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='6 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Your first VRML world - a brown hut.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter02Introduction/Figure02_1Hut.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  This NavigationInfo node is added to many scenes, making examination of objects easier 
    children=[
    WorldInfo(title='Figure02_1Hut.x3d'),
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='BROWN',
          material=Material(diffuseColor=(0.8,0.6,0.3))),
        #  Default Cylinder height=2, centered about origin 
        geometry=Cylinder(radius=2)),
      Transform(translation=(0,2,0),
        children=[
        Shape(
          appearance=Appearance(USE='BROWN'),
          #  Default Cone height=2, centered about local origin 
          geometry=Cone(bottomRadius=2.5))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure02_1Hut.py")
