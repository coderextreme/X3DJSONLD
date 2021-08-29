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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_04',position=(36.498489565924736,-76.48213540670625,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.498489565924736,-76.48213540670625,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA0-8.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA0-9.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA1-8.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA1-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA0-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.458645814959944,-76.51374999080511,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[18,15,25,13,20,19,21,15,15,19,18,15,18,25,15,15,15,18,18,18,19,26,17,11,10,22,19,15,16,22,22,17,21,17,18,17,17,18,22,21,19,23,21,20,18,21,14,16,16,22,17,19,20,22,21,20,19,18,17,15,13,20,16,19,21,22,17,13,20,21,15,16,18,21,19,18,17,20,19,19,20,21,21,14,19,17,20,15,17,17,17,18,19,14,20,13,21,21,24,18,18,15,20,10,20,17,22,20,19,21,19,18,16,14,17,17,19,18,17,13,18,22,25,23,18,21,20,19,19,16,23,23,23,21,18,22,12,19,21,19,18,21,22,18,18,28,22,12,18,22,20,22,21,18,19,18,26,20,24,20,16,14,17,22,23,15,23,17,17,20,17,19,23,22,16,20,17,24,21,18,16,16,20,18,20,22,15,21,21,21,20,19,15,18,21,9,15,20,20,17,22,25,26,22,19,16,24,15,14,21,16,19,21,23,18,20,19,19,22,19,15,21,20,18,15,18,19,26,21,21,26,19,21,20,23,26,20,22,22,20,17,18,20,19,15,23,22,18,22,16,19,20,16,22,21,23,20,15,21,18,22,20,18,22,24,17,20,19,18,18,15,22,24,18,14,20,19,20,21,17,20,24,17,17,22,20,22,20,23,12,23,14,22,18,17,21,26,19,18,20,24,17,21,19,18,14,23,25,18,19,18,18,17,21,28,21,18,15,13,19,13,23,19,20,16,18,20,18,19,23,22,15,20,20,22,14,18,16,24,21,21,20,19,20,19,21,23,19,18,18,18,20,22,24,15,19,21,16,28,23,19,22,24,23,23,25,20,20,24,19,23,17,23,14,18,17,20,24,12,11,11,11,11,14,21,25,28,25,26,22,12,25,21,19,23,19,18,17,20,18,16,20,21,11,11,11,11,11,11,11,11,11,11,11,11,11,18,25,16,22,15,20,21,20,13,20,25,16,11,11,11,11,11,11,11,11,11,11,11,11,11,11,16,24,22,26,21,24,22,15,18,19,25,15,11,11,11,11,11,11,11,11,11,11,11,11,11,11,18,19,23,19,19,16,14,24,22,24,20,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,20,23,20,19,18,23,20,17,16,16,18,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,20,19,24,15,20,21,22,19,19,23,24,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,16,25,19,16,16,18,15,19,19,17,18,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,20,18,23,22,19,20,20,17,20,13,13,14,11,11,11,11,11,11,11,11,11,11,11,11,11,11,23,23,16,17,19,21,23,26,20,19,24,20,11,11,11,11,11,11,11,11,11,11,11,11,11,18,21,21,22,20,19,25,21,19,20,23,27,19,11,11,11,11,11,11,11,11,11,11,11,11,16,23],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
