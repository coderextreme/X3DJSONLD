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
    meta(content='SectorPanelAntenna.x3d',name='title'),
    meta(content='A simple sector panel antenna, produced as a MV4204 class project',name='description'),
    meta(content='Mark P. Sullivan',name='creator'),
    meta(content='21 July 2003',name='created'),
    meta(content='3 January 2004',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/SectorPanelAntenna.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/SectorPanelAntenna.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  First position and rotate viewpoint into positive-X-Y-Z octant using a Transform 
    children=[
    Transform(rotation=(0,1,0,0.758),translation=(4,1.5,4),
      children=[
      Viewpoint(description='Extruded half cylinder with end caps',orientation=(1,0,0,-0.2),position=(0,0,0))]),
    Transform(scale=(.5,.5,.5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(-0.43214,0.09999),(-0.43214,-0.0),(0.18214,-0.0),(0.18214,0.09999),(0.15,0.09999),(0.15,0.02692),(0.07857,0.02692),(-0.04642,0.20769),(-0.20714,0.20769),(-0.33571,0.03076),(-0.40714,0.03076),(-0.40714,0.09615),(-0.43214,0.09999)],solid=False,spine=[(0,-1,0),(0,1,0)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SectorPanelAntenna.py")
