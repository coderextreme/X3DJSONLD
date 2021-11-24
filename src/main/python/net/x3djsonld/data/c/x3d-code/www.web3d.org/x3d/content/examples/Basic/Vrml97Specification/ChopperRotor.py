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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ChopperRotor.x3d',name='title'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 June 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='VRML 97 specification example: Rotor node provides animation and serves as an ExternProtoDeclare example.',name='description'),
    meta(content='originals/chopperrotor.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.16 Chopper',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.16',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/ChopperRotor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ChopperRotor.x3d'),
    Group(
      children=[
      Transform(rotation=(0.25098816,-0.6844724,0.6844724,2.64978),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.4,0),(0.002653,0.097911),(-0.4,0),(-0.010374,-0.080121),(0.4,0)],orientation=[(0,-1,0,0.349065),(0,-1,0,0.261799),(0,-1,0,0.174532),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,1,0,0.087266),(0,1,0,0.174532),(0,1,0,0.261799)],scale=[(0.907089,0.2),(0.907088,0.6),(0.751411,0.6),(0.206542,0.4),(0.459517,0.8),(0.167623,0.4),(0.751412,0.6),(0.926548,0.6),(0.907089,0.2)],solid=False,spine=[(0,-1.6,0),(0,-1.44152,0),(0,-1.24754,0),(0,-0.229174,0),(0,-0.010952,0),(0,0.183023,0),(0,1.17715,0),(0,1.37112,0),(0,1.6,0)]),
          appearance=Appearance(
            material=Material(),))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ChopperRotor.py")
