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

print('*** Lattice Xvl nodes were an experimental extensibility effort in 2002 and are not supported in ISO-standard X3D. Exiting.')
import sys
sys.exit()
###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='XvlShellAttributeNumberOfDivisions.x3d',name='title'),
    meta(content='Examples of XvlShell numberOfDivisions attribute values.',name='description'),
    meta(content='Marc Jablonski',name='creator'),
    meta(content='23 November 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test X3D DTD experimental extensions mechanisms, the XVL nodes are not legal X3D',name='error'),
    meta(content='readme.txt',name='reference'),
    meta(content='docs/LatticeXvl/LatticeXvlOverview.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/docs/LatticeXvl/LatticeXvlOverview.html',name='reference'),
    meta(content='http://www.xvl3d.com',name='reference'),
    meta(content='Lattice XVL parametric geometry X3D VRML',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/LatticeXvl/XvlShellAttributeNumberOfDivisions.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='XvlShellAttributeNumberOfDivisions.x3d'),
    Background(groundColor=[(0,.1,.2)],skyColor=[(0,.1,.2)]),
    Transform(translation=(0,1.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1))),
        geometry=Text(string=["XvlShell Number Of Divisions"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))]),
    Transform(translation=(-3,-1,0),
      children=[
      Transform(translation=(0,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(1,1,1))),
          geometry=Text(maxExtent=2,string=["numberOfDivisions = 2"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.5,1,1))),
        geometry=XvlShell(faceCoordIndex=[3,7,6,2,-1,7,3,1,5,-1,6,4,0,2,-1,1,3,2,0,-1,5,1,0,4,-1,7,5,4,6,-1],numberOfDivisions=2,shellType='LATTICE_MESH',
          coord=Coordinate(DEF='MESH_COORD',point=[(-1,-1,-1),(-1,-1,1),(-1,1,-1),(-1,1,1),(1,-1,-1),(1,-1,1),(1,1,-1),(1,1,1)]))),
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1))),
        geometry=IndexedLineSet(coordIndex=[3,7,6,2,-1,7,3,1,5,-1,6,4,0,2,-1,1,3,2,0,-1,5,1,0,4,-1,7,5,4,6,-1],
          coord=Coordinate(USE='MESH_COORD')))]),
    Transform(translation=(0,-1,0),
      children=[
      Transform(translation=(0,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(1,1,1))),
          geometry=Text(maxExtent=2,string=["numberOfDivisions = 4"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.5,1,1))),
        geometry=XvlShell(faceCoordIndex=[3,7,6,2,-1,7,3,1,5,-1,6,4,0,2,-1,1,3,2,0,-1,5,1,0,4,-1,7,5,4,6,-1],numberOfDivisions=4,shellType='LATTICE_MESH',
          coord=Coordinate(USE='MESH_COORD'))),
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1))),
        geometry=IndexedLineSet(coordIndex=[3,7,6,2,-1,7,3,1,5,-1,6,4,0,2,-1,1,3,2,0,-1,5,1,0,4,-1,7,5,4,6,-1],
          coord=Coordinate(USE='MESH_COORD')))]),
    Transform(translation=(3,-1,0),
      children=[
      Transform(translation=(0,1.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(1,1,1))),
          geometry=Text(maxExtent=2,string=["numberOfDivisions = 16"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.5,1,1))),
        geometry=XvlShell(faceCoordIndex=[3,7,6,2,-1,7,3,1,5,-1,6,4,0,2,-1,1,3,2,0,-1,5,1,0,4,-1,7,5,4,6,-1],numberOfDivisions=16,shellType='LATTICE_MESH',
          coord=Coordinate(USE='MESH_COORD'))),
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1))),
        geometry=IndexedLineSet(coordIndex=[3,7,6,2,-1,7,3,1,5,-1,6,4,0,2,-1,1,3,2,0,-1,5,1,0,4,-1,7,5,4,6,-1],
          coord=Coordinate(USE='MESH_COORD')))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for XvlShellAttributeNumberOfDivisions.py")
