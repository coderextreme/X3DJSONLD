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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='KelpTankExternalLight.x3d',name='title'),
    meta(content='Topside light for Kelp Forest Exhibit.',name='description'),
    meta(content='Todd Gagnon and Mark A. Boyd',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='17 May 1998',name='created'),
    meta(content='20 December 2002',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='KelpTankExternalLights.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTankExternalLight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Model of light from top floor of the Monterey Bay Aquarium Kelp Forest DTG of last updated: 172230May98 Added: Updated: Modeled by: Todd Gagnon and Mark A. Boyd"],title='light1.0.wrl'),
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='Structure',
          material=Material(diffuseColor=(0.21569,0.21176,0.19608))),
        geometry=Cylinder(bottom=False,radius=0.05,top=False)),
      Transform(DEF='Arm',rotation=(0.0,0.0,1.0,-1.57),translation=(0.3,0.25,0.0),
        children=[
        Shape(
          appearance=Appearance(USE='Structure'),
          geometry=Cylinder(bottom=False,height=0.6,radius=0.05,top=False)),
        Transform(translation=(0.0,0.31,0.0),
          children=[
          Shape(
            appearance=Appearance(USE='Structure'),
            geometry=Sphere(radius=0.05))]),
        Transform(rotation=(0.0,0.0,1.0,1.57),translation=(-0.13,0.31,0.0),
          children=[
          Shape(
            appearance=Appearance(USE='Structure'),
            geometry=Cylinder(bottom=False,height=0.25,radius=0.05,top=False))])]),
      Transform(rotation=(0.0,1.0,0.0,3.14),
        children=[
        Transform(USE='Arm')]),
      Transform(translation=(0.0,-1.0,0.0),
        children=[
        Shape(
          appearance=Appearance(USE='Structure'),
          geometry=Box(size=(0.4,0.3,0.4)))]),
      Transform(DEF='Light',rotation=(1.0,0.0,0.0,0.7),translation=(0.0,1.1,0.1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.7843,0.8078,0.7922))),
          geometry=Box(size=(0.5,0.35,0.2)))]),
      Transform(translation=(0.6,-0.5,0.0),
        children=[
        Transform(USE='Light')]),
      Transform(translation=(-0.6,-0.5,0.0),
        children=[
        Transform(USE='Light')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KelpTankExternalLight.py")
